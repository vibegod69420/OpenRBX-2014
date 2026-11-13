// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00ca5740();
// FUNCTION: ROBLOXSTUDIO 0x005ea7f0
extern "C" __declspec(naked) void asm_005ea7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00ca5740 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_005ea832 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { mov eax, esi }
	__asm { L_005ea832: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005eb000
extern "C" __declspec(naked) void asm_005eb000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_005eb039 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi] }
	__asm { L_005eb015: }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { cmp ecx, esi }
	__asm { jb L_005eb02e }
	__asm { cmp esi, ecx }
	__asm { jb L_005eb028 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { cmp ecx, dword ptr [edi + 4] }
	__asm { jb L_005eb02e }
	__asm { L_005eb028: }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_005eb031 }
	__asm { L_005eb02e: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_005eb031: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_005eb015 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_005eb039: }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005ebef0
extern "C" __declspec(naked) void asm_005ebef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp ecx, edx }
	__asm { je L_005ebf2f }
	__asm { push esi }
	__asm { L_005ebf01: }
	__asm { test eax, eax }
	__asm { je L_005ebf21 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { mov esi, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [eax + 0x10], esi }
	__asm { L_005ebf21: }
	__asm { add ecx, 0x14 }
	__asm { add eax, 0x14 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp ecx, edx }
	__asm { jne L_005ebf01 }
	__asm { pop esi }
	__asm { L_005ebf2f: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0060f500();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005ec0f0
extern "C" __declspec(naked) void asm_005ec0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe1ca6c }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_005ec121 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { L_005ec121: }
	__asm { mov ecx, esi }
	__asm { call fn_0060f500 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005ec137 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005ec137: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e108bc[];
extern "C" char g_012db6a8[];
extern "C" char g_012db6b0[];
extern "C" void fn_005f2830();
// FUNCTION: ROBLOXSTUDIO 0x005f25d0
extern "C" __declspec(naked) void asm_005f25d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [g_012db6a8], 0 }
	__asm { jne L_005f25ef }
	__asm { mov eax, dword ptr [g_012db6b0] }
	__asm { test eax, eax }
	__asm { jne L_005f25eb }
	__asm { L_005f25e5: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005f25eb: }
	__asm { call eax }
	__asm { jmp L_005f25fc }
	__asm { L_005f25ef: }
	__asm { call dword ptr [g_00e108bc] }
	__asm { push eax }
	__asm { call dword ptr [g_012db6a8] }
	__asm { L_005f25fc: }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { je L_005f25e5 }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ecx], al }
	__asm { je L_005f260f }
	__asm { L_005f2608: }
	__asm { inc eax }
	__asm { cmp byte ptr [eax + ecx], 0 }
	__asm { jne L_005f2608 }
	__asm { L_005f260f: }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005f2830 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005f2650
extern "C" __declspec(naked) void asm_005f2650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { test edx, edx }
	__asm { jne L_005f265e }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005f265e: }
	__asm { mov cl, byte ptr [edx] }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 0xc] }
	__asm { test cl, cl }
	__asm { je L_005f2675 }
	__asm { L_005f2668: }
	__asm { cmp cl, bl }
	__asm { je L_005f2675 }
	__asm { mov cl, byte ptr [eax + edx + 1] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_005f2668 }
	__asm { L_005f2675: }
	__asm { mov cl, byte ptr [eax + edx] }
	__asm { test cl, cl }
	__asm { je L_005f2682 }
	__asm { cmp cl, bl }
	__asm { je L_005f2682 }
	__asm { xor eax, eax }
	__asm { L_005f2682: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da950[];
extern "C" char g_012da958[];
extern "C" char g_012da95c[];
// FUNCTION: ROBLOXSTUDIO 0x005f4370
extern "C" __declspec(naked) void asm_005f4370()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1e378 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1e38c }
	__asm { mov dword ptr [g_012da950], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012da958], eax }
	__asm { test eax, eax }
	__asm { je L_005f439d }
	__asm { test bl, bl }
	__asm { je L_005f439f }
	__asm { L_005f439d: }
	__asm { mov bl, 1 }
	__asm { L_005f439f: }
	__asm { push 0xe1e39c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da95c], eax }
	__asm { test eax, eax }
	__asm { je L_005f43b8 }
	__asm { test bl, bl }
	__asm { jne L_005f43b8 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f43b8: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daa10[];
extern "C" char g_012daa20[];
extern "C" char g_012daa28[];
// FUNCTION: ROBLOXSTUDIO 0x005f45c0
extern "C" __declspec(naked) void asm_005f45c0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1e5b0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1e5cc }
	__asm { mov dword ptr [g_012daa10], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa20], eax }
	__asm { test eax, eax }
	__asm { je L_005f45ed }
	__asm { test bl, bl }
	__asm { je L_005f45ef }
	__asm { L_005f45ed: }
	__asm { mov bl, 1 }
	__asm { L_005f45ef: }
	__asm { push 0xe1e5ec }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa28], eax }
	__asm { test eax, eax }
	__asm { je L_005f4608 }
	__asm { test bl, bl }
	__asm { jne L_005f4608 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f4608: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dab24[];
extern "C" char g_012dab2c[];
extern "C" char g_012dab34[];
// FUNCTION: ROBLOXSTUDIO 0x005f48b0
extern "C" __declspec(naked) void asm_005f48b0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1e884 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1e8a0 }
	__asm { mov dword ptr [g_012dab24], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab2c], eax }
	__asm { test eax, eax }
	__asm { je L_005f48dd }
	__asm { test bl, bl }
	__asm { je L_005f48df }
	__asm { L_005f48dd: }
	__asm { mov bl, 1 }
	__asm { L_005f48df: }
	__asm { push 0xe1e8b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab34], eax }
	__asm { test eax, eax }
	__asm { je L_005f48f8 }
	__asm { test bl, bl }
	__asm { jne L_005f48f8 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f48f8: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dab74[];
extern "C" char g_012dab7c[];
extern "C" char g_012dab84[];
// FUNCTION: ROBLOXSTUDIO 0x005f49b0
extern "C" __declspec(naked) void asm_005f49b0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1e96c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1e98c }
	__asm { mov dword ptr [g_012dab74], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab7c], eax }
	__asm { test eax, eax }
	__asm { je L_005f49dd }
	__asm { test bl, bl }
	__asm { je L_005f49df }
	__asm { L_005f49dd: }
	__asm { mov bl, 1 }
	__asm { L_005f49df: }
	__asm { push 0xe1e9ac }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab84], eax }
	__asm { test eax, eax }
	__asm { je L_005f49f8 }
	__asm { test bl, bl }
	__asm { jne L_005f49f8 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f49f8: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dabfc[];
extern "C" char g_012dac00[];
extern "C" char g_012dac0c[];
// FUNCTION: ROBLOXSTUDIO 0x005f4b30
extern "C" __declspec(naked) void asm_005f4b30()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1eaf0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1eb14 }
	__asm { mov dword ptr [g_012dabfc], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac00], eax }
	__asm { test eax, eax }
	__asm { je L_005f4b5d }
	__asm { test bl, bl }
	__asm { je L_005f4b5f }
	__asm { L_005f4b5d: }
	__asm { mov bl, 1 }
	__asm { L_005f4b5f: }
	__asm { push 0xe1eb38 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac0c], eax }
	__asm { test eax, eax }
	__asm { je L_005f4b78 }
	__asm { test bl, bl }
	__asm { jne L_005f4b78 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f4b78: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daec0[];
extern "C" char g_012daecc[];
extern "C" char g_012daed4[];
// FUNCTION: ROBLOXSTUDIO 0x005f5360
extern "C" __declspec(naked) void asm_005f5360()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1f314 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1f328 }
	__asm { mov dword ptr [g_012daec0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daecc], eax }
	__asm { test eax, eax }
	__asm { je L_005f538d }
	__asm { test bl, bl }
	__asm { je L_005f538f }
	__asm { L_005f538d: }
	__asm { mov bl, 1 }
	__asm { L_005f538f: }
	__asm { push 0xe1f338 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daed4], eax }
	__asm { test eax, eax }
	__asm { je L_005f53a8 }
	__asm { test bl, bl }
	__asm { jne L_005f53a8 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f53a8: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbb98[];
extern "C" char g_012dbba0[];
extern "C" char g_012dbba8[];
// FUNCTION: ROBLOXSTUDIO 0x005f7180
extern "C" __declspec(naked) void asm_005f7180()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe20f40 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe20f58 }
	__asm { mov dword ptr [g_012dbb98], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbba0], eax }
	__asm { test eax, eax }
	__asm { je L_005f71ad }
	__asm { test bl, bl }
	__asm { je L_005f71af }
	__asm { L_005f71ad: }
	__asm { mov bl, 1 }
	__asm { L_005f71af: }
	__asm { push 0xe20f70 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbba8], eax }
	__asm { test eax, eax }
	__asm { je L_005f71c8 }
	__asm { test bl, bl }
	__asm { jne L_005f71c8 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f71c8: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d99c0[];
extern "C" char g_012d99cc[];
extern "C" char g_012d99d4[];
// FUNCTION: ROBLOXSTUDIO 0x005f7dd0
extern "C" __declspec(naked) void asm_005f7dd0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe21b4c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe21b64 }
	__asm { mov dword ptr [g_012d99c0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d99cc], eax }
	__asm { test eax, eax }
	__asm { je L_005f7dfd }
	__asm { test bl, bl }
	__asm { je L_005f7dff }
	__asm { L_005f7dfd: }
	__asm { mov bl, 1 }
	__asm { L_005f7dff: }
	__asm { push 0xe21b7c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d99d4], eax }
	__asm { test eax, eax }
	__asm { je L_005f7e18 }
	__asm { test bl, bl }
	__asm { jne L_005f7e18 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f7e18: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9be4[];
extern "C" char g_012d9bec[];
extern "C" char g_012d9bf0[];
// FUNCTION: ROBLOXSTUDIO 0x005f83f0
extern "C" __declspec(naked) void asm_005f83f0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2205c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe22074 }
	__asm { mov dword ptr [g_012d9be4], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9bec], eax }
	__asm { test eax, eax }
	__asm { je L_005f841d }
	__asm { test bl, bl }
	__asm { je L_005f841f }
	__asm { L_005f841d: }
	__asm { mov bl, 1 }
	__asm { L_005f841f: }
	__asm { push 0xe22090 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9bf0], eax }
	__asm { test eax, eax }
	__asm { je L_005f8438 }
	__asm { test bl, bl }
	__asm { jne L_005f8438 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8438: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9d18[];
extern "C" char g_012d9d24[];
extern "C" char g_012d9d2c[];
// FUNCTION: ROBLOXSTUDIO 0x005f87d0
extern "C" __declspec(naked) void asm_005f87d0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe22414 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe22438 }
	__asm { mov dword ptr [g_012d9d18], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d24], eax }
	__asm { test eax, eax }
	__asm { je L_005f87fd }
	__asm { test bl, bl }
	__asm { je L_005f87ff }
	__asm { L_005f87fd: }
	__asm { mov bl, 1 }
	__asm { L_005f87ff: }
	__asm { push 0xe2245c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d2c], eax }
	__asm { test eax, eax }
	__asm { je L_005f8818 }
	__asm { test bl, bl }
	__asm { jne L_005f8818 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8818: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daabc[];
extern "C" char g_012daacc[];
extern "C" char g_012daad4[];
// FUNCTION: ROBLOXSTUDIO 0x005fa740
extern "C" __declspec(naked) void asm_005fa740()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2483c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe24854 }
	__asm { mov dword ptr [g_012daabc], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daacc], eax }
	__asm { test eax, eax }
	__asm { je L_005fa76d }
	__asm { test bl, bl }
	__asm { je L_005fa76f }
	__asm { L_005fa76d: }
	__asm { mov bl, 1 }
	__asm { L_005fa76f: }
	__asm { push 0xe24870 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daad4], eax }
	__asm { test eax, eax }
	__asm { je L_005fa788 }
	__asm { test bl, bl }
	__asm { jne L_005fa788 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fa788: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dac8c[];
extern "C" char g_012dac90[];
extern "C" char g_012daca0[];
// FUNCTION: ROBLOXSTUDIO 0x005fac00
extern "C" __declspec(naked) void asm_005fac00()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe24cd8 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe24cec }
	__asm { mov dword ptr [g_012dac8c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac90], eax }
	__asm { test eax, eax }
	__asm { je L_005fac2d }
	__asm { test bl, bl }
	__asm { je L_005fac2f }
	__asm { L_005fac2d: }
	__asm { mov bl, 1 }
	__asm { L_005fac2f: }
	__asm { push 0xe24d00 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daca0], eax }
	__asm { test eax, eax }
	__asm { je L_005fac48 }
	__asm { test bl, bl }
	__asm { jne L_005fac48 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fac48: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dadf4[];
extern "C" char g_012dadfc[];
extern "C" char g_012dae04[];
// FUNCTION: ROBLOXSTUDIO 0x005fb020
extern "C" __declspec(naked) void asm_005fb020()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe250b0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe250c4 }
	__asm { mov dword ptr [g_012dadf4], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dadfc], eax }
	__asm { test eax, eax }
	__asm { je L_005fb04d }
	__asm { test bl, bl }
	__asm { je L_005fb04f }
	__asm { L_005fb04d: }
	__asm { mov bl, 1 }
	__asm { L_005fb04f: }
	__asm { push 0xe250e0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae04], eax }
	__asm { test eax, eax }
	__asm { je L_005fb068 }
	__asm { test bl, bl }
	__asm { jne L_005fb068 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fb068: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db210[];
extern "C" char g_012db21c[];
extern "C" char g_012db220[];
// FUNCTION: ROBLOXSTUDIO 0x005fbb60
extern "C" __declspec(naked) void asm_005fbb60()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe25b94 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe25ba8 }
	__asm { mov dword ptr [g_012db210], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db21c], eax }
	__asm { test eax, eax }
	__asm { je L_005fbb8d }
	__asm { test bl, bl }
	__asm { je L_005fbb8f }
	__asm { L_005fbb8d: }
	__asm { mov bl, 1 }
	__asm { L_005fbb8f: }
	__asm { push 0xe25bbc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db220], eax }
	__asm { test eax, eax }
	__asm { je L_005fbba8 }
	__asm { test bl, bl }
	__asm { jne L_005fbba8 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fbba8: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db560[];
extern "C" char g_012db56c[];
extern "C" char g_012db580[];
// FUNCTION: ROBLOXSTUDIO 0x005fc3b0
extern "C" __declspec(naked) void asm_005fc3b0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe26310 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe26328 }
	__asm { mov dword ptr [g_012db560], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db56c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc3dd }
	__asm { test bl, bl }
	__asm { je L_005fc3df }
	__asm { L_005fc3dd: }
	__asm { mov bl, 1 }
	__asm { L_005fc3df: }
	__asm { push 0xe26340 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db580], eax }
	__asm { test eax, eax }
	__asm { je L_005fc3f8 }
	__asm { test bl, bl }
	__asm { jne L_005fc3f8 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fc3f8: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbaa8[];
extern "C" char g_012dbab4[];
extern "C" char g_012dbac0[];
// FUNCTION: ROBLOXSTUDIO 0x005fce50
extern "C" __declspec(naked) void asm_005fce50()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe26d2c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe26d4c }
	__asm { mov dword ptr [g_012dbaa8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbab4], eax }
	__asm { test eax, eax }
	__asm { je L_005fce7d }
	__asm { test bl, bl }
	__asm { je L_005fce7f }
	__asm { L_005fce7d: }
	__asm { mov bl, 1 }
	__asm { L_005fce7f: }
	__asm { push 0xe26d6c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbac0], eax }
	__asm { test eax, eax }
	__asm { je L_005fce98 }
	__asm { test bl, bl }
	__asm { jne L_005fce98 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fce98: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e1003c[];
extern "C" char g_00e108ac[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00606300
extern "C" __declspec(naked) void asm_00606300()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0060634a }
	__asm { call dword ptr [g_00e108ac] }
	__asm { cmp eax, dword ptr [esi + 0xc] }
	__asm { je L_0060634a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00606335 }
	__asm { push 0x67 }
	__asm { push 0xe2f9c8 }
	__asm { push 0xe2fa84 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060634a }
	__asm { L_00606335: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe2faa8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060634a: }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [g_00e1003c] }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006065f0
