// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00a6a150();
// FUNCTION: ROBLOXSTUDIO 0x00a6a0c0
extern "C" __declspec(naked) void asm_00a6a0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a6a0db }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a6a150 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a6a0db: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00a6a150 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a6a4e0();
// FUNCTION: ROBLOXSTUDIO 0x00a6a0f0
extern "C" __declspec(naked) void asm_00a6a0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a6a10b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a6a4e0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a6a10b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00a6a4e0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a6a870();
// FUNCTION: ROBLOXSTUDIO 0x00a6a120
extern "C" __declspec(naked) void asm_00a6a120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a6a13b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a6a870 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a6a13b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00a6a870 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a6c4a0();
// FUNCTION: ROBLOXSTUDIO 0x00a6c100
extern "C" __declspec(naked) void asm_00a6c100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a6c123 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a6c4a0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a6c123: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1253938 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043f040();
extern "C" void fn_007ad9f0();
// FUNCTION: ROBLOXSTUDIO 0x00a6de40
extern "C" __declspec(naked) void asm_00a6de40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007ad9f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a6de40();
// FUNCTION: ROBLOXSTUDIO 0x00a6eca0
extern "C" __declspec(naked) void asm_00a6eca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a6ecce }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a6de40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a6ecce: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007b2800();
// FUNCTION: ROBLOXSTUDIO 0x00a6eea0
extern "C" __declspec(naked) void asm_00a6eea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a6eebb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_007b2800 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a6eebb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_007b2800 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00a6f2c0
extern "C" __declspec(naked) void asm_00a6f2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0x6c }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00a6fd00
extern "C" __declspec(naked) void asm_00a6fd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0x7c }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00a6fd40
extern "C" __declspec(naked) void asm_00a6fd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0x64 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a726d0();
// FUNCTION: ROBLOXSTUDIO 0x00a72690
extern "C" __declspec(naked) void asm_00a72690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_00a726d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a73560();
// FUNCTION: ROBLOXSTUDIO 0x00a73530
extern "C" __declspec(naked) void asm_00a73530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a73560 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a73670();
// FUNCTION: ROBLOXSTUDIO 0x00a73640
extern "C" __declspec(naked) void asm_00a73640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a73670 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a73780();
// FUNCTION: ROBLOXSTUDIO 0x00a73750
extern "C" __declspec(naked) void asm_00a73750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a73780 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a73860();
// FUNCTION: ROBLOXSTUDIO 0x00a73830
extern "C" __declspec(naked) void asm_00a73830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a73860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
// FUNCTION: ROBLOXSTUDIO 0x00a759e0
extern "C" __declspec(naked) void asm_00a759e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi], 0xeae308 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a73750();
// FUNCTION: ROBLOXSTUDIO 0x00a77a20
extern "C" __declspec(naked) void asm_00a77a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a77a4e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a73750 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a77a4e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a73830();
// FUNCTION: ROBLOXSTUDIO 0x00a77a60
extern "C" __declspec(naked) void asm_00a77a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a77a8e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a73830 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a77a8e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a78180();
// FUNCTION: ROBLOXSTUDIO 0x00a78120
extern "C" __declspec(naked) void asm_00a78120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a7813b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a78180 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a7813b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00a78180 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a78510();
// FUNCTION: ROBLOXSTUDIO 0x00a78150
extern "C" __declspec(naked) void asm_00a78150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a7816b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a78510 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a7816b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00a78510 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a77270();
// FUNCTION: ROBLOXSTUDIO 0x00a79dc0
extern "C" __declspec(naked) void asm_00a79dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a79dcf }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a79dd1 }
	__asm { L_00a79dcf: }
	__asm { xor edx, edx }
	__asm { L_00a79dd1: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ecx + 0x28] }
	__asm { push edx }
	__asm { call fn_00a77270 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a7ba80();
// FUNCTION: ROBLOXSTUDIO 0x00a7b580
extern "C" __declspec(naked) void asm_00a7b580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a7b5a3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a7ba80 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a7b5a3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1257a98 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a808e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a7fac0
extern "C" __declspec(naked) void asm_00a7fac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00a808e0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004115f0();
// FUNCTION: ROBLOXSTUDIO 0x00a822f0
extern "C" __declspec(naked) void asm_00a822f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x80] }
	__asm { je L_00a8231a }
	__asm { mov byte ptr [ecx + 0x80], al }
	__asm { test al, al }
	__asm { je L_00a8231a }
	__asm { push 0xa822b0 }
	__asm { push 0x13095dc }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { L_00a8231a: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a833e0
extern "C" __declspec(naked) void asm_00a833e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea edx, [ebp - 6] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 6] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007d05c0();
extern "C" void fn_007d5c50();
// FUNCTION: ROBLOXSTUDIO 0x00a83970
extern "C" __declspec(naked) void asm_00a83970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 6] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { call fn_007d5c50 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d05c0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0044a990();
// FUNCTION: ROBLOXSTUDIO 0x00a83b00
extern "C" __declspec(naked) void asm_00a83b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 6] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { push eax }
	__asm { call fn_0044a990 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a86a40();
extern "C" void fn_00a8a360();
// FUNCTION: ROBLOXSTUDIO 0x00a84360
extern "C" __declspec(naked) void asm_00a84360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00a86a40 }
	__asm { mov esi, eax }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { call fn_00a8a360 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00a8438a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00a8438a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a85a10
extern "C" __declspec(naked) void asm_00a85a10()
{
	__asm { xor eax, eax }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { mov dword ptr [ecx + 0x3c], eax }
	__asm { mov dword ptr [ecx + 0x40], eax }
	__asm { mov dword ptr [ecx], 0xeb03f4 }
	__asm { mov dword ptr [ecx + 0x44], eax }
	__asm { mov dword ptr [ecx + 0x48], eax }
	__asm { mov dword ptr [ecx + 0x4c], eax }
	__asm { mov dword ptr [ecx + 0x58], eax }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" void fn_0068b160();
extern "C" void fn_00a8a360();
// FUNCTION: ROBLOXSTUDIO 0x00a86b00
extern "C" __declspec(naked) void asm_00a86b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { call fn_00a8a360 }
	__asm { call fn_00a8a360 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_0068b160 }
	__asm { call fn_00a8a360 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00814560();
extern "C" void fn_00a84720();
// FUNCTION: ROBLOXSTUDIO 0x00a8a780
extern "C" __declspec(naked) void asm_00a8a780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00a84720 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a8a830();
// FUNCTION: ROBLOXSTUDIO 0x00a8a7f0
extern "C" __declspec(naked) void asm_00a8a7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a8a813 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a8a830 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a8a813: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x125b638 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309f00[];
// FUNCTION: ROBLOXSTUDIO 0x00a95990
extern "C" __declspec(naked) void asm_00a95990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a959a1 }
	__asm { lea edx, [ecx + 0x1c] }
	__asm { jmp L_00a959a3 }
	__asm { L_00a959a1: }
	__asm { xor edx, edx }
	__asm { L_00a959a3: }
	__asm { mov ecx, dword ptr [g_01309f00] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea esi, [ebp - 1] }
	__asm { push esi }
	__asm { push edx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_00bef550();
// FUNCTION: ROBLOXSTUDIO 0x00a98170
extern "C" __declspec(naked) void asm_00a98170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x2c] }
	__asm { test esi, esi }
	__asm { je L_00a98196 }
	__asm { mov ecx, esi }
	__asm { call fn_00bef550 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esi, 0x18 }
	__asm { push esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a98196: }
	__asm { lea esi, [ecx + 0x6c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a98660
extern "C" __declspec(naked) void asm_00a98660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00a9866f }
	__asm { add eax, -0x1c }
	__asm { jmp L_00a98671 }
	__asm { L_00a9866f: }
	__asm { xor eax, eax }
	__asm { L_00a98671: }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [edx + eax] }
	__asm { add edx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a99f40();
// FUNCTION: ROBLOXSTUDIO 0x00a99f10
extern "C" __declspec(naked) void asm_00a99f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a99f40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a9a040();
// FUNCTION: ROBLOXSTUDIO 0x00a9a010
extern "C" __declspec(naked) void asm_00a9a010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a9a040 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a9a140();
// FUNCTION: ROBLOXSTUDIO 0x00a9a110
extern "C" __declspec(naked) void asm_00a9a110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a9a140 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a9a220();
// FUNCTION: ROBLOXSTUDIO 0x00a9a1f0
extern "C" __declspec(naked) void asm_00a9a1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a9a220 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a9a110();
// FUNCTION: ROBLOXSTUDIO 0x00a9b5c0
extern "C" __declspec(naked) void asm_00a9b5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a9b5ee }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a9a110 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a9b5ee: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a9a1f0();
// FUNCTION: ROBLOXSTUDIO 0x00a9b600
extern "C" __declspec(naked) void asm_00a9b600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a9b62e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a9a1f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a9b62e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a9bbc0();
// FUNCTION: ROBLOXSTUDIO 0x00a9bb60
extern "C" __declspec(naked) void asm_00a9bb60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a9bb7b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a9bbc0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a9bb7b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00a9bbc0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a9bf50();
// FUNCTION: ROBLOXSTUDIO 0x00a9bb90
extern "C" __declspec(naked) void asm_00a9bb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a9bbab }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a9bf50 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a9bbab: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00a9bf50 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a9d050();
// FUNCTION: ROBLOXSTUDIO 0x00a9d6e0
extern "C" __declspec(naked) void asm_00a9d6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test eax, eax }
	__asm { je L_00a9d6fd }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { add eax, 0x1c }
	__asm { push eax }
	__asm { call fn_00a9d050 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a9d6fd: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { call fn_00a9d050 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a9d0e0();
// FUNCTION: ROBLOXSTUDIO 0x00a9d710
extern "C" __declspec(naked) void asm_00a9d710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test eax, eax }
	__asm { je L_00a9d71f }
	__asm { add eax, 0x1c }
	__asm { jmp L_00a9d721 }
	__asm { L_00a9d71f: }
	__asm { xor eax, eax }
	__asm { L_00a9d721: }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00a9d0e0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a9e2a0();
// FUNCTION: ROBLOXSTUDIO 0x00a9e270
extern "C" __declspec(naked) void asm_00a9e270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a9e2a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a9e3a0();
// FUNCTION: ROBLOXSTUDIO 0x00a9e370
extern "C" __declspec(naked) void asm_00a9e370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a9e3a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a9e4a0();
// FUNCTION: ROBLOXSTUDIO 0x00a9e470
extern "C" __declspec(naked) void asm_00a9e470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a9e4a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a9e580();
// FUNCTION: ROBLOXSTUDIO 0x00a9e550
extern "C" __declspec(naked) void asm_00a9e550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a9e580 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a9e470();
// FUNCTION: ROBLOXSTUDIO 0x00a9f930
extern "C" __declspec(naked) void asm_00a9f930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a9f95e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a9e470 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a9f95e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a9e550();
// FUNCTION: ROBLOXSTUDIO 0x00a9f970
extern "C" __declspec(naked) void asm_00a9f970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a9f99e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a9e550 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a9f99e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a9ff40();
// FUNCTION: ROBLOXSTUDIO 0x00a9fee0
extern "C" __declspec(naked) void asm_00a9fee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a9fefb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a9ff40 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a9fefb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00a9ff40 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aa02d0();
// FUNCTION: ROBLOXSTUDIO 0x00a9ff10
extern "C" __declspec(naked) void asm_00a9ff10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a9ff2b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00aa02d0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a9ff2b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00aa02d0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00aa07d0
extern "C" __declspec(naked) void asm_00aa07d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_00aa07f7 }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub esp, 8 }
	__asm { add ecx, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax] }
	__asm { L_00aa07f7: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00aa08f0
extern "C" __declspec(naked) void asm_00aa08f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_00aa0901 }
	__asm { add eax, -0x1c }
	__asm { jmp L_00aa0903 }
	__asm { L_00aa0901: }
	__asm { xor eax, eax }
	__asm { L_00aa0903: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007cfca0();
extern "C" void fn_007d6030();
// FUNCTION: ROBLOXSTUDIO 0x00aa0920
extern "C" __declspec(naked) void asm_00aa0920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { call fn_007d6030 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007cfca0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a9e780();
// FUNCTION: ROBLOXSTUDIO 0x00aa1bc0
extern "C" __declspec(naked) void asm_00aa1bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00a9e780 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00aa1570();
// FUNCTION: ROBLOXSTUDIO 0x00aa1bf0
extern "C" __declspec(naked) void asm_00aa1bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test eax, eax }
	__asm { je L_00aa1c0d }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { add eax, 0x1c }
	__asm { push eax }
	__asm { call fn_00aa1570 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00aa1c0d: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { call fn_00aa1570 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aa1600();
// FUNCTION: ROBLOXSTUDIO 0x00aa1c20
extern "C" __declspec(naked) void asm_00aa1c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test eax, eax }
	__asm { je L_00aa1c2f }
	__asm { add eax, 0x1c }
	__asm { jmp L_00aa1c31 }
	__asm { L_00aa1c2f: }
	__asm { xor eax, eax }
	__asm { L_00aa1c31: }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { sub esp, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00aa1600 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00aa2d20();
// FUNCTION: ROBLOXSTUDIO 0x00aa2df0
extern "C" __declspec(naked) void asm_00aa2df0()
{
	__asm { push esi }
	__asm { push 0xeb6bd8 }
	__asm { mov esi, ecx }
	__asm { call fn_00aa2d20 }
	__asm { mov dword ptr [esi], 0xeb6cd4 }
	__asm { mov dword ptr [esi + 4], 0xeb6d5c }
	__asm { mov dword ptr [esi + 0x18], 0xeb6d64 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb6d70 }
	__asm { mov dword ptr [esi + 0x64], 0xeb6d80 }
	__asm { mov dword ptr [esi + 0x68], 0xeb6d88 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0043f040();
extern "C" void fn_00aa42a0();
// FUNCTION: ROBLOXSTUDIO 0x00aa4270
extern "C" __declspec(naked) void asm_00aa4270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00aa42a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00aa4490();
// FUNCTION: ROBLOXSTUDIO 0x00aa4460
extern "C" __declspec(naked) void asm_00aa4460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00aa4490 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b2800();
// FUNCTION: ROBLOXSTUDIO 0x00aa7720
extern "C" __declspec(naked) void asm_00aa7720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_00aa7732 }
	__asm { add edx, -0x1c }
	__asm { jmp L_00aa7734 }
	__asm { L_00aa7732: }
	__asm { xor edx, edx }
	__asm { L_00aa7734: }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call fn_007b2800 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aa7780();
// FUNCTION: ROBLOXSTUDIO 0x00aa7750
extern "C" __declspec(naked) void asm_00aa7750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_00aa7762 }
	__asm { add edx, -0x1c }
	__asm { jmp L_00aa7764 }
	__asm { L_00aa7762: }
	__asm { xor edx, edx }
	__asm { L_00aa7764: }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call fn_00aa7780 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00aa87f0
extern "C" __declspec(naked) void asm_00aa87f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00aa8802 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00aa8804 }
	__asm { L_00aa8802: }
	__asm { xor edx, edx }
	__asm { L_00aa8804: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00aa5e80();
// FUNCTION: ROBLOXSTUDIO 0x00aa9d70
extern "C" __declspec(naked) void asm_00aa9d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x220] }
	__asm { cmp edi, eax }
	__asm { je L_00aa9da8 }
	__asm { push 0x130b1e8 }
	__asm { mov dword ptr [esi + 0x220], eax }
	__asm { call fn_007b4f50 }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x220] }
	__asm { lea ecx, [esi + 0x278] }
	__asm { call fn_00aa5e80 }
	__asm { L_00aa9da8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00aacb40
extern "C" __declspec(naked) void asm_00aacb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00aacb53 }
	__asm { add esi, -0x1c }
	__asm { jmp L_00aacb55 }
	__asm { L_00aacb53: }
	__asm { xor esi, esi }
	__asm { L_00aacb55: }
	__asm { mov edx, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [edx + ecx] }
	__asm { add eax, dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + esi + 0x68] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00aacb70
