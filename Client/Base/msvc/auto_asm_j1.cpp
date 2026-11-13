// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_0131a230[];
extern "C" void fn_004f5800();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00401000
extern "C" __declspec(naked) void asm_00401000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd9066e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131a230] }
	__asm { test al, 1 }
	__asm { jne L_00401042 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a230], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004f5800 }
	__asm { push 0xddb880 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00401042: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131a224 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110c8[];
extern "C" char g_00e110f4[];
extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x00401ba0
extern "C" __declspec(naked) void asm_00401ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f5ea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { je L_00401c06 }
	__asm { push 0xf12a0c }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e110c8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e110f4] }
	__asm { L_00401c06: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10508[];
extern "C" void fn_004031c0();
// FUNCTION: ROBLOXSTUDIO 0x00402150
extern "C" __declspec(naked) void asm_00402150()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { test ecx, ecx }
	__asm { je L_0040218f }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { je L_00402179 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x34] }
	__asm { call fn_004031c0 }
	__asm { L_00402179: }
	__asm { push dword ptr [esi + 0x48] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { L_0040218f: }
	__asm { cmp dword ptr [esi + 0x30], 0x10 }
	__asm { jb L_0040219d }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0040219d: }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004021bc }
	__asm { push dword ptr [esi] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_004021bc: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e110d4[];
extern "C" char g_00e110d8[];
extern "C" char g_00e110dc[];
extern "C" char g_00e110e4[];
extern "C" char g_00e11110[];
extern "C" char g_00e12e3c[];
extern "C" void fn_004f5e80();
extern "C" void fn_004f6010();
// FUNCTION: ROBLOXSTUDIO 0x004026b0
extern "C" __declspec(naked) void asm_004026b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6f6b2 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call fn_004f5e80 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12e3c] }
	__asm { test eax, eax }
	__asm { jne L_0040272c }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_004f6010 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110d8] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { push 0xa }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110d4] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0040272c: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call dword ptr [g_00e110dc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402e20();
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00402a50
extern "C" __declspec(naked) void asm_00402a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e5c1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00402e20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00402aa9 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { L_00402aa9: }
	__asm { add esi, 0x18 }
	__asm { je L_00402abf }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00402abf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [edi + 9], 1 }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402ce0();
// FUNCTION: ROBLOXSTUDIO 0x00402bd0
extern "C" __declspec(naked) void asm_00402bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_00402ce0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_00402c2f }
	__asm { nop }
	__asm { L_00402bf0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_00402bfb }
	__asm { add esi, -0x30 }
	__asm { jmp L_00402bfd }
	__asm { L_00402bfb: }
	__asm { xor esi, esi }
	__asm { L_00402bfd: }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_00402c18 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x30] }
	__asm { jmp L_00402c2a }
	__asm { L_00402c18: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { lea edx, [esi + 0x30] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00402c2a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00402bf0 }
	__asm { L_00402c2f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00402ef0
extern "C" __declspec(naked) void asm_00402ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { test eax, eax }
	__asm { je L_00402f22 }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_00402f1c }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00402f22 }
	__asm { L_00402f1c: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00402f22: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea edx, [ecx + eax*4] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { cmp ecx, edx }
	__asm { je L_00402f4b }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00402f36: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00402f41 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00402f41: }
	__asm { add dword ptr [esi + 8], 4 }
	__asm { cmp dword ptr [esi + 8], edx }
	__asm { jne L_00402f36 }
	__asm { pop edi }
	__asm { L_00402f4b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { test eax, eax }
	__asm { je L_00402f5f }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { pop ecx }
	__asm { L_00402f5f: }
	__asm { ret }
}

extern "C" char g_00e10264[];
extern "C" void fn_00402f60();
// FUNCTION: ROBLOXSTUDIO 0x00402fd0
extern "C" __declspec(naked) void asm_00402fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp eax, edx }
	__asm { jae L_00402fe8 }
	__asm { push 0xf12f30 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_00402fe8: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { sub eax, edx }
	__asm { cmp eax, esi }
	__asm { cmovb esi, eax }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { push edi }
	__asm { jb L_00402ffc }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00402ffc: }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov eax, edi }
	__asm { cmp esi, edi }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ecx + edx] }
	__asm { push eax }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0040302e }
	__asm { cmp esi, edi }
	__asm { jae L_00403027 }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00403027: }
	__asm { xor eax, eax }
	__asm { cmp esi, edi }
	__asm { setne al }
	__asm { L_0040302e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x004039a0
extern "C" __declspec(naked) void asm_004039a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [ecx], 0 }
	__asm { jne L_004039d1 }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004039d1: }
	__asm { mov edx, ecx }
	__asm { push edi }
	__asm { lea edi, [edx + 1] }
	__asm { L_004039d7: }
	__asm { mov al, byte ptr [edx] }
	__asm { inc edx }
	__asm { test al, al }
	__asm { jne L_004039d7 }
	__asm { sub edx, edi }
	__asm { pop edi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e122f4[];
extern "C" char g_0131cb04[];
extern "C" char g_0131cb08[];
extern "C" void fn_0040b600();
extern "C" void fn_0040c670();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004059f0
extern "C" __declspec(naked) void asm_004059f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd703a7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x14] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [g_0131cb04] }
	__asm { test cl, 1 }
	__asm { jne L_00405a5f }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0131cb04], ecx }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0040b600 }
	__asm { push 0xddb940 }
	__asm { mov dword ptr [g_0131cb08], 0xf148b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_00405a5f: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], 0x131cb08 }
	__asm { add ecx, 4 }
	__asm { call fn_0040c670 }
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
extern "C" char g_0131cb24[];
extern "C" char g_0131cb28[];
extern "C" void fn_0040b7d0();
extern "C" void fn_0040c840();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00405c50
extern "C" __declspec(naked) void asm_00405c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70377 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [g_0131cb24] }
	__asm { test cl, 1 }
	__asm { jne L_00405cbc }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0131cb24], ecx }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0040b7d0 }
	__asm { push 0xddb950 }
	__asm { mov dword ptr [g_0131cb28], 0xf148a8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_00405cbc: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], 0x131cb28 }
	__asm { add ecx, 4 }
	__asm { call fn_0040c840 }
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

extern "C" char g_0131cca4[];
extern "C" void fn_00404300();
extern "C" void fn_0040ce70();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004062d0
extern "C" __declspec(naked) void asm_004062d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd700be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_004062fe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00406300 }
	__asm { L_004062fe: }
	__asm { xor bl, bl }
	__asm { L_00406300: }
	__asm { push 0x409050 }
	__asm { push 0x131a2d8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cca4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00406343 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cca4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00404300 }
	__asm { push 0xddc000 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00406343: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x131cca8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_0040ce70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004081e0();
extern "C" void fn_00412c00();
// FUNCTION: ROBLOXSTUDIO 0x00406370
extern "C" __declspec(naked) void asm_00406370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_004063e5 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_004081e0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, eax }
	__asm { cmp esi, ebx }
	__asm { je L_004063c9 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004063b0 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004063b0: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_004063c9: }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_004063dd }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004063dd: }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004063e5: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131cd30[];