extern "C" __declspec(naked) void asm_006065f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x1c], eax }
	__asm { jne L_00606602 }
	__asm { mov dword ptr [ecx + 0x1c], 0 }
	__asm { L_00606602: }
	__asm { cmp dword ptr [ecx + 0x20], eax }
	__asm { jne L_0060660e }
	__asm { mov dword ptr [ecx + 0x20], 0 }
	__asm { L_0060660e: }
	__asm { cmp dword ptr [ecx + 0x24], eax }
	__asm { jne L_0060661a }
	__asm { mov dword ptr [ecx + 0x24], 0 }
	__asm { L_0060661a: }
	__asm { cmp dword ptr [ecx + 0x28], eax }
	__asm { jne L_00606626 }
	__asm { mov dword ptr [ecx + 0x28], 0 }
	__asm { L_00606626: }
	__asm { cmp dword ptr [ecx + 0x2c], eax }
	__asm { jne L_00606632 }
	__asm { mov dword ptr [ecx + 0x2c], 0 }
	__asm { L_00606632: }
	__asm { cmp dword ptr [ecx + 0x30], eax }
	__asm { jne L_0060663e }
	__asm { mov dword ptr [ecx + 0x30], 0 }
	__asm { L_0060663e: }
	__asm { cmp dword ptr [ecx + 0x34], eax }
	__asm { jne L_0060664a }
	__asm { mov dword ptr [ecx + 0x34], 0 }
	__asm { L_0060664a: }
	__asm { cmp dword ptr [ecx + 0x38], eax }
	__asm { jne L_00606656 }
	__asm { mov dword ptr [ecx + 0x38], 0 }
	__asm { L_00606656: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005eb380();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00607050
extern "C" __declspec(naked) void asm_00607050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe2fb74 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00607081 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_00607081: }
	__asm { mov ecx, esi }
	__asm { call fn_005eb380 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00607097 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00607097: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00609290
extern "C" __declspec(naked) void asm_00609290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edi }
	__asm { je L_006092c6 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_006092a2: }
	__asm { test esi, esi }
	__asm { je L_006092b6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { L_006092b6: }
	__asm { add ecx, 0xc }
	__asm { add esi, 0xc }
	__asm { cmp ecx, edi }
	__asm { jne L_006092a2 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006092c6: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0060ca20
extern "C" __declspec(naked) void asm_0060ca20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 0x8b51 }
	__asm { ja L_0060ca52 }
	__asm { je L_0060ca4b }
	__asm { cmp eax, 0x1406 }
	__asm { je L_0060ca44 }
	__asm { cmp eax, 0x8b50 }
	__asm { jne L_0060ca5e }
	__asm { mov eax, 2 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0060ca44: }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0060ca4b: }
	__asm { mov eax, 3 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0060ca52: }
	__asm { sub eax, 0x8b52 }
	__asm { je L_0060ca69 }
	__asm { sub eax, 0xa }
	__asm { je L_0060ca62 }
	__asm { L_0060ca5e: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0060ca62: }
	__asm { mov eax, 5 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0060ca69: }
	__asm { mov eax, 4 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10828[];
extern "C" char g_00e10894[];
extern "C" char g_012d9db0[];
extern "C" char g_012dae60[];
extern "C" void fn_00606660();
// FUNCTION: ROBLOXSTUDIO 0x0060f0e0
extern "C" __declspec(naked) void asm_0060f0e0()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x3c], 1 }
	__asm { jbe L_0060f146 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { call fn_00606660 }
	__asm { push 0x84c0 }
	__asm { call dword ptr [g_012d9db0] }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push dword ptr [eax*4 + 0xe32020] }
	__asm { call dword ptr [g_00e10828] }
	__asm { push 0x1102 }
	__asm { push 0x8192 }
	__asm { call dword ptr [g_00e10894] }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push dword ptr [eax*4 + 0xe32020] }
	__asm { call dword ptr [g_012dae60] }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push 0 }
	__asm { push dword ptr [eax*4 + 0xe32020] }
	__asm { call dword ptr [g_00e10828] }
	__asm { L_0060f146: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_006e07d0();
// FUNCTION: ROBLOXSTUDIO 0x00611d40
extern "C" __declspec(naked) void asm_00611d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ecx + eax*8 + 0x1d4] }
	__asm { test ecx, ecx }
	__asm { jne L_00611d6c }
	__asm { call fn_006e07d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00611d6c: }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_01038214[];
