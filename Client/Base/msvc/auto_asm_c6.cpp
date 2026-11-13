// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00cd2960();
// FUNCTION: ROBLOXSTUDIO 0x00caa1d0
extern "C" __declspec(naked) void asm_00caa1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x20d8] }
	__asm { test ecx, ecx }
	__asm { je L_00caa1e3 }
	__asm { pop ebp }
	__asm { jmp fn_00cd2960 }
	__asm { L_00caa1e3: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ce4de0();
// FUNCTION: ROBLOXSTUDIO 0x00caa1f0
extern "C" __declspec(naked) void asm_00caa1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x4684] }
	__asm { test ecx, ecx }
	__asm { je L_00caa203 }
	__asm { pop ebp }
	__asm { jmp fn_00ce4de0 }
	__asm { L_00caa203: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cb2ea0
extern "C" __declspec(naked) void asm_00cb2ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x46a8] }
	__asm { test eax, eax }
	__asm { je L_00cb2eb8 }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { jle L_00cb2eb8 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cb2eb8: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01314309[];
// FUNCTION: ROBLOXSTUDIO 0x00cb5480
extern "C" __declspec(naked) void asm_00cb5480()
{
	__asm { cmp byte ptr [g_01314309], 0 }
	__asm { jne L_00cb548c }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00cb548c: }
	__asm { mov eax, dword ptr [ecx + 0x46a8] }
	__asm { cmp eax, 0x1a }
	__asm { je L_00cb549e }
	__asm { test eax, eax }
	__asm { je L_00cb549e }
	__asm { xor eax, eax }
	__asm { ret }
	__asm { L_00cb549e: }
	__asm { mov eax, 1 }
	__asm { ret }
}

extern "C" void fn_00cb55d0();
// FUNCTION: ROBLOXSTUDIO 0x00cb54b0
extern "C" __declspec(naked) void asm_00cb54b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00cb54c4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cb55d0 }
	__asm { L_00cb54c4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ad390 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cb56b0();
// FUNCTION: ROBLOXSTUDIO 0x00cb54e0
extern "C" __declspec(naked) void asm_00cb54e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00cb54f4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cb56b0 }
	__asm { L_00cb54f4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ad558 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cb5790();
// FUNCTION: ROBLOXSTUDIO 0x00cb5510
extern "C" __declspec(naked) void asm_00cb5510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00cb5524 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cb5790 }
	__asm { L_00cb5524: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ad938 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cb5870();
// FUNCTION: ROBLOXSTUDIO 0x00cb5540
extern "C" __declspec(naked) void asm_00cb5540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00cb5554 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cb5870 }
	__asm { L_00cb5554: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ad710 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cb5950();
// FUNCTION: ROBLOXSTUDIO 0x00cb5570
extern "C" __declspec(naked) void asm_00cb5570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00cb5584 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cb5950 }
	__asm { L_00cb5584: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ad2c8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cb5a40();
// FUNCTION: ROBLOXSTUDIO 0x00cb55a0
extern "C" __declspec(naked) void asm_00cb55a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00cb55b4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cb5a40 }
	__asm { L_00cb55b4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12adb38 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cb94f0
extern "C" __declspec(naked) void asm_00cb94f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp ecx, edx }
	__asm { jge L_00cb9506 }
	__asm { or eax, 0xffffffff }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cb9506: }
	__asm { xor eax, eax }
	__asm { cmp ecx, edx }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbaef0
extern "C" __declspec(naked) void asm_00cbaef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp ecx, edx }
	__asm { jae L_00cbaf06 }
	__asm { or eax, 0xffffffff }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cbaf06: }
	__asm { xor eax, eax }
	__asm { cmp ecx, edx }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbf3c0