extern "C" void fn_004044f0();
extern "C" void fn_0040cf00();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00406880
extern "C" __declspec(naked) void asm_00406880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd701fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_004068ae }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_004068b0 }
	__asm { L_004068ae: }
	__asm { xor bl, bl }
	__asm { L_004068b0: }
	__asm { push 0x4090b0 }
	__asm { push 0x131a2d0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cd30] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004068f3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cd30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004044f0 }
	__asm { push 0xddbff0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004068f3: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x131cd38 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_0040cf00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131cdc0[];
extern "C" void fn_00404850();
extern "C" void fn_0040cf90();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00406d80
extern "C" __declspec(naked) void asm_00406d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd703ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00406dae }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00406db0 }
	__asm { L_00406dae: }
	__asm { xor bl, bl }
	__asm { L_00406db0: }
	__asm { push 0x409110 }
	__asm { push 0x131a2c8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cdc0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00406df3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cdc0], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00404850 }
	__asm { push 0xddbfe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00406df3: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x131cdc8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_0040cf90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131ce50[];
extern "C" void fn_004046b0();
extern "C" void fn_0040d020();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00407290
extern "C" __declspec(naked) void asm_00407290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd703ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_004072be }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_004072c0 }
	__asm { L_004072be: }
	__asm { xor bl, bl }
	__asm { L_004072c0: }
	__asm { push 0x409170 }
	__asm { push 0x131a2c0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ce50] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00407303 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ce50], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004046b0 }
	__asm { push 0xddbfd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00407303: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x131ce58 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_0040d020 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131cee0[];
extern "C" void fn_004049f0();
extern "C" void fn_0040d0b0();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00407790
extern "C" __declspec(naked) void asm_00407790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7042e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_004077be }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_004077c0 }
	__asm { L_004077be: }
	__asm { xor bl, bl }
	__asm { L_004077c0: }
	__asm { push 0x4091d0 }
	__asm { push 0x131a2b8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cee0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00407803 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cee0], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004049f0 }
	__asm { push 0xddbfc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00407803: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x131cee8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_0040d0b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00411990();
// FUNCTION: ROBLOXSTUDIO 0x00407940
extern "C" __declspec(naked) void asm_00407940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x30] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x20] }
	__asm { mov esi, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { cmp esi, edi }
	__asm { je L_0040799d }
	__asm { L_00407960: }
	__asm { push ebx }
	__asm { push dword ptr [esi] }
	__asm { call fn_00411990 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00407976 }
	__asm { add esi, 4 }
	__asm { cmp esi, edi }
	__asm { jne L_00407960 }
	__asm { L_00407976: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_0040799d }
	__asm { mov ecx, dword ptr [eax + 0x2c] }
	__asm { lea edx, [esp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0040799d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004083f0();
extern "C" void fn_007cb490();
// FUNCTION: ROBLOXSTUDIO 0x00407a50
extern "C" __declspec(naked) void asm_00407a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov edi, ecx }
	__asm { jb L_00407a62 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00407a62: }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00407aa4 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00407aa4: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004088d0();
// FUNCTION: ROBLOXSTUDIO 0x00407e90
extern "C" __declspec(naked) void asm_00407e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_00407ed2 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_00407ed2 }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00407eba }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_004088d0 }
	__asm { L_00407eba: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00407eeb }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00407ed2: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00407ee0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_004088d0 }
	__asm { L_00407ee0: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00407eeb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00407eeb: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00408470
extern "C" __declspec(naked) void asm_00408470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_004084bf }
	__asm { test esi, esi }
	__asm { jns L_004084bf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004084ae }
	__asm { push 0x15a }
	__asm { push 0xf14788 }
	__asm { push 0xf1477c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004084bf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004084ae: }
	__asm { movzx eax, al }
	__asm { push 0xf14338 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004084bf: }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { mov ecx, dword ptr [edi + 0x80] }
	__asm { sub ecx, eax }
	__asm { sar ecx, 2 }
	__asm { cmp esi, ecx }
	__asm { jae L_004084da }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004084da: }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408de0();
// FUNCTION: ROBLOXSTUDIO 0x004085f0
extern "C" __declspec(naked) void asm_004085f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_00408631 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_00408631 }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00408619 }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00408de0 }
	__asm { L_00408619: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00408649 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00408631: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_0040863e }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00408de0 }
	__asm { L_0040863e: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00408649 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00408649: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00408950
extern "C" __declspec(naked) void asm_00408950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp edi, ecx }
	__asm { jne L_00408976 }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { jne L_00408976 }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { L_0040896b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00408976: }
	__asm { cmp edi, eax }
	__asm { je L_0040896b }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, eax }
	__asm { push esi }
	__asm { sar ecx, 2 }
	__asm { lea esi, [ecx*4] }
	__asm { push esi }
	__asm { push eax }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { lea eax, [esi + edi] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00408d90
extern "C" __declspec(naked) void asm_00408d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov ecx, esi }
	__asm { jne L_00408dbb }
	__asm { mov edx, dword ptr [edi] }
	__asm { L_00408da7: }
	__asm { cmp dword ptr [eax + 0x10], edx }
	__asm { jae L_00408db1 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00408db5 }
	__asm { L_00408db1: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00408db5: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00408da7 }
	__asm { L_00408dbb: }
	__asm { cmp ecx, esi }
	__asm { je L_00408dc9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp eax, dword ptr [ecx + 0x10] }
	__asm { jae L_00408dcc }
	__asm { L_00408dc9: }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { L_00408dcc: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00409230();
// FUNCTION: ROBLOXSTUDIO 0x00408de0
extern "C" __declspec(naked) void asm_00408de0()
{
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { sar eax, 2 }
	__asm { cmp eax, 1 }
	__asm { jae L_00408e41 }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, 0x3fffffff }
	__asm { sar esi, 2 }
	__asm { mov eax, edi }
	__asm { sub eax, esi }
	__asm { cmp eax, 1 }
	__asm { jae L_00408e12 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00408e12: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { inc esi }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub edi, eax }
	__asm { cmp edi, edx }
	__asm { pop edi }
	__asm { jae L_00408e34 }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { cmovb edx, esi }
	__asm { push edx }
	__asm { call fn_00409230 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_00408e34: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { cmovb edx, esi }
	__asm { push edx }
	__asm { call fn_00409230 }
	__asm { L_00408e41: }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_0131cca4[];
extern "C" void fn_00404300();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00409050
extern "C" __declspec(naked) void asm_00409050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd700be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131cca4] }
	__asm { test al, 1 }
	__asm { jne L_00409093 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cca4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00404300 }
	__asm { push 0xddc000 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00409093: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cd30[];
extern "C" void fn_004044f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004090b0
extern "C" __declspec(naked) void asm_004090b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd701fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131cd30] }
	__asm { test al, 1 }
	__asm { jne L_004090f3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cd30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004044f0 }
	__asm { push 0xddbff0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004090f3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cdc0[];
extern "C" void fn_00404850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00409110
extern "C" __declspec(naked) void asm_00409110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd703ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131cdc0] }
	__asm { test al, 1 }
	__asm { jne L_00409153 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cdc0], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00404850 }
	__asm { push 0xddbfe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00409153: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131ce50[];
extern "C" void fn_004046b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00409170
extern "C" __declspec(naked) void asm_00409170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd703ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131ce50] }
	__asm { test al, 1 }
	__asm { jne L_004091b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ce50], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004046b0 }
	__asm { push 0xddbfd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004091b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cee0[];
extern "C" void fn_004049f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004091d0
extern "C" __declspec(naked) void asm_004091d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7042e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131cee0] }
	__asm { test al, 1 }
	__asm { jne L_00409213 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cee0], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004049f0 }
	__asm { push 0xddbfc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00409213: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004096e0
extern "C" __declspec(naked) void asm_004096e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_004096fa }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_004096fa: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp edx, dword ptr [eax + 4] }
	__asm { jne L_00409714 }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00409714: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [eax] }
	__asm { jne L_00409727 }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00409727: }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00409740
extern "C" __declspec(naked) void asm_00409740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0040975a }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_0040975a: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp edx, dword ptr [eax + 4] }
	__asm { jne L_00409775 }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00409775: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [eax + 8] }
	__asm { jne L_0040978b }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040978b: }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11054[];
