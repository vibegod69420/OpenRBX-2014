// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10e58[];
extern "C" char g_01318f60[];
extern "C" void fn_00401120();
// FUNCTION: ROBLOXSTUDIO 0x00401770
extern "C" __declspec(naked) void asm_00401770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push 0x2710 }
	__asm { mov esi, ecx }
	__asm { call fn_00401120 }
	__asm { mov cl, byte ptr [g_01318f60] }
	__asm { cmp cl, al }
	__asm { je L_004017bc }
	__asm { lea eax, [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 1 }
	__asm { test cl, cl }
	__asm { push 0x12c08e8 }
	__asm { push esi }
	__asm { sete byte ptr [g_01318f60] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_004017bc: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00403070
extern "C" __declspec(naked) void asm_00403070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { xor eax, eax }
	__asm { cmp ecx, edx }
	__asm { je L_004030a4 }
	__asm { push esi }
	__asm { push edi }
	__asm { L_00403081: }
	__asm { mov edi, eax }
	__asm { mov esi, eax }
	__asm { shr esi, 2 }
	__asm { shl edi, 6 }
	__asm { add edi, esi }
	__asm { movsx esi, byte ptr [ecx] }
	__asm { add esi, 0x9e3779b9 }
	__asm { add esi, edi }
	__asm { inc ecx }
	__asm { xor eax, esi }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp ecx, edx }
	__asm { jne L_00403081 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_004030a4: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00408320();
extern "C" void fn_004083f0();
extern "C" void fn_007cb490();
// FUNCTION: ROBLOXSTUDIO 0x00406260
extern "C" __declspec(naked) void asm_00406260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { test al, al }
	__asm { je L_00406295 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00406295: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004083f0();
// FUNCTION: ROBLOXSTUDIO 0x00407ab0
extern "C" __declspec(naked) void asm_00407ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { call fn_004083f0 }
	__asm { test al, al }
	__asm { je L_00407ae8 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00407ae8: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00409690();
// FUNCTION: ROBLOXSTUDIO 0x00409640
extern "C" __declspec(naked) void asm_00409640()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov esi, ebx }
	__asm { cmp byte ptr [ebx + 0xd], 0 }
	__asm { jne L_00409670 }
	__asm { L_00409652: }
	__asm { push dword ptr [esi + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00409690 }
	__asm { mov esi, dword ptr [esi] }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ebx, esi }
	__asm { je L_00409652 }
	__asm { L_00409670: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0040c330
extern "C" __declspec(naked) void asm_0040c330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_0040c343 }
	__asm { add edi, -0x1c }
	__asm { jmp L_0040c345 }
	__asm { L_0040c343: }
	__asm { xor edi, edi }
	__asm { L_0040c345: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov al, byte ptr [eax] }
	__asm { cmp byte ptr [ecx + edi], al }
	__asm { je L_0040c370 }
	__asm { mov byte ptr [ecx + edi], al }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0040c366 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push dword ptr [esi + 4] }
	__asm { add ecx, edi }
	__asm { call eax }
	__asm { L_0040c366: }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { L_0040c370: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0040c3a0
extern "C" __declspec(naked) void asm_0040c3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_0040c3b3 }
	__asm { add edi, -0x1c }
	__asm { jmp L_0040c3b5 }
	__asm { L_0040c3b3: }
	__asm { xor edi, edi }
	__asm { L_0040c3b5: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [ecx + edi], eax }
	__asm { je L_0040c3e0 }
	__asm { mov dword ptr [ecx + edi], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0040c3d6 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push dword ptr [esi + 4] }
	__asm { add ecx, edi }
	__asm { call eax }
	__asm { L_0040c3d6: }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { L_0040c3e0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0040d590
extern "C" __declspec(naked) void asm_0040d590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_0040d5b4 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { lea edx, [eax - 0x1c] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add ecx, edx }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0040d5b4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { xor edx, edx }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x0040e790
extern "C" __declspec(naked) void asm_0040e790()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe32f14 }
	__asm { mov dword ptr [esi + 0x2c], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { test ecx, ecx }
	__asm { je L_0040e7b9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040e7b9 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { L_0040e7b9: }
	__asm { mov dword ptr [esi], 0xe1823c }
	__asm { cmp dword ptr [esi + 0x28], 0x10 }
	__asm { jb L_0040e7d1 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0040e7d1: }
	__asm { mov dword ptr [esi + 0x28], 0xf }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x0040f0f0
extern "C" __declspec(naked) void asm_0040f0f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe18350 }
	__asm { mov dword ptr [esi + 0x2c], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { test ecx, ecx }
	__asm { je L_0040f119 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0040f119 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { L_0040f119: }
	__asm { mov dword ptr [esi], 0xe1823c }
	__asm { cmp dword ptr [esi + 0x28], 0x10 }
	__asm { jb L_0040f131 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0040f131: }
	__asm { mov dword ptr [esi + 0x28], 0xf }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" void fn_0040f730();
// FUNCTION: ROBLOXSTUDIO 0x0040f850
extern "C" __declspec(naked) void asm_0040f850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_0040f86a }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_0040f730 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040f86a: }
	__asm { mov edx, esi }
	__asm { push edi }
	__asm { lea edi, [edx + 1] }
	__asm { L_0040f870: }
	__asm { mov al, byte ptr [edx] }
	__asm { inc edx }
	__asm { test al, al }
	__asm { jne L_0040f870 }
	__asm { sub edx, edi }
	__asm { pop edi }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_0040f730 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0040fc60
extern "C" __declspec(naked) void asm_0040fc60()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_0040fca1 }
	__asm { add esi, 5 }
	__asm { je L_0040fc71 }
	__asm { add esi, -5 }
	__asm { jmp L_0040fc73 }
	__asm { L_0040fc71: }
	__asm { xor esi, esi }
	__asm { L_0040fc73: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0040fca0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0040fca0 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0040fca0: }
	__asm { pop edi }
	__asm { L_0040fca1: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e13174[];
extern "C" void fn_004113b0();
// FUNCTION: ROBLOXSTUDIO 0x00411410
extern "C" __declspec(naked) void asm_00411410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor eax, eax }
	__asm { xchg dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { lea esi, [eax + 0xc] }
	__asm { jne L_0041143d }
	__asm { push ecx }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call fn_004113b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call dword ptr [g_00e13174] }
	__asm { L_0041143d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0041144b }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0041144b: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00412550
extern "C" __declspec(naked) void asm_00412550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_0041256a }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0041256a: }
	__asm { mov edx, esi }
	__asm { push edi }
	__asm { lea edi, [edx + 1] }
	__asm { L_00412570: }
	__asm { mov al, byte ptr [edx] }
	__asm { inc edx }
	__asm { test al, al }
	__asm { jne L_00412570 }
	__asm { sub edx, edi }
	__asm { pop edi }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00412ce0
extern "C" __declspec(naked) void asm_00412ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_00412d1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { L_00412cf6: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00412d03 }
	__asm { push dword ptr [esi] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00412d03: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { add esi, 0x18 }
	__asm { cmp esi, edi }
	__asm { jne L_00412cf6 }
	__asm { pop ebx }
	__asm { L_00412d1c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11008[];
// FUNCTION: ROBLOXSTUDIO 0x004143c0
extern "C" __declspec(naked) void asm_004143c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { js L_004143da }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { sub edx, dword ptr [eax + 8] }
	__asm { cmp esi, edx }
	__asm { jl L_004143f7 }
	__asm { L_004143da: }
	__asm { push 0x1c3 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1002fbc }
	__asm { push 0x1002fa4 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_004143f7: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { add esi, 5 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, esi }
	__asm { pop edi }
	__asm { lea eax, [ecx + eax*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f9c[];
extern "C" char g_00e10fdc[];
extern "C" void fn_0041f150();
// FUNCTION: ROBLOXSTUDIO 0x0041a320
extern "C" __declspec(naked) void asm_0041a320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { je L_0041a35d }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0041f150 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { je L_0041a35d }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10f9c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0041a35d: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10fdc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00420c60
extern "C" __declspec(naked) void asm_00420c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, esi }
	__asm { je L_00420ca2 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00420c71: }
	__asm { test edx, edx }
	__asm { je L_00420c93 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [ecx], 0 }
	__asm { L_00420c93: }
	__asm { add ecx, 8 }
	__asm { add edx, 8 }
	__asm { cmp ecx, esi }
	__asm { jne L_00420c71 }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00420ca2: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00420cb0
extern "C" __declspec(naked) void asm_00420cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, esi }
	__asm { je L_00420ceb }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00420cc1: }
	__asm { test edx, edx }
	__asm { je L_00420cdc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { L_00420cdc: }
	__asm { add ecx, 8 }
	__asm { add edx, 8 }
	__asm { cmp ecx, esi }
	__asm { jne L_00420cc1 }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00420ceb: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004220b0
extern "C" __declspec(naked) void asm_004220b0()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { test edi, edi }
	__asm { je L_004220e6 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_004220cf }
	__asm { push dword ptr [edi] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_004220cf: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_004220e6: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_004220f3 }
	__asm { push dword ptr [esi] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_004220f3: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x00422630
extern "C" __declspec(naked) void asm_00422630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_0042263f }
	__asm { xor eax, eax }
	__asm { jmp L_0042264f }
	__asm { L_0042263f: }
	__asm { mov eax, edx }
	__asm { push esi }
	__asm { lea esi, [eax + 1] }
	__asm { L_00422645: }
	__asm { mov cl, byte ptr [eax] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_00422645 }
	__asm { sub eax, esi }
	__asm { pop esi }
	__asm { L_0042264f: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edx }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x00422670
extern "C" __declspec(naked) void asm_00422670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_0042267f }
	__asm { xor eax, eax }
	__asm { jmp L_0042268f }
	__asm { L_0042267f: }
	__asm { mov eax, edx }
	__asm { push esi }
	__asm { lea esi, [eax + 1] }
	__asm { L_00422685: }
	__asm { mov cl, byte ptr [eax] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_00422685 }
	__asm { sub eax, esi }
	__asm { pop esi }
	__asm { L_0042268f: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edx }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426850();
// FUNCTION: ROBLOXSTUDIO 0x00424410
extern "C" __declspec(naked) void asm_00424410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_0042442d }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00426850 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042442d: }
	__asm { mov edx, esi }
	__asm { push edi }
	__asm { lea edi, [edx + 1] }
	__asm { L_00424433: }
	__asm { mov al, byte ptr [edx] }
	__asm { inc edx }
	__asm { test al, al }
	__asm { jne L_00424433 }
	__asm { sub edx, edi }
	__asm { pop edi }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00426850 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x004268f0
