// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00402a10
extern "C" __declspec(naked) void asm_00402a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
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
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00402ec0
extern "C" __declspec(naked) void asm_00402ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push -1 }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x00403660
extern "C" __declspec(naked) void asm_00403660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { je L_00403687 }
	__asm { cmp eax, -1 }
	__asm { ja L_00403681 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00403687 }
	__asm { L_00403681: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00403687: }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00408cf0();
// FUNCTION: ROBLOXSTUDIO 0x004044c0
extern "C" __declspec(naked) void asm_004044c0()
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
	__asm { call fn_00408cf0 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004063f0
extern "C" __declspec(naked) void asm_004063f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00406417 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00406417: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004124c0();
extern "C" void fn_007d5390();
// FUNCTION: ROBLOXSTUDIO 0x00407850
extern "C" __declspec(naked) void asm_00407850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_007d5390 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004124c0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x004078a0
extern "C" __declspec(naked) void asm_004078a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x004078d0
extern "C" __declspec(naked) void asm_004078d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov esi, eax }
	__asm { call dword ptr [edx + 8] }
	__asm { xor ecx, ecx }
	__asm { cmp esi, eax }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x004079d0
extern "C" __declspec(naked) void asm_004079d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp edx, dword ptr [eax + 0x28] }
	__asm { jae L_004079fc }
	__asm { mov eax, dword ptr [eax + 0x70] }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004079fc: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004081e0();
// FUNCTION: ROBLOXSTUDIO 0x00407a10
extern "C" __declspec(naked) void asm_00407a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004081e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00792b60();
// FUNCTION: ROBLOXSTUDIO 0x00407d00
extern "C" __declspec(naked) void asm_00407d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov edi, eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792b60 }
	__asm { mov dword ptr [esi + 0x18], edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x14], 5 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00408320();
extern "C" void fn_0040de60();
// FUNCTION: ROBLOXSTUDIO 0x00408800
extern "C" __declspec(naked) void asm_00408800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_0040de60 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0040d140();
extern "C" void fn_007e93e0();
// FUNCTION: ROBLOXSTUDIO 0x00408830
extern "C" __declspec(naked) void asm_00408830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00408849 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_0040884b }
	__asm { L_00408849: }
	__asm { xor bl, bl }
	__asm { L_0040884b: }
	__asm { call fn_007e93e0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0040d140 }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004097c0();
// FUNCTION: ROBLOXSTUDIO 0x004088a0
extern "C" __declspec(naked) void asm_004088a0()
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
	__asm { call fn_004097c0 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004092b0
extern "C" __declspec(naked) void asm_004092b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { sub edx, dword ptr [ecx] }
	__asm { mov eax, 0x3fffffff }
	__asm { sar edx, 2 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 1 }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { jae L_004092d9 }
	__asm { xor edx, edx }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { cmovb edx, dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004092d9: }
	__asm { add edx, ecx }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { cmovb edx, dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x004092f0
extern "C" __declspec(naked) void asm_004092f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { je L_0040931c }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_00409316 }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0040931c }
	__asm { L_00409316: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0040931c: }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x00409860