extern "C" char g_00e11058[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0040c2b0
extern "C" __declspec(naked) void asm_0040c2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_0040c2c3 }
	__asm { add edi, -0x1c }
	__asm { jmp L_0040c2c5 }
	__asm { L_0040c2c3: }
	__asm { xor edi, edi }
	__asm { L_0040c2c5: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, edi }
	__asm { call dword ptr [g_00e11058] }
	__asm { test al, al }
	__asm { jne L_0040c300 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, edi }
	__asm { call dword ptr [g_00e11054] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0040c2f6 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push dword ptr [esi + 4] }
	__asm { add ecx, edi }
	__asm { call eax }
	__asm { L_0040c2f6: }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { L_0040c300: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e12304[];
extern "C" char g_00e12310[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0040c430
extern "C" __declspec(naked) void asm_0040c430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_0040c443 }
	__asm { add edi, -0x1c }
	__asm { jmp L_0040c445 }
	__asm { L_0040c443: }
	__asm { xor edi, edi }
	__asm { L_0040c445: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, edi }
	__asm { call dword ptr [g_00e12310] }
	__asm { test al, al }
	__asm { je L_0040c480 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, edi }
	__asm { call dword ptr [g_00e12304] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0040c476 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push dword ptr [esi + 4] }
	__asm { add ecx, edi }
	__asm { call eax }
	__asm { L_0040c476: }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { L_0040c480: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131cf74[];
extern "C" void fn_0078aaf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040c550
extern "C" __declspec(naked) void asm_0040c550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7040e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131cf74] }
	__asm { test al, 1 }
	__asm { jne L_0040c597 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cf74], eax }
	__asm { mov ecx, 0x131cf78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0078aaf0 }
	__asm { push 0xddc020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040c597: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cb04[];
extern "C" char g_0131cb08[];
extern "C" void fn_0040b600();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040c740
extern "C" __declspec(naked) void asm_0040c740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd789fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131cb04] }
	__asm { test al, 1 }
	__asm { jne L_0040c790 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cb04], eax }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040b600 }
	__asm { push 0xddb940 }
	__asm { mov dword ptr [g_0131cb08], 0xf148b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040c790: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131cb08 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0040c7b0
extern "C" __declspec(naked) void asm_0040c7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0040c7d8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040c7dd }
	__asm { L_0040c7d8: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040c7dd: }
	__asm { cmp ecx, 0x12be060 }
	__asm { je L_0040c826 }
	__asm { test eax, eax }
	__asm { je L_0040c7ed }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040c7f2 }
	__asm { L_0040c7ed: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040c7f2: }
	__asm { push 0x12be060 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0040c826 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0040c826: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cb24[];
extern "C" char g_0131cb28[];
extern "C" void fn_0040b7d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040c910
extern "C" __declspec(naked) void asm_0040c910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fb6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131cb24] }
	__asm { test al, 1 }
	__asm { jne L_0040c960 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cb24], eax }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040b7d0 }
	__asm { push 0xddb950 }
	__asm { mov dword ptr [g_0131cb28], 0xf148a8 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040c960: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131cb28 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0040c980
extern "C" __declspec(naked) void asm_0040c980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0040c9a8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040c9ad }
	__asm { L_0040c9a8: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040c9ad: }
	__asm { cmp ecx, 0x12be04c }
	__asm { je L_0040c9f6 }
	__asm { test eax, eax }
	__asm { je L_0040c9bd }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040c9c2 }
	__asm { L_0040c9bd: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040c9c2: }
	__asm { push 0x12be04c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0040c9f6 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0040c9f6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040ca10
extern "C" __declspec(naked) void asm_0040ca10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0040ca61 }
	__asm { mov dword ptr [edx], 0xf13ae0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040ca61: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040ca80
extern "C" __declspec(naked) void asm_0040ca80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0040cad1 }
	__asm { mov dword ptr [edx], 0xf13acc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040cad1: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040caf0
extern "C" __declspec(naked) void asm_0040caf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0040cb41 }
	__asm { mov dword ptr [edx], 0xf13ab8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040cb41: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040cb60
extern "C" __declspec(naked) void asm_0040cb60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0040cbb1 }
	__asm { mov dword ptr [edx], 0xf13aa4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040cbb1: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040cbd0
extern "C" __declspec(naked) void asm_0040cbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0040cc21 }
	__asm { mov dword ptr [edx], 0xf13a90 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040cc21: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040cc40
extern "C" __declspec(naked) void asm_0040cc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0040cc91 }
	__asm { mov dword ptr [edx], 0xf13a7c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040cc91: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040ccb0
extern "C" __declspec(naked) void asm_0040ccb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0040cd01 }
	__asm { mov dword ptr [edx], 0xf13a68 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040cd01: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040cd20
extern "C" __declspec(naked) void asm_0040cd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0040cd71 }
	__asm { mov dword ptr [edx], 0xf13a54 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040cd71: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040cd90
extern "C" __declspec(naked) void asm_0040cd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0040cde1 }
	__asm { mov dword ptr [edx], 0xf13a40 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040cde1: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0040ce00
extern "C" __declspec(naked) void asm_0040ce00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0040ce51 }
	__asm { mov dword ptr [edx], 0xf13a2c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040ce51: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131d000[];
extern "C" char g_0131d004[];
extern "C" char g_0131d008[];
extern "C" char g_0131d00c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040ce70
extern "C" __declspec(naked) void asm_0040ce70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131d000] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0040ceb2 }
	__asm { or eax, 1 }
	__asm { push 0xddc080 }
	__asm { mov dword ptr [g_0131d000], eax }
	__asm { mov dword ptr [g_0131d004], 0x12be5e8 }
	__asm { mov dword ptr [g_0131d00c], 0x40d810 }
	__asm { mov dword ptr [g_0131d008], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040ceb2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131d004 }
	__asm { jne L_0040cecb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040cecb: }
	__asm { test ecx, ecx }
	__asm { je L_0040cee1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0040cee1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0040ceef }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0040ceef: }
	__asm { mov dword ptr [esi], 0x131d004 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131d010[];
extern "C" char g_0131d014[];
extern "C" char g_0131d018[];
extern "C" char g_0131d01c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040cf00
extern "C" __declspec(naked) void asm_0040cf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131d010] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0040cf42 }
	__asm { or eax, 1 }
	__asm { push 0xddc070 }
	__asm { mov dword ptr [g_0131d010], eax }
	__asm { mov dword ptr [g_0131d014], 0x12be5b4 }
	__asm { mov dword ptr [g_0131d01c], 0x40d810 }
	__asm { mov dword ptr [g_0131d018], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040cf42: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131d014 }
	__asm { jne L_0040cf5b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040cf5b: }
	__asm { test ecx, ecx }
	__asm { je L_0040cf71 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0040cf71: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0040cf7f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0040cf7f: }
	__asm { mov dword ptr [esi], 0x131d014 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131d020[];
extern "C" char g_0131d024[];
extern "C" char g_0131d028[];
extern "C" char g_0131d02c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040cf90
extern "C" __declspec(naked) void asm_0040cf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131d020] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0040cfd2 }
	__asm { or eax, 1 }
	__asm { push 0xddc060 }
	__asm { mov dword ptr [g_0131d020], eax }
	__asm { mov dword ptr [g_0131d024], 0x12be54c }
	__asm { mov dword ptr [g_0131d02c], 0x40d810 }
	__asm { mov dword ptr [g_0131d028], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040cfd2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131d024 }
	__asm { jne L_0040cfeb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040cfeb: }
	__asm { test ecx, ecx }
	__asm { je L_0040d001 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0040d001: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0040d00f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0040d00f: }
	__asm { mov dword ptr [esi], 0x131d024 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131d030[];
extern "C" char g_0131d034[];
extern "C" char g_0131d038[];
extern "C" char g_0131d03c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040d020
extern "C" __declspec(naked) void asm_0040d020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131d030] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0040d062 }
	__asm { or eax, 1 }
	__asm { push 0xddc050 }
	__asm { mov dword ptr [g_0131d030], eax }
	__asm { mov dword ptr [g_0131d034], 0x12be580 }
	__asm { mov dword ptr [g_0131d03c], 0x40d810 }
	__asm { mov dword ptr [g_0131d038], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040d062: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131d034 }
	__asm { jne L_0040d07b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040d07b: }
	__asm { test ecx, ecx }
	__asm { je L_0040d091 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0040d091: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0040d09f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0040d09f: }
	__asm { mov dword ptr [esi], 0x131d034 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131d040[];
extern "C" char g_0131d044[];
extern "C" char g_0131d048[];
extern "C" char g_0131d04c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040d0b0
extern "C" __declspec(naked) void asm_0040d0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131d040] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0040d0f2 }
	__asm { or eax, 1 }
	__asm { push 0xddc040 }
	__asm { mov dword ptr [g_0131d040], eax }
	__asm { mov dword ptr [g_0131d044], 0x12be520 }
	__asm { mov dword ptr [g_0131d04c], 0x40d810 }
	__asm { mov dword ptr [g_0131d048], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040d0f2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131d044 }
	__asm { jne L_0040d10b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040d10b: }
	__asm { test ecx, ecx }
	__asm { je L_0040d121 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0040d121: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0040d12f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0040d12f: }
	__asm { mov dword ptr [esi], 0x131d044 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131d050[];
extern "C" char g_0131d054[];
extern "C" char g_0131d058[];
extern "C" char g_0131d05c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0040d140
extern "C" __declspec(naked) void asm_0040d140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131d050] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0040d182 }
	__asm { or eax, 1 }
	__asm { push 0xddc030 }
	__asm { mov dword ptr [g_0131d050], eax }
	__asm { mov dword ptr [g_0131d054], 0x12be010 }
	__asm { mov dword ptr [g_0131d05c], 0x40d810 }
	__asm { mov dword ptr [g_0131d058], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0040d182: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131d054 }
	__asm { jne L_0040d19b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040d19b: }
	__asm { test ecx, ecx }
	__asm { je L_0040d1b1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0040d1b1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0040d1bf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0040d1bf: }
	__asm { mov dword ptr [esi], 0x131d054 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131a294[];
extern "C" char g_0131a298[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0040d200
extern "C" __declspec(naked) void asm_0040d200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6f9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131a298] }
	__asm { test al, 1 }
	__asm { jne L_0040d242 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a298], eax }
	__asm { push 0xf14bd0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a294], eax }
	__asm { L_0040d242: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11074[];
extern "C" char g_00e11078[];
// FUNCTION: ROBLOXSTUDIO 0x0040d5d0
extern "C" __declspec(naked) void asm_0040d5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70353 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_0040d5fe }
	__asm { add eax, -0x1c }
	__asm { jmp L_0040d600 }
	__asm { L_0040d5fe: }
	__asm { xor eax, eax }
	__asm { L_0040d600: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11078] }
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