// FUNCTION: ROBLOXSTUDIO 0x006193a0
extern "C" __declspec(naked) void asm_006193a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_006193b0 }
	__asm { add ecx, 0xc }
	__asm { jmp L_006193b5 }
	__asm { L_006193b0: }
	__asm { mov ecx, 0x12de5a0 }
	__asm { L_006193b5: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { fild dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { jns L_006193c3 }
	__asm { fadd dword ptr [g_01038214] }
	__asm { L_006193c3: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { fstp dword ptr [eax] }
	__asm { fild dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jns L_006193db }
	__asm { fadd dword ptr [g_01038214] }
	__asm { L_006193db: }
	__asm { fstp dword ptr [eax + 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0061de60
extern "C" __declspec(naked) void asm_0061de60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edi }
	__asm { je L_0061de9c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_0061de72: }
	__asm { test esi, esi }
	__asm { je L_0061de8c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], edx }
	__asm { L_0061de8c: }
	__asm { add ecx, 0x10 }
	__asm { add esi, 0x10 }
	__asm { cmp ecx, edi }
	__asm { jne L_0061de72 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0061de9c: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0061e320
extern "C" __declspec(naked) void asm_0061e320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 5 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov ecx, esi }
	__asm { shr ecx, 1 }
	__asm { mov eax, 0x4924924 }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_0061e35b }
	__asm { xor esi, esi }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0061e35b: }
	__asm { add esi, ecx }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc240[];
extern "C" void fn_00681fa0();
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x006202e0
extern "C" __declspec(naked) void asm_006202e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { cmp byte ptr [ecx + 0xcc], 0 }
	__asm { je L_00620343 }
	__asm { mov al, byte ptr [g_012dc240] }
	__asm { test al, al }
	__asm { je L_0062030e }
	__asm { push esi }
	__asm { push dword ptr [esi + 4] }
	__asm { movzx eax, al }
	__asm { push ecx }
	__asm { push 0xe34818 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_0062030e: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { cmp dword ptr [ecx + 0xc8], 0 }
	__asm { je L_00620339 }
	__asm { movzx eax, byte ptr [ecx + 0xcc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { call fn_00681fa0 }
	__asm { L_00620339: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov byte ptr [eax + 0xce], 1 }
	__asm { L_00620343: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_012dc248[];
extern "C" void fn_00629630();
extern "C" void fn_006b9b20();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00626590
extern "C" __declspec(naked) void asm_00626590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00629630 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_006265ab }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_006265c9 }
	__asm { jmp L_006265c4 }
	__asm { L_006265ab: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_012dc248] }
	__asm { cmp edx, eax }
	__asm { ja L_006265be }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_012dc248], eax }
	__asm { L_006265be: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006265c4: }
	__asm { call fn_006b9b20 }
	__asm { L_006265c9: }
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

extern "C" void fn_006264e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00626aa0
extern "C" __declspec(naked) void asm_00626aa0()
{
	__asm { L_00626aa0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, edi }
	__asm { jne L_00626ad8 }
	__asm { L_00626ab3: }
	__asm { push dword ptr [esi + 8] }
	__asm { mov ecx, ebx }
	__asm { call L_00626aa0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call fn_006264e0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov edi, esi }
	__asm { je L_00626ab3 }
	__asm { L_00626ad8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00626ae0
extern "C" __declspec(naked) void asm_00626ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov ecx, esi }
	__asm { shr ecx, 1 }
	__asm { mov eax, 0x9249249 }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_00626b1b }
	__asm { xor esi, esi }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00626b1b: }
	__asm { add esi, ecx }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00626b30
extern "C" __declspec(naked) void asm_00626b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00626b69 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi] }
	__asm { L_00626b45: }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { cmp ecx, esi }
	__asm { jb L_00626b5e }
	__asm { cmp esi, ecx }
	__asm { jb L_00626b58 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { cmp ecx, dword ptr [edi + 4] }
	__asm { jl L_00626b5e }
	__asm { L_00626b58: }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_00626b61 }
	__asm { L_00626b5e: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_00626b61: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00626b45 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00626b69: }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00622910();
// FUNCTION: ROBLOXSTUDIO 0x00629690
extern "C" __declspec(naked) void asm_00629690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov edi, dword ptr [esi] }
	__asm { push dword ptr [edi + 4] }
	__asm { push edi }
	__asm { call fn_00622910 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, 0x38e38e2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_006296c1 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006296c1: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0063eb00
extern "C" __declspec(naked) void asm_0063eb00()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { je L_0063eb33 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { L_0063eb33: }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { je L_0063eb62 }
	__asm { lea ecx, [edi + 4] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_0063eb62: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e103b0[];
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00641e20
extern "C" __declspec(naked) void asm_00641e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e103b0] }
	__asm { cmp dword ptr [edi + 8], esi }
	__asm { jne L_00641e4d }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { jne L_00641e4d }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641e4d: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe36588 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00641e70
extern "C" __declspec(naked) void asm_00641e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { L_00641e83: }
	__asm { cmp esi, eax }
	__asm { ja L_00641e8f }
	__asm { cmp edx, eax }
	__asm { ja L_00641e8f }
	__asm { cmp ecx, eax }
	__asm { jbe L_00641e98 }
	__asm { L_00641e8f: }
	__asm { inc edi }
	__asm { shr esi, 1 }
	__asm { shr edx, 1 }
	__asm { shr ecx, 1 }
	__asm { jmp L_00641e83 }
	__asm { L_00641e98: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dce50[];
extern "C" void fn_00646370();
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x006461e0
extern "C" __declspec(naked) void asm_006461e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp bl, byte ptr [esi + 0x61] }
	__asm { je L_0064621a }
	__asm { mov cl, byte ptr [g_012dce50] }
	__asm { test cl, cl }
	__asm { je L_0064620e }
	__asm { movzx eax, bl }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe37814 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0064620e: }
	__asm { push 0x18 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x61], bl }
	__asm { call fn_00646370 }
	__asm { L_0064621a: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00647120();
// FUNCTION: ROBLOXSTUDIO 0x006470d0
extern "C" __declspec(naked) void asm_006470d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { sub edx, dword ptr [ecx + 0x40] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { sub esi, dword ptr [ecx + 0x44] }
	__asm { sub eax, dword ptr [ecx + 0x48] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp edx, dword ptr [ecx + 0x34] }
	__asm { jae L_00647113 }
	__asm { cmp esi, dword ptr [ecx + 0x38] }
	__asm { jae L_00647113 }
	__asm { cmp eax, dword ptr [ecx + 0x3c] }
	__asm { jae L_00647113 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00647120 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00647113: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0064a530
extern "C" __declspec(naked) void asm_0064a530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x4c] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { cmp byte ptr [eax + 0x18], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea edx, [ebp + 0xd] }
	__asm { je L_0064a55d }
	__asm { movzx eax, byte ptr [ecx + 2] }
	__asm { mov byte ptr [ebp + 0xd], al }
	__asm { movzx eax, byte ptr [ecx + 1] }
	__asm { mov byte ptr [ebp + 0xe], al }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { jmp L_0064a567 }
	__asm { L_0064a55d: }
	__asm { mov ax, word ptr [ecx] }
	__asm { mov word ptr [ebp + 0xd], ax }
	__asm { mov al, byte ptr [ecx + 2] }
	__asm { L_0064a567: }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov cx, word ptr [edx] }
	__asm { mov word ptr [eax], cx }
	__asm { mov cl, byte ptr [edx + 2] }
	__asm { mov byte ptr [eax + 2], cl }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0064ad60
extern "C" __declspec(naked) void asm_0064ad60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { sub esi, ecx }
	__asm { sar esi, 2 }
	__asm { xor edx, edx }
	__asm { test esi, esi }
	__asm { je L_0064ad87 }
	__asm { L_0064ad77: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp dword ptr [eax + 0x70], 0 }
	__asm { jne L_0064ad8c }
	__asm { inc edx }
	__asm { add ecx, 4 }
	__asm { cmp edx, esi }
	__asm { jb L_0064ad77 }
	__asm { L_0064ad87: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0064ad8c: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00658000
extern "C" __declspec(naked) void asm_00658000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { sub edx, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { push esi }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov ecx, esi }
	__asm { shr ecx, 1 }
	__asm { mov eax, 0xccccccc }
	__asm { sub eax, ecx }
	__asm { cmp eax, esi }
	__asm { jae L_00658039 }
	__asm { xor esi, esi }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00658039: }
	__asm { add esi, ecx }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { cmovb esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403110();
// FUNCTION: ROBLOXSTUDIO 0x00659570
extern "C" __declspec(naked) void asm_00659570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_006595a3 }
	__asm { sub eax, 4 }
	__asm { L_006595a3: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x30], 0xf }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0063eec0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0065d390