extern "C" __declspec(naked) void asm_00409860()
{
	__asm { push 0x18 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00409875 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_00409875: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_00409880 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00409880: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00409889 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00409889: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040b9a0
extern "C" __declspec(naked) void asm_0040b9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe33a28 }
	__asm { je L_0040b9c8 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0040b9c8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040b9d0
extern "C" __declspec(naked) void asm_0040b9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe33a28 }
	__asm { je L_0040b9f8 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0040b9f8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11078[];
// FUNCTION: ROBLOXSTUDIO 0x0040c270
extern "C" __declspec(naked) void asm_0040c270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0040c287 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_0040c289 }
	__asm { L_0040c287: }
	__asm { xor edx, edx }
	__asm { L_0040c289: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { call dword ptr [g_00e11078] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1230c[];
// FUNCTION: ROBLOXSTUDIO 0x0040c3f0
extern "C" __declspec(naked) void asm_0040c3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0040c407 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_0040c409 }
	__asm { L_0040c407: }
	__asm { xor edx, edx }
	__asm { L_0040c409: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { call dword ptr [g_00e1230c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0040c490
extern "C" __declspec(naked) void asm_0040c490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0040c49f }
	__asm { add eax, -0x1c }
	__asm { jmp L_0040c4a1 }
	__asm { L_0040c49f: }
	__asm { xor eax, eax }
	__asm { L_0040c4a1: }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040d520();
// FUNCTION: ROBLOXSTUDIO 0x0040d250
extern "C" __declspec(naked) void asm_0040d250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0040d520 }
	__asm { mov edx, eax }
	__asm { lea esi, [edx + 0x10] }
	__asm { mov word ptr [edx + 0xc], 0 }
	__asm { test esi, esi }
	__asm { je L_0040d277 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, edx }
	__asm { L_0040d277: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x0040d520
extern "C" __declspec(naked) void asm_0040d520()
{
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_0040d53a }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0040d53a: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_0040d549 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0040d549: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0040d554 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0040d554: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0040d560
extern "C" __declspec(naked) void asm_0040d560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_0040d57d }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040d57d: }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11078[];
// FUNCTION: ROBLOXSTUDIO 0x0040d650
extern "C" __declspec(naked) void asm_0040d650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_0040d663 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_0040d665 }
	__asm { L_0040d663: }
	__asm { xor esi, esi }
	__asm { L_0040d665: }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e11078] }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0040d690