extern "C" char g_00e1230c[];
// FUNCTION: ROBLOXSTUDIO 0x0040d750
extern "C" __declspec(naked) void asm_0040d750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73551 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0040d786 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e1230c] }
	__asm { L_0040d786: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11078[];
// FUNCTION: ROBLOXSTUDIO 0x0040d7b0
extern "C" __declspec(naked) void asm_0040d7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73551 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0040d7e6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11078] }
	__asm { L_0040d7e6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0040d830
extern "C" __declspec(naked) void asm_0040d830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f930 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0040d889 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xf13a14 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0040d88b }
	__asm { L_0040d889: }
	__asm { xor eax, eax }
	__asm { L_0040d88b: }
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

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x0040d8c0
extern "C" __declspec(naked) void asm_0040d8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0040d8e8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040d8ed }
	__asm { L_0040d8e8: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040d8ed: }
	__asm { cmp ecx, 0x12be5e8 }
	__asm { je L_0040d936 }
	__asm { test eax, eax }
	__asm { je L_0040d8fd }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040d902 }
	__asm { L_0040d8fd: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040d902: }
	__asm { push 0x12be5e8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0040d936 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0040d936: }
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
// FUNCTION: ROBLOXSTUDIO 0x0040d950
extern "C" __declspec(naked) void asm_0040d950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0040d978 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040d97d }
	__asm { L_0040d978: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040d97d: }
	__asm { cmp ecx, 0x12be5b4 }
	__asm { je L_0040d9c6 }
	__asm { test eax, eax }
	__asm { je L_0040d98d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040d992 }
	__asm { L_0040d98d: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040d992: }
	__asm { push 0x12be5b4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0040d9c6 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0040d9c6: }
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
// FUNCTION: ROBLOXSTUDIO 0x0040d9e0
extern "C" __declspec(naked) void asm_0040d9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0040da08 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040da0d }
	__asm { L_0040da08: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040da0d: }
	__asm { cmp ecx, 0x12be54c }
	__asm { je L_0040da56 }
	__asm { test eax, eax }
	__asm { je L_0040da1d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040da22 }
	__asm { L_0040da1d: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040da22: }
	__asm { push 0x12be54c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0040da56 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0040da56: }
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
// FUNCTION: ROBLOXSTUDIO 0x0040da70
extern "C" __declspec(naked) void asm_0040da70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0040da98 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040da9d }
	__asm { L_0040da98: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040da9d: }
	__asm { cmp ecx, 0x12be580 }
	__asm { je L_0040dae6 }
	__asm { test eax, eax }
	__asm { je L_0040daad }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040dab2 }
	__asm { L_0040daad: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040dab2: }
	__asm { push 0x12be580 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0040dae6 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0040dae6: }
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
// FUNCTION: ROBLOXSTUDIO 0x0040db00
extern "C" __declspec(naked) void asm_0040db00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0040db28 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040db2d }
	__asm { L_0040db28: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040db2d: }
	__asm { cmp ecx, 0x12be520 }
	__asm { je L_0040db76 }
	__asm { test eax, eax }
	__asm { je L_0040db3d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040db42 }
	__asm { L_0040db3d: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040db42: }
	__asm { push 0x12be520 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0040db76 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0040db76: }
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
// FUNCTION: ROBLOXSTUDIO 0x0040de60
extern "C" __declspec(naked) void asm_0040de60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0040de89 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040de8e }
	__asm { L_0040de89: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040de8e: }
	__asm { cmp ecx, 0x12be010 }
	__asm { je L_0040ded7 }
	__asm { test eax, eax }
	__asm { je L_0040de9e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040dea3 }
	__asm { L_0040de9e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040dea3: }
	__asm { push 0x12be010 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0040ded7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0040ded7: }
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
// FUNCTION: ROBLOXSTUDIO 0x0040e010
extern "C" __declspec(naked) void asm_0040e010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0040e038 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040e03d }
	__asm { L_0040e038: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040e03d: }
	__asm { cmp ecx, 0x12be04c }
	__asm { je L_0040e086 }
	__asm { test eax, eax }
	__asm { je L_0040e04d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040e052 }
	__asm { L_0040e04d: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040e052: }
	__asm { push 0x12be04c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0040e086 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0040e086: }
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
// FUNCTION: ROBLOXSTUDIO 0x0040e210
extern "C" __declspec(naked) void asm_0040e210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0040e239 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040e23e }
	__asm { L_0040e239: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040e23e: }
	__asm { cmp ecx, 0x12bdba8 }
	__asm { je L_0040e287 }
	__asm { test eax, eax }
	__asm { je L_0040e24e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0040e253 }
	__asm { L_0040e24e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0040e253: }
	__asm { push 0x12bdba8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_0040e287 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_0040e287: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040eab0();
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0040e5f0
extern "C" __declspec(naked) void asm_0040e5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fa24 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x40], 0xf138c8 }
	__asm { mov dword ptr [esi + 0x48], 0xe1822c }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 2 }
	__asm { call fn_0040eab0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [esi], 0xe32f28 }
	__asm { lea edx, [esi + 0x2c] }
	__asm { mov dword ptr [edx], 0xe32f34 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x40], 0xe32f3c }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x3c], eax }
	__asm { test edi, edi }
	__asm { je L_0040e676 }
	__asm { lea eax, [edi + 0x2c] }
	__asm { jmp L_0040e678 }
	__asm { L_0040e676: }
	__asm { xor eax, eax }
	__asm { L_0040e678: }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040eab0();
// FUNCTION: ROBLOXSTUDIO 0x0040e9f0
extern "C" __declspec(naked) void asm_0040e9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fe1c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0040ea3a }
	__asm { mov dword ptr [esi + 0x40], 0xf138c8 }
	__asm { mov dword ptr [esi + 0x48], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0040ea3a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_0040eab0 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe32f28 }
	__asm { mov dword ptr [esi + 0x2c], 0xe32f34 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x40], 0xe32f3c }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x3c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_0131a244[];