extern "C" __declspec(naked) void asm_0065d390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_0063eec0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0065d3c1 }
	__asm { mov ecx, edi }
	__asm { test ecx, ecx }
	__asm { je L_0065d3c1 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 0xc8], eax }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0065d3c1: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006573f0();
extern "C" void fn_00657410();
extern "C" void fn_00657430();
// FUNCTION: ROBLOXSTUDIO 0x0065d3d0
extern "C" __declspec(naked) void asm_0065d3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { test byte ptr [ebp + 0xc], 2 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_0065d416 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 8], 3 }
	__asm { mov dword ptr [ebp - 4], 0xf }
	__asm { call fn_00657430 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0xc], 2 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00657410 }
	__asm { L_0065d416: }
	__asm { test byte ptr [ebp + 0xc], 0x18 }
	__asm { je L_0065d435 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 8], 1 }
	__asm { mov dword ptr [ebp - 4], 0xfffffff0 }
	__asm { call fn_006573f0 }
	__asm { L_0065d435: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0065d440();
extern "C" void fn_0065d800();
extern "C" void fn_0065d990();
// FUNCTION: ROBLOXSTUDIO 0x0065e3d0
extern "C" __declspec(naked) void asm_0065e3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 0x100 }
	__asm { jne L_0065e3ed }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0065d440 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0065e3ed: }
	__asm { cmp eax, 0x110 }
	__asm { jne L_0065e404 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0065d800 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0065e404: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0065d990 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00666300();
// FUNCTION: ROBLOXSTUDIO 0x00663a80
extern "C" __declspec(naked) void asm_00663a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00666300 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00663aa4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ax, word ptr [edx + 4] }
	__asm { mov word ptr [ecx + 4], ax }
	__asm { L_00663aa4: }
	__asm { lea eax, [ecx + 8] }
	__asm { test eax, eax }
	__asm { je L_00663ada }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov word ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [eax + 0x14], 0 }
	__asm { mov dword ptr [eax + 0x18], 0 }
	__asm { L_00663ada: }
	__asm { mov byte ptr [esi + 9], 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00665360
extern "C" __declspec(naked) void asm_00665360()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_00665393 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_00665393: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_006653be }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_006653be: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006656f0();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00665750
extern "C" __declspec(naked) void asm_00665750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call fn_006656f0 }
	__asm { test al, al }
	__asm { je L_0066577f }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { movzx eax, byte ptr [eax] }
	__asm { mov esi, dword ptr [edi] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { lea eax, [esi + ebx] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop esi }
	__asm { L_0066577f: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f8550[];
extern "C" void fn_00663ff0();
// FUNCTION: ROBLOXSTUDIO 0x00667ba0
extern "C" __declspec(naked) void asm_00667ba0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov al, byte ptr [edx] }
	__asm { cmp al, byte ptr [g_012f8550] }
	__asm { je L_00667bd3 }
	__asm { shr al, 3 }
	__asm { and al, 7 }
	__asm { je L_00667bd3 }
	__asm { cmp al, 5 }
	__asm { je L_00667bcf }
	__asm { lea eax, [ecx + 0x1e] }
	__asm { push eax }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_00663ff0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00667bd3 }
	__asm { L_00667bcf: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00667bd3: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c59c90();
// FUNCTION: ROBLOXSTUDIO 0x0066dd70
extern "C" __declspec(naked) void asm_0066dd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { push esi }
	__asm { movzx eax, byte ptr [edx] }
	__asm { inc eax }
	__asm { add eax, edx }
	__asm { je L_0066dd83 }
	__asm { lea esi, [eax + 1] }
	__asm { jmp L_0066dd85 }
	__asm { L_0066dd83: }
	__asm { xor esi, esi }
	__asm { L_0066dd85: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov eax, ecx }
	__asm { shr eax, 3 }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edx }
	__asm { call fn_00c59c90 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x00673ff0
extern "C" __declspec(naked) void asm_00673ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0067403a }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0067403a }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00674029 }
	__asm { push 0x52 }
	__asm { push 0xe3b448 }
	__asm { push 0xe3b514 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0067403a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00674029: }
	__asm { movzx eax, al }
	__asm { push 0xe3b520 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0067403a: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x60] }
	__asm { call fn_008bbcc0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc994[];
extern "C" void fn_00668a40();
extern "C" void fn_00677a90();
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x00676680
extern "C" __declspec(naked) void asm_00676680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc994] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_006766a2 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe3c670 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006766a2: }
	__asm { mov ecx, esi }
	__asm { call fn_00677a90 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push dword ptr [esi + 0x8c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00668a40 }
	__asm { add esp, 0x18 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00677261
extern "C" __declspec(naked) void asm_00677261()
{
	__asm { add byte ptr [ebx - 0x2baa72ff], cl }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0x54] }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00677299 }
	__asm { test al, 1 }
	__asm { jne L_00677299 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00677299 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00677299: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x0067cdc0
extern "C" __declspec(naked) void asm_0067cdc0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b8c8 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b8d4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b8dc }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe3b8b4 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0067ce11 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0067ce11 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0067ce11: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x0067ce20
extern "C" __declspec(naked) void asm_0067ce20()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b938 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b944 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b94c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe3b924 }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0067ce71 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0067ce71 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0067ce71: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x0067ce80
extern "C" __declspec(naked) void asm_0067ce80()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b900 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b90c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b914 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe3b8ec }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0067ced1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0067ced1 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0067ced1: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x0067cee0
extern "C" __declspec(naked) void asm_0067cee0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe3b970 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b97c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe3b984 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe3b95c }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0067cf31 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0067cf31 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0067cf31: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

// FUNCTION: ROBLOXSTUDIO 0x0067e6a0
extern "C" __declspec(naked) void asm_0067e6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx ecx, word ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { and eax, 0x80000003 }
	__asm { jns L_0067e6b5 }
	__asm { dec eax }
	__asm { or eax, 0xfffffffc }
	__asm { inc eax }
	__asm { L_0067e6b5: }
	__asm { jne L_0067e6d9 }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { cdq }
	__asm { mov esi, 0x64 }
	__asm { idiv esi }
	__asm { pop esi }
	__asm { test edx, edx }
	__asm { jne L_0067e6d5 }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { mov ecx, 0x190 }
	__asm { idiv ecx }
	__asm { test edx, edx }
	__asm { jne L_0067e6d9 }
	__asm { L_0067e6d5: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e6d9: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc99e[];
extern "C" void fn_00689070();
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x00681590
extern "C" __declspec(naked) void asm_00681590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc99e] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_006815bb }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push dword ptr [esi + 0x3c] }
	__asm { push 0xe3cf58 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_006815bb: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { call fn_00689070 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00686ee0();
extern "C" void fn_0068bac0();
// FUNCTION: ROBLOXSTUDIO 0x006867b0
extern "C" __declspec(naked) void asm_006867b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x1ac] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edi, [ecx + 0x1a8] }
	__asm { push esi }
	__asm { push dword ptr [edi] }
	__asm { call fn_00686ee0 }
	__asm { add esp, 0xc }
	__asm { cmp eax, esi }
	__asm { jne L_006867ea }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { sar eax, 3 }
	__asm { cmp eax, 4 }
	__asm { jae L_006867f2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_0068bac0 }
	__asm { L_006867ea: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006867f2: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006463c0();
extern "C" void fn_00646690();
extern "C" void fn_00647080();
// FUNCTION: ROBLOXSTUDIO 0x00686800
extern "C" __declspec(naked) void asm_00686800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x180] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x1cc] }
	__asm { test esi, esi }
	__asm { je L_00686849 }
	__asm { cmp byte ptr [ecx + 0x1d8], 0 }
	__asm { je L_00686849 }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { jne L_0068682e }
	__asm { mov ecx, esi }
	__asm { call fn_00647080 }
	__asm { test al, al }
	__asm { je L_00686849 }
	__asm { L_0068682e: }
	__asm { push 0x5a }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_006463c0 }
	__asm { push 0x80 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00646690 }
	__asm { L_00686849: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00686ee0
extern "C" __declspec(naked) void asm_00686ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp eax, esi }
	__asm { je L_00686f20 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { movzx edi, word ptr [edx] }
	__asm { L_00686ef5: }
	__asm { cmp word ptr [eax], di }
	__asm { jne L_00686f18 }
	__asm { mov cx, word ptr [eax + 2] }
	__asm { cmp cx, word ptr [edx + 2] }
	__asm { jne L_00686f18 }
	__asm { mov cx, word ptr [eax + 4] }
	__asm { cmp cx, word ptr [edx + 4] }
	__asm { jne L_00686f18 }
	__asm { mov cx, word ptr [eax + 6] }
	__asm { cmp cx, word ptr [edx + 6] }
	__asm { je L_00686f1f }
	__asm { L_00686f18: }
	__asm { add eax, 8 }
	__asm { cmp eax, esi }
	__asm { jne L_00686ef5 }
	__asm { L_00686f1f: }
	__asm { pop edi }
	__asm { L_00686f20: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00687b30
extern "C" __declspec(naked) void asm_00687b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, edx }
	__asm { je L_00687b7a }
	__asm { add edx, 8 }
	__asm { L_00687b44: }
	__asm { fld dword ptr [edx - 0x24] }
	__asm { sub edx, 0x1c }
	__asm { fstp dword ptr [eax - 0x1c] }
	__asm { sub eax, 0x1c }
	__asm { fld dword ptr [edx - 4] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [edx] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fld dword ptr [edx + 4] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { fld dword ptr [edx + 8] }
	__asm { fstp dword ptr [eax + 0x10] }
	__asm { fld dword ptr [edx + 0xc] }
	__asm { fstp dword ptr [eax + 0x14] }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { lea ecx, [edx - 8] }
	__asm { cmp ecx, esi }
	__asm { jne L_00687b44 }
	__asm { L_00687b7a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068fa70
extern "C" __declspec(naked) void asm_0068fa70()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { test esi, esi }
	__asm { je L_0068faaf }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0068fa9e }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0068fa85: }
	__asm { mov edi, dword ptr [esi] }
	__asm { cmp edi, dword ptr [esi + 8] }
	__asm { je L_0068fa9c }
	__asm { push dword ptr [esi] }
	__asm { mov edi, dword ptr [edi + 8] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], edi }
	__asm { test edi, edi }
	__asm { jne L_0068fa85 }
	__asm { L_0068fa9c: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0068fa9e: }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { L_0068faaf: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004030b0();
extern "C" void fn_0092da00();
// FUNCTION: ROBLOXSTUDIO 0x006905a0
extern "C" __declspec(naked) void asm_006905a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_006905b1 }
	__asm { inc eax }
	__asm { jmp L_006905b3 }
	__asm { L_006905b1: }
	__asm { xor eax, eax }
	__asm { L_006905b3: }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0092da00 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { pop esi }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00692c00