extern "C" __declspec(naked) void asm_0040d690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_0040d6a2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_0040d6a4 }
	__asm { L_0040d6a2: }
	__asm { xor edx, edx }
	__asm { L_0040d6a4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0040d6c0
extern "C" __declspec(naked) void asm_0040d6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_0040d6d2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_0040d6d4 }
	__asm { L_0040d6d2: }
	__asm { xor edx, edx }
	__asm { L_0040d6d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0040dfa0
extern "C" __declspec(naked) void asm_0040dfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x12bdfd8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_0040dfc0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040dfc0: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0040e1c0
extern "C" __declspec(naked) void asm_0040e1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040e2a0();
// FUNCTION: ROBLOXSTUDIO 0x0040e390
extern "C" __declspec(naked) void asm_0040e390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { push eax }
	__asm { call fn_0040e2a0 }
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

extern "C" void fn_0040e3e0();
extern "C" void fn_007d5860();
// FUNCTION: ROBLOXSTUDIO 0x0040e490
extern "C" __declspec(naked) void asm_0040e490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { call fn_007d5860 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_0040e3e0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x004107a0
extern "C" __declspec(naked) void asm_004107a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { fstp dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004109a0();
extern "C" void fn_007d5470();
// FUNCTION: ROBLOXSTUDIO 0x00410a30
extern "C" __declspec(naked) void asm_00410a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { fstp dword ptr [ebp + 8] }
	__asm { call fn_007d5470 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004109a0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00410aa0
extern "C" __declspec(naked) void asm_00410aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004124c0();
extern "C" void fn_007d5390();
// FUNCTION: ROBLOXSTUDIO 0x00410b00
extern "C" __declspec(naked) void asm_00410b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_007d5390 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004124c0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00410b30
extern "C" __declspec(naked) void asm_00410b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov esi, eax }
	__asm { call dword ptr [edx + 8] }
	__asm { xor ecx, ecx }
	__asm { cmp esi, eax }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00410b60
extern "C" __declspec(naked) void asm_00410b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp + 0xb] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410d50();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00410de0
extern "C" __declspec(naked) void asm_00410de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { call fn_007d5d30 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { call fn_00410d50 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00410e10
extern "C" __declspec(naked) void asm_00410e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov bl, al }
	__asm { mov edx, dword ptr [edx + 8] }
	__asm { call edx }
	__asm { xor ecx, ecx }
	__asm { cmp bl, al }
	__asm { sete cl }
	__asm { pop esi }
	__asm { mov al, cl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4ec0();
// FUNCTION: ROBLOXSTUDIO 0x00410ec0
extern "C" __declspec(naked) void asm_00410ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_007b4ec0 }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00410ee5 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 1 }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax] }
	__asm { L_00410ee5: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004121e0
extern "C" __declspec(naked) void asm_004121e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004121ff }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004121ff: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00412590();
// FUNCTION: ROBLOXSTUDIO 0x00412620
extern "C" __declspec(naked) void asm_00412620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { push dword ptr [esp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00412590 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe4fb54 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00412cb0
extern "C" __declspec(naked) void asm_00412cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00412cc8 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00412cc8: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00414d80
extern "C" __declspec(naked) void asm_00414d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { je L_00414d9f }
	__asm { nop }
	__asm { L_00414d90: }
	__asm { sub esi, 4 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp esi, edi }
	__asm { jne L_00414d90 }
	__asm { L_00414d9f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e123b8[];
extern "C" void fn_00418070();
extern "C" void fn_00418180();
// FUNCTION: ROBLOXSTUDIO 0x00416ef0
extern "C" __declspec(naked) void asm_00416ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test bl, bl }
	__asm { je L_00416f06 }
	__asm { call fn_00418180 }
	__asm { L_00416f06: }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00418070 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e123b8] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01319814[];
extern "C" void fn_00419910();
// FUNCTION: ROBLOXSTUDIO 0x00418660
extern "C" __declspec(naked) void asm_00418660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_00419910 }
	__asm { mov edx, dword ptr [g_01319814] }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { test eax, eax }
	__asm { je L_00418684 }
	__asm { L_00418678: }
	__asm { dec eax }
	__asm { cmp dword ptr [ecx], edx }
	__asm { jne L_0041868d }
	__asm { add ecx, 4 }
	__asm { test eax, eax }
	__asm { jne L_00418678 }
	__asm { L_00418684: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0041868d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0041a0c0();
// FUNCTION: ROBLOXSTUDIO 0x004198d0
extern "C" __declspec(naked) void asm_004198d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00419901 }
	__asm { push dword ptr [esi + 4] }
	__asm { push eax }
	__asm { call fn_0041a0c0 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00419901: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00419f90
extern "C" __declspec(naked) void asm_00419f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { sub edx, dword ptr [ecx] }
	__asm { mov eax, 0x1fffffff }
	__asm { sar edx, 3 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 1 }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { jae L_00419fb9 }
	__asm { xor edx, edx }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { cmovb edx, dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00419fb9: }
	__asm { add edx, ecx }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { cmovb edx, dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x0041a1e0
extern "C" __declspec(naked) void asm_0041a1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { je L_0041a20c }
	__asm { cmp eax, 0x1fffffff }
	__asm { ja L_0041a206 }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0041a20c }
	__asm { L_0041a206: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0041a20c: }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0041d4d0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0041a8a0
extern "C" __declspec(naked) void asm_0041a8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0041a8c7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041d4d0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0041a8c7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041a8c7: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0041d860();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0041a8d0
extern "C" __declspec(naked) void asm_0041a8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0041a8f7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041d860 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0041a8f7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041a8f7: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0041dbf0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0041a900
extern "C" __declspec(naked) void asm_0041a900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0041a927 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041dbf0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0041a927 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041a927: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0041bea0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0041a930
extern "C" __declspec(naked) void asm_0041a930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0041a957 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041bea0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0041a957 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041a957: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004199f0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0041a960
extern "C" __declspec(naked) void asm_0041a960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0041a987 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0041a987 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041a987: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0041fe80();
// FUNCTION: ROBLOXSTUDIO 0x004202e0
extern "C" __declspec(naked) void asm_004202e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push dword ptr [ebp - 5] }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_0041fe80 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00420360
extern "C" __declspec(naked) void asm_00420360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp edx, ecx }
	__asm { je L_00420387 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { test eax, eax }
	__asm { jle L_00420387 }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_00420387: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00420d50();
// FUNCTION: ROBLOXSTUDIO 0x00420d00
extern "C" __declspec(naked) void asm_00420d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00420d1c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00420d50 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00420d1c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12bf780 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00421410
extern "C" __declspec(naked) void asm_00421410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00422310
extern "C" __declspec(naked) void asm_00422310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0x88 }
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