extern "C" __declspec(naked) void asm_004268f0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp esi, ebx }
	__asm { je L_00426923 }
	__asm { mov edi, edi }
	__asm { L_00426900: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00426913 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00426913: }
	__asm { add esi, 0x44 }
	__asm { cmp esi, ebx }
	__asm { jne L_00426900 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00426923: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00426f10
extern "C" __declspec(naked) void asm_00426f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_00426f3e }
	__asm { add esi, 4 }
	__asm { L_00426f22: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00426f34 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00426f34: }
	__asm { add esi, 0x44 }
	__asm { lea eax, [esi - 4] }
	__asm { cmp eax, edi }
	__asm { jne L_00426f22 }
	__asm { L_00426f3e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00426f50
extern "C" __declspec(naked) void asm_00426f50()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00426f9c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_00426f7c }
	__asm { L_00426f62: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00426f75 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00426f75: }
	__asm { add esi, 0x44 }
	__asm { cmp esi, ebx }
	__asm { jne L_00426f62 }
	__asm { L_00426f7c: }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { pop ebx }
	__asm { L_00426f9c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00427560();
// FUNCTION: ROBLOXSTUDIO 0x004275e0
extern "C" __declspec(naked) void asm_004275e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp eax, 1 }
	__asm { jne L_0042761f }
	__asm { push 0x15 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0x1004fec }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042761f: }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00427560 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10264[];
// FUNCTION: ROBLOXSTUDIO 0x0042bc60
extern "C" __declspec(naked) void asm_0042bc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], eax }
	__asm { jae L_0042bc76 }
	__asm { push 0xf12f30 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_0042bc76: }
	__asm { cmp dword ptr [ecx + 0x14], 8 }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { jb L_0042bc8f }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { mov word ptr [edx + eax*2], si }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042bc8f: }
	__asm { push esi }
	__asm { mov edx, ecx }
	__asm { xor esi, esi }
	__asm { mov word ptr [edx + eax*2], si }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0042cf20
extern "C" __declspec(naked) void asm_0042cf20()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0042cf6b }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { dec edx }
	__asm { and edx, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0042cf48 }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0042cf48: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { dec dword ptr [esi + 0x10] }
	__asm { pop edi }
	__asm { jne L_0042cf68 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0042cf68: }
	__asm { inc dword ptr [esi + 0xc] }
	__asm { L_0042cf6b: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10578[];
// FUNCTION: ROBLOXSTUDIO 0x0042d8f0
extern "C" __declspec(naked) void asm_0042d8f0()
{
	__asm { mov eax, dword ptr [ecx + 0x50] }
	__asm { test eax, eax }
	__asm { je L_0042d8ff }
	__asm { push eax }
	__asm { call dword ptr [g_00e10578] }
	__asm { pop ecx }
	__asm { L_0042d8ff: }
	__asm { ret }
	__asm { push esi }
	__asm { mov edx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx + 0xc] }
	__asm { lea esi, [edx + 0x44] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, esi }
	__asm { je L_0042d920 }
	__asm { mov ecx, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [edx + 0x38], eax }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0x3c], eax }
	__asm { L_0042d920: }
	__asm { mov dword ptr [edi], esi }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { sub ecx, esi }
	__asm { add ecx, 0x45 }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10354[];
extern "C" char g_00e10368[];
extern "C" void fn_0042df00();
// FUNCTION: ROBLOXSTUDIO 0x0042dff0
extern "C" __declspec(naked) void asm_0042dff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_0042df00 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10368] }
	__asm { test al, al }
	__asm { je L_0042e01d }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042e01d: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x40], edi }
	__asm { call dword ptr [g_00e10354] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x0042e380
extern "C" __declspec(naked) void asm_0042e380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { cmp eax, 1 }
	__asm { jne L_0042e3a2 }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { jb L_0042e395 }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_0042e395: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov cl, byte ptr [ebp + 0x10] }
	__asm { mov byte ptr [edx + eax], cl }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0042e3a2: }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { jb L_0042e3aa }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_0042e3aa: }
	__asm { push eax }
	__asm { movsx eax, byte ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0042eba0();
// FUNCTION: ROBLOXSTUDIO 0x0042ec30
extern "C" __declspec(naked) void asm_0042ec30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov edx, dword ptr [edi] }
	__asm { sub edx, 0x10 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { cmp dword ptr [edx + 8], esi }
	__asm { jge L_0042ec62 }
	__asm { test esi, esi }
	__asm { jle L_0042ec62 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { push esi }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_0042ec62 }
	__asm { add eax, 0x10 }
	__asm { mov dword ptr [edi], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042ec62: }
	__asm { call fn_0042eba0 }
}

extern "C" void fn_0042f410();
extern "C" void fn_00437220();
// FUNCTION: ROBLOXSTUDIO 0x004301b0
extern "C" __declspec(naked) void asm_004301b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [esi + 0x5c] }
	__asm { push esp }
	__asm { call fn_0042f410 }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { test eax, eax }
	__asm { je L_004301e1 }
	__asm { mov eax, dword ptr [eax + 0x128] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00437220 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004301e1: }
	__asm { or eax, 0xffffffff }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00437220 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004360c0();