extern "C" char g_0131a248[];
// FUNCTION: ROBLOXSTUDIO 0x0040eec0
extern "C" __declspec(naked) void asm_0040eec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7055e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131a248] }
	__asm { test al, 1 }
	__asm { jne L_0040ef34 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a248], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0040ef1f }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131a244], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040ef1f: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131a244], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0040ef34: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a244] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f410();
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x0040ef50
extern "C" __declspec(naked) void asm_0040ef50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fa54 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x40], 0xf138c8 }
	__asm { mov dword ptr [esi + 0x48], 0xe1822c }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 2 }
	__asm { call fn_0040f410 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [esi], 0xe18364 }
	__asm { lea edx, [esi + 0x2c] }
	__asm { mov dword ptr [edx], 0xe18370 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x40], 0xe18378 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x3c], eax }
	__asm { test edi, edi }
	__asm { je L_0040efd6 }
	__asm { lea eax, [edi + 0x2c] }
	__asm { jmp L_0040efd8 }
	__asm { L_0040efd6: }
	__asm { xor eax, eax }
	__asm { L_0040efd8: }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f410();
// FUNCTION: ROBLOXSTUDIO 0x0040f350
extern "C" __declspec(naked) void asm_0040f350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fe1c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0040f39a }
	__asm { mov dword ptr [esi + 0x40], 0xf138c8 }
	__asm { mov dword ptr [esi + 0x48], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0040f39a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_0040f410 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe18364 }
	__asm { mov dword ptr [esi + 0x2c], 0xe18370 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x40], 0xe18378 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x3c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1018c[];
extern "C" void fn_0040f650();
extern "C" void fn_0040f6b0();
// FUNCTION: ROBLOXSTUDIO 0x0040faa0
extern "C" __declspec(naked) void asm_0040faa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70278 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { call dword ptr [g_00e1018c] }
	__asm { test eax, eax }
	__asm { jne L_0040faf5 }
	__asm { push 0xf138fc }
	__asm { push 0xb }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_0040f6b0 }
	__asm { mov dword ptr [ebp - 0x38], 0xe1826c }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040f650 }
	__asm { L_0040faf5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
// FUNCTION: ROBLOXSTUDIO 0x0040fbf0
extern "C" __declspec(naked) void asm_0040fbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0040fbff }
	__asm { add eax, -5 }
	__asm { jmp L_0040fc01 }
	__asm { L_0040fbff: }
	__asm { xor eax, eax }
	__asm { L_0040fc01: }
	__asm { push esi }
	__asm { lea esi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0040fc57 }
	__asm { cmp dword ptr [esi], 0x7ffffff5 }
	__asm { jl L_0040fc57 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0040fc46 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0040fc57 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0040fc46: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0040fc57: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_004100a0();
// FUNCTION: ROBLOXSTUDIO 0x004101a0
extern "C" __declspec(naked) void asm_004101a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0ac }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x2c }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00410209 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_004100a0 }
	__asm { test eax, eax }
	__asm { je L_00410209 }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { add eax, 0x20 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00410209: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00410490
extern "C" __declspec(naked) void asm_00410490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ffa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe19198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_004104d0 }
	__asm { add edi, 0xc }
	__asm { jmp L_004104d2 }
	__asm { L_004104d0: }
	__asm { xor edi, edi }
	__asm { L_004104d2: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004104e8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_004104e8: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe19b90 }
	__asm { mov dword ptr [esi + 0xc], 0xe19b9c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x004105d0
extern "C" __declspec(naked) void asm_004105d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7e028 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub esp, 0x10 }
	__asm { test edx, edx }
	__asm { jne L_0041061c }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_0041061c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 8] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x004107f0
extern "C" __declspec(naked) void asm_004107f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00410819 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0041081e }
	__asm { L_00410819: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0041081e: }
	__asm { cmp ecx, 0x12bdfc0 }
	__asm { je L_00410867 }
	__asm { test eax, eax }
	__asm { je L_0041082e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00410833 }
	__asm { L_0041082e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00410833: }
	__asm { push 0x12bdfc0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00410867 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00410867: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131a254[];
extern "C" char g_0131a258[];
extern "C" char g_0131a25c[];
extern "C" char g_0131a260[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004109a0
extern "C" __declspec(naked) void asm_004109a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131a254] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_004109e2 }
	__asm { or eax, 1 }
	__asm { push 0xddc0c0 }
	__asm { mov dword ptr [g_0131a254], eax }
	__asm { mov dword ptr [g_0131a258], 0x12bdfc0 }
	__asm { mov dword ptr [g_0131a260], 0x410980 }
	__asm { mov dword ptr [g_0131a25c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004109e2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131a258 }
	__asm { jne L_004109fb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004109fb: }
	__asm { test ecx, ecx }
	__asm { je L_00410a11 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00410a11: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00410a1f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { L_00410a1f: }
	__asm { mov dword ptr [esi], 0x131a258 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00410bb0
extern "C" __declspec(naked) void asm_00410bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00410bd9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00410bde }
	__asm { L_00410bd9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00410bde: }
	__asm { cmp ecx, 0x12bdfcc }
	__asm { je L_00410c27 }
	__asm { test eax, eax }
	__asm { je L_00410bee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00410bf3 }
	__asm { L_00410bee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00410bf3: }
	__asm { push 0x12bdfcc }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00410c27 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00410c27: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131a264[];
extern "C" char g_0131a268[];
extern "C" char g_0131a26c[];
extern "C" char g_0131a270[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00410d50
extern "C" __declspec(naked) void asm_00410d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131a264] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00410d92 }
	__asm { or eax, 1 }
	__asm { push 0xddc0d0 }
	__asm { mov dword ptr [g_0131a264], eax }
	__asm { mov dword ptr [g_0131a268], 0x12bdfcc }
	__asm { mov dword ptr [g_0131a270], 0x410d30 }
	__asm { mov dword ptr [g_0131a26c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00410d92: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131a268 }
	__asm { jne L_00410dab }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [esi + 4], al }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00410dab: }
	__asm { test ecx, ecx }
	__asm { je L_00410dc1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00410dc1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00410dcf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ecx], al }
	__asm { L_00410dcf: }
	__asm { mov dword ptr [esi], 0x131a268 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00410e50
extern "C" __declspec(naked) void asm_00410e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_00410e85 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00410e8f }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00410e8f }
	__asm { L_00410e85: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00410e8f: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e54b78[];
extern "C" char g_0131a2e4[];
extern "C" char g_0131a2e8[];
extern "C" void fn_007cbce0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004118e0
extern "C" __declspec(naked) void asm_004118e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7012c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131a2e4] }
	__asm { test al, 1 }
	__asm { jne L_0041197b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2e4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { mov eax, dword ptr [g_0131a2e8] }
	__asm { test al, 1 }
	__asm { jne L_00411959 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2e8], eax }
	__asm { mov ecx, 0x131a2f0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cbce0 }
	__asm { push 0xddc160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_00411959: }
	__asm { push dword ptr [g_00e54b78] }
	__asm { mov ecx, 0x131a420 }
	__asm { push 0x131a2f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc170 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041197b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131a420 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00411cf0();
// FUNCTION: ROBLOXSTUDIO 0x00411df0
extern "C" __declspec(naked) void asm_00411df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0ac }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x2c }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00411e59 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_00411cf0 }
	__asm { test eax, eax }
	__asm { je L_00411e59 }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { add eax, 0x20 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00411e59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1051c[];
// FUNCTION: ROBLOXSTUDIO 0x00412110
extern "C" __declspec(naked) void asm_00412110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6fe38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [esi], 0xe4fb48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00412150 }
	__asm { add edi, 0xc }
	__asm { jmp L_00412152 }
	__asm { L_00412150: }
	__asm { xor edi, edi }
	__asm { L_00412152: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00412168 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00412168: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe4fd54 }
	__asm { mov dword ptr [esi + 0xc], 0xe4fd60 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00412300
extern "C" __declspec(naked) void asm_00412300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00412329 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0041232e }
	__asm { L_00412329: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0041232e: }
	__asm { cmp ecx, 0x12be4a4 }
	__asm { je L_00412377 }
	__asm { test eax, eax }
	__asm { je L_0041233e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00412343 }
	__asm { L_0041233e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00412343: }
	__asm { push 0x12be4a4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00412377 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00412377: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131a54c[];
extern "C" char g_0131a550[];
extern "C" char g_0131a554[];
extern "C" char g_0131a558[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004124c0
extern "C" __declspec(naked) void asm_004124c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131a54c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00412502 }
	__asm { or eax, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], eax }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00412502: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131a550 }
	__asm { jne L_0041251b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0041251b: }
	__asm { test ecx, ecx }
	__asm { je L_00412531 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00412531: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0041253f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0041253f: }
	__asm { mov dword ptr [esi], 0x131a550 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e3fa4[];
extern "C" void fn_006b9740();
extern "C" void fn_006b9b20();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00412590
extern "C" __declspec(naked) void asm_00412590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [edi + 6], al }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012e3fa4], 0 }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { je L_004125c5 }
	__asm { call fn_006b9b20 }
	__asm { L_004125c5: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0041260f }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007cb440 }
	__asm { cmp eax, esi }
	__asm { pop esi }
	__asm { jne L_0041260f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004125fa }
	__asm { push 0x3d }
	__asm { push 0xf147d8 }
	__asm { push 0xf14820 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0041260f }
	__asm { L_004125fa: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf14838 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0041260f: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00412c00
extern "C" __declspec(naked) void asm_00412c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov edi, ecx }
	__asm { jae L_00412c24 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00412c32 }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00412c32 }
	__asm { L_00412c24: }
	__asm { test edi, edi }
	__asm { je L_00412c2c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { L_00412c2c: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00412c32: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_004148b0();
extern "C" void fn_00825c70();
// FUNCTION: ROBLOXSTUDIO 0x00414410
extern "C" __declspec(naked) void asm_00414410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xa4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041445f }
	__asm { mov ecx, eax }
	__asm { call fn_00825c70 }
	__asm { mov esi, eax }
	__asm { jmp L_00414461 }
	__asm { L_0041445f: }
	__asm { xor esi, esi }
	__asm { L_00414461: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004148b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00414492 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00414492 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00414492: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e5bae8[];
extern "C" char g_0131a560[];
extern "C" char g_0131a564[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004144b0
extern "C" __declspec(naked) void asm_004144b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7071e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e5bae8], 0 }
	__asm { jne L_004144e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004144e4: }
	__asm { push 0x414860 }
	__asm { push 0x131a568 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a564] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041452e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a564], eax }
	__asm { push 0xe5bae8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a560], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041452e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a560] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131a560[];