extern "C" __declspec(naked) void asm_00aacb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00aacb83 }
	__asm { add esi, -0x1c }
	__asm { jmp L_00aacb85 }
	__asm { L_00aacb83: }
	__asm { xor esi, esi }
	__asm { L_00aacb85: }
	__asm { mov edx, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [edx + ecx] }
	__asm { add eax, dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { mov al, byte ptr [eax + esi + 0x68] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00aacff0
extern "C" __declspec(naked) void asm_00aacff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00aad002 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00aad004 }
	__asm { L_00aad002: }
	__asm { xor edx, edx }
	__asm { L_00aad004: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aaeec0
extern "C" __declspec(naked) void asm_00aaeec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x30 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00aaeed7 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00aaeed7: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_00aaeee4 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_00aaeee7 }
	__asm { L_00aaeee4: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00aaeee7: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00aaeef2 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00aaeef2: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00aaf720();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00aaf910
extern "C" __declspec(naked) void asm_00aaf910()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00aaf948 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [esi] }
	__asm { call fn_00aaf720 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00aaf948: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ab3720();
// FUNCTION: ROBLOXSTUDIO 0x00ab36f0
extern "C" __declspec(naked) void asm_00ab36f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ab3720 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ab3910();
// FUNCTION: ROBLOXSTUDIO 0x00ab38e0
extern "C" __declspec(naked) void asm_00ab38e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ab3910 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ab3a20();
// FUNCTION: ROBLOXSTUDIO 0x00ab39f0
extern "C" __declspec(naked) void asm_00ab39f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ab3a20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ab3b00();
// FUNCTION: ROBLOXSTUDIO 0x00ab3ad0
extern "C" __declspec(naked) void asm_00ab3ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ab3b00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ab3be0();
// FUNCTION: ROBLOXSTUDIO 0x00ab3bb0
extern "C" __declspec(naked) void asm_00ab3bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ab3be0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ab3cc0();
// FUNCTION: ROBLOXSTUDIO 0x00ab3c90
extern "C" __declspec(naked) void asm_00ab3c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ab3cc0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ab3da0();
// FUNCTION: ROBLOXSTUDIO 0x00ab3d70
extern "C" __declspec(naked) void asm_00ab3d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ab3da0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ab3e80();
// FUNCTION: ROBLOXSTUDIO 0x00ab3e50
extern "C" __declspec(naked) void asm_00ab3e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ab3e80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ab3f60();
// FUNCTION: ROBLOXSTUDIO 0x00ab3f30
extern "C" __declspec(naked) void asm_00ab3f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ab3f60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ab39f0();
// FUNCTION: ROBLOXSTUDIO 0x00abb860
extern "C" __declspec(naked) void asm_00abb860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abb88e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ab39f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00abb88e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009a6910();
// FUNCTION: ROBLOXSTUDIO 0x00abb8a0
extern "C" __declspec(naked) void asm_00abb8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abb8ce }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009a6910 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00abb8ce: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009e3860();
// FUNCTION: ROBLOXSTUDIO 0x00abb8e0
extern "C" __declspec(naked) void asm_00abb8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abb90e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009e3860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00abb90e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ab3ad0();
// FUNCTION: ROBLOXSTUDIO 0x00abb920
extern "C" __declspec(naked) void asm_00abb920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abb94e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ab3ad0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00abb94e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ab3bb0();
// FUNCTION: ROBLOXSTUDIO 0x00abb960
extern "C" __declspec(naked) void asm_00abb960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abb98e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ab3bb0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00abb98e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ab3c90();
// FUNCTION: ROBLOXSTUDIO 0x00abb9a0
extern "C" __declspec(naked) void asm_00abb9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abb9ce }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ab3c90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00abb9ce: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ab3d70();
// FUNCTION: ROBLOXSTUDIO 0x00abb9e0
extern "C" __declspec(naked) void asm_00abb9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abba0e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ab3d70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00abba0e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ab3e50();
// FUNCTION: ROBLOXSTUDIO 0x00abba20
extern "C" __declspec(naked) void asm_00abba20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abba4e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ab3e50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00abba4e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ab3f30();
// FUNCTION: ROBLOXSTUDIO 0x00abba60
extern "C" __declspec(naked) void asm_00abba60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abba8e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ab3f30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00abba8e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00abd420();
// FUNCTION: ROBLOXSTUDIO 0x00abd300
extern "C" __declspec(naked) void asm_00abd300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00abd31b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00abd420 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00abd31b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00abd420 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00abdb40();
// FUNCTION: ROBLOXSTUDIO 0x00abd330
extern "C" __declspec(naked) void asm_00abd330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00abd34b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00abdb40 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00abd34b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00abdb40 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00abded0();
// FUNCTION: ROBLOXSTUDIO 0x00abd360
extern "C" __declspec(naked) void asm_00abd360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00abd37b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00abded0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00abd37b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00abded0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00abe260();
// FUNCTION: ROBLOXSTUDIO 0x00abd390
extern "C" __declspec(naked) void asm_00abd390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00abd3ab }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00abe260 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00abd3ab: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00abe260 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00abe5f0();
// FUNCTION: ROBLOXSTUDIO 0x00abd3c0
extern "C" __declspec(naked) void asm_00abd3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00abd3db }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00abe5f0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00abd3db: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00abe5f0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00abe980();
// FUNCTION: ROBLOXSTUDIO 0x00abd3f0
extern "C" __declspec(naked) void asm_00abd3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00abd40b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00abe980 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00abd40b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00abe980 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ab1b90();
// FUNCTION: ROBLOXSTUDIO 0x00ac2360
extern "C" __declspec(naked) void asm_00ac2360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_00ab1b90 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac39f0();
// FUNCTION: ROBLOXSTUDIO 0x00ac2ce0
extern "C" __declspec(naked) void asm_00ac2ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2d03 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ac39f0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ac2d03: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1268278 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3b30();
// FUNCTION: ROBLOXSTUDIO 0x00ac2d50
extern "C" __declspec(naked) void asm_00ac2d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2d73 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ac3b30 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ac2d73: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12689a8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3c90();
// FUNCTION: ROBLOXSTUDIO 0x00ac2dc0
extern "C" __declspec(naked) void asm_00ac2dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac2de3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ac3c90 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ac2de3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1268060 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3dd0();
// FUNCTION: ROBLOXSTUDIO 0x00ac2fe0
extern "C" __declspec(naked) void asm_00ac2fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac3003 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ac3dd0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ac3003: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1267948 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ac3f20();
// FUNCTION: ROBLOXSTUDIO 0x00ac3020
extern "C" __declspec(naked) void asm_00ac3020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ac3043 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ac3f20 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ac3043: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12673a8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006f64a0();
// FUNCTION: ROBLOXSTUDIO 0x00ac8590
extern "C" __declspec(naked) void asm_00ac8590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_00ac85a1 }
	__asm { add eax, -0x1c }
	__asm { jmp L_00ac85a3 }
	__asm { L_00ac85a1: }
	__asm { xor eax, eax }
	__asm { L_00ac85a3: }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006f64a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007d0480();