extern "C" void fn_007a3930();
// FUNCTION: ROBLOXSTUDIO 0x00433780
extern "C" __declspec(naked) void asm_00433780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { je L_004337b4 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { call fn_007a3930 }
	__asm { test eax, eax }
	__asm { je L_004337a7 }
	__asm { cmp byte ptr [eax + 0x64], bl }
	__asm { sete bl }
	__asm { inc ebx }
	__asm { L_004337a7: }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push ebx }
	__asm { lea eax, [edi - 1] }
	__asm { push eax }
	__asm { call fn_004360c0 }
	__asm { L_004337b4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0eb4[];
extern "C" void fn_007a61b0();
extern "C" void fn_007a61f0();
extern "C" void fn_007abd40();
// FUNCTION: ROBLOXSTUDIO 0x00433a60
extern "C" __declspec(naked) void asm_00433a60()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00433ab1 }
	__asm { mov edx, dword ptr [ecx + 0xb4] }
	__asm { test edx, edx }
	__asm { je L_00433a7e }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [edx + 8], eax }
	__asm { sete al }
	__asm { jmp L_00433a83 }
	__asm { L_00433a7e: }
	__asm { mov eax, 1 }
	__asm { L_00433a83: }
	__asm { test al, al }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_00433ab1 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { je L_00433a9f }
	__asm { push dword ptr [esi + 0x58] }
	__asm { call fn_007a61f0 }
	__asm { jmp L_00433aa4 }
	__asm { L_00433a9f: }
	__asm { call fn_007a61b0 }
	__asm { L_00433aa4: }
	__asm { test al, al }
	__asm { je L_00433ab1 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { pop esi }
	__asm { jmp fn_007abd40 }
	__asm { L_00433ab1: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012e0eb4[];
extern "C" void fn_007a61b0();
extern "C" void fn_007a61f0();
extern "C" void fn_007abff0();
// FUNCTION: ROBLOXSTUDIO 0x00433ac0
extern "C" __declspec(naked) void asm_00433ac0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00433b11 }
	__asm { mov edx, dword ptr [ecx + 0xb4] }
	__asm { test edx, edx }
	__asm { je L_00433ade }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [edx + 8], eax }
	__asm { sete al }
	__asm { jmp L_00433ae3 }
	__asm { L_00433ade: }
	__asm { mov eax, 1 }
	__asm { L_00433ae3: }
	__asm { test al, al }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_00433b11 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { je L_00433aff }
	__asm { push dword ptr [esi + 0x58] }
	__asm { call fn_007a61f0 }
	__asm { jmp L_00433b04 }
	__asm { L_00433aff: }
	__asm { call fn_007a61b0 }
	__asm { L_00433b04: }
	__asm { test al, al }
	__asm { je L_00433b11 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { pop esi }
	__asm { jmp fn_007abff0 }
	__asm { L_00433b11: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012e0eb4[];
extern "C" void fn_007a61b0();
extern "C" void fn_007a61f0();
extern "C" void fn_007abe90();
// FUNCTION: ROBLOXSTUDIO 0x00433b20
extern "C" __declspec(naked) void asm_00433b20()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00433b71 }
	__asm { mov edx, dword ptr [ecx + 0xb4] }
	__asm { test edx, edx }
	__asm { je L_00433b3e }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [edx + 8], eax }
	__asm { sete al }
	__asm { jmp L_00433b43 }
	__asm { L_00433b3e: }
	__asm { mov eax, 1 }
	__asm { L_00433b43: }
	__asm { test al, al }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_00433b71 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { je L_00433b5f }
	__asm { push dword ptr [esi + 0x58] }
	__asm { call fn_007a61f0 }
	__asm { jmp L_00433b64 }
	__asm { L_00433b5f: }
	__asm { call fn_007a61b0 }
	__asm { L_00433b64: }
	__asm { test al, al }
	__asm { je L_00433b71 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { pop esi }
	__asm { jmp fn_007abe90 }
	__asm { L_00433b71: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012e0eb4[];
extern "C" void fn_007a6160();
// FUNCTION: ROBLOXSTUDIO 0x00433bb0
extern "C" __declspec(naked) void asm_00433bb0()
{
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00433bf2 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { je L_00433bcb }
	__asm { push dword ptr [ecx + 0x58] }
	__asm { mov ecx, eax }
	__asm { call fn_007a6160 }
	__asm { ret }
	__asm { L_00433bcb: }
	__asm { mov eax, dword ptr [eax + 0x110] }
	__asm { test eax, eax }
	__asm { je L_00433be5 }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [eax + 8], ecx }
	__asm { sete cl }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { ret }
	__asm { L_00433be5: }
	__asm { mov ecx, 1 }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { ret }
	__asm { L_00433bf2: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_0043e620();
// FUNCTION: ROBLOXSTUDIO 0x00436ca0
extern "C" __declspec(naked) void asm_00436ca0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00436ce0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_00436cc0 }
	__asm { L_00436cb2: }
	__asm { mov ecx, esi }
	__asm { call fn_0043e620 }
	__asm { add esi, 0x78 }
	__asm { cmp esi, ebx }
	__asm { jne L_00436cb2 }
	__asm { L_00436cc0: }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { pop ebx }
	__asm { L_00436ce0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b18c[];
extern "C" void fn_0043b740();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00437ad0
extern "C" __declspec(naked) void asm_00437ad0()
{
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00437b1e }
	__asm { cmp dword ptr [g_0131b18c], 0x29a }
	__asm { je L_00437b1e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00437b0d }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00437b1e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00437b0d: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00437b1e: }
	__asm { call fn_0043b740 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x0043d400
extern "C" __declspec(naked) void asm_0043d400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { xor esi, esi }
	__asm { nop }
	__asm { L_0043d410: }
	__asm { test eax, eax }
	__asm { je L_0043d419 }
	__asm { lea ecx, [eax - 8] }
	__asm { jmp L_0043d41b }
	__asm { L_0043d419: }
	__asm { xor ecx, ecx }
	__asm { L_0043d41b: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { dec dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { inc esi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_0043d410 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0043e3c0
extern "C" __declspec(naked) void asm_0043e3c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x88888889 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 6 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov ecx, esi }
	__asm { shr ecx, 1 }
	__asm { mov eax, 0x2222222 }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_0043e3fb }
	__asm { xor esi, esi }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0043e3fb: }
	__asm { add esi, ecx }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12984[];
extern "C" char g_00e129cc[];
extern "C" char g_00e12ac0[];
// FUNCTION: ROBLOXSTUDIO 0x004446a0
extern "C" __declspec(naked) void asm_004446a0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call dword ptr [g_00e129cc] }
	__asm { mov edi, eax }
	__asm { xor esi, esi }
	__asm { test edi, edi }
	__asm { jle L_004446d4 }
	__asm { L_004446b3: }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12984] }
	__asm { test eax, eax }
	__asm { je L_004446cf }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12ac0] }
	__asm { cmp eax, 2 }
	__asm { je L_004446da }
	__asm { L_004446cf: }
	__asm { inc esi }
	__asm { cmp esi, edi }
	__asm { jl L_004446b3 }
	__asm { L_004446d4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_004446da: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00449a50
extern "C" __declspec(naked) void asm_00449a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { je L_00449a7d }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_00449a7d }
	__asm { add eax, -0x5c }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00449a7d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11008[];
extern "C" void fn_0041f450();
// FUNCTION: ROBLOXSTUDIO 0x0044a510
extern "C" __declspec(naked) void asm_0044a510()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { sub edx, dword ptr [eax + 8] }
	__asm { test edx, edx }
	__asm { jg L_0044a53c }
	__asm { push 0x1c7 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1002fbc }
	__asm { push 0x1002fa4 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_0044a53c: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_0044a54f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0041f450 }
	__asm { L_0044a54f: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, 5 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { ret 4 }
}

