// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0092c700();
// FUNCTION: ROBLOXSTUDIO 0x0092db50
extern "C" __declspec(naked) void asm_0092db50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0092c700 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0092fdc0();
// FUNCTION: ROBLOXSTUDIO 0x0092dc50
extern "C" __declspec(naked) void asm_0092dc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { fild dword ptr [ebp + 8] }
	__asm { push 0x1012c70 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push ecx }
	__asm { call fn_0092fdc0 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0092fdc0();
// FUNCTION: ROBLOXSTUDIO 0x0092dcc0
extern "C" __declspec(naked) void asm_0092dcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fld dword ptr [eax] }
	__asm { fst qword ptr [esp] }
	__asm { push 0xe60768 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push ecx }
	__asm { call fn_0092fdc0 }
	__asm { add esp, 0x18 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0092fdc0();
// FUNCTION: ROBLOXSTUDIO 0x0092dcf0
extern "C" __declspec(naked) void asm_0092dcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fld qword ptr [eax] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe60768 }
	__asm { fld qword ptr [eax] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push ecx }
	__asm { call fn_0092fdc0 }
	__asm { add esp, 0x18 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009316f0
extern "C" __declspec(naked) void asm_009316f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd362bd }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

// FUNCTION: ROBLOXSTUDIO 0x00931be0
extern "C" __declspec(naked) void asm_00931be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36325 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_00945010();
// FUNCTION: ROBLOXSTUDIO 0x00944fe0
extern "C" __declspec(naked) void asm_00944fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00945010 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009452b0();
// FUNCTION: ROBLOXSTUDIO 0x00945280
extern "C" __declspec(naked) void asm_00945280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009452b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009498e0();
// FUNCTION: ROBLOXSTUDIO 0x0094afa0
extern "C" __declspec(naked) void asm_0094afa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009498e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094afa0();
// FUNCTION: ROBLOXSTUDIO 0x0094bff0
extern "C" __declspec(naked) void asm_0094bff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x94be50 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0094afa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00958d90();
// FUNCTION: ROBLOXSTUDIO 0x0095a1e0
extern "C" __declspec(naked) void asm_0095a1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00958d90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00958e40();
// FUNCTION: ROBLOXSTUDIO 0x0095a210
extern "C" __declspec(naked) void asm_0095a210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00958e40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb550();
extern "C" void fn_00960bb0();
// FUNCTION: ROBLOXSTUDIO 0x00960b90
extern "C" __declspec(naked) void asm_00960b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_007cb550 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00960bb0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00969710
extern "C" __declspec(naked) void asm_00969710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 4] }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp eax }
}

extern "C" void fn_00890c90();
extern "C" void fn_00a24380();
// FUNCTION: ROBLOXSTUDIO 0x0097f7e0
extern "C" __declspec(naked) void asm_0097f7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00890c90 }
	__asm { mov ecx, esi }
	__asm { call fn_00a24380 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xec] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
// FUNCTION: ROBLOXSTUDIO 0x00984750
extern "C" __declspec(naked) void asm_00984750()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_005db6e0();
extern "C" void fn_005db7f0();
// FUNCTION: ROBLOXSTUDIO 0x00985250
extern "C" __declspec(naked) void asm_00985250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_005db7f0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { call fn_005db6e0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00986a30();
// FUNCTION: ROBLOXSTUDIO 0x00986a00
extern "C" __declspec(naked) void asm_00986a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00986a30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006dea00();
// FUNCTION: ROBLOXSTUDIO 0x0099c700
extern "C" __declspec(naked) void asm_0099c700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_006dea00 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0099cd20();
extern "C" void fn_0099d0e0();
// FUNCTION: ROBLOXSTUDIO 0x0099d250
extern "C" __declspec(naked) void asm_0099d250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { lea ecx, [esi + 0xb8] }
	__asm { call fn_0099d0e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0099cd20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0099de30
extern "C" __declspec(naked) void asm_0099de30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007b4a10();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x009a13a0
extern "C" __declspec(naked) void asm_009a13a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_007b4a10 }
	__asm { lea ecx, [esi + 0x6c] }
	__asm { mov dword ptr [esi + 0xa0], 0 }
	__asm { call fn_00d09250 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b15430();
// FUNCTION: ROBLOXSTUDIO 0x009a2050
extern "C" __declspec(naked) void asm_009a2050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 8], 0x99fae0 }
	__asm { call fn_00b15430 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009a5590();
// FUNCTION: ROBLOXSTUDIO 0x009a62b0
extern "C" __declspec(naked) void asm_009a62b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009a5590 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009a4b70();
// FUNCTION: ROBLOXSTUDIO 0x009b0010
extern "C" __declspec(naked) void asm_009b0010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_009a4b70 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009b6120
extern "C" __declspec(naked) void asm_009b6120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x1c4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0x1c8] }
	__asm { mov ecx, dword ptr [ecx + 0x1cc] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009c4150();
// FUNCTION: ROBLOXSTUDIO 0x009c4620
extern "C" __declspec(naked) void asm_009c4620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009c4150 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009c6d50();
// FUNCTION: ROBLOXSTUDIO 0x009c7600
extern "C" __declspec(naked) void asm_009c7600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { add ecx, 0x10 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_009c6d50 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x009d5180
extern "C" __declspec(naked) void asm_009d5180()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x20] }
	__asm { mov edx, dword ptr [edi + 0x18] }
	__asm { mov eax, dword ptr [esi + 0x12c] }
	__asm { lea ecx, [esi + 0x12c] }
	__asm { mov eax, dword ptr [edx + eax] }
	__asm { add eax, dword ptr [edi + 0x14] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x009d87f0
extern "C" __declspec(naked) void asm_009d87f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x1d0] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0x1d4] }
	__asm { mov ecx, dword ptr [ecx + 0x1d8] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009e1410();
// FUNCTION: ROBLOXSTUDIO 0x009ed330
extern "C" __declspec(naked) void asm_009ed330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { call fn_009e1410 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009e15d0();
// FUNCTION: ROBLOXSTUDIO 0x009ed360
extern "C" __declspec(naked) void asm_009ed360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { call fn_009e15d0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007beab0();
extern "C" void fn_009f4d80();
// FUNCTION: ROBLOXSTUDIO 0x009f4d50
extern "C" __declspec(naked) void asm_009f4d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_007beab0 }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_009f4d80 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009f6420
extern "C" __declspec(naked) void asm_009f6420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fabs }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fabs }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fabs }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { pop ebp }
	__asm { ret }
}