extern "C" __declspec(naked) void asm_00692c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, esi }
	__asm { je L_00692c36 }
	__asm { mov edx, ecx }
	__asm { sub edx, eax }
	__asm { L_00692c15: }
	__asm { fld dword ptr [ecx] }
	__asm { add ecx, 0x10 }
	__asm { fstp dword ptr [eax] }
	__asm { add eax, 0x10 }
	__asm { fld dword ptr [edx + eax - 0xc] }
	__asm { fstp dword ptr [eax - 0xc] }
	__asm { fld dword ptr [ecx - 8] }
	__asm { fstp dword ptr [eax - 8] }
	__asm { fld dword ptr [ecx - 4] }
	__asm { fstp dword ptr [eax - 4] }
	__asm { cmp ecx, esi }
	__asm { jne L_00692c15 }
	__asm { L_00692c36: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00693c80();
extern "C" void fn_0084f520();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00693270
extern "C" __declspec(naked) void asm_00693270()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_006932ab }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { je L_00693292 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0084f520 }
	__asm { L_00693292: }
	__asm { push dword ptr [edi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { L_006932ab: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_006932c1 }
	__asm { mov ecx, esi }
	__asm { call fn_00693c80 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006932c1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_012de4e4[];
extern "C" void fn_00695120();
extern "C" void fn_006b9b20();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00694120
extern "C" __declspec(naked) void asm_00694120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00695120 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_0069413b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00694159 }
	__asm { jmp L_00694154 }
	__asm { L_0069413b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_012de4e4] }
	__asm { cmp edx, eax }
	__asm { ja L_0069414e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_012de4e4], eax }
	__asm { L_0069414e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00694154: }
	__asm { call fn_006b9b20 }
	__asm { L_00694159: }
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

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_012de4dc[];
extern "C" void fn_00695180();
extern "C" void fn_006b9b20();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00694190
extern "C" __declspec(naked) void asm_00694190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00695180 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_006941ab }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_006941c9 }
	__asm { jmp L_006941c4 }
	__asm { L_006941ab: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_012de4dc] }
	__asm { cmp edx, eax }
	__asm { ja L_006941be }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_012de4dc], eax }
	__asm { L_006941be: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006941c4: }
	__asm { call fn_006b9b20 }
	__asm { L_006941c9: }
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

extern "C" void fn_00694040();
extern "C" void fn_00694260();
// FUNCTION: ROBLOXSTUDIO 0x00694320
extern "C" __declspec(naked) void asm_00694320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { movsx eax, word ptr [esi] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { add eax, 4 }
	__asm { mov edi, ecx }
	__asm { lea eax, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + eax*4] }
	__asm { lea eax, [eax + edx*8] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_0069434c }
	__asm { L_00694343: }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 0x2c }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00694343 }
	__asm { L_0069434c: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { call fn_00694040 }
	__asm { push esi }
	__asm { call fn_00694260 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [edi + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00695e50();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00695f20
extern "C" __declspec(naked) void asm_00695f20()
{
	__asm { push esi }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { lea esi, [ecx + 0x30] }
	__asm { L_00695f27: }
	__asm { mov ecx, edi }
	__asm { mov eax, 0x10000 }
	__asm { sar eax, cl }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00695e50 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffff8 }
	__asm { push eax }
	__asm { push 0 }
	__asm { push ecx }
	__asm { call fn_00cf6804 }
	__asm { inc edi }
	__asm { add esp, 0xc }
	__asm { add esi, 0xc }
	__asm { cmp edi, 4 }
	__asm { jl L_00695f27 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_0069ba10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0069d490
extern "C" __declspec(naked) void asm_0069d490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0069d4e7 }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { push esi }
	__asm { je L_0069d4dd }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_0069ba10 }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { L_0069d4dd: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_0069d4e7: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_0069ba10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0069ec80
extern "C" __declspec(naked) void asm_0069ec80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0069ecda }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { push esi }
	__asm { je L_0069ecd0 }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_0069ba10 }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { L_0069ecd0: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_0069ecda: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_006a2760();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a4080
extern "C" __declspec(naked) void asm_006a4080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0xf }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a2760 }
	__asm { cmp dword ptr [ebp - 0xc], 0x10 }
	__asm { jb L_006a40d8 }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a40d8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006aa330();
// FUNCTION: ROBLOXSTUDIO 0x006a9da0
extern "C" __declspec(naked) void asm_006a9da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { test ecx, ecx }
	__asm { je L_006a9ddc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_006a9db8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006a9db8: }
	__asm { add eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_006aa330 }
	__asm { L_006a9ddc: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006a9de0
extern "C" __declspec(naked) void asm_006a9de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edi }
	__asm { je L_006a9e12 }
	__asm { L_006a9df2: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], edx }
	__asm { add ecx, 0x10 }
	__asm { add esi, 0x10 }
	__asm { cmp ecx, edi }
	__asm { jne L_006a9df2 }
	__asm { L_006a9e12: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006a9e20
extern "C" __declspec(naked) void asm_006a9e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp ecx, edx }
	__asm { je L_006a9e59 }
	__asm { push esi }
	__asm { L_006a9e31: }
	__asm { test eax, eax }
	__asm { je L_006a9e4b }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { L_006a9e4b: }
	__asm { add ecx, 0x10 }
	__asm { add eax, 0x10 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp ecx, edx }
	__asm { jne L_006a9e31 }
	__asm { pop esi }
	__asm { L_006a9e59: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e122e8[];
extern "C" char g_00e122ec[];
extern "C" char g_00e12634[];
extern "C" char g_00e12638[];
extern "C" char g_00e1263c[];
extern "C" char g_00e12640[];
extern "C" char g_00e12644[];
extern "C" char g_00e12648[];
extern "C" char g_00e1264c[];
extern "C" char g_00e12650[];
extern "C" char g_00e12654[];
extern "C" char g_00e12698[];
extern "C" char g_00e1269c[];
extern "C" char g_00e126a0[];
extern "C" char g_00e126a4[];
extern "C" char g_00e126a8[];
extern "C" char g_00e126ac[];
extern "C" char g_00e126b0[];
extern "C" char g_00e126b4[];
extern "C" char g_00e126b8[];
extern "C" char g_00e126bc[];
extern "C" char g_00e126c0[];
extern "C" char g_00e126c4[];
extern "C" char g_00e126c8[];
extern "C" char g_00e126cc[];
extern "C" char g_00e126d0[];
extern "C" char g_00e126d4[];
extern "C" char g_00e126d8[];
extern "C" char g_00e126dc[];
extern "C" char g_00e126e0[];
extern "C" char g_00e126e4[];
extern "C" char g_00e126e8[];
// FUNCTION: ROBLOXSTUDIO 0x006af484
extern "C" __declspec(naked) void asm_006af484()
{
	__asm { jmp dword ptr [g_00e126e8] }
	__asm { jmp dword ptr [g_00e126e4] }
	__asm { jmp dword ptr [g_00e126e0] }
	__asm { jmp dword ptr [g_00e126dc] }
	__asm { jmp dword ptr [g_00e126d8] }
	__asm { jmp dword ptr [g_00e126d4] }
	__asm { jmp dword ptr [g_00e126d0] }
	__asm { jmp dword ptr [g_00e126cc] }
	__asm { jmp dword ptr [g_00e126c8] }
	__asm { jmp dword ptr [g_00e126c4] }
	__asm { jmp dword ptr [g_00e126c0] }
	__asm { jmp dword ptr [g_00e126bc] }
	__asm { jmp dword ptr [g_00e126b8] }
	__asm { jmp dword ptr [g_00e126b4] }
	__asm { jmp dword ptr [g_00e126b0] }
	__asm { jmp dword ptr [g_00e126ac] }
	__asm { jmp dword ptr [g_00e126a8] }
	__asm { jmp dword ptr [g_00e126a4] }
	__asm { jmp dword ptr [g_00e126a0] }
	__asm { jmp dword ptr [g_00e1269c] }
	__asm { jmp dword ptr [g_00e12698] }
	__asm { jmp dword ptr [g_00e12654] }
	__asm { jmp dword ptr [g_00e12650] }
	__asm { jmp dword ptr [g_00e1264c] }
	__asm { jmp dword ptr [g_00e12648] }
	__asm { jmp dword ptr [g_00e12644] }
	__asm { jmp dword ptr [g_00e12640] }
	__asm { jmp dword ptr [g_00e1263c] }
	__asm { jmp dword ptr [g_00e12638] }
	__asm { jmp dword ptr [g_00e12634] }
	__asm { jmp dword ptr [g_00e122ec] }
	__asm { jmp dword ptr [g_00e122e8] }
}

// FUNCTION: ROBLOXSTUDIO 0x006b07e0
extern "C" __declspec(naked) void asm_006b07e0()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x18], 0 }
	__asm { jne L_006b07f2 }
	__asm { mov eax, 0x80040213 }
	__asm { pop edi }
	__asm { ret 4 }
	__asm { L_006b07f2: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { push eax }
	__asm { call edx }
	__asm { test eax, eax }
	__asm { jl L_006b0814 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { sub dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { sbb dword ptr [esi + 4], ecx }
	__asm { xor eax, eax }
	__asm { L_006b0814: }
	__asm { pop esi }
	__asm { pop edi }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b09a0
extern "C" __declspec(naked) void asm_006b09a0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { call edx }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { je L_006b09bd }
	__asm { mov eax, 0x80040203 }
	__asm { pop esi }
	__asm { ret 8 }
	__asm { L_006b09bd: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { sub edx, eax }
	__asm { cmp ecx, edx }
	__asm { jbe L_006b09d6 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { ret 8 }
	__asm { L_006b09d6: }
	__asm { add eax, ecx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b14c0
extern "C" __declspec(naked) void asm_006b14c0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 0x24] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push ecx }
	__asm { push esi }
	__asm { call edx }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { cmp eax, dword ptr [edi + 0x1c] }
	__asm { jne L_006b14e8 }
	__asm { pop edi }
	__asm { mov eax, 0x80040208 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b14e8: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { add edi, 0x9c }
	__asm { push edi }
	__asm { push 0xe43478 }
	__asm { push esi }
	__asm { call edx }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { setge cl }
	__asm { pop edi }
	__asm { pop esi }
	__asm { dec ecx }
	__asm { and eax, ecx }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b1510
extern "C" __declspec(naked) void asm_006b1510()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x98] }
	__asm { test eax, eax }
	__asm { je L_006b1541 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 0x18] }
	__asm { push eax }
	__asm { call edx }
	__asm { test eax, eax }
	__asm { jl L_006b155f }
	__asm { mov eax, dword ptr [esi + 0x98] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { L_006b1541: }
	__asm { mov eax, dword ptr [esi + 0x9c] }
	__asm { test eax, eax }
	__asm { je L_006b155d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { L_006b155d: }
	__asm { xor eax, eax }
	__asm { L_006b155f: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006b1fb0
extern "C" __declspec(naked) void asm_006b1fb0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { add eax, 0xc }
	__asm { mov dword ptr [esi], 0xe42f1c }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 0x10], 1 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { test eax, eax }
	__asm { jne L_006b1ff4 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { call edx }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 8 }
	__asm { L_006b1ff4: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 0xc], edx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 8 }
}

extern "C" char g_00e132cc[];
// FUNCTION: ROBLOXSTUDIO 0x006b2ab0
extern "C" __declspec(naked) void asm_006b2ab0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { test esi, esi }
	__asm { je L_006b2af4 }
	__asm { cmp dword ptr [esi + 0x40], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e132cc] }
	__asm { je L_006b2ada }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { push eax }
	__asm { call ebx }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { L_006b2ada: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_006b2af0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { L_006b2af0: }
	__asm { push esi }
	__asm { call ebx }
	__asm { pop ebx }
	__asm { L_006b2af4: }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10188[];
extern "C" char g_00e10198[];
extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
// FUNCTION: ROBLOXSTUDIO 0x006b38a0
extern "C" __declspec(naked) void asm_006b38a0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { lea edi, [esi + 0x18] }
	__asm { push edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_006b38c5 }
	__asm { push edi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { mov eax, 0x80004005 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_006b38c5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { push -1 }
	__asm { push edx }
	__asm { call dword ptr [g_00e10188] }
	__asm { mov esi, dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_0042c130();
// FUNCTION: ROBLOXSTUDIO 0x006b3e50
extern "C" __declspec(naked) void asm_006b3e50()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { test esi, esi }
	__asm { jne L_006b3e62 }
	__asm { mov eax, 0x80004003 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b3e62: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { push 0xf0d610 }
	__asm { push eax }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_006b3e8c }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call edx }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b3e8c: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, 0x80004002 }
	__asm { pop esi }
	__asm { ret 0xc }
}

extern "C" void fn_0042bea0();
// FUNCTION: ROBLOXSTUDIO 0x006b5370
extern "C" __declspec(naked) void asm_006b5370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 1 }
	__asm { jae L_006b5386 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push 1 }
	__asm { call fn_0042bea0 }
	__asm { L_006b5386: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_006b5390 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b5392 }
	__asm { L_006b5390: }
	__asm { mov ecx, esi }
	__asm { L_006b5392: }
	__asm { mov ax, word ptr [ebp + 8] }
	__asm { mov word ptr [ecx], ax }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov dword ptr [esi + 0x10], 1 }
	__asm { jb L_006b53b5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + 2], cx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006b53b5: }
	__asm { mov eax, esi }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + 2], cx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b6130();