extern "C" void fn_004115f0();
extern "C" void fn_0048c450();
// FUNCTION: ROBLOXSTUDIO 0x004223a0
extern "C" __declspec(naked) void asm_004223a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x422350 }
	__asm { push 0x131ab48 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { call fn_0048c450 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00422600
extern "C" __declspec(naked) void asm_00422600()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00422628 }
	__asm { test al, 1 }
	__asm { jne L_00422622 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00422622 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00422622: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00422628: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00425650();
// FUNCTION: ROBLOXSTUDIO 0x00425510
extern "C" __declspec(naked) void asm_00425510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00425533 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00425650 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00425533: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c1000 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x00425550
extern "C" __declspec(naked) void asm_00425550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [esi + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call eax }
	__asm { add esp, 0x28 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00425760();
// FUNCTION: ROBLOXSTUDIO 0x004255a0
extern "C" __declspec(naked) void asm_004255a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004255c3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00425760 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004255c3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c0e10 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004258b0
extern "C" __declspec(naked) void asm_004258b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_004258da }
	__asm { test al, 1 }
	__asm { jne L_004258d3 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004258d3 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004258d3: }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_004258da: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10318[];
extern "C" char g_00e10508[];
extern "C" void fn_00426140();
// FUNCTION: ROBLOXSTUDIO 0x004261a0
extern "C" __declspec(naked) void asm_004261a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_004261c9 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004261c9: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00426820
extern "C" __declspec(naked) void asm_00426820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00426db0();
// FUNCTION: ROBLOXSTUDIO 0x00426ec0
extern "C" __declspec(naked) void asm_00426ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call fn_00426db0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
// FUNCTION: ROBLOXSTUDIO 0x004274e0
extern "C" __declspec(naked) void asm_004274e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov esi, ecx }
	__asm { jb L_004274f1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_004274f1: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [esi], 0xe18168 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00427670
extern "C" __declspec(naked) void asm_00427670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub esp, 8 }
	__asm { lea edx, [ebp - 8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp ecx, dword ptr [edx + 4] }
	__asm { jne L_0042769b }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_0042769b }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042769b: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x004278c0
extern "C" __declspec(naked) void asm_004278c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
// FUNCTION: ROBLOXSTUDIO 0x004285d0
extern "C" __declspec(naked) void asm_004285d0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 0x138] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { push esi }
	__asm { mov dword ptr [edi + 0x150], 0 }
	__asm { mov dword ptr [edi + 0x154], 0 }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
// FUNCTION: ROBLOXSTUDIO 0x00429310
extern "C" __declspec(naked) void asm_00429310()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 0x124] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { push esi }
	__asm { mov dword ptr [edi + 0x140], 0 }
	__asm { mov dword ptr [edi + 0x144], 0 }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x0042be60
extern "C" __declspec(naked) void asm_0042be60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { je L_0042be8b }
	__asm { cmp eax, 0x7fffffff }
	__asm { ja L_0042be85 }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0042be8b }
	__asm { L_0042be85: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0042be8b: }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0042c130
extern "C" __declspec(naked) void asm_0042c130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, 0xc }
	__asm { nop }
	__asm { L_0042c140: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { cmp ecx, dword ptr [eax] }
	__asm { jne L_0042c159 }
	__asm { add edx, 4 }
	__asm { add eax, 4 }
	__asm { sub esi, 4 }
	__asm { jae L_0042c140 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0042c159: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e10508[];
extern "C" void fn_0042d1a0();
// FUNCTION: ROBLOXSTUDIO 0x0042d280
extern "C" __declspec(naked) void asm_0042d280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx - 0x78] }
	__asm { lea ecx, [edi + 0x78] }
	__asm { call fn_0042d1a0 }
	__asm { lea ecx, [edi + 0x78] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0042d2a9 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0042d2a9: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1055c[];
// FUNCTION: ROBLOXSTUDIO 0x0042ded0
extern "C" __declspec(naked) void asm_0042ded0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x50], 0 }
	__asm { je L_0042defa }
	__asm { mov eax, dword ptr [esi] }
	__asm { push -1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { cmp eax, -1 }
	__asm { je L_0042defa }
	__asm { push dword ptr [esi + 0x50] }
	__asm { call dword ptr [g_00e1055c] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jns L_0042defa }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0042defa: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0042e290();
// FUNCTION: ROBLOXSTUDIO 0x0042e350
extern "C" __declspec(naked) void asm_0042e350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_0042e290 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0042f350
extern "C" __declspec(naked) void asm_0042f350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x10065f4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0042f430
extern "C" __declspec(naked) void asm_0042f430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0x40 }
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