extern "C" __declspec(naked) void asm_00cbf3c0()
{
	__asm { cmp dword ptr [ecx + 0x878], 0 }
	__asm { jbe L_00cbf3cc }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_00cbf3cc: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 0x990], eax }
	__asm { setne al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cc0c70
extern "C" __declspec(naked) void asm_00cc0c70()
{
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { cmp esi, edx }
	__asm { ja L_00cc0c81 }
	__asm { sub edx, esi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00cc0c81: }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { sub eax, esi }
	__asm { add eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cc4040();
// FUNCTION: ROBLOXSTUDIO 0x00cc4010
extern "C" __declspec(naked) void asm_00cc4010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00cc4024 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cc4040 }
	__asm { L_00cc4024: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12af6c0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cc6590
extern "C" __declspec(naked) void asm_00cc6590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { jb L_00cc65a5 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00cc65a5: }
	__asm { mov byte ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cc7320
extern "C" __declspec(naked) void asm_00cc7320()
{
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { add ecx, 4 }
	__asm { test eax, eax }
	__asm { je L_00cc7331 }
	__asm { cmp eax, ecx }
	__asm { je L_00cc7331 }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_00cc7331: }
	__asm { mov al, 1 }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cc8900
extern "C" __declspec(naked) void asm_00cc8900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xf0023c }
	__asm { je L_00cc891b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cc891b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cc95e0
extern "C" __declspec(naked) void asm_00cc95e0()
{
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { test eax, eax }
	__asm { je L_00cc95f0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { ret }
	__asm { L_00cc95f0: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_00c853c0();
// FUNCTION: ROBLOXSTUDIO 0x00cc9900
extern "C" __declspec(naked) void asm_00cc9900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xef699c }
	__asm { je L_00cc991d }
	__asm { lea ecx, [esi - 4] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_00c853c0 }
	__asm { L_00cc991d: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cd4250
extern "C" __declspec(naked) void asm_00cd4250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { lea ecx, [eax + edx*4] }
	__asm { cmp dword ptr [ecx], ecx }
	__asm { jne L_00cd4268 }
	__asm { L_00cd4260: }
	__asm { add ecx, 4 }
	__asm { inc edx }
	__asm { cmp dword ptr [ecx], ecx }
	__asm { je L_00cd4260 }
	__asm { L_00cd4268: }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00953940();
// FUNCTION: ROBLOXSTUDIO 0x00cdcc90
extern "C" __declspec(naked) void asm_00cdcc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00953940 }
	__asm { lea edx, [eax + 8] }
	__asm { test edx, edx }
	__asm { je L_00cdccac }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { L_00cdccac: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce7080
extern "C" __declspec(naked) void asm_00ce7080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xf04354 }
	__asm { je L_00ce709b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce709b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf3cb0
extern "C" __declspec(naked) void asm_00cf3cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp eax, ecx }
	__asm { je L_00cf3ccf }
	__asm { sub eax, ecx }
	__asm { and eax, 0xffffff }
	__asm { cmp eax, 0x7fffff }
	__asm { jae L_00cf3ccf }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cf3ccf: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
// FUNCTION: ROBLOXSTUDIO 0x00cf4f00
extern "C" __declspec(naked) void asm_00cf4f00()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, -1 }
	__asm { je L_00cf4f17 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10194] }
	__asm { mov dword ptr [esi], 0xffffffff }
	__asm { L_00cf4f17: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e13148[];
extern "C" char g_01316454[];
// FUNCTION: ROBLOXSTUDIO 0x00cf4fc0
extern "C" __declspec(naked) void asm_00cf4fc0()
{
	__asm { mov eax, dword ptr [g_01316454] }
	__asm { test eax, eax }
	__asm { je L_00cf4fe5 }
	__asm { cmp eax, 1 }
	__asm { jle L_00cf4fd5 }
	__asm { dec eax }
	__asm { mov dword ptr [g_01316454], eax }
	__asm { ret }
	__asm { L_00cf4fd5: }
	__asm { call dword ptr [g_00e13148] }
	__asm { mov dword ptr [g_01316454], 0 }
	__asm { L_00cf4fe5: }
	__asm { ret }
}

extern "C" char g_013164d8[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cf64e2
extern "C" __declspec(naked) void asm_00cf64e2()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 8 }
	__asm { call fn_00cf661e }
	__asm { pop ecx }
	__asm { test eax, eax }
	__asm { je L_00cf6501 }
	__asm { mov ecx, dword ptr [g_013164d8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { jmp L_00cf6503 }
	__asm { L_00cf6501: }
	__asm { xor eax, eax }
	__asm { L_00cf6503: }
	__asm { mov dword ptr [g_013164d8], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf7f6b();
// FUNCTION: ROBLOXSTUDIO 0x00cf77d1
extern "C" __declspec(naked) void asm_00cf77d1()
{
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00cf7f6b }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00cf77eb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00cf77eb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf7b7d
extern "C" __declspec(naked) void asm_00cf7b7d()
{
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { movzx edx, word ptr [eax + 0xa] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, edx }
	__asm { jb L_00cf7b94 }
	__asm { xor eax, eax }
	__asm { jmp L_00cf7b9a }
	__asm { L_00cf7b94: }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { L_00cf7b9a: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cfbd20();
// FUNCTION: ROBLOXSTUDIO 0x00cfbcf0
extern "C" __declspec(naked) void asm_00cfbcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jne L_00cfbcfe }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cfbcfe: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cfbd20 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00d02390();
// FUNCTION: ROBLOXSTUDIO 0x00d02460
extern "C" __declspec(naked) void asm_00d02460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00d02390 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x34], 0xe1822c }
	__asm { je L_00d02481 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d02481: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00d024e0
extern "C" __declspec(naked) void asm_00d024e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00d024fb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d024fb: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00d08f80();
// FUNCTION: ROBLOXSTUDIO 0x00d09250
extern "C" __declspec(naked) void asm_00d09250()
{
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00d0925f }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00d08f80 }
	__asm { L_00d0925f: }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00d0bdd0
extern "C" __declspec(naked) void asm_00d0bdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00d0bde5 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d0bde5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00d0cf60
extern "C" __declspec(naked) void asm_00d0cf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xf12324 }
	__asm { je L_00d0cf7b }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d0cf7b: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