// FUNCTION: ROBLOXSTUDIO 0x006b60e0
extern "C" __declspec(naked) void asm_006b60e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp word ptr [esi], 0 }
	__asm { jne L_006b60fe }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_006b6130 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006b60fe: }
	__asm { mov edx, esi }
	__asm { push edi }
	__asm { lea edi, [edx + 2] }
	__asm { L_006b6104: }
	__asm { mov ax, word ptr [edx] }
	__asm { add edx, 2 }
	__asm { test ax, ax }
	__asm { jne L_006b6104 }
	__asm { sub edx, edi }
	__asm { pop edi }
	__asm { sar edx, 1 }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_006b6130 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006b56f0();
// FUNCTION: ROBLOXSTUDIO 0x006b6610
extern "C" __declspec(naked) void asm_006b6610()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x10] }
	__asm { test esi, esi }
	__asm { je L_006b6655 }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b6624 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { jmp L_006b6626 }
	__asm { L_006b6624: }
	__asm { mov edx, ecx }
	__asm { L_006b6626: }
	__asm { cmp word ptr [edx + esi*2 - 2], 0x3a }
	__asm { je L_006b6655 }
	__asm { cmp eax, 8 }
	__asm { jb L_006b6637 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp L_006b6639 }
	__asm { L_006b6637: }
	__asm { mov eax, ecx }
	__asm { L_006b6639: }
	__asm { movzx eax, word ptr [eax + esi*2 - 2] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b6655 }
	__asm { cmp eax, 0x5c }
	__asm { je L_006b6655 }
	__asm { push 0x5c }
	__asm { push 1 }
	__asm { call fn_006b56f0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_006b6655: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0042bca0();
// FUNCTION: ROBLOXSTUDIO 0x006b6660
extern "C" __declspec(naked) void asm_006b6660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_006b66a2 }
	__asm { cmp eax, dword ptr [ecx + 0x10] }
	__asm { jae L_006b66a2 }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { push esi }
	__asm { cmp edx, 8 }
	__asm { jb L_006b667c }
	__asm { mov esi, dword ptr [ecx] }
	__asm { jmp L_006b667e }
	__asm { L_006b667c: }
	__asm { mov esi, ecx }
	__asm { L_006b667e: }
	__asm { cmp word ptr [esi + eax*2 + 2], 0x2f }
	__asm { pop esi }
	__asm { je L_006b669a }
	__asm { cmp edx, 8 }
	__asm { jb L_006b6690 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { jmp L_006b6692 }
	__asm { L_006b6690: }
	__asm { mov edx, ecx }
	__asm { L_006b6692: }
	__asm { cmp word ptr [edx + eax*2 + 2], 0x5c }
	__asm { jne L_006b66a2 }
	__asm { L_006b669a: }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_0042bca0 }
	__asm { L_006b66a2: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b7230
extern "C" __declspec(naked) void asm_006b7230()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x44], 0x10 }
	__asm { jb L_006b7244 }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b7244: }
	__asm { mov dword ptr [esi + 0x44], 0xf }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { cmp dword ptr [esi + 0x2c], 8 }
	__asm { jb L_006b7267 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b7267: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x2c], 7 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov word ptr [esi + 0x18], ax }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_006b728b }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b728b: }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { xor eax, eax }
	__asm { mov word ptr [esi], ax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00421060();
extern "C" void fn_004226b0();
// FUNCTION: ROBLOXSTUDIO 0x006b9b80
extern "C" __declspec(naked) void asm_006b9b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006b9b9e }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_006b9b9e: }
	__asm { mov dword ptr [esi], edi }
	__asm { test edi, edi }
	__asm { je L_006b9bb0 }
	__asm { lea eax, [edi + 5] }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_006b9bb0: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b9b30();
// FUNCTION: ROBLOXSTUDIO 0x006b9ee0
extern "C" __declspec(naked) void asm_006b9ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006b9f12 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_006b9b30 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_006b9f12 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006b9f12: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006ba2a0
extern "C" __declspec(naked) void asm_006ba2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, esi }
	__asm { je L_006ba2ce }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_006ba2b1: }
	__asm { test edx, edx }
	__asm { je L_006ba2bf }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [ecx], 0 }
	__asm { L_006ba2bf: }
	__asm { add ecx, 4 }
	__asm { add edx, 4 }
	__asm { cmp ecx, esi }
	__asm { jne L_006ba2b1 }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006ba2ce: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006bc9a0