extern "C" void fn_0043e620();
// FUNCTION: ROBLOXSTUDIO 0x00437cd0
extern "C" __declspec(naked) void asm_00437cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_00437cee }
	__asm { nop }
	__asm { L_00437ce0: }
	__asm { mov ecx, esi }
	__asm { call fn_0043e620 }
	__asm { add esi, 0x78 }
	__asm { cmp esi, edi }
	__asm { jne L_00437ce0 }
	__asm { L_00437cee: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x0043a460
extern "C" __declspec(naked) void asm_0043a460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0043a478 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0043a478: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_0043a485 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_0043a488 }
	__asm { L_0043a485: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0043a488: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0043a493 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_0043a493: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043bf70();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0043ad90
extern "C" __declspec(naked) void asm_0043ad90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0043adb7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043bf70 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0043adb7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043adb7: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e125cc[];
// FUNCTION: ROBLOXSTUDIO 0x0043dda0
extern "C" __declspec(naked) void asm_0043dda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { je L_0043ddc2 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e125cc] }
	__asm { L_0043ddb6: }
	__asm { sub esi, 4 }
	__asm { mov ecx, esi }
	__asm { call ebx }
	__asm { cmp esi, edi }
	__asm { jne L_0043ddb6 }
	__asm { pop ebx }
	__asm { L_0043ddc2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0043ebd0
extern "C" __declspec(naked) void asm_0043ebd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0043ebe8 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0043ebe8: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043fa00();
extern "C" void fn_006bc950();
// FUNCTION: ROBLOXSTUDIO 0x0043faf0
extern "C" __declspec(naked) void asm_0043faf0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0043fa00 }
	__asm { push 0x131b1b0 }
	__asm { call fn_006bc950 }
	__asm { mov dword ptr [esi], 0xe52388 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00442060
extern "C" __declspec(naked) void asm_00442060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0x12c39cc }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00442087 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x1c] }
	__asm { L_00442087: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00442090
extern "C" __declspec(naked) void asm_00442090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0x12c39cc }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004420ba }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x20] }
	__asm { L_004420ba: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e12a4c[];
extern "C" char g_00e12a50[];
extern "C" char g_00e12a54[];
// FUNCTION: ROBLOXSTUDIO 0x004420c0
extern "C" __declspec(naked) void asm_004420c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12a4c] }
	__asm { mov ecx, esi }
	__asm { test eax, eax }
	__asm { jne L_004420e7 }
	__asm { push eax }
	__asm { call dword ptr [g_00e12a50] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004420e7: }
	__asm { push edi }
	__asm { call dword ptr [g_00e12a54] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e12a58[];
// FUNCTION: ROBLOXSTUDIO 0x00442100
extern "C" __declspec(naked) void asm_00442100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x1000007 }
	__asm { jne L_0044212d }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x12bfe28 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { or word ptr [esi + 0xa], 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044212d: }
	__asm { push esi }
	__asm { call dword ptr [g_00e12a58] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004454a0();
// FUNCTION: ROBLOXSTUDIO 0x00445cf0
extern "C" __declspec(naked) void asm_00445cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_004454a0 }
	__asm { mov dword ptr [esi], 0x10088c0 }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f00[];
extern "C" char g_00e10f28[];
extern "C" char g_00e10f44[];
extern "C" char g_00e110b4[];
extern "C" char g_00e12bcc[];
// FUNCTION: ROBLOXSTUDIO 0x00447980
extern "C" __declspec(naked) void asm_00447980()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [g_00e110b4] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call dword ptr [g_00e10f44] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10f00] }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { call dword ptr [g_00e10f28] }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e12bcc] }
}