extern "C" char g_0131a254[];
extern "C" char g_0131a258[];
extern "C" char g_0131a25c[];
extern "C" char g_0131a260[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0044cd80
extern "C" __declspec(naked) void asm_0044cd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044cd9a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { L_0044cd9a: }
	__asm { mov eax, dword ptr [g_0131a254] }
	__asm { test al, 1 }
	__asm { jne L_0044cdd6 }
	__asm { or eax, 1 }
	__asm { push 0xddc0c0 }
	__asm { mov dword ptr [g_0131a254], eax }
	__asm { mov dword ptr [g_0131a258], 0x12bdfc0 }
	__asm { mov dword ptr [g_0131a260], 0x410980 }
	__asm { mov dword ptr [g_0131a25c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0044cdd6: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0x131a258 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131a54c[];
extern "C" char g_0131a550[];
extern "C" char g_0131a554[];
extern "C" char g_0131a558[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0044cdf0
extern "C" __declspec(naked) void asm_0044cdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044ce0a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0044ce0a: }
	__asm { mov eax, dword ptr [g_0131a54c] }
	__asm { test al, 1 }
	__asm { jne L_0044ce46 }
	__asm { or eax, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], eax }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0044ce46: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0x131a550 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131b1d4[];
extern "C" char g_0131b1d8[];
extern "C" char g_0131b1dc[];
extern "C" char g_0131b1e0[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0044ce60
extern "C" __declspec(naked) void asm_0044ce60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044ce86 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_0044ce86: }
	__asm { mov eax, dword ptr [g_0131b1d4] }
	__asm { test al, 1 }
	__asm { jne L_0044cec2 }
	__asm { or eax, 1 }
	__asm { push 0xddc710 }
	__asm { mov dword ptr [g_0131b1d4], eax }
	__asm { mov dword ptr [g_0131b1d8], 0x12c38e4 }
	__asm { mov dword ptr [g_0131b1e0], 0x44da30 }
	__asm { mov dword ptr [g_0131b1dc], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0044cec2: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0x131b1d8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131dfec[];
extern "C" char g_0131dff0[];
extern "C" char g_0131dff4[];
extern "C" char g_0131dff8[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0044cf90
extern "C" __declspec(naked) void asm_0044cf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044cfb2 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ax, word ptr [edx + 4] }
	__asm { mov word ptr [ecx + 4], ax }
	__asm { L_0044cfb2: }
	__asm { mov eax, dword ptr [g_0131dfec] }
	__asm { test al, 1 }
	__asm { jne L_0044cfee }
	__asm { or eax, 1 }
	__asm { push 0xddc6f0 }
	__asm { mov dword ptr [g_0131dfec], eax }
	__asm { mov dword ptr [g_0131dff0], 0x12c3798 }
	__asm { mov dword ptr [g_0131dff8], 0x44d0f0 }
	__asm { mov dword ptr [g_0131dff4], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0044cfee: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0x131dff0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131b1b4[];
extern "C" char g_0131b1b8[];
extern "C" char g_0131b1bc[];
extern "C" char g_0131b1c0[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0044d080
extern "C" __declspec(naked) void asm_0044d080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044d0a0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0044d0a0: }
	__asm { mov eax, dword ptr [g_0131b1c0] }
	__asm { test al, 1 }
	__asm { jne L_0044d0dc }
	__asm { or eax, 1 }
	__asm { push 0xddc6e0 }
	__asm { mov dword ptr [g_0131b1c0], eax }
	__asm { mov dword ptr [g_0131b1b4], 0x12c3744 }
	__asm { mov dword ptr [g_0131b1bc], 0x44d110 }
	__asm { mov dword ptr [g_0131b1b8], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0044d0dc: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0x131b1b4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e123cc[];
extern "C" void fn_0044f100();
extern "C" void fn_0044f470();
// FUNCTION: ROBLOXSTUDIO 0x0044f430
extern "C" __declspec(naked) void asm_0044f430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e123cc] }
	__asm { cmp byte ptr [esi + 0x29], 0 }
	__asm { je L_0044f459 }
	__asm { mov ecx, esi }
	__asm { call fn_0044f100 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044f459: }
	__asm { cmp dword ptr [edi + 0x20], 1 }
	__asm { je L_0044f466 }
	__asm { mov ecx, esi }
	__asm { call fn_0044f470 }
	__asm { L_0044f466: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1228c[];
extern "C" char g_00e12c74[];
extern "C" void fn_0044f100();
extern "C" void fn_0044f470();
// FUNCTION: ROBLOXSTUDIO 0x0044f740
extern "C" __declspec(naked) void asm_0044f740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0044f78b }
	__asm { cmp byte ptr [esi + 0x29], 0 }
	__asm { jne L_0044f790 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov byte ptr [esi + 0x29], 1 }
	__asm { call dword ptr [g_00e12c74] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call dword ptr [g_00e1228c] }
	__asm { mov ecx, esi }
	__asm { call fn_0044f100 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044f78b: }
	__asm { call fn_0044f470 }
	__asm { L_0044f790: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11008[];
extern "C" char g_00e12214[];
extern "C" char g_00e12c8c[];
// FUNCTION: ROBLOXSTUDIO 0x004500c0
extern "C" __declspec(naked) void asm_004500c0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { call dword ptr [g_00e12214] }
	__asm { mov esi, eax }
	__asm { cmp esi, -1 }
	__asm { jne L_004500d9 }
	__asm { L_004500d4: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_004500d9: }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { test al, al }
	__asm { jne L_004500d4 }
	__asm { test esi, esi }
	__asm { js L_004500f2 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp esi, dword ptr [eax + 8] }
	__asm { jl L_0045010f }
	__asm { L_004500f2: }
	__asm { push 0x14d }
	__asm { push 0x100b998 }
	__asm { push 0x1002fbc }
	__asm { push 0x100b980 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_0045010f: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + esi*4 + 0x10] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1220c[];
extern "C" char g_00e12264[];
extern "C" char g_00e12794[];
// FUNCTION: ROBLOXSTUDIO 0x004503b0
extern "C" __declspec(naked) void asm_004503b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { call dword ptr [g_00e12264] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { lea edi, [ebx + 0x10] }
	__asm { push edi }
	__asm { call dword ptr [g_00e1220c] }
	__asm { cmp eax, -1 }
	__asm { je L_004503ed }
	__asm { cmp dword ptr [ebx + 0x20], 1 }
	__asm { jne L_004503ed }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov byte ptr [esi + 0x18], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { L_004503ed: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { push 7 }
	__asm { call dword ptr [g_00e12794] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11008[];
extern "C" void fn_00450b70();
// FUNCTION: ROBLOXSTUDIO 0x00450980
extern "C" __declspec(naked) void asm_00450980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { js L_00450995 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp edi, dword ptr [eax + 8] }
	__asm { jl L_004509b2 }
	__asm { L_00450995: }
	__asm { push 0x151 }
	__asm { push 0x100b998 }
	__asm { push 0x1002fbc }
	__asm { push 0x100b980 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_004509b2: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_004509c8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_00450b70 }
	__asm { L_004509c8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea eax, [eax + edi*4] }
	__asm { pop edi }
	__asm { add eax, 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_0049b0b0();
extern "C" void fn_0049b1d0();
// FUNCTION: ROBLOXSTUDIO 0x00454300
extern "C" __declspec(naked) void asm_00454300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00454350 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bfd70 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00454332 }
	__asm { push 0x30 }
	__asm { push 0x100cea0 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00454332: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00454346 }
	__asm { dec eax }
	__asm { jne L_0045434f }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_0049b1d0 }
	__asm { L_00454346: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_0049b0b0 }
	__asm { L_0045434f: }
	__asm { pop esi }
	__asm { L_00454350: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00454300();
// FUNCTION: ROBLOXSTUDIO 0x00454410
extern "C" __declspec(naked) void asm_00454410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0045444b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00454449 }
	__asm { cmp esi, 2 }
	__asm { jge L_00454446 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00454300 }
	__asm { add esp, 0x10 }
	__asm { L_00454446: }
	__asm { sub esi, 2 }
	__asm { L_00454449: }
	__asm { mov eax, esi }
	__asm { L_0045444b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e5c[];
extern "C" void fn_00454460();
// FUNCTION: ROBLOXSTUDIO 0x00454580
extern "C" __declspec(naked) void asm_00454580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e5c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_004545bb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_004545b9 }
	__asm { cmp esi, 2 }
	__asm { jge L_004545b6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00454460 }
	__asm { add esp, 0x10 }
	__asm { L_004545b6: }
	__asm { sub esi, 2 }
	__asm { L_004545b9: }
	__asm { mov eax, esi }
	__asm { L_004545bb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_004545d0();
// FUNCTION: ROBLOXSTUDIO 0x004548c0
extern "C" __declspec(naked) void asm_004548c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_004548fb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_004548f9 }
	__asm { cmp esi, 0xa }
	__asm { jge L_004548f6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_004545d0 }
	__asm { add esp, 0x10 }
	__asm { L_004548f6: }
	__asm { sub esi, 0xa }
	__asm { L_004548f9: }
	__asm { mov eax, esi }
	__asm { L_004548fb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12104[];
extern "C" void fn_00454910();
// FUNCTION: ROBLOXSTUDIO 0x00454b80
extern "C" __declspec(naked) void asm_00454b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00454bbb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00454bb9 }
	__asm { cmp esi, 9 }
	__asm { jge L_00454bb6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00454910 }
	__asm { add esp, 0x10 }
	__asm { L_00454bb6: }
	__asm { sub esi, 9 }
	__asm { L_00454bb9: }
	__asm { mov eax, esi }
	__asm { L_00454bbb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00454bd0();
// FUNCTION: ROBLOXSTUDIO 0x00454d50
extern "C" __declspec(naked) void asm_00454d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00454d8b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00454d89 }
	__asm { cmp esi, 7 }
	__asm { jge L_00454d86 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00454bd0 }
	__asm { add esp, 0x10 }
	__asm { L_00454d86: }
	__asm { sub esi, 7 }
	__asm { L_00454d89: }
	__asm { mov eax, esi }
	__asm { L_00454d8b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e120fc[];
extern "C" void fn_00454e00();
// FUNCTION: ROBLOXSTUDIO 0x00454f10
extern "C" __declspec(naked) void asm_00454f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e120fc] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00454f4b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00454f49 }
	__asm { cmp esi, 2 }
	__asm { jge L_00454f46 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00454e00 }
	__asm { add esp, 0x10 }
	__asm { L_00454f46: }
	__asm { sub esi, 2 }
	__asm { L_00454f49: }
	__asm { mov eax, esi }
	__asm { L_00454f4b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e120f0[];
extern "C" void fn_00454f60();
// FUNCTION: ROBLOXSTUDIO 0x004551b0
extern "C" __declspec(naked) void asm_004551b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e120f0] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_004551eb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_004551e9 }
	__asm { cmp esi, 0xd }
	__asm { jge L_004551e6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00454f60 }
	__asm { add esp, 0x10 }
	__asm { L_004551e6: }
	__asm { sub esi, 0xd }
	__asm { L_004551e9: }
	__asm { mov eax, esi }
	__asm { L_004551eb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e123b4[];
extern "C" void fn_00457690();
extern "C" void fn_00457800();
// FUNCTION: ROBLOXSTUDIO 0x004563a0
extern "C" __declspec(naked) void asm_004563a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e123b4] }
	__asm { cmp word ptr [edi + 8], 6 }
	__asm { jne L_004563e5 }
	__asm { mov cx, word ptr [edi + 0x14] }
	__asm { cmp cx, 0x13 }
	__asm { jne L_004563d6 }
	__asm { mov ecx, esi }
	__asm { call fn_00457690 }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004563d6: }
	__asm { cmp cx, 0x15 }
	__asm { jne L_004563e5 }
	__asm { mov ecx, esi }
	__asm { call fn_00457800 }
	__asm { mov al, 1 }
	__asm { L_004563e5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11008[];
// FUNCTION: ROBLOXSTUDIO 0x00458920
extern "C" __declspec(naked) void asm_00458920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { js L_0045893a }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { sub edx, dword ptr [eax + 8] }
	__asm { cmp esi, edx }
	__asm { jl L_00458957 }
	__asm { L_0045893a: }
	__asm { push 0x1c3 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1002fbc }
	__asm { push 0x1002fa4 }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_00458957: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, esi }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0x14] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x0045fd50
extern "C" __declspec(naked) void asm_0045fd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe3cb1c }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0045fd7c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0045fd7c }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0045fd7c: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0045fd9a }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0045fd9a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11fbc[];
extern "C" char g_00e125e4[];
extern "C" char g_00e1267c[];
extern "C" char g_00e12680[];
extern "C" char g_00e12c8c[];
// FUNCTION: ROBLOXSTUDIO 0x004611e0
extern "C" __declspec(naked) void asm_004611e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e11fbc] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { test al, al }
	__asm { je L_0046121e }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1267c] }
	__asm { cmp eax, -1 }
	__asm { jne L_0046121e }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e125e4] }
	__asm { test eax, eax }
	__asm { jle L_0046121e }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12680] }
	__asm { L_0046121e: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x00465ef0
extern "C" __declspec(naked) void asm_00465ef0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 8 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00465f2a }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00465f2a: }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x38], 0xf }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10f90[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00467700
extern "C" __declspec(naked) void asm_00467700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_0046772c }
	__asm { push edi }
	__asm { L_00467710: }
	__asm { lea edi, [esi] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { lea ecx, [edi - 8] }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [edi - 4] }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp esi, ebx }
	__asm { jne L_00467710 }
	__asm { pop edi }
	__asm { L_0046772c: }
	__asm { push 8 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10f90] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10508[];