extern "C" __declspec(naked) void asm_006bc9a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006bc9f9 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10194] }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { test dl, dl }
	__asm { je L_006bc9f3 }
	__asm { test eax, eax }
	__asm { jne L_006bc9f3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006bc9e2 }
	__asm { push 0x58 }
	__asm { push 0xe43a30 }
	__asm { push 0xe43a68 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006bc9f3 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_006bc9e2: }
	__asm { movzx eax, dl }
	__asm { push 0xe43a78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006bc9f3: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_006bc9f9: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_012de788[];
extern "C" char g_012de78d[];
extern "C" char g_012de78e[];
extern "C" void fn_006bc950();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006bcf40
extern "C" __declspec(naked) void asm_006bcf40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012de78d], 0 }
	__asm { je L_006bcf5c }
	__asm { mov eax, dword ptr [g_012de788] }
	__asm { test eax, eax }
	__asm { jle L_006bcf5c }
	__asm { cmp dword ptr [ecx], eax }
	__asm { jg L_006bcf6b }
	__asm { L_006bcf5c: }
	__asm { push ecx }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006bcf6b: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [g_012de78e], 1 }
	__asm { mov dword ptr [ebp - 4], 0xe43ad0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bef00
extern "C" __declspec(naked) void asm_006bef00()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_006bef43 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 2 }
	__asm { cmp ecx, eax }
	__asm { jl L_006bef24 }
	__asm { sub edx, dword ptr [esi] }
	__asm { sar edx, 2 }
	__asm { sub ecx, edx }
	__asm { L_006bef24: }
	__asm { lea eax, [edi + ecx*4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_006bef3a }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bef3a: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bef43: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bef50
extern "C" __declspec(naked) void asm_006bef50()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_006bef93 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_006bef74 }
	__asm { sub edx, dword ptr [esi] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_006bef74: }
	__asm { lea eax, [edi + ecx*8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_006bef8a }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bef8a: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bef93: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_005eb810();
// FUNCTION: ROBLOXSTUDIO 0x006c2610
extern "C" __declspec(naked) void asm_006c2610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [ebx + 0x220] }
	__asm { test edi, edi }
	__asm { jle L_006c2652 }
	__asm { L_006c2625: }
	__asm { cmp esi, dword ptr [ebx + 0x224] }
	__asm { je L_006c2652 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 0x14], 0 }
	__asm { jne L_006c264b }
	__asm { cmp byte ptr [eax + 0x1c], 0 }
	__asm { je L_006c264b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov byte ptr [eax + 0x1c], 0 }
	__asm { call fn_005eb810 }
	__asm { dec edi }
	__asm { L_006c264b: }
	__asm { add esi, 8 }
	__asm { test edi, edi }
	__asm { jg L_006c2625 }
	__asm { L_006c2652: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006c54a0();
extern "C" void fn_006c5500();
// FUNCTION: ROBLOXSTUDIO 0x006c48a0
extern "C" __declspec(naked) void asm_006c48a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ecx + 0x90], 1 }
	__asm { je L_006c48bc }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006c48bc: }
	__asm { lea eax, [ecx + 0xa0] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c5500 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_011dd314[];
extern "C" char g_012df318[];
extern "C" char g_012df390[];
extern "C" void fn_006bc930();
extern "C" void fn_006c5410();
extern "C" void fn_006c5930();
extern "C" void fn_006c6686();
// FUNCTION: ROBLOXSTUDIO 0x006c54a0
extern "C" __declspec(naked) void asm_006c54a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [g_011dd314], 0 }
	__asm { jg L_006c54bc }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c5410 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c54bc: }
	__asm { cmp dword ptr [g_012df390], 0 }
	__asm { jne L_006c54ea }
	__asm { push 1 }
	__asm { push 0x12df390 }
	__asm { call fn_006bc930 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006c54ea }
	__asm { call fn_006c5930 }
	__asm { push 0x6c5910 }
	__asm { call fn_006c6686 }
	__asm { add esp, 4 }
	__asm { L_006c54ea: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld qword ptr [g_012df318] }
	__asm { fstp qword ptr [eax] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006c6520
extern "C" __declspec(naked) void asm_006c6520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { xor eax, eax }
	__asm { cpuid }
	__asm { mov dword ptr [ebp - 0xc], ebx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp dword ptr [ebp - 0xc], 0x756e6547 }
	__asm { pop ebx }
	__asm { jne L_006c656e }
	__asm { cmp dword ptr [ebp - 8], 0x49656e69 }
	__asm { jne L_006c656e }
	__asm { cmp dword ptr [ebp - 4], 0x6c65746e }
	__asm { jne L_006c656e }
	__asm { mov eax, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c656e: }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c6500();
extern "C" void fn_006c6520();
// FUNCTION: ROBLOXSTUDIO 0x006c65f0
extern "C" __declspec(naked) void asm_006c65f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c6500 }
	__asm { cmp eax, 1 }
	__asm { jb L_006c6622 }
	__asm { call fn_006c6520 }
	__asm { test eax, eax }
	__asm { je L_006c6622 }
	__asm { mov eax, 1 }
	__asm { cpuid }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { L_006c6622: }
	__asm { test dword ptr [ebp - 4], 0x10000000 }
	__asm { jne L_006c6635 }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c6635: }
	__asm { mov eax, 1 }
	__asm { cpuid }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { shr eax, 0x10 }
	__asm { and eax, 0xff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006d8f20
extern "C" __declspec(naked) void asm_006d8f20()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { cmp ecx, 0x270 }
	__asm { jb L_006d8f36 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { xor ecx, ecx }
	__asm { L_006d8f36: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + ecx*4] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0xb }
	__asm { xor ecx, eax }
	__asm { mov eax, ecx }
	__asm { and eax, 0xff3a58ad }
	__asm { shl eax, 7 }
	__asm { xor ecx, eax }
	__asm { mov eax, ecx }
	__asm { and eax, 0xffffdf8c }
	__asm { shl eax, 0xf }
	__asm { xor ecx, eax }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x12 }
	__asm { xor eax, ecx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006e88f0();
// FUNCTION: ROBLOXSTUDIO 0x006ec610
extern "C" __declspec(naked) void asm_006ec610()
{
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { sub edx, dword ptr [ecx + 0x38] }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { sbb eax, dword ptr [ecx + 0x3c] }
	__asm { mov dword ptr [ecx + 0x58], edx }
	__asm { mov dword ptr [ecx + 0x5c], eax }
	__asm { mov eax, edx }
	__asm { mov edx, dword ptr [ecx + 0x5c] }
	__asm { test edx, edx }
	__asm { jl L_006ec63f }
	__asm { jg L_006ec633 }
	__asm { test eax, eax }
	__asm { jb L_006ec63f }
	__asm { L_006ec633: }
	__asm { cmp edx, dword ptr [ecx + 0x4c] }
	__asm { jl L_006ec650 }
	__asm { jg L_006ec63f }
	__asm { cmp eax, dword ptr [ecx + 0x48] }
	__asm { jbe L_006ec650 }
	__asm { L_006ec63f: }
	__asm { add eax, dword ptr [ecx + 0x38] }
	__asm { push 0 }
	__asm { adc edx, dword ptr [ecx + 0x3c] }
	__asm { push 0 }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_006e88f0 }
	__asm { L_006ec650: }
	__asm { ret 8 }
}

extern "C" void fn_006e88f0();
// FUNCTION: ROBLOXSTUDIO 0x006ec660
extern "C" __declspec(naked) void asm_006ec660()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov edx, ecx }
	__asm { push esi }
	__asm { add dword ptr [edx + 0x58], eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { adc dword ptr [edx + 0x5c], eax }
	__asm { mov eax, dword ptr [edx + 0x58] }
	__asm { mov esi, dword ptr [edx + 0x5c] }
	__asm { js L_006ec68b }
	__asm { jg L_006ec67f }
	__asm { test eax, eax }
	__asm { jb L_006ec68b }
	__asm { L_006ec67f: }
	__asm { cmp esi, dword ptr [edx + 0x4c] }
	__asm { jl L_006ec6a2 }
	__asm { jg L_006ec68b }
	__asm { cmp eax, dword ptr [edx + 0x48] }
	__asm { jbe L_006ec6a2 }
	__asm { L_006ec68b: }
	__asm { mov ecx, dword ptr [edx + 0x38] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 0x3c] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { adc eax, esi }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, edx }
	__asm { call fn_006e88f0 }
	__asm { L_006ec6a2: }
	__asm { pop esi }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006f5900
extern "C" __declspec(naked) void asm_006f5900()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { cmp dword ptr [esi + 0x2c], 0x10 }
	__asm { jb L_006f5916 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f5916: }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006f5938 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f5938: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e104f4[];
// FUNCTION: ROBLOXSTUDIO 0x006f5960
extern "C" __declspec(naked) void asm_006f5960()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi], esi }
	__asm { jle L_006f59a5 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x10] }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [g_00e104f4] }
	__asm { L_006f5978: }
	__asm { mov eax, dword ptr [ebx + esi*8] }
	__asm { sub eax, 4 }
	__asm { push eax }
	__asm { call ebp }
	__asm { mov dword ptr [ebx + esi*8], 0 }
	__asm { mov dword ptr [ebx + esi*8 + 4], 0 }
	__asm { inc esi }
	__asm { add esp, 4 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jl L_006f5978 }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { mov dword ptr [edi], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 8 }
	__asm { L_006f59a5: }
	__asm { mov dword ptr [edi], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
extern "C" void fn_0070d280();
// FUNCTION: ROBLOXSTUDIO 0x00705450
extern "C" __declspec(naked) void asm_00705450()
{
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00705479 }
	__asm { add eax, 0x3c }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0070d280 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret 4 }
	__asm { L_00705479: }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00708e50
extern "C" __declspec(naked) void asm_00708e50()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { mov esi, ecx }
	__asm { cmp esi, edi }
	__asm { je L_00708e66 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00403540 }
	__asm { L_00708e66: }
	__asm { mov al, byte ptr [edi + 0x18] }
	__asm { mov byte ptr [esi + 0x18], al }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007090b0
extern "C" __declspec(naked) void asm_007090b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe47b20 }
	__asm { cmp dword ptr [esi + 0x44], 0x10 }
	__asm { jb L_007090ca }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007090ca: }
	__asm { mov dword ptr [esi + 0x44], 0xf }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_007090ed }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007090ed: }
	__asm { test byte ptr [esp + 8], 1 }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { je L_0070910f }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070910f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00719020();