extern "C" char g_00e10efc[];
extern "C" char g_00e12c88[];
extern "C" char g_00e12c8c[];
// FUNCTION: ROBLOXSTUDIO 0x00447c80
extern "C" __declspec(naked) void asm_00447c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { test al, al }
	__asm { je L_00447c9e }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push 0x12c }
	__asm { call dword ptr [g_00e10efc] }
	__asm { L_00447c9e: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12c88] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12c78[];
extern "C" char g_00e12c7c[];
// FUNCTION: ROBLOXSTUDIO 0x00447e30
extern "C" __declspec(naked) void asm_00447e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e12c7c] }
	__asm { cmp eax, 2 }
	__asm { je L_00447e4e }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { or word ptr [eax + 0xa], 4 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00447e4e: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12c78] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0044b6f0
extern "C" __declspec(naked) void asm_0044b6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xe461dc }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f7c[];
// FUNCTION: ROBLOXSTUDIO 0x0044cc90
extern "C" __declspec(naked) void asm_0044cc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push 4 }
	__asm { push 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f7c] }
	__asm { mov esi, eax }
	__asm { lea edx, [esi - 8] }
	__asm { test edx, edx }
	__asm { je L_0044ccb4 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { L_0044ccb4: }
	__asm { add edx, 4 }
	__asm { je L_0044ccc2 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, esi }
	__asm { L_0044ccc2: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x0044df70
extern "C" __declspec(naked) void asm_0044df70()
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
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
// FUNCTION: ROBLOXSTUDIO 0x0044e4c0
extern "C" __declspec(naked) void asm_0044e4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_0044e4e3 }
	__asm { mov ecx, esi }
	__asm { call fn_006b9e50 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_006b9b80 }
	__asm { L_0044e4e3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e123f4[];
extern "C" char g_00e12c74[];
extern "C" void fn_0044f470();
// FUNCTION: ROBLOXSTUDIO 0x0044f3f0
extern "C" __declspec(naked) void asm_0044f3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e123f4] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12c74] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_0044f470 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12420[];
extern "C" void fn_0044f470();
// FUNCTION: ROBLOXSTUDIO 0x0044f710
extern "C" __declspec(naked) void asm_0044f710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [edi + 4], 0x232 }
	__asm { jne L_0044f728 }
	__asm { call fn_0044f470 }
	__asm { L_0044f728: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e12420] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00450e30