extern "C" void fn_004671d0();
// FUNCTION: ROBLOXSTUDIO 0x00467de0
extern "C" __declspec(naked) void asm_00467de0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x38], 0x10 }
	__asm { mov edi, dword ptr [g_00e10508] }
	__asm { jb L_00467df8 }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_00467df8: }
	__asm { mov dword ptr [esi + 0x38], 0xf }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 0x20] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00467e1c }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_00467e1c: }
	__asm { mov ecx, esi }
	__asm { call fn_004671d0 }
	__asm { push dword ptr [esi] }
	__asm { call edi }
	__asm { push esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { call edi }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10d78[];
// FUNCTION: ROBLOXSTUDIO 0x004680e0
extern "C" __declspec(naked) void asm_004680e0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { sub eax, esi }
	__asm { sar eax, 2 }
	__asm { test eax, eax }
	__asm { je L_0046811c }
	__asm { cmp esi, dword ptr [edi + 0x1c] }
	__asm { je L_00468116 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10d78] }
	__asm { nop }
	__asm { L_00468100: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_0046810d }
	__asm { push 0x100f11c }
	__asm { call ebx }
	__asm { L_0046810d: }
	__asm { add esi, 4 }
	__asm { cmp esi, dword ptr [edi + 0x1c] }
	__asm { jne L_00468100 }
	__asm { pop ebx }
	__asm { L_00468116: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { L_0046811c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e12104[];
extern "C" void fn_004692c0();
// FUNCTION: ROBLOXSTUDIO 0x004693e0
extern "C" __declspec(naked) void asm_004693e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046941b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00469419 }
	__asm { cmp esi, 3 }
	__asm { jge L_00469416 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_004692c0 }
	__asm { add esp, 0x10 }
	__asm { L_00469416: }
	__asm { sub esi, 3 }
	__asm { L_00469419: }
	__asm { mov eax, esi }
	__asm { L_0046941b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00469430();
// FUNCTION: ROBLOXSTUDIO 0x00469570
extern "C" __declspec(naked) void asm_00469570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_004695ab }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_004695a9 }
	__asm { cmp esi, 4 }
	__asm { jge L_004695a6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00469430 }
	__asm { add esp, 0x10 }
	__asm { L_004695a6: }
	__asm { sub esi, 4 }
	__asm { L_004695a9: }
	__asm { mov eax, esi }
	__asm { L_004695ab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_004695c0();
// FUNCTION: ROBLOXSTUDIO 0x004697e0
extern "C" __declspec(naked) void asm_004697e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046981b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00469819 }
	__asm { cmp esi, 0xc }
	__asm { jge L_00469816 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_004695c0 }
	__asm { add esp, 0x10 }
	__asm { L_00469816: }
	__asm { sub esi, 0xc }
	__asm { L_00469819: }
	__asm { mov eax, esi }
	__asm { L_0046981b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11f0c[];
extern "C" void fn_00469830();
// FUNCTION: ROBLOXSTUDIO 0x00469970
extern "C" __declspec(naked) void asm_00469970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11f0c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_004699ab }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_004699a9 }
	__asm { cmp esi, 3 }
	__asm { jge L_004699a6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00469830 }
	__asm { add esp, 0x10 }
	__asm { L_004699a6: }
	__asm { sub esi, 3 }
	__asm { L_004699a9: }
	__asm { mov eax, esi }
	__asm { L_004699ab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11f0c[];
extern "C" void fn_00469830();
// FUNCTION: ROBLOXSTUDIO 0x00469a70
extern "C" __declspec(naked) void asm_00469a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11f0c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00469aa9 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00469aa9 }
	__asm { cmp esi, 3 }
	__asm { jge L_00469aa6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00469830 }
	__asm { add esp, 0x10 }
	__asm { L_00469aa6: }
	__asm { sub esi, 3 }
	__asm { L_00469aa9: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_00469ac0();
// FUNCTION: ROBLOXSTUDIO 0x00469bc0
extern "C" __declspec(naked) void asm_00469bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00469bf9 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00469bf7 }
	__asm { cmp esi, 1 }
	__asm { jge L_00469bf6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00469ac0 }
	__asm { add esp, 0x10 }
	__asm { L_00469bf6: }
	__asm { dec esi }
	__asm { L_00469bf7: }
	__asm { mov eax, esi }
	__asm { L_00469bf9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_00469c00();
// FUNCTION: ROBLOXSTUDIO 0x00469db0
extern "C" __declspec(naked) void asm_00469db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00469deb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00469de9 }
	__asm { cmp esi, 4 }
	__asm { jge L_00469de6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00469c00 }
	__asm { add esp, 0x10 }
	__asm { L_00469de6: }
	__asm { sub esi, 4 }
	__asm { L_00469de9: }
	__asm { mov eax, esi }
	__asm { L_00469deb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00446490();
// FUNCTION: ROBLOXSTUDIO 0x00469fe0
extern "C" __declspec(naked) void asm_00469fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046a026 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12bfe48 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046a015 }
	__asm { push 0x1b2 }
	__asm { push 0x100fc00 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046a015: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_0046a025 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00446490 }
	__asm { L_0046a025: }
	__asm { pop esi }
	__asm { L_0046a026: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e121e4[];
extern "C" void fn_00469fe0();
// FUNCTION: ROBLOXSTUDIO 0x0046a0e0
extern "C" __declspec(naked) void asm_0046a0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046a119 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046a117 }
	__asm { cmp esi, 1 }
	__asm { jge L_0046a116 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00469fe0 }
	__asm { add esp, 0x10 }
	__asm { L_0046a116: }
	__asm { dec esi }
	__asm { L_0046a117: }
	__asm { mov eax, esi }
	__asm { L_0046a119: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11f0c[];
extern "C" void fn_0046a120();
// FUNCTION: ROBLOXSTUDIO 0x0046a230
extern "C" __declspec(naked) void asm_0046a230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11f0c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046a26b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046a269 }
	__asm { cmp esi, 2 }
	__asm { jge L_0046a266 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046a120 }
	__asm { add esp, 0x10 }
	__asm { L_0046a266: }
	__asm { sub esi, 2 }
	__asm { L_0046a269: }
	__asm { mov eax, esi }
	__asm { L_0046a26b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
// FUNCTION: ROBLOXSTUDIO 0x0046a280
extern "C" __declspec(naked) void asm_0046a280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046a2e0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12bfe78 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046a2b3 }
	__asm { push 0x2e }
	__asm { push 0x100fc50 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046a2b3: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_0046a2e0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12bfe78 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_0046a2e0: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e68[];
extern "C" void fn_0046a280();
// FUNCTION: ROBLOXSTUDIO 0x0046a3a0
extern "C" __declspec(naked) void asm_0046a3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046a3d9 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046a3d7 }
	__asm { cmp esi, 1 }
	__asm { jge L_0046a3d6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046a280 }
	__asm { add esp, 0x10 }
	__asm { L_0046a3d6: }
	__asm { dec esi }
	__asm { L_0046a3d7: }
	__asm { mov eax, esi }
	__asm { L_0046a3d9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12ba4[];
extern "C" void fn_0046a3e0();
// FUNCTION: ROBLOXSTUDIO 0x0046a530
extern "C" __declspec(naked) void asm_0046a530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12ba4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046a56b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046a569 }
	__asm { cmp esi, 4 }
	__asm { jge L_0046a566 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046a3e0 }
	__asm { add esp, 0x10 }
	__asm { L_0046a566: }
	__asm { sub esi, 4 }
	__asm { L_0046a569: }
	__asm { mov eax, esi }
	__asm { L_0046a56b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_0046a580();
// FUNCTION: ROBLOXSTUDIO 0x0046a6f0
extern "C" __declspec(naked) void asm_0046a6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046a72b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046a729 }
	__asm { cmp esi, 5 }
	__asm { jge L_0046a726 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046a580 }
	__asm { add esp, 0x10 }
	__asm { L_0046a726: }
	__asm { sub esi, 5 }
	__asm { L_0046a729: }
	__asm { mov eax, esi }
	__asm { L_0046a72b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11f00[];
extern "C" void fn_0046a740();
// FUNCTION: ROBLOXSTUDIO 0x0046a8c0
extern "C" __declspec(naked) void asm_0046a8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11f00] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046a8fb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046a8f9 }
	__asm { cmp esi, 6 }
	__asm { jge L_0046a8f6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046a740 }
	__asm { add esp, 0x10 }
	__asm { L_0046a8f6: }
	__asm { sub esi, 6 }
	__asm { L_0046a8f9: }
	__asm { mov eax, esi }
	__asm { L_0046a8fb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12104[];
extern "C" void fn_0046a970();
// FUNCTION: ROBLOXSTUDIO 0x0046ab30
extern "C" __declspec(naked) void asm_0046ab30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046ab6b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046ab69 }
	__asm { cmp esi, 6 }
	__asm { jge L_0046ab66 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046a970 }
	__asm { add esp, 0x10 }
	__asm { L_0046ab66: }
	__asm { sub esi, 6 }
	__asm { L_0046ab69: }
	__asm { mov eax, esi }
	__asm { L_0046ab6b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_0046ab80();
// FUNCTION: ROBLOXSTUDIO 0x0046ace0
extern "C" __declspec(naked) void asm_0046ace0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046ad1b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046ad19 }
	__asm { cmp esi, 6 }
	__asm { jge L_0046ad16 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046ab80 }
	__asm { add esp, 0x10 }
	__asm { L_0046ad16: }
	__asm { sub esi, 6 }
	__asm { L_0046ad19: }
	__asm { mov eax, esi }
	__asm { L_0046ad1b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12104[];
extern "C" void fn_0046ad60();
// FUNCTION: ROBLOXSTUDIO 0x0046ae80
extern "C" __declspec(naked) void asm_0046ae80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046aebb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046aeb9 }
	__asm { cmp esi, 3 }
	__asm { jge L_0046aeb6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046ad60 }
	__asm { add esp, 0x10 }
	__asm { L_0046aeb6: }
	__asm { sub esi, 3 }
	__asm { L_0046aeb9: }
	__asm { mov eax, esi }
	__asm { L_0046aebb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_0046aed0();
// FUNCTION: ROBLOXSTUDIO 0x0046b000
extern "C" __declspec(naked) void asm_0046b000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046b03b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046b039 }
	__asm { cmp esi, 2 }
	__asm { jge L_0046b036 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046aed0 }
	__asm { add esp, 0x10 }
	__asm { L_0046b036: }
	__asm { sub esi, 2 }
	__asm { L_0046b039: }
	__asm { mov eax, esi }
	__asm { L_0046b03b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" char g_00e1290c[];
extern "C" char g_01318f85[];
extern "C" void fn_0049d7a0();
// FUNCTION: ROBLOXSTUDIO 0x0046b050
extern "C" __declspec(naked) void asm_0046b050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0046b0a5 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0xf1b760 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_0046b085 }
	__asm { push 0x84 }
	__asm { push 0x100fe70 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_0046b085: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_0046b0a4 }
	__asm { cmp byte ptr [g_01318f85], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jne L_0046b09d }
	__asm { pop ebp }
	__asm { jmp fn_0049d7a0 }
	__asm { L_0046b09d: }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e1290c] }
	__asm { L_0046b0a4: }
	__asm { pop esi }
	__asm { L_0046b0a5: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e121e4[];
extern "C" void fn_0046b1d0();
// FUNCTION: ROBLOXSTUDIO 0x0046b310
extern "C" __declspec(naked) void asm_0046b310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046b34b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046b349 }
	__asm { cmp esi, 4 }
	__asm { jge L_0046b346 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046b1d0 }
	__asm { add esp, 0x10 }
	__asm { L_0046b346: }
	__asm { sub esi, 4 }
	__asm { L_0046b349: }
	__asm { mov eax, esi }
	__asm { L_0046b34b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12da4[];
extern "C" void fn_0046b360();
// FUNCTION: ROBLOXSTUDIO 0x0046b4a0
extern "C" __declspec(naked) void asm_0046b4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12da4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046b4db }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046b4d9 }
	__asm { cmp esi, 3 }
	__asm { jge L_0046b4d6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046b360 }
	__asm { add esp, 0x10 }
	__asm { L_0046b4d6: }
	__asm { sub esi, 3 }
	__asm { L_0046b4d9: }
	__asm { mov eax, esi }
	__asm { L_0046b4db: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_0046b4f0();
// FUNCTION: ROBLOXSTUDIO 0x0046b620
extern "C" __declspec(naked) void asm_0046b620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046b65b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046b659 }
	__asm { cmp esi, 2 }
	__asm { jge L_0046b656 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046b4f0 }
	__asm { add esp, 0x10 }
	__asm { L_0046b656: }
	__asm { sub esi, 2 }
	__asm { L_0046b659: }
	__asm { mov eax, esi }
	__asm { L_0046b65b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_0046b670();
// FUNCTION: ROBLOXSTUDIO 0x0046b8e0
extern "C" __declspec(naked) void asm_0046b8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046b91b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046b919 }
	__asm { cmp esi, 7 }
	__asm { jge L_0046b916 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046b670 }
	__asm { add esp, 0x10 }
	__asm { L_0046b916: }
	__asm { sub esi, 7 }
	__asm { L_0046b919: }
	__asm { mov eax, esi }
	__asm { L_0046b91b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12104[];
extern "C" void fn_0046b930();
// FUNCTION: ROBLOXSTUDIO 0x0046ba80
extern "C" __declspec(naked) void asm_0046ba80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046babb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046bab9 }
	__asm { cmp esi, 4 }
	__asm { jge L_0046bab6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046b930 }
	__asm { add esp, 0x10 }
	__asm { L_0046bab6: }
	__asm { sub esi, 4 }
	__asm { L_0046bab9: }
	__asm { mov eax, esi }
	__asm { L_0046babb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_0046bad0();
// FUNCTION: ROBLOXSTUDIO 0x0046bc10
extern "C" __declspec(naked) void asm_0046bc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046bc4b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046bc49 }
	__asm { cmp esi, 4 }
	__asm { jge L_0046bc46 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046bad0 }
	__asm { add esp, 0x10 }
	__asm { L_0046bc46: }
	__asm { sub esi, 4 }
	__asm { L_0046bc49: }
	__asm { mov eax, esi }
	__asm { L_0046bc4b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_0046be10();
// FUNCTION: ROBLOXSTUDIO 0x0046bf90
extern "C" __declspec(naked) void asm_0046bf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046bfcb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046bfc9 }
	__asm { cmp esi, 6 }
	__asm { jge L_0046bfc6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046be10 }
	__asm { add esp, 0x10 }
	__asm { L_0046bfc6: }
	__asm { sub esi, 6 }
	__asm { L_0046bfc9: }
	__asm { mov eax, esi }
	__asm { L_0046bfcb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_0046c000();
// FUNCTION: ROBLOXSTUDIO 0x0046c160
extern "C" __declspec(naked) void asm_0046c160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046c19b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046c199 }
	__asm { cmp esi, 5 }
	__asm { jge L_0046c196 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046c000 }
	__asm { add esp, 0x10 }
	__asm { L_0046c196: }
	__asm { sub esi, 5 }
	__asm { L_0046c199: }
	__asm { mov eax, esi }
	__asm { L_0046c19b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_0046c1b0();
// FUNCTION: ROBLOXSTUDIO 0x0046c2c0
extern "C" __declspec(naked) void asm_0046c2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046c2fb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046c2f9 }
	__asm { cmp esi, 3 }
	__asm { jge L_0046c2f6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046c1b0 }
	__asm { add esp, 0x10 }
	__asm { L_0046c2f6: }
	__asm { sub esi, 3 }
	__asm { L_0046c2f9: }
	__asm { mov eax, esi }
	__asm { L_0046c2fb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e13480[];
extern "C" void fn_0046c370();
// FUNCTION: ROBLOXSTUDIO 0x0046c620
extern "C" __declspec(naked) void asm_0046c620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e13480] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046c65b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046c659 }
	__asm { cmp esi, 0xf }
	__asm { jge L_0046c656 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046c370 }
	__asm { add esp, 0x10 }
	__asm { L_0046c656: }
	__asm { sub esi, 0xf }
	__asm { L_0046c659: }
	__asm { mov eax, esi }
	__asm { L_0046c65b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12808[];
extern "C" void fn_0046c670();
// FUNCTION: ROBLOXSTUDIO 0x0046c770
extern "C" __declspec(naked) void asm_0046c770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12808] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046c7a9 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046c7a7 }
	__asm { cmp esi, 1 }
	__asm { jge L_0046c7a6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046c670 }
	__asm { add esp, 0x10 }
	__asm { L_0046c7a6: }
	__asm { dec esi }
	__asm { L_0046c7a7: }
	__asm { mov eax, esi }
	__asm { L_0046c7a9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_0046c7b0();
// FUNCTION: ROBLOXSTUDIO 0x0046c8d0
extern "C" __declspec(naked) void asm_0046c8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046c90b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046c909 }
	__asm { cmp esi, 3 }
	__asm { jge L_0046c906 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046c7b0 }
	__asm { add esp, 0x10 }
	__asm { L_0046c906: }
	__asm { sub esi, 3 }
	__asm { L_0046c909: }
	__asm { mov eax, esi }
	__asm { L_0046c90b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_0046c920();
// FUNCTION: ROBLOXSTUDIO 0x0046ca90
extern "C" __declspec(naked) void asm_0046ca90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046cacb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046cac9 }
	__asm { cmp esi, 3 }
	__asm { jge L_0046cac6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046c920 }
	__asm { add esp, 0x10 }
	__asm { L_0046cac6: }
	__asm { sub esi, 3 }
	__asm { L_0046cac9: }
	__asm { mov eax, esi }
	__asm { L_0046cacb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12e78[];
extern "C" void fn_0046cae0();
// FUNCTION: ROBLOXSTUDIO 0x0046cbe0
extern "C" __declspec(naked) void asm_0046cbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12e78] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046cc19 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046cc17 }
	__asm { cmp esi, 1 }
	__asm { jge L_0046cc16 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046cae0 }
	__asm { add esp, 0x10 }
	__asm { L_0046cc16: }
	__asm { dec esi }
	__asm { L_0046cc17: }
	__asm { mov eax, esi }
	__asm { L_0046cc19: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12c2c[];
extern "C" void fn_0046cc20();
// FUNCTION: ROBLOXSTUDIO 0x0046cd90
extern "C" __declspec(naked) void asm_0046cd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12c2c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046cdcb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046cdc9 }
	__asm { cmp esi, 4 }
	__asm { jge L_0046cdc6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046cc20 }
	__asm { add esp, 0x10 }
	__asm { L_0046cdc6: }
	__asm { sub esi, 4 }
	__asm { L_0046cdc9: }
	__asm { mov eax, esi }
	__asm { L_0046cdcb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_0046cde0();
// FUNCTION: ROBLOXSTUDIO 0x0046cf20
extern "C" __declspec(naked) void asm_0046cf20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046cf5b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046cf59 }
	__asm { cmp esi, 3 }
	__asm { jge L_0046cf56 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046cde0 }
	__asm { add esp, 0x10 }
	__asm { L_0046cf56: }
	__asm { sub esi, 3 }
	__asm { L_0046cf59: }
	__asm { mov eax, esi }
	__asm { L_0046cf5b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11ee0[];
extern "C" void fn_0046d120();
// FUNCTION: ROBLOXSTUDIO 0x0046d390
extern "C" __declspec(naked) void asm_0046d390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11ee0] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046d3cb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046d3c9 }
	__asm { cmp esi, 0xb }
	__asm { jge L_0046d3c6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046d120 }
	__asm { add esp, 0x10 }
	__asm { L_0046d3c6: }
	__asm { sub esi, 0xb }
	__asm { L_0046d3c9: }
	__asm { mov eax, esi }
	__asm { L_0046d3cb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_0046d4c0();
// FUNCTION: ROBLOXSTUDIO 0x0046d640
extern "C" __declspec(naked) void asm_0046d640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0046d67b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0046d679 }
	__asm { cmp esi, 5 }
	__asm { jge L_0046d676 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046d4c0 }
	__asm { add esp, 0x10 }
	__asm { L_0046d676: }
	__asm { sub esi, 5 }
	__asm { L_0046d679: }
	__asm { mov eax, esi }
	__asm { L_0046d67b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f90[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x0046de10
extern "C" __declspec(naked) void asm_0046de10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_0046de3c }
	__asm { push edi }
	__asm { L_0046de20: }
	__asm { lea edi, [esi] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [edi - 0x14] }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { cmp esi, ebx }
	__asm { jne L_0046de20 }
	__asm { pop edi }
	__asm { L_0046de3c: }
	__asm { push 0x1c }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10f90] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110b4[];
