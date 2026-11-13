// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_00e10528[];
extern "C" char g_01307fe0[];
extern "C" char g_01307fe1[];
extern "C" void fn_00402150();
extern "C" void fn_0040fb10();
extern "C" void fn_00410540();
extern "C" void fn_004105d0();
extern "C" void fn_004225e0();
extern "C" void fn_00427900();
extern "C" void fn_0042d490();
extern "C" void fn_006b98c0();
extern "C" void fn_0077b020();
extern "C" void fn_009a7290();
extern "C" void fn_009bef60();
extern "C" void fn_00a589c0();
extern "C" void fn_00a596d0();
extern "C" void fn_00a5b410();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a5cd10
extern "C" __declspec(naked) void asm_00a5cd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49063 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x7c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [ebx + 0xc8], -1 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jne L_00a5cd85 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jne L_00a5cd6f }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe19198 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00410540 }
	__asm { L_00a5cd6f: }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 1 }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { jmp L_00a5cf1f }
	__asm { L_00a5cd85: }
	__asm { lea eax, [ebx + 0x118] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0042d490 }
	__asm { mov esi, dword ptr [ebx + 0x128] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x128] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_009bef60 }
	__asm { cmp dword ptr [eax], esi }
	__asm { setne al }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { test al, al }
	__asm { je L_00a5cdd9 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x128] }
	__asm { call fn_00a5b410 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { jmp L_00a5cddd }
	__asm { L_00a5cdd9: }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { L_00a5cddd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a5ce22 }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { dec dword ptr [edx] }
	__asm { jne L_00a5ce22 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edx + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a5ce22 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a5ce22 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a5ce22 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a5ce22: }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { je L_00a5ce38 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_004105d0 }
	__asm { jmp L_00a5cf1f }
	__asm { L_00a5ce38: }
	__asm { cmp dword ptr [ebx + 0xc4], 0x10 }
	__asm { lea eax, [ebx + 0xb0] }
	__asm { jb L_00a5ce49 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a5ce49: }
	__asm { push dword ptr [ebx + 0xc8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0x10 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00427900 }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { jb L_00a5ce84 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a5ce84: }
	__asm { push 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { push 0 }
	__asm { sub esp, 0x58 }
	__asm { mov esi, esp }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { call fn_004225e0 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_004225e0 }
	__asm { movzx eax, byte ptr [g_01307fe0] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_01307fe1] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_009a7290 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { push 0xa5d1f0 }
	__asm { push esi }
	__asm { call fn_00a596d0 }
	__asm { add esp, 0x5c }
	__asm { mov ecx, edi }
	__asm { call fn_00a589c0 }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { call fn_0077b020 }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { call fn_00402150 }
	__asm { L_00a5cf1f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a5cf4a }
	__asm { test al, 1 }
	__asm { jne L_00a5cf43 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a5cf43 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a5cf43: }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { L_00a5cf4a: }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a5cf71 }
	__asm { test al, 1 }
	__asm { jne L_00a5cf71 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a5cf71 }
	__asm { lea ecx, [ebp + 0x34] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a5cf71: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e10528[];
extern "C" void fn_00402f60();
extern "C" void fn_0040fb10();
extern "C" void fn_00410540();
extern "C" void fn_004105d0();
extern "C" void fn_0042cf70();
extern "C" void fn_0042d490();
extern "C" void fn_00a5b410();
// FUNCTION: ROBLOXSTUDIO 0x00a5cf90
extern "C" __declspec(naked) void asm_00a5cf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd490a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { jne L_00a5d076 }
	__asm { lea eax, [ebx + 0x118] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0042d490 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x128] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a5b410 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov byte ptr [eax], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a5d031 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { dec dword ptr [edx] }
	__asm { jne L_00a5d031 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edx + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a5d031 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a5d031 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a5d031 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a5d031: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { jne L_00a5d060 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00410540 }
	__asm { L_00a5d060: }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 1 }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { jmp L_00a5d104 }
	__asm { L_00a5d076: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { jb L_00a5d084 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_00a5d086 }
	__asm { L_00a5d084: }
	__asm { mov ecx, esi }
	__asm { L_00a5d086: }
	__asm { mov eax, 1 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0x10294d4 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a5d0b7 }
	__asm { cmp edi, 1 }
	__asm { jae L_00a5d0ad }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_00a5d0b5 }
	__asm { L_00a5d0ad: }
	__asm { xor eax, eax }
	__asm { cmp edi, 1 }
	__asm { setne al }
	__asm { L_00a5d0b5: }
	__asm { test eax, eax }
	__asm { L_00a5d0b7: }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_00a5d168 }
	__asm { lea eax, [ebx + 0x118] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0042d490 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x128] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00a5b410 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [eax], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0042cf70 }
	__asm { L_00a5d0f9: }
	__asm { push 1 }
	__asm { L_00a5d0fb: }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { call fn_004105d0 }
	__asm { pop edi }
	__asm { L_00a5d104: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { pop esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00a5d131 }
	__asm { test al, 1 }
	__asm { jne L_00a5d12a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a5d12a }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a5d12a: }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_00a5d131: }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a5d158 }
	__asm { test al, 1 }
	__asm { jne L_00a5d158 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a5d158 }
	__asm { lea ecx, [ebp + 0x3c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a5d158: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
	__asm { L_00a5d168: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00a5d170 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00a5d170: }
	__asm { cmp edi, 1 }
	__asm { mov eax, 1 }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0x10062b8 }
	__asm { push esi }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a5d1a2 }
	__asm { cmp edi, 1 }
	__asm { jae L_00a5d198 }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_00a5d1a0 }
	__asm { L_00a5d198: }
	__asm { xor eax, eax }
	__asm { cmp edi, 1 }
	__asm { setne al }
	__asm { L_00a5d1a0: }
	__asm { test eax, eax }
	__asm { L_00a5d1a2: }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_00a5d0f9 }
	__asm { lea eax, [ebx + 0x118] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0042d490 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x128] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00a5b410 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0042cf70 }
	__asm { push 0 }
	__asm { jmp L_00a5d0fb }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00a603b0();