extern "C" void fn_007d5b70();
// FUNCTION: ROBLOXSTUDIO 0x00ac85c0
extern "C" __declspec(naked) void asm_00ac85c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { call fn_007d5b70 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d0480 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00873b40();
// FUNCTION: ROBLOXSTUDIO 0x00ac85f0
extern "C" __declspec(naked) void asm_00ac85f0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xf8] }
	__asm { cmp esi, dword ptr [edi + 0xfc] }
	__asm { je L_00ac8618 }
	__asm { L_00ac8602: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00873b40 }
	__asm { test al, al }
	__asm { jne L_00ac861d }
	__asm { add esi, 4 }
	__asm { cmp esi, dword ptr [edi + 0xfc] }
	__asm { jne L_00ac8602 }
	__asm { L_00ac8618: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00ac861d: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ac8950
extern "C" __declspec(naked) void asm_00ac8950()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { je L_00ac8975 }
	__asm { mov edx, dword ptr [esi - 0xdc] }
	__asm { lea ecx, [esi - 0xdc] }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x90] }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { L_00ac8975: }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_008adcb0();
// FUNCTION: ROBLOXSTUDIO 0x00ac8bb0
extern "C" __declspec(naked) void asm_00ac8bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { push eax }
	__asm { call fn_008adcb0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [esi + 0x90] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044a8a0();
// FUNCTION: ROBLOXSTUDIO 0x00ac8be0
extern "C" __declspec(naked) void asm_00ac8be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_0044a8a0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ace8d0();
// FUNCTION: ROBLOXSTUDIO 0x00ace8a0
extern "C" __declspec(naked) void asm_00ace8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ace8d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ace9e0();
// FUNCTION: ROBLOXSTUDIO 0x00ace9b0
extern "C" __declspec(naked) void asm_00ace9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ace9e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00aceaf0();
// FUNCTION: ROBLOXSTUDIO 0x00aceac0
extern "C" __declspec(naked) void asm_00aceac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00aceaf0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00acebd0();
// FUNCTION: ROBLOXSTUDIO 0x00aceba0
extern "C" __declspec(naked) void asm_00aceba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00acebd0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ad1340
extern "C" __declspec(naked) void asm_00ad1340()
{
	__asm { push esi }
	__asm { push 0x34 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00ad1359 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ad1359: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_00ad1368 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00ad1368: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00ad1373 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00ad1373: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00ad13c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ad18c0
extern "C" __declspec(naked) void asm_00ad18c0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00ad18f8 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [esi] }
	__asm { call fn_00ad13c0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00ad18f8: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00aceac0();
// FUNCTION: ROBLOXSTUDIO 0x00ad1ec0
extern "C" __declspec(naked) void asm_00ad1ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ad1eee }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00aceac0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ad1eee: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00aceba0();
// FUNCTION: ROBLOXSTUDIO 0x00ad1f00
extern "C" __declspec(naked) void asm_00ad1f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ad1f2e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00aceba0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ad1f2e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ad2330();
// FUNCTION: ROBLOXSTUDIO 0x00ad22d0
extern "C" __declspec(naked) void asm_00ad22d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ad22eb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ad2330 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ad22eb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00ad2330 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ad26c0();
// FUNCTION: ROBLOXSTUDIO 0x00ad2300
extern "C" __declspec(naked) void asm_00ad2300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ad231b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ad26c0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ad231b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00ad26c0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009e3890();
// FUNCTION: ROBLOXSTUDIO 0x00ad68e0
extern "C" __declspec(naked) void asm_00ad68e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ad690e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009e3890 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ad690e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0081d250();
// FUNCTION: ROBLOXSTUDIO 0x00ad6a30
extern "C" __declspec(naked) void asm_00ad6a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ad6a4b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0081d250 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ad6a4b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_0081d250 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ad8ad0
extern "C" __declspec(naked) void asm_00ad8ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00ad8aee }
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { lea esi, [eax - 0x1c] }
	__asm { lea ecx, [esi + ecx] }
	__asm { call edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ad8aee: }
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { xor esi, esi }
	__asm { lea ecx, [esi + ecx] }
	__asm { call edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00adc150();
// FUNCTION: ROBLOXSTUDIO 0x00adc120
extern "C" __declspec(naked) void asm_00adc120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00adc150 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00adc120();
// FUNCTION: ROBLOXSTUDIO 0x00ae0030
extern "C" __declspec(naked) void asm_00ae0030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ae005e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00adc120 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ae005e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ae0320();
// FUNCTION: ROBLOXSTUDIO 0x00ae02f0
extern "C" __declspec(naked) void asm_00ae02f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ae030b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ae0320 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ae030b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00ae0320 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00adb180();
// FUNCTION: ROBLOXSTUDIO 0x00ae1c80
extern "C" __declspec(naked) void asm_00ae1c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_00adb180 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00adb2a0();
// FUNCTION: ROBLOXSTUDIO 0x00ae1cc0
extern "C" __declspec(naked) void asm_00ae1cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_00adb2a0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ae1d00
extern "C" __declspec(naked) void asm_00ae1d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ae1f10();
// FUNCTION: ROBLOXSTUDIO 0x00ae1d30
extern "C" __declspec(naked) void asm_00ae1d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ae1d53 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ae1f10 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ae1d53: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1274b70 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ae2050();
// FUNCTION: ROBLOXSTUDIO 0x00ae1d70
extern "C" __declspec(naked) void asm_00ae1d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ae1d93 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ae2050 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ae1d93: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12748b8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ae2170();
// FUNCTION: ROBLOXSTUDIO 0x00ae1db0
extern "C" __declspec(naked) void asm_00ae1db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00ae1dd3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ae2170 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ae1dd3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1274600 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ae4770
extern "C" __declspec(naked) void asm_00ae4770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x374] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0x378] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edx, dword ptr [ecx + 0x37c] }
	__asm { mov ecx, dword ptr [ecx + 0x380] }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ae8340();