extern "C" char g_0131a564[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00414860
extern "C" __declspec(naked) void asm_00414860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7071e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131a564] }
	__asm { test al, 1 }
	__asm { jne L_004148a2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a564], eax }
	__asm { push 0xe5bae8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a560], eax }
	__asm { L_004148a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004148b0
extern "C" __declspec(naked) void asm_004148b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70700 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00414909 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe518b0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0041490b }
	__asm { L_00414909: }
	__asm { xor eax, eax }
	__asm { L_0041490b: }
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

extern "C" char g_00e10508[];
extern "C" char g_00e10ff0[];
// FUNCTION: ROBLOXSTUDIO 0x00414f60
extern "C" __declspec(naked) void asm_00414f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd711a9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0x1004a78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00414fc3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00414fb9 }
	__asm { test al, 1 }
	__asm { jne L_00414fb3 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00414fb3 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00414fb3: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00414fb9: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00414fc3: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10ff0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10fcc[];
extern "C" char g_00e123b4[];
extern "C" char g_00e12670[];
// FUNCTION: ROBLOXSTUDIO 0x00416f20
extern "C" __declspec(naked) void asm_00416f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call dword ptr [g_00e123b4] }
	__asm { cmp word ptr [esi + 8], 0x33 }
	__asm { mov bl, al }
	__asm { jne L_00416f7a }
	__asm { mov cx, word ptr [esi + 0x14] }
	__asm { mov word ptr [ebp + 8], cx }
	__asm { cmp cx, 0x30 }
	__asm { jb L_00416f4d }
	__asm { cmp cx, 0x52 }
	__asm { jbe L_00416f7a }
	__asm { L_00416f4d: }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10fcc] }
	__asm { test al, al }
	__asm { je L_00416f7a }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12670] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_00416f7a }
	__asm { or word ptr [esi + 0xa], 4 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00416f7a: }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