// FUNCTION: ROBLOXSTUDIO 0x00a5f470
extern "C" __declspec(naked) void asm_00a5f470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00a5f50f }
	__asm { push 0xa60450 }
	__asm { push 0x1308074 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a603b0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a5f4d5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00a5f4d5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a5f50f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a5f50f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a5f50f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a5f50f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a5f50f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130806c[];
extern "C" char g_01308070[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a5f550
extern "C" __declspec(naked) void asm_00a5f550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4929e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00a5f8cc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00a5f582: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xa60440 }
	__asm { push 0x1308064 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01308070] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a5f5e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01308070], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a5f5dd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130806c], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00a5f5ee }
	__asm { L_00a5f5dd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130806c], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00a5f5ee }
	__asm { L_00a5f5e9: }
	__asm { mov eax, dword ptr [g_0130806c] }
	__asm { L_00a5f5ee: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00a5f675 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a5f61b }
	__asm { add eax, -5 }
	__asm { jmp L_00a5f61d }
	__asm { L_00a5f61b: }
	__asm { xor eax, eax }
	__asm { L_00a5f61d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a5f672 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a5f672 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a5f661 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5f672 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a5f661: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5f672: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00a5f675: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00a5f765 }
	__asm { L_00a5f680: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00a5f765 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00a5f705 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a5f6a8 }
	__asm { add eax, -5 }
	__asm { jmp L_00a5f6aa }
	__asm { L_00a5f6a8: }
	__asm { xor eax, eax }
	__asm { L_00a5f6aa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a5f6ff }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00a5f6ff }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a5f6ee }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5f6ff }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a5f6ee: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5f6ff: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a5f705: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00a5f75a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00a5f71c }
	__asm { add ebx, -5 }
	__asm { jmp L_00a5f71e }
	__asm { L_00a5f71c: }
	__asm { xor ebx, ebx }
	__asm { L_00a5f71e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5f754 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5f754 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a5f75a }
	__asm { L_00a5f754: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a5f75a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00a5f680 }
	__asm { L_00a5f765: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00a5f7c9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a5f7c9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a5f7c9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a5f7c9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00a5f7bf }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00a5f7bd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00a5f7bf }
	__asm { L_00a5f7bd: }
	__asm { mov esi, edx }
	__asm { L_00a5f7bf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00a5f7c9: }
	__asm { test esi, esi }
	__asm { je L_00a5f830 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00a5f7d9 }
	__asm { add eax, -5 }
	__asm { jmp L_00a5f7db }
	__asm { L_00a5f7d9: }
	__asm { xor eax, eax }
	__asm { L_00a5f7db: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a5f830 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00a5f830 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a5f81f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5f830 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a5f81f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5f830: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00a5f87f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00a5f847 }
	__asm { add edi, -5 }
	__asm { jmp L_00a5f849 }
	__asm { L_00a5f847: }
	__asm { xor edi, edi }
	__asm { L_00a5f849: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5f879 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5f879 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00a5f87f }
	__asm { L_00a5f879: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00a5f87f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a5f8be }
	__asm { add esi, 5 }
	__asm { je L_00a5f894 }
	__asm { add esi, -5 }
	__asm { jmp L_00a5f896 }
	__asm { L_00a5f894: }
	__asm { xor esi, esi }
	__asm { L_00a5f896: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5f8be }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5f8be }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00a5f8be: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00a5f582 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00a5f8cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00a60320();
// FUNCTION: ROBLOXSTUDIO 0x00a5fe20
extern "C" __declspec(naked) void asm_00a5fe20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00a5fe88 }
	__asm { test ebx, ebx }
	__asm { jne L_00a5fe88 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a5fe77 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5fe88 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a5fe77: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5fe88: }
	__asm { push 0xa60440 }
	__asm { push 0x1308064 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00a60320 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00a5fec8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00a5ff7d }
	__asm { L_00a5fec8: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00a5ff37 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00a5ff37 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a5ff26 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5ff37 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00a5ff26: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5ff37: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a5ff4f }
	__asm { add esi, -5 }
	__asm { jmp L_00a5ff51 }
	__asm { L_00a5ff4f: }
	__asm { xor esi, esi }
	__asm { L_00a5ff51: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5ff7d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a5ff7d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a5ff7d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00a5ffba }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a5ffba }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a5ffba }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a5ffba }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a5ffba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