extern "C" char g_00e110b8[];
// FUNCTION: ROBLOXSTUDIO 0x0046e340
extern "C" __declspec(naked) void asm_0046e340()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [g_00e110b4] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call dword ptr [g_00e110b8] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0046e381 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov edx, dword ptr [eax + 0x1c] }
	__asm { mov esi, dword ptr [eax + 0x18] }
	__asm { sub edx, dword ptr [eax + 0x14] }
	__asm { sub esi, dword ptr [eax + 0x10] }
	__asm { inc edx }
	__asm { inc esi }
	__asm { mov dword ptr [ecx + 0x7c], esi }
	__asm { mov dword ptr [ecx + 0x80], edx }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0046e381 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push esi }
	__asm { call dword ptr [eax + 0x24] }
	__asm { L_0046e381: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10f00[];
extern "C" char g_00e117a8[];
extern "C" char g_00e12394[];
extern "C" void fn_00572f20();
// FUNCTION: ROBLOXSTUDIO 0x0046e650
extern "C" __declspec(naked) void asm_0046e650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { call dword ptr [g_00e10f00] }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { test esi, esi }
	__asm { je L_0046e691 }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { je L_0046e685 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { call dword ptr [g_00e117a8] }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov byte ptr [esi + 0x78], 0 }
	__asm { call fn_00572f20 }
	__asm { L_0046e685: }
	__asm { push 0 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12394] }
	__asm { L_0046e691: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e123dc[];
extern "C" void fn_004c92a0();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x0046e6a0
extern "C" __declspec(naked) void asm_0046e6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e123dc] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0046e6e6 }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { test eax, eax }
	__asm { je L_0046e6e6 }
	__asm { mov ecx, dword ptr [eax + 0xc4] }
	__asm { test ecx, ecx }
	__asm { je L_0046e6e6 }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_0046e6e6 }
	__asm { push 0x200 }
	__asm { add eax, 0x124 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { L_0046e6e6: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004772b0();
// FUNCTION: ROBLOXSTUDIO 0x00476dc0
extern "C" __declspec(naked) void asm_00476dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x28], 0 }
	__asm { je L_00476dee }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00476dee }
	__asm { push esi }
	__asm { call fn_004772b0 }
	__asm { test al, al }
	__asm { jne L_00476dee }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea eax, [edi + 0x30] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { add esi, 0x1c }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [edx + 0x14] }
	__asm { L_00476dee: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00476ea0
extern "C" __declspec(naked) void asm_00476ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov edx, dword ptr [edi + 0x34] }
	__asm { test edx, edx }
	__asm { je L_00476ed5 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { call ecx }
	__asm { add esp, 8 }
	__asm { L_00476ed5: }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00467900();
extern "C" void fn_004781c0();
extern "C" void fn_004782a0();
// FUNCTION: ROBLOXSTUDIO 0x00477b50
extern "C" __declspec(naked) void asm_00477b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_00477b66 }
	__asm { call fn_004781c0 }
	__asm { L_00477b66: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00467900 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop esi }
	__asm { cmp eax, ecx }
	__asm { jne L_00477b93 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004782a0 }
	__asm { L_00477b93: }
	__asm { add eax, -4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131a264[];
extern "C" char g_0131a268[];
extern "C" char g_0131a26c[];
extern "C" char g_0131a270[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00478050
extern "C" __declspec(naked) void asm_00478050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0047806a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ecx], al }
	__asm { L_0047806a: }
	__asm { mov eax, dword ptr [g_0131a264] }
	__asm { test al, 1 }
	__asm { jne L_004780a6 }
	__asm { or eax, 1 }
	__asm { push 0xddc0d0 }
	__asm { mov dword ptr [g_0131a264], eax }
	__asm { mov dword ptr [g_0131a268], 0x12bdfcc }
	__asm { mov dword ptr [g_0131a270], 0x410d30 }
	__asm { mov dword ptr [g_0131a26c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004780a6: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0x131a268 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131e048[];
extern "C" char g_0131e04c[];
extern "C" char g_0131e050[];
extern "C" char g_0131e054[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004780f0
extern "C" __declspec(naked) void asm_004780f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0047810a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld qword ptr [eax] }
	__asm { fstp qword ptr [ecx] }
	__asm { L_0047810a: }
	__asm { mov eax, dword ptr [g_0131e048] }
	__asm { test al, 1 }
	__asm { jne L_00478146 }
	__asm { or eax, 1 }
	__asm { push 0xddca90 }
	__asm { mov dword ptr [g_0131e048], eax }
	__asm { mov dword ptr [g_0131e04c], 0x12c6c78 }
	__asm { mov dword ptr [g_0131e054], 0x478720 }
	__asm { mov dword ptr [g_0131e050], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00478146: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0x131e04c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131b430[];
extern "C" char g_0131b434[];
extern "C" char g_0131b438[];
extern "C" char g_0131b43c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00478340
extern "C" __declspec(naked) void asm_00478340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0047835a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0047835a: }
	__asm { mov eax, dword ptr [g_0131b430] }
	__asm { test al, 1 }
	__asm { jne L_00478396 }
	__asm { or eax, 1 }
	__asm { push 0xddcaa0 }
	__asm { mov dword ptr [g_0131b430], eax }
	__asm { mov dword ptr [g_0131b434], 0x12c38a0 }
	__asm { mov dword ptr [g_0131b43c], 0x40d810 }
	__asm { mov dword ptr [g_0131b438], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00478396: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0x131b434 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131e058[];
extern "C" char g_0131e05c[];
extern "C" char g_0131e060[];
extern "C" char g_0131e064[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004785b0
extern "C" __declspec(naked) void asm_004785b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_004785ca }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_004785ca: }
	__asm { mov eax, dword ptr [g_0131e058] }
	__asm { test al, 1 }
	__asm { jne L_00478606 }
	__asm { or eax, 1 }
	__asm { push 0xddca70 }
	__asm { mov dword ptr [g_0131e058], eax }
	__asm { mov dword ptr [g_0131e05c], 0x12c6c60 }
	__asm { mov dword ptr [g_0131e064], 0x40d810 }
	__asm { mov dword ptr [g_0131e060], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00478606: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi], 0x131e05c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11034[];
// FUNCTION: ROBLOXSTUDIO 0x0047a6f0
extern "C" __declspec(naked) void asm_0047a6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { add esi, 5 }
	__asm { add edi, 5 }
	__asm { lea esi, [ebx + esi*4] }
	__asm { lea edi, [ebx + edi*4] }
	__asm { cmp edi, esi }
	__asm { je L_0047a724 }
	__asm { nop }
	__asm { L_0047a710: }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test ecx, ecx }
	__asm { je L_0047a720 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0047a720: }
	__asm { cmp esi, edi }
	__asm { jne L_0047a710 }
	__asm { L_0047a724: }
	__asm { push ebx }
	__asm { call dword ptr [g_00e11034] }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102d8[];
extern "C" char g_00e10318[];
extern "C" char g_00e1110c[];
extern "C" void fn_00426140();
// FUNCTION: ROBLOXSTUDIO 0x0047ab50
extern "C" __declspec(naked) void asm_0047ab50()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { mov dword ptr [eax + ebx + 8], 0xe18340 }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 0x68] }
	__asm { mov dword ptr [edx + ebx + 4], eax }
	__asm { mov dword ptr [ebx + 0x20], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { call dword ptr [g_00e102d8] }
	__asm { lea ecx, [ebx + 0x70] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, ebx }
	__asm { pop ebx }
	__asm { jmp dword ptr [g_00e1110c] }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b6ac[];
extern "C" void fn_004830e0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00480aa0
extern "C" __declspec(naked) void asm_00480aa0()
{
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00480aee }
	__asm { cmp dword ptr [g_0131b6ac], 0x29a }
	__asm { je L_00480aee }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00480add }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00480aee }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00480add: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00480aee: }
	__asm { call fn_004830e0 }
	__asm { pop ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004812f0
extern "C" __declspec(naked) void asm_004812f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { cmp esi, edi }
	__asm { je L_00481314 }
	__asm { L_00481302: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { add ecx, dword ptr [ebp + 0x14] }
	__asm { call dword ptr [ebp + 0x10] }
	__asm { add esi, 8 }
	__asm { cmp esi, edi }
	__asm { jne L_00481302 }
	__asm { L_00481314: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_0131b6d0[];
extern "C" void fn_00486ec0();
extern "C" void fn_006b9b20();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004831d0
extern "C" __declspec(naked) void asm_004831d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { call fn_00486ec0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_004831eb }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00483209 }
	__asm { jmp L_00483204 }
	__asm { L_004831eb: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0131b6d0] }
	__asm { cmp edx, eax }
	__asm { ja L_004831fe }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_0131b6d0], eax }
	__asm { L_004831fe: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00483204: }
	__asm { call fn_006b9b20 }
	__asm { L_00483209: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b470[];
extern "C" void fn_0048aaa0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0048ab40
extern "C" __declspec(naked) void asm_0048ab40()
{
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0048ab8e }
	__asm { cmp dword ptr [g_0131b470], 0x29a }
	__asm { je L_0048ab8e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0048ab7d }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0048ab8e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0048ab7d: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0048ab8e: }
	__asm { call fn_0048aaa0 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0048c390
extern "C" __declspec(naked) void asm_0048c390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0048c3da }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { jne L_0048c3da }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0048c3c9 }
	__asm { push 0x48 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0048c3da }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0048c3c9: }
	__asm { movzx eax, al }
	__asm { push 0x1004a10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0048c3da: }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0048c3f0