extern "C" __declspec(naked) void asm_00450e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi], 0x100bc10 }
	__asm { test ecx, ecx }
	__asm { je L_00450e49 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00450e49: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { je L_00450e60 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00450e60: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e1239c[];
// FUNCTION: ROBLOXSTUDIO 0x00453150
extern "C" __declspec(naked) void asm_00453150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0x100cdc4 }
	__asm { mov dword ptr [esi + 8], 0x100cda4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { call dword ptr [g_00e1239c] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00453180 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00453180: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12c8c[];
extern "C" void fn_00451ba0();
// FUNCTION: ROBLOXSTUDIO 0x004542b0
extern "C" __declspec(naked) void asm_004542b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_004542d5 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { call fn_00451ba0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004542d5: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00451ba0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x00454da0
extern "C" __declspec(naked) void asm_00454da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12bfdb0 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x00454dd0
extern "C" __declspec(naked) void asm_00454dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push 0x12bfdb0 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0045b130();
// FUNCTION: ROBLOXSTUDIO 0x0045af90
extern "C" __declspec(naked) void asm_0045af90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0045afb3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0045b130 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045afb3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c59b8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045b230();
// FUNCTION: ROBLOXSTUDIO 0x0045b020
extern "C" __declspec(naked) void asm_0045b020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0045b043 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0045b230 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b043: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c5858 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045b360();
// FUNCTION: ROBLOXSTUDIO 0x0045b0b0
extern "C" __declspec(naked) void asm_0045b0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0045b0d3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0045b360 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045b0d3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c5708 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101c8[];
extern "C" void fn_0045d200();
extern "C" void fn_0045e7e0();
// FUNCTION: ROBLOXSTUDIO 0x0045d2b0
extern "C" __declspec(naked) void asm_0045d2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e101c8] }
	__asm { cmp eax, dword ptr [esi + 0xc] }
	__asm { jne L_0045d2d2 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0045d200 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0045d2d2: }
	__asm { call fn_0045e7e0 }
	__asm { mov ecx, eax }
	__asm { call fn_0045d200 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x0045f0a0
extern "C" __declspec(naked) void asm_0045f0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x148 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0045f0bb }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0045f0bb: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_0045f0c8 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_0045f0cb }
	__asm { L_0045f0c8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_0045f0cb: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0045f0d6 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_0045f0d6: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0045f660
extern "C" __declspec(naked) void asm_0045f660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x12c5d60 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_0045f680 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0045f680: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00460330
extern "C" __declspec(naked) void asm_00460330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { jae L_00460349 }
	__asm { mov eax, 0x80070216 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00460349: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add ecx, edx }
	__asm { mov dword ptr [eax], ecx }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
// FUNCTION: ROBLOXSTUDIO 0x00460360
extern "C" __declspec(naked) void asm_00460360()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00460382 }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e104f4] }
	__asm { nop }
	__asm { L_00460370: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00460370 }
	__asm { pop edi }
	__asm { L_00460382: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
// FUNCTION: ROBLOXSTUDIO 0x004625f0
extern "C" __declspec(naked) void asm_004625f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x25], 0 }
	__asm { jne L_0046261b }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { je L_0046261b }
	__asm { push 0x100e948 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { mov byte ptr [esi + 0x25], 1 }
	__asm { L_0046261b: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00463e60
extern "C" __declspec(naked) void asm_00463e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00467ac0();
// FUNCTION: ROBLOXSTUDIO 0x00467a60
extern "C" __declspec(naked) void asm_00467a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00467a7c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00467ac0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00467a7c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c6700 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x0046a910
extern "C" __declspec(naked) void asm_0046a910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12bfea8 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x0046a940
extern "C" __declspec(naked) void asm_0046a940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push 0x12bfea8 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x0046ad30
extern "C" __declspec(naked) void asm_0046ad30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12bfec8 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x0046bc60
extern "C" __declspec(naked) void asm_0046bc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12bff48 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x0046cf70
extern "C" __declspec(naked) void asm_0046cf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0018 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x0046d3e0
extern "C" __declspec(naked) void asm_0046d3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0048 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x0046d410
extern "C" __declspec(naked) void asm_0046d410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push 0x12c0048 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x0046d450
extern "C" __declspec(naked) void asm_0046d450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push 0x12c0048 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x0046d490
extern "C" __declspec(naked) void asm_0046d490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 3 }
	__asm { push 0x12c0048 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x0046d690
extern "C" __declspec(naked) void asm_0046d690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0058 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10efc[];
extern "C" char g_00e12394[];
extern "C" void fn_005421b0();
// FUNCTION: ROBLOXSTUDIO 0x0046e620
extern "C" __declspec(naked) void asm_0046e620()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10efc] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0046e648 }
	__asm { push 1 }
	__asm { call fn_005421b0 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12394] }
	__asm { L_0046e648: }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e12410[];
extern "C" void fn_00542990();
// FUNCTION: ROBLOXSTUDIO 0x0046f240
extern "C" __declspec(naked) void asm_0046f240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x18] }
	__asm { test edx, edx }
	__asm { jne L_0046f251 }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e12410] }
	__asm { L_0046f251: }
	__asm { movzx eax, byte ptr [ecx + 0x22] }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00542990 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { or word ptr [eax + 0xa], 4 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110ec[];
// FUNCTION: ROBLOXSTUDIO 0x0046f8d0
extern "C" __declspec(naked) void asm_0046f8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { je L_0046f8f2 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e110ec] }
	__asm { L_0046f8e6: }
	__asm { sub esi, 4 }
	__asm { mov ecx, esi }
	__asm { call ebx }
	__asm { cmp esi, edi }
	__asm { jne L_0046f8e6 }
	__asm { pop ebx }
	__asm { L_0046f8f2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e12988[];
extern "C" void fn_00410c40();
extern "C" void fn_00476d30();
// FUNCTION: ROBLOXSTUDIO 0x00470b70
extern "C" __declspec(naked) void asm_00470b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00476d30 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call fn_00410c40 }
	__asm { movzx eax, al }
	__asm { mov dword ptr [esi + 0x84], eax }
	__asm { test eax, eax }
	__asm { lea eax, [esi + 0x78] }
	__asm { jne L_00470b99 }
	__asm { lea eax, [esi + 0x7c] }
	__asm { L_00470b99: }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12988] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00470ac0();