// FUNCTION: ROBLOXSTUDIO 0x00418120
extern "C" __declspec(naked) void asm_00418120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { cmp byte ptr [ecx + 0x2d], 0 }
	__asm { jne L_0041816f }
	__asm { cmp dword ptr [ecx + 0x14], 0 }
	__asm { je L_0041816f }
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
	__asm { push 2 }
	__asm { push 0x1003c0c }
	__asm { push ecx }
	__asm { mov byte ptr [ecx + 0x2d], 1 }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { L_0041816f: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
// FUNCTION: ROBLOXSTUDIO 0x00418180
extern "C" __declspec(naked) void asm_00418180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { cmp byte ptr [ecx + 0x2d], 0 }
	__asm { jne L_004181cf }
	__asm { cmp dword ptr [ecx + 0x14], 0 }
	__asm { je L_004181cf }
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
	__asm { push 2 }
	__asm { push 0x1003c0c }
	__asm { push ecx }
	__asm { mov byte ptr [ecx + 0x2d], 1 }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { L_004181cf: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e69988[];
extern "C" char g_0131d064[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00418ab0
extern "C" __declspec(naked) void asm_00418ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd714ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131d064] }
	__asm { test al, 1 }
	__asm { jne L_00418b1c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d064], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { push dword ptr [g_00e69988] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x131d068 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc260 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00418b1c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131d068 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11024[];
extern "C" void fn_0041f350();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0041a430
extern "C" __declspec(naked) void asm_0041a430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd713b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { je L_0041a478 }
	__asm { sub esp, 8 }
	__asm { call fn_0041f350 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0041a478: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11024] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0041f560();
extern "C" void fn_0041f610();
extern "C" void fn_0041f6b0();
// FUNCTION: ROBLOXSTUDIO 0x0041a690
extern "C" __declspec(naked) void asm_0041a690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8b758 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_0041a6bb }
	__asm { call fn_0041f560 }
	__asm { L_0041a6bb: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0041f610 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp eax, ecx }
	__asm { jne L_0041a6f5 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0041f6b0 }
	__asm { L_0041a6f5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add eax, -8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x0041ac60
extern "C" __declspec(naked) void asm_0041ac60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0041acc8 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0041acb5 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_0041acb5: }
	__asm { mov eax, 0x10040b0 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_0041acc8: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00420630();
extern "C" void fn_008a6d40();
// FUNCTION: ROBLOXSTUDIO 0x0041b040
extern "C" __declspec(naked) void asm_0041b040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xac }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041b08f }
	__asm { mov ecx, eax }
	__asm { call fn_008a6d40 }
	__asm { mov esi, eax }
	__asm { jmp L_0041b091 }
	__asm { L_0041b08f: }
	__asm { xor esi, esi }
	__asm { L_0041b091: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00420630 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b0c2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b0c2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b0c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_004206c0();
extern "C" void fn_008a9b20();
// FUNCTION: ROBLOXSTUDIO 0x0041b0e0
extern "C" __declspec(naked) void asm_0041b0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xc8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041b12f }
	__asm { mov ecx, eax }
	__asm { call fn_008a9b20 }
	__asm { mov esi, eax }
	__asm { jmp L_0041b131 }
	__asm { L_0041b12f: }
	__asm { xor esi, esi }
	__asm { L_0041b131: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004206c0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b162 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b162 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b162: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00420750();
extern "C" void fn_008aa4b0();
// FUNCTION: ROBLOXSTUDIO 0x0041b180
extern "C" __declspec(naked) void asm_0041b180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xcc }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041b1cf }
	__asm { mov ecx, eax }
	__asm { call fn_008aa4b0 }
	__asm { mov esi, eax }
	__asm { jmp L_0041b1d1 }
	__asm { L_0041b1cf: }
	__asm { xor esi, esi }
	__asm { L_0041b1d1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00420750 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b202 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b202 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b202: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_004207e0();
extern "C" void fn_008803b0();
// FUNCTION: ROBLOXSTUDIO 0x0041b220
extern "C" __declspec(naked) void asm_0041b220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x348 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041b26f }
	__asm { mov ecx, eax }
	__asm { call fn_008803b0 }
	__asm { mov esi, eax }
	__asm { jmp L_0041b271 }
	__asm { L_0041b26f: }
	__asm { xor esi, esi }
	__asm { L_0041b271: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004207e0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b2a2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b2a2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b2a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00420870();
extern "C" void fn_0087b460();
// FUNCTION: ROBLOXSTUDIO 0x0041b2c0
extern "C" __declspec(naked) void asm_0041b2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x2e0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041b30f }
	__asm { mov ecx, eax }
	__asm { call fn_0087b460 }
	__asm { mov esi, eax }
	__asm { jmp L_0041b311 }
	__asm { L_0041b30f: }
	__asm { xor esi, esi }
	__asm { L_0041b311: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00420870 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b342 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b342 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b342: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00420900();
extern "C" void fn_0087da70();
// FUNCTION: ROBLOXSTUDIO 0x0041b360
extern "C" __declspec(naked) void asm_0041b360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x3fc }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041b3af }
	__asm { mov ecx, eax }
	__asm { call fn_0087da70 }
	__asm { mov esi, eax }
	__asm { jmp L_0041b3b1 }
	__asm { L_0041b3af: }
	__asm { xor esi, esi }
	__asm { L_0041b3b1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00420900 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b3e2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b3e2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b3e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00420990();
extern "C" void fn_00884320();
// FUNCTION: ROBLOXSTUDIO 0x0041b400
extern "C" __declspec(naked) void asm_0041b400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x468 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041b44f }
	__asm { mov ecx, eax }
	__asm { call fn_00884320 }
	__asm { mov esi, eax }
	__asm { jmp L_0041b451 }
	__asm { L_0041b44f: }
	__asm { xor esi, esi }
	__asm { L_0041b451: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00420990 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b482 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b482 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b482: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00420a20();
extern "C" void fn_008855b0();
// FUNCTION: ROBLOXSTUDIO 0x0041b4a0
extern "C" __declspec(naked) void asm_0041b4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x348 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041b4ef }
	__asm { mov ecx, eax }
	__asm { call fn_008855b0 }
	__asm { mov esi, eax }
	__asm { jmp L_0041b4f1 }
	__asm { L_0041b4ef: }
	__asm { xor esi, esi }
	__asm { L_0041b4f1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00420a20 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041b522 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041b522 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041b522: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e69988[];
extern "C" char g_0131ddb4[];
extern "C" char g_0131ddb8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041b720
extern "C" __declspec(naked) void asm_0041b720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70b6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e69988], 0 }
	__asm { jne L_0041b754 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041b754: }
	__asm { push 0x41fac0 }
	__asm { push 0x131a8a8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ddb4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041b79e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ddb4], eax }
	__asm { push 0xe69988 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ddb8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041b79e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ddb8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6ac38[];
extern "C" char g_0131a5bc[];
extern "C" char g_0131a5c0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041b7c0
extern "C" __declspec(naked) void asm_0041b7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70b2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e6ac38], 0 }
	__asm { jne L_0041b7f4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041b7f4: }
	__asm { push 0x41fb10 }
	__asm { push 0x131a8a0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a5c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041b83e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a5c0], eax }
	__asm { push 0xe6ac38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a5bc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041b83e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a5bc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6b2d0[];
extern "C" char g_0131a5b4[];
extern "C" char g_0131a5b8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041b860
extern "C" __declspec(naked) void asm_0041b860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70cae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e6b2d0], 0 }
	__asm { jne L_0041b894 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041b894: }
	__asm { push 0x41fb60 }
	__asm { push 0x131a898 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a5b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041b8de }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a5b8], eax }
	__asm { push 0xe6b2d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a5b4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041b8de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a5b4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6b518[];
extern "C" char g_0131a5ac[];
extern "C" char g_0131a5b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041b900
extern "C" __declspec(naked) void asm_0041b900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70bce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e6b518], 0 }
	__asm { jne L_0041b934 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041b934: }
	__asm { push 0x41fbb0 }
	__asm { push 0x131a890 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a5b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041b97e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a5b0], eax }
	__asm { push 0xe6b518 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a5ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041b97e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a5ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e64bd4[];
extern "C" char g_0131ddbc[];
extern "C" char g_0131ddc0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041b9a0
extern "C" __declspec(naked) void asm_0041b9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70bee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e64bd4], 0 }
	__asm { jne L_0041b9d4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041b9d4: }
	__asm { push 0x41fc00 }
	__asm { push 0x131a888 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ddbc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041ba1e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ddbc], eax }
	__asm { push 0xe64bd4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ddc0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041ba1e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ddc0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e63ccc[];
extern "C" char g_0131a5a4[];
extern "C" char g_0131a5a8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041ba40
extern "C" __declspec(naked) void asm_0041ba40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70c0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e63ccc], 0 }
	__asm { jne L_0041ba74 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041ba74: }
	__asm { push 0x41fc50 }
	__asm { push 0x131a880 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a5a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041babe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a5a8], eax }
	__asm { push 0xe63ccc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a5a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041babe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a5a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e644d4[];
extern "C" char g_0131ddc4[];
extern "C" char g_0131ddc8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041bae0
extern "C" __declspec(naked) void asm_0041bae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70cce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e644d4], 0 }
	__asm { jne L_0041bb14 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041bb14: }
	__asm { push 0x41fca0 }
	__asm { push 0x131a878 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ddc4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041bb5e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ddc4], eax }
	__asm { push 0xe644d4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131ddc8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041bb5e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131ddc8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e65620[];
extern "C" char g_0131a59c[];
extern "C" char g_0131a5a0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041bb80
extern "C" __declspec(naked) void asm_0041bb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70b4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e65620], 0 }
	__asm { jne L_0041bbb4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041bbb4: }
	__asm { push 0x41fcf0 }
	__asm { push 0x131a870 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a5a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041bbfe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a5a0], eax }
	__asm { push 0xe65620 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a59c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041bbfe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a59c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e65b68[];
extern "C" char g_0131a594[];
extern "C" char g_0131a598[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041bc20
extern "C" __declspec(naked) void asm_0041bc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70cee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e65b68], 0 }
	__asm { jne L_0041bc54 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041bc54: }
	__asm { push 0x41fd40 }
	__asm { push 0x131a868 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a598] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041bc9e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a598], eax }
	__asm { push 0xe65b68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a594], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041bc9e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a594] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6b744[];
extern "C" char g_0131a58c[];
extern "C" char g_0131a590[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041bcc0
extern "C" __declspec(naked) void asm_0041bcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70b8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e6b744], 0 }
	__asm { jne L_0041bcf4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041bcf4: }
	__asm { push 0x41fd90 }
	__asm { push 0x131a860 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a590] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041bd3e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a590], eax }
	__asm { push 0xe6b744 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a58c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041bd3e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a58c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6b740[];
extern "C" char g_0131a584[];
extern "C" char g_0131a588[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041bd60
extern "C" __declspec(naked) void asm_0041bd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70c2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e6b740], 0 }
	__asm { jne L_0041bd94 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041bd94: }
	__asm { push 0x41fde0 }
	__asm { push 0x131a858 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a588] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041bdde }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a588], eax }
	__asm { push 0xe6b740 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a584], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041bdde: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a584] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6b748[];