extern "C" __declspec(naked) void asm_0048c3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0048c43a }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { jne L_0048c43a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0048c429 }
	__asm { push 0x48 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0048c43a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0048c429: }
	__asm { movzx eax, al }
	__asm { push 0x1004a10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0048c43a: }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0048ea60();
// FUNCTION: ROBLOXSTUDIO 0x0048c950
extern "C" __declspec(naked) void asm_0048c950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_0048c98f }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 8] }
	__asm { push eax }
	__asm { call fn_0048ea60 }
	__asm { push dword ptr [esi + 4] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0048c98f: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0048c99f }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0048c99f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048d750();
extern "C" void fn_007b3490();
// FUNCTION: ROBLOXSTUDIO 0x0048ca10
extern "C" __declspec(naked) void asm_0048ca10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x64] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0048ca2f }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_007b3490 }
	__asm { jmp L_0048ca31 }
	__asm { L_0048ca2f: }
	__asm { xor eax, eax }
	__asm { L_0048ca31: }
	__asm { test eax, eax }
	__asm { je L_0048ca52 }
	__asm { mov ecx, eax }
	__asm { call fn_0048d750 }
	__asm { test eax, eax }
	__asm { je L_0048ca52 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, 4 }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_007b3490 }
	__asm { L_0048ca52: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048d870();
extern "C" void fn_007b3490();
// FUNCTION: ROBLOXSTUDIO 0x0048ca60
extern "C" __declspec(naked) void asm_0048ca60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x64] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0048ca7f }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_007b3490 }
	__asm { jmp L_0048ca81 }
	__asm { L_0048ca7f: }
	__asm { xor eax, eax }
	__asm { L_0048ca81: }
	__asm { test eax, eax }
	__asm { je L_0048caa2 }
	__asm { mov ecx, eax }
	__asm { call fn_0048d870 }
	__asm { test eax, eax }
	__asm { je L_0048caa2 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, 4 }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_007b3490 }
	__asm { L_0048caa2: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048d990();
extern "C" void fn_007b3490();
// FUNCTION: ROBLOXSTUDIO 0x0048cab0
extern "C" __declspec(naked) void asm_0048cab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x64] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0048cacf }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_007b3490 }
	__asm { jmp L_0048cad1 }
	__asm { L_0048cacf: }
	__asm { xor eax, eax }
	__asm { L_0048cad1: }
	__asm { test eax, eax }
	__asm { je L_0048caf2 }
	__asm { mov ecx, eax }
	__asm { call fn_0048d990 }
	__asm { test eax, eax }
	__asm { je L_0048caf2 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, 4 }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_007b3490 }
	__asm { L_0048caf2: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048dab0();
extern "C" void fn_007b3490();
// FUNCTION: ROBLOXSTUDIO 0x0048cb00
extern "C" __declspec(naked) void asm_0048cb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x64] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0048cb1f }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_007b3490 }
	__asm { jmp L_0048cb21 }
	__asm { L_0048cb1f: }
	__asm { xor eax, eax }
	__asm { L_0048cb21: }
	__asm { test eax, eax }
	__asm { je L_0048cb42 }
	__asm { mov ecx, eax }
	__asm { call fn_0048dab0 }
	__asm { test eax, eax }
	__asm { je L_0048cb42 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, 4 }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_007b3490 }
	__asm { L_0048cb42: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048dbd0();
extern "C" void fn_007b3490();
// FUNCTION: ROBLOXSTUDIO 0x0048cb50
extern "C" __declspec(naked) void asm_0048cb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x64] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0048cb6f }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_007b3490 }
	__asm { jmp L_0048cb71 }
	__asm { L_0048cb6f: }
	__asm { xor eax, eax }
	__asm { L_0048cb71: }
	__asm { test eax, eax }
	__asm { je L_0048cb92 }
	__asm { mov ecx, eax }
	__asm { call fn_0048dbd0 }
	__asm { test eax, eax }
	__asm { je L_0048cb92 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, 4 }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_007b3490 }
	__asm { L_0048cb92: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0048d560
extern "C" __declspec(naked) void asm_0048d560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0048d577 }
	__asm { add eax, -0x1c }
	__asm { jmp L_0048d579 }
	__asm { L_0048d577: }
	__asm { xor eax, eax }
	__asm { L_0048d579: }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, eax }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0048e090
extern "C" __declspec(naked) void asm_0048e090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0048e0e6 }
	__asm { test al, al }
	__asm { jne L_0048e0e6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0048e0d5 }
	__asm { push 0x4a }
	__asm { push 0x1012cd8 }
	__asm { push 0x1012d20 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0048e0e6 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0048e0d5: }
	__asm { movzx eax, cl }
	__asm { push 0x1012d30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0048e0e6: }
	__asm { pop ebp }
	__asm { ret 0xc }
}