// FUNCTION: ROBLOXSTUDIO 0x00470cb0
extern "C" __declspec(naked) void asm_00470cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00470cdb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp word ptr [eax + 8], 3 }
	__asm { jne L_00470cdb }
	__asm { test byte ptr [eax + 0x20], 1 }
	__asm { je L_00470cdb }
	__asm { mov ecx, esi }
	__asm { call fn_00470ac0 }
	__asm { L_00470cdb: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ef4[];
extern "C" void fn_004123f0();
// FUNCTION: ROBLOXSTUDIO 0x00470d70
extern "C" __declspec(naked) void asm_00470d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { add ecx, 0x30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004123f0 }
	__asm { push 0xa }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10ef4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00477920();
extern "C" void fn_00477a00();
// FUNCTION: ROBLOXSTUDIO 0x00471010
extern "C" __declspec(naked) void asm_00471010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xffffffc0 }
	__asm { sub esp, 0x40 }
	__asm { add ecx, 0x30 }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { call fn_00477a00 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00477920 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004123f0();
extern "C" void fn_00477ad0();
// FUNCTION: ROBLOXSTUDIO 0x00471550
extern "C" __declspec(naked) void asm_00471550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call fn_004123f0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 0x78] }
	__asm { call fn_00477ad0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
extern "C" void fn_0044ddf0();
extern "C" void fn_008ea020();
// FUNCTION: ROBLOXSTUDIO 0x00471a60
extern "C" __declspec(naked) void asm_00471a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { add ecx, 0x30 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_0044ddf0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_008ea020 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00471a89 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00471a89: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00475c50
extern "C" __declspec(naked) void asm_00475c50()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ebx, [ecx + 0x30] }
	__asm { lea esi, [ecx + 0x78] }
	__asm { mov edi, 6 }
	__asm { mov edi, edi }
	__asm { L_00475c60: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { lea esi, [esi + 4] }
	__asm { dec edi }
	__asm { jne L_00475c60 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10f90[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00477ce0
extern "C" __declspec(naked) void asm_00477ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { cmp esi, edi }
	__asm { je L_00477d02 }
	__asm { nop }
	__asm { L_00477cf0: }
	__asm { mov ecx, esi }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { add ecx, -8 }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp esi, edi }
	__asm { jne L_00477cf0 }
	__asm { L_00477d02: }
	__asm { push 8 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10f90] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043a460();
// FUNCTION: ROBLOXSTUDIO 0x00478700
extern "C" __declspec(naked) void asm_00478700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0043a460 }
	__asm { lea edx, [eax + 8] }
	__asm { test edx, edx }
	__asm { je L_0047871c }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { L_0047871c: }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00478731 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld qword ptr [eax] }
	__asm { fstp qword ptr [ecx] }
	__asm { L_00478731: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00478a00();
// FUNCTION: ROBLOXSTUDIO 0x00478940
extern "C" __declspec(naked) void asm_00478940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00478963 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00478a00 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00478963: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c6bb8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00478a60();
// FUNCTION: ROBLOXSTUDIO 0x004789c0
extern "C" __declspec(naked) void asm_004789c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004789e3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00478a60 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004789e3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c6b18 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00478c00
extern "C" __declspec(naked) void asm_00478c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_006d19a0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0047a8a0
extern "C" __declspec(naked) void asm_0047a8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { je L_0047a8c4 }
	__asm { nop }
	__asm { L_0047a8b0: }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test ecx, ecx }
	__asm { je L_0047a8c0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0047a8c0: }
	__asm { cmp esi, edi }
	__asm { jne L_0047a8b0 }
	__asm { L_0047a8c4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}