extern "C" char g_0131a57c[];
extern "C" char g_0131a580[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0041be00
extern "C" __declspec(naked) void asm_0041be00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70d0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e6b748], 0 }
	__asm { jne L_0041be34 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041be34: }
	__asm { push 0x41fe30 }
	__asm { push 0x131a850 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a580] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0041be7e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a580], eax }
	__asm { push 0xe6b748 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131a57c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0041be7e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131a57c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e57cb8[];
extern "C" char g_0131a84c[];
extern "C" void fn_0041eb40();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041bea0
extern "C" __declspec(naked) void asm_0041bea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7154e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131a84c] }
	__asm { test al, 1 }
	__asm { jne L_0041bf0c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a84c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e57cb8] }
	__asm { call fn_0041eb40 }
	__asm { push eax }
	__asm { mov ecx, 0x131a720 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041bf0c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131a720 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e61938[];
extern "C" char g_0131d1d0[];
extern "C" void fn_0041ed90();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041cd30
extern "C" __declspec(naked) void asm_0041cd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7148e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131d1d0] }
	__asm { test al, 1 }
	__asm { jne L_0041cd9c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d1d0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e61938] }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d1d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041cd9c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131d1d8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e64bd4[];
extern "C" char g_0131d304[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041cdb0
extern "C" __declspec(naked) void asm_0041cdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7156e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131d304] }
	__asm { test al, 1 }
	__asm { jne L_0041ce1c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d304], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e64bd4] }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x131d308 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041ce1c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131d308 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e63ccc[];
extern "C" char g_0131d434[];
extern "C" void fn_0041ee90();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041d140
extern "C" __declspec(naked) void asm_0041d140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7158e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131d434] }
	__asm { test al, 1 }
	__asm { jne L_0041d1ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d434], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e63ccc] }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041d1ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131d438 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e644d4[];
extern "C" char g_0131d564[];
extern "C" void fn_0041ee10();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041d4d0
extern "C" __declspec(naked) void asm_0041d4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd714ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131d564] }
	__asm { test al, 1 }
	__asm { jne L_0041d53c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e644d4] }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d568 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041d53c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131d568 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e65620[];
extern "C" char g_0131d694[];
extern "C" void fn_0041ee10();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041d860
extern "C" __declspec(naked) void asm_0041d860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7144e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131d694] }
	__asm { test al, 1 }
	__asm { jne L_0041d8cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d694], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e65620] }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, 0x131d698 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041d8cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131d698 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e65b68[];
extern "C" char g_0131d7c4[];
extern "C" void fn_0041ee90();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041dbf0
extern "C" __declspec(naked) void asm_0041dbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd714ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131d7c4] }
	__asm { test al, 1 }
	__asm { jne L_0041dc5c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d7c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e65b68] }
	__asm { call fn_0041ee90 }
	__asm { push eax }
	__asm { mov ecx, 0x131d7c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041dc5c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131d7c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e57cb0[];
extern "C" char g_0131a71c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041eb40
extern "C" __declspec(naked) void asm_0041eb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd713ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131a71c] }
	__asm { test al, 1 }
	__asm { jne L_0041ebac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a71c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e57cb0] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131a5f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041ebac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131a5f0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6cbe8[];
extern "C" char g_0131d8f4[];
extern "C" void fn_0041f030();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041ed90
extern "C" __declspec(naked) void asm_0041ed90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd713ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131d8f4] }
	__asm { test al, 1 }
	__asm { jne L_0041edfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d8f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e6cbe8] }
	__asm { call fn_0041f030 }
	__asm { push eax }
	__asm { mov ecx, 0x131d8f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041edfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131d8f8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6193c[];
extern "C" char g_0131da24[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041ee10
extern "C" __declspec(naked) void asm_0041ee10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7142e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131da24] }
	__asm { test al, 1 }
	__asm { jne L_0041ee7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131da24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e6193c] }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x131da28 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041ee7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131da28 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e61940[];
extern "C" char g_0131db54[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041ee90
extern "C" __declspec(naked) void asm_0041ee90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7146e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131db54] }
	__asm { test al, 1 }
	__asm { jne L_0041eefc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131db54], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e61940] }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x131db58 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041eefc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131db58 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6ca48[];
extern "C" char g_0131dc84[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0041f030
extern "C" __declspec(naked) void asm_0041f030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7140e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131dc84] }
	__asm { test al, 1 }
	__asm { jne L_0041f09c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dc84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e6ca48] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131dc88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0041f09c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131dc88 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f84[];
extern "C" char g_00e10f9c[];
extern "C" char g_00e11108[];
extern "C" char g_01319814[];
// FUNCTION: ROBLOXSTUDIO 0x0041f1f0
extern "C" __declspec(naked) void asm_0041f1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7169d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [g_01319814] }
	__asm { push esi }
	__asm { push 8 }
	__asm { call dword ptr [g_00e10f84] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041f24b }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [g_00e11108] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10f9c] }
	__asm { jmp L_0041f24d }
	__asm { L_0041f24b: }
	__asm { xor esi, esi }
	__asm { L_0041f24d: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [edx], esi }
	__asm { mov ecx, dword ptr [g_01319814] }
	__asm { mov eax, esi }
	__asm { inc dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00420dc0();
extern "C" void fn_00899dc0();
// FUNCTION: ROBLOXSTUDIO 0x0041f8d0
extern "C" __declspec(naked) void asm_0041f8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x8c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0041f91f }
	__asm { mov ecx, eax }
	__asm { call fn_00899dc0 }
	__asm { mov esi, eax }
	__asm { jmp L_0041f921 }
	__asm { L_0041f91f: }
	__asm { xor esi, esi }
	__asm { L_0041f921: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00420dc0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0041f952 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0041f952 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0041f952: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x00420310
extern "C" __declspec(naked) void asm_00420310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd71711 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0042034a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { add ecx, 8 }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_0042034a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00420500
extern "C" __declspec(naked) void asm_00420500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx + 0x38] }
	__asm { mov esi, edx }
	__asm { mov eax, edx }
	__asm { test edi, edi }
	__asm { js L_00420532 }
	__asm { L_00420516: }
	__asm { mov eax, dword ptr [esi + edi*4 + 4] }
	__asm { cmp eax, edx }
	__asm { je L_0042052f }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { L_00420520: }
	__asm { cmp dword ptr [eax - 8], ecx }
	__asm { jge L_0042052f }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + edi*4 + 4] }
	__asm { cmp eax, edx }
	__asm { jne L_00420520 }
	__asm { L_0042052f: }
	__asm { dec edi }
	__asm { jns L_00420516 }
	__asm { L_00420532: }
	__asm { cmp eax, edx }
	__asm { je L_0042053d }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { cmp ecx, dword ptr [eax - 8] }
	__asm { jge L_0042053f }
	__asm { L_0042053d: }
	__asm { mov eax, edx }
	__asm { L_0042053f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131a574[];
extern "C" char g_0131a578[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00420550
extern "C" __declspec(naked) void asm_00420550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70c4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131a578] }
	__asm { test al, 1 }
	__asm { jne L_0042058a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a578], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131a574], eax }
	__asm { L_0042058a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004205a0
extern "C" __declspec(naked) void asm_004205a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70a70 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_004205f9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3850c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004205fb }
	__asm { L_004205f9: }
	__asm { xor eax, eax }
	__asm { L_004205fb: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00420630
extern "C" __declspec(naked) void asm_00420630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70a20 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00420689 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3b3b0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0042068b }
	__asm { L_00420689: }
	__asm { xor eax, eax }
	__asm { L_0042068b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004206c0
extern "C" __declspec(naked) void asm_004206c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70a30 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00420719 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe350b8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0042071b }
	__asm { L_00420719: }
	__asm { xor eax, eax }
	__asm { L_0042071b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00420750
extern "C" __declspec(naked) void asm_00420750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70ab0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_004207a9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe350d0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004207ab }
	__asm { L_004207a9: }
	__asm { xor eax, eax }
	__asm { L_004207ab: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004207e0
extern "C" __declspec(naked) void asm_004207e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70ac0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00420839 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b400 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0042083b }
	__asm { L_00420839: }
	__asm { xor eax, eax }
	__asm { L_0042083b: }
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