// FUNCTION: ROBLOXSTUDIO 0x00ae8310
extern "C" __declspec(naked) void asm_00ae8310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ae8340 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ae8450();
// FUNCTION: ROBLOXSTUDIO 0x00ae8420
extern "C" __declspec(naked) void asm_00ae8420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ae8450 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ae8530();
// FUNCTION: ROBLOXSTUDIO 0x00ae8500
extern "C" __declspec(naked) void asm_00ae8500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ae8530 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00ae8610();
// FUNCTION: ROBLOXSTUDIO 0x00ae85e0
extern "C" __declspec(naked) void asm_00ae85e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ae8610 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ae8420();
// FUNCTION: ROBLOXSTUDIO 0x00ae9c30
extern "C" __declspec(naked) void asm_00ae9c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ae9c5e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ae8420 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ae9c5e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ae8500();
// FUNCTION: ROBLOXSTUDIO 0x00ae9c70
extern "C" __declspec(naked) void asm_00ae9c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ae9c9e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ae8500 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ae9c9e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ae85e0();
// FUNCTION: ROBLOXSTUDIO 0x00ae9cb0
extern "C" __declspec(naked) void asm_00ae9cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ae9cde }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00ae85e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ae9cde: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00aea2e0();
// FUNCTION: ROBLOXSTUDIO 0x00aea250
extern "C" __declspec(naked) void asm_00aea250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00aea26b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00aea2e0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00aea26b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00aea2e0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aea670();
// FUNCTION: ROBLOXSTUDIO 0x00aea280
extern "C" __declspec(naked) void asm_00aea280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00aea29b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00aea670 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00aea29b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00aea670 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aeaa00();
// FUNCTION: ROBLOXSTUDIO 0x00aea2b0
extern "C" __declspec(naked) void asm_00aea2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00aea2cb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00aeaa00 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00aea2cb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00aeaa00 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aec6f0();
// FUNCTION: ROBLOXSTUDIO 0x00aee5b0
extern "C" __declspec(naked) void asm_00aee5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_00aec6f0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aee670();
// FUNCTION: ROBLOXSTUDIO 0x00aee5f0
extern "C" __declspec(naked) void asm_00aee5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00aee613 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00aee670 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aee613: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1277ea0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aee7d0();
// FUNCTION: ROBLOXSTUDIO 0x00aee630
extern "C" __declspec(naked) void asm_00aee630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00aee653 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00aee7d0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00aee653: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1277c70 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038074[];
extern "C" void fn_00af0c40();
// FUNCTION: ROBLOXSTUDIO 0x00af0e80
extern "C" __declspec(naked) void asm_00af0e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [g_01038074] }
	__asm { sub esp, 8 }
	__asm { fst dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00af0c40 }
	__asm { add esp, 0x18 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038064[];
extern "C" void fn_00af0c40();
// FUNCTION: ROBLOXSTUDIO 0x00af0eb0
extern "C" __declspec(naked) void asm_00af0eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [g_01038064] }
	__asm { sub esp, 8 }
	__asm { fst dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00af0c40 }
	__asm { add esp, 0x18 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a0fb50();
// FUNCTION: ROBLOXSTUDIO 0x00af1390
extern "C" __declspec(naked) void asm_00af1390()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00af13aa }
	__asm { mov ecx, dword ptr [eax + 0x108] }
	__asm { test ecx, ecx }
	__asm { je L_00af13aa }
	__asm { call fn_00a0fb50 }
	__asm { L_00af13aa: }
	__asm { test esi, esi }
	__asm { je L_00af13be }
	__asm { mov ecx, dword ptr [esi + 0x108] }
	__asm { test ecx, ecx }
	__asm { je L_00af13be }
	__asm { pop esi }
	__asm { jmp fn_00a0fb50 }
	__asm { L_00af13be: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00af13c0
extern "C" __declspec(naked) void asm_00af13c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00af13cf }
	__asm { lea edx, [eax - 8] }
	__asm { jmp L_00af13d1 }
	__asm { L_00af13cf: }
	__asm { xor edx, edx }
	__asm { L_00af13d1: }
	__asm { mov eax, dword ptr [ecx - 0x10] }
	__asm { cmp edx, eax }
	__asm { jne L_00af13db }
	__asm { mov eax, dword ptr [ecx - 0xc] }
	__asm { L_00af13db: }
	__asm { test eax, eax }
	__asm { je L_00af13e6 }
	__asm { add eax, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af13e6: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
}