extern "C" void fn_00719760();
extern "C" void fn_0071b450();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00719cf0
extern "C" __declspec(naked) void asm_00719cf0()
{
	__asm { sub esp, 0x6c }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x74] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { call fn_00719760 }
	__asm { cmp dword ptr [esi + 0x30], 0 }
	__asm { jne L_00719d19 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { add esp, 0x6c }
	__asm { ret 4 }
	__asm { L_00719d19: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0071b450 }
	__asm { push dword ptr [esi + 0x30] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00719020 }
	__asm { push 0x1102eac }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00719020();
extern "C" void fn_00719760();
extern "C" void fn_0071b450();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0071a400
extern "C" __declspec(naked) void asm_0071a400()
{
	__asm { sub esp, 0x6c }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x74] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { call fn_00719760 }
	__asm { cmp dword ptr [esi + 0x30], 2 }
	__asm { jne L_0071a429 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { add esp, 0x6c }
	__asm { ret 4 }
	__asm { L_0071a429: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0071b450 }
	__asm { push dword ptr [esi + 0x30] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push 2 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00719020 }
	__asm { push 0x1102eac }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0071ae40
extern "C" __declspec(naked) void asm_0071ae40()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe48024 }
	__asm { cmp dword ptr [esi + 0x5c], 0x10 }
	__asm { jb L_0071ae5a }
	__asm { push dword ptr [esi + 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071ae5a: }
	__asm { mov dword ptr [esi + 0x5c], 0xf }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov byte ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi], 0xe47b20 }
	__asm { cmp dword ptr [esi + 0x44], 0x10 }
	__asm { jb L_0071ae83 }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071ae83: }
	__asm { mov dword ptr [esi + 0x44], 0xf }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_0071aea6 }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071aea6: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004036a0();
// FUNCTION: ROBLOXSTUDIO 0x0071af20
extern "C" __declspec(naked) void asm_0071af20()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 1 }
	__asm { jae L_0071af33 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push 1 }
	__asm { call fn_004036a0 }
	__asm { L_0071af33: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0071af3d }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0071af3f }
	__asm { L_0071af3d: }
	__asm { mov ecx, esi }
	__asm { L_0071af3f: }
	__asm { mov al, byte ptr [esp + 8] }
	__asm { mov byte ptr [ecx], al }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], 1 }
	__asm { jb L_0071af5e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax + 1], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_0071af5e: }
	__asm { mov byte ptr [esi + 1], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_006f78c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00723ac0
extern "C" __declspec(naked) void asm_00723ac0()
{
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub edx, dword ptr [esi + 0x44] }
	__asm { js L_00723afd }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x34] }
	__asm { cmp edx, edi }
	__asm { jge L_00723ad7 }
	__asm { mov dword ptr [esi + 0x3c], edx }
	__asm { L_00723ad7: }
	__asm { jle L_00723af8 }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { sub edx, edi }
	__asm { add ecx, edx }
	__asm { mov eax, edi }
	__asm { cmp eax, ecx }
	__asm { cmovge ecx, eax }
	__asm { mov dword ptr [esi + 0x34], ecx }
	__asm { cmp ecx, dword ptr [esi + 0x38] }
	__asm { jle L_00723af8 }
	__asm { push edi }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_006f78c0 }
	__asm { L_00723af8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_00723afd: }
	__asm { push 0x10ffe10 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], 0xe48278 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0072a990();
// FUNCTION: ROBLOXSTUDIO 0x0072a260
extern "C" __declspec(naked) void asm_0072a260()
{
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0072a272 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0072a272: }
	__asm { mov esi, dword ptr [esp + 0x14] }
	__asm { test esi, esi }
	__asm { je L_0072a296 }
	__asm { push dword ptr [edi] }
	__asm { call fn_0072a990 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0072a290 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072a290: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0072a296: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0072c240
extern "C" __declspec(naked) void asm_0072c240()
{
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { xor ecx, ecx }
	__asm { test edx, edx }
	__asm { jle L_0072c283 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x14] }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x24] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x24] }
	__asm { L_0072c262: }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 0x14], ebp }
	__asm { mov dword ptr [eax + 0x18], ebx }
	__asm { mov dword ptr [eax + 0x1c], edi }
	__asm { mov dword ptr [eax + 0x20], esi }
	__asm { inc ecx }
	__asm { add eax, 0x24 }
	__asm { cmp ecx, edx }
	__asm { jl L_0072c262 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { L_0072c283: }
	__asm { ret }
}

extern "C" void fn_007330b0();
extern "C" void fn_00739e30();
extern "C" void fn_0073e9f0();
// FUNCTION: ROBLOXSTUDIO 0x0072ef20
extern "C" __declspec(naked) void asm_0072ef20()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { test esi, esi }
	__asm { je L_0072ef62 }
	__asm { test byte ptr [esi + 0x6c], 0x40 }
	__asm { jne L_0072ef47 }
	__asm { push esi }
	__asm { call fn_0073e9f0 }
	__asm { add esp, 4 }
	__asm { push dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { call fn_007330b0 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072ef47: }
	__asm { push 0xe4a650 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { push dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { call fn_007330b0 }
	__asm { add esp, 8 }
	__asm { L_0072ef62: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007375e0
extern "C" __declspec(naked) void asm_007375e0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov al, byte ptr [esi + 9] }
	__asm { cmp al, 8 }
	__asm { jae L_00737626 }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { add esi, ecx }
	__asm { cmp al, 1 }
	__asm { jne L_00737600 }
	__asm { mov edx, 0xe4ac38 }
	__asm { jmp L_00737614 }
	__asm { L_00737600: }
	__asm { cmp al, 2 }
	__asm { jne L_0073760b }
	__asm { mov edx, 0xe4ad38 }
	__asm { jmp L_00737614 }
	__asm { L_0073760b: }
	__asm { cmp al, 4 }
	__asm { jne L_00737626 }
	__asm { mov edx, 0xe4ae38 }
	__asm { L_00737614: }
	__asm { cmp ecx, esi }
	__asm { jae L_00737626 }
	__asm { L_00737618: }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { mov al, byte ptr [eax + edx] }
	__asm { mov byte ptr [ecx - 1], al }
	__asm { cmp ecx, esi }
	__asm { jb L_00737618 }
	__asm { L_00737626: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00739ab0
extern "C" __declspec(naked) void asm_00739ab0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { push esi }
	__asm { cmp eax, 2 }
	__asm { jne L_00739ac1 }
	__asm { mov esi, 0x120 }
	__asm { jmp L_00739acb }
	__asm { L_00739ac1: }
	__asm { cmp eax, 1 }
	__asm { jne L_00739aed }
	__asm { mov esi, 0x28c }
	__asm { L_00739acb: }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00739ae8 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { L_00739ae8: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00739aed: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x0073a310
extern "C" __declspec(naked) void asm_0073a310()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { test esi, esi }
	__asm { je L_0073a339 }
	__asm { push 8 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0073a33d }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push 0xe }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { L_0073a339: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0073a33d: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x0073d6f0
extern "C" __declspec(naked) void asm_0073d6f0()
{
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { push edi }
	__asm { lea edi, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { lea ebx, [eax + ecx*4] }
	__asm { test esi, esi }
	__asm { jle L_0073d731 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x28] }
	__asm { L_0073d716: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push ebp }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea edi, [edi + 4] }
	__asm { lea ebx, [ebx + 4] }
	__asm { call fn_00cf67fe }
	__asm { dec esi }
	__asm { add esp, 0xc }
	__asm { test esi, esi }
	__asm { jg L_0073d716 }
	__asm { pop ebp }
	__asm { L_0073d731: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737840();
// FUNCTION: ROBLOXSTUDIO 0x00741240
extern "C" __declspec(naked) void asm_00741240()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { test esi, esi }
	__asm { je L_00741270 }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { test edi, edi }
	__asm { je L_0074126f }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x18] }
	__asm { test ebx, ebx }
	__asm { je L_0074126e }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00737840 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { add esp, 0x18 }
	__asm { L_0074126e: }
	__asm { pop ebx }
	__asm { L_0074126f: }
	__asm { pop edi }
	__asm { L_00741270: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00532480();
extern "C" void fn_00865d20();
// FUNCTION: ROBLOXSTUDIO 0x0076fb00
extern "C" __declspec(naked) void asm_0076fb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00865d20 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0076fb2e }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { cmp eax, ecx }
	__asm { je L_0076fb29 }
	__asm { test ecx, ecx }
	__asm { je L_0076fb2e }
	__asm { push eax }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_0076fb2e }
	__asm { L_0076fb29: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0076fb2e: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00770990
extern "C" __declspec(naked) void asm_00770990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [ecx + 8] }
	__asm { je L_007709d4 }
	__asm { cmp edx, dword ptr [ecx + 0xc] }
	__asm { je L_007709d4 }
	__asm { cmp edx, dword ptr [ecx + 0x10] }
	__asm { je L_007709cb }
	__asm { cmp edx, dword ptr [ecx + 0x14] }
	__asm { je L_007709cb }
	__asm { cmp edx, dword ptr [ecx + 0x18] }
	__asm { jne L_007709b8 }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007709b8: }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { mov eax, 4 }
	__asm { cmove eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007709cb: }
	__asm { mov eax, 2 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007709d4: }
	__asm { mov eax, 3 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007709e0
extern "C" __declspec(naked) void asm_007709e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_007709f2 }
	__asm { mov eax, dword ptr [ecx + 0x7c] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007709f2: }
	__asm { cmp eax, dword ptr [ecx + 0xc] }
	__asm { jne L_00770a01 }
	__asm { mov eax, dword ptr [ecx + 0x80] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00770a01: }
	__asm { cmp eax, dword ptr [ecx + 0x10] }
	__asm { jne L_00770a10 }
	__asm { mov eax, dword ptr [ecx + 0x84] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00770a10: }
	__asm { cmp eax, dword ptr [ecx + 0x14] }
	__asm { jne L_00770a1f }
	__asm { mov eax, dword ptr [ecx + 0x88] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00770a1f: }
	__asm { cmp eax, dword ptr [ecx + 0x18] }
	__asm { jne L_00770a2e }
	__asm { mov eax, dword ptr [ecx + 0x8c] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00770a2e: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
}
