// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f244[];
extern "C" char g_0130f248[];
extern "C" char g_0130f24c[];
extern "C" char g_0130f250[];
extern "C" void fn_0049a1e0();
extern "C" void fn_006b9740();
extern "C" void fn_008b19b0();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00bacdc0();
extern "C" void fn_00bacf80();
extern "C" void fn_00bad0a0();
extern "C" void fn_00badde0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bad980
extern "C" __declspec(naked) void asm_00bad980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c3f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00badde0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { jne L_00badab8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00bada26 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bad0a0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + 0x14], ebx }
	__asm { je L_00bada26 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bada11 }
	__asm { push 0xbf }
	__asm { push 0xed0100 }
	__asm { push 0xed0148 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bada26 }
	__asm { L_00bada11: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed0170 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bada26: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bacf80 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00badaa5 }
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { je L_00badaa5 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bada94 }
	__asm { push 0xc1 }
	__asm { push 0xed0100 }
	__asm { push 0xed01f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00badaa5 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bada94: }
	__asm { movzx eax, cl }
	__asm { push 0xed01f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00badaa5: }
	__asm { mov ecx, ebx }
	__asm { call fn_00bacdc0 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { L_00badab8: }
	__asm { test esi, esi }
	__asm { je L_00badabf }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00badabf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5ce5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f250] }
	__asm { test al, 1 }
	__asm { jne L_00badb37 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f250], eax }
	__asm { mov ecx, 0x130f244 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f244], 0 }
	__asm { mov dword ptr [g_0130f248], 0 }
	__asm { call fn_008b19b0 }
	__asm { push 0xe07c00 }
	__asm { mov dword ptr [g_0130f244], eax }
	__asm { mov byte ptr [g_0130f24c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00badb37: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_0130f260[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00baeba0();
// FUNCTION: ROBLOXSTUDIO 0x00bae460
extern "C" __declspec(naked) void asm_00bae460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00baeba0 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00bae4a9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00bae4a9 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00bae4a9 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00bae4a9: }
	__asm { add dword ptr [g_0130f260], 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_0130f258[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0099d680();
// FUNCTION: ROBLOXSTUDIO 0x00bae4c0
extern "C" __declspec(naked) void asm_00bae4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0099d680 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00bae509 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00bae509 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00bae509 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00bae509: }
	__asm { add dword ptr [g_0130f258], 0x24 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_0130f2c0[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0099d530();
// FUNCTION: ROBLOXSTUDIO 0x00baf760
extern "C" __declspec(naked) void asm_00baf760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0099d530 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00baf7a9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00baf7a9 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00baf7a9 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00baf7a9: }
	__asm { add dword ptr [g_0130f2c0], 0x38 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}
