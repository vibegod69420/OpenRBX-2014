// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x00a09230
extern "C" __declspec(naked) void asm_00a09230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x20] }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { cmp eax, edx }
	__asm { je L_00a09253 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { L_00a09244: }
	__asm { cmp dword ptr [eax], ecx }
	__asm { je L_00a0924f }
	__asm { add eax, 4 }
	__asm { cmp eax, edx }
	__asm { jne L_00a09244 }
	__asm { L_00a0924f: }
	__asm { cmp eax, edx }
	__asm { jne L_00a09263 }
	__asm { L_00a09253: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008bbcc0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a09263: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a092a4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a09293 }
	__asm { push 0xb6 }
	__asm { push 0xe9ccdc }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a092a4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a09293: }
	__asm { movzx eax, al }
	__asm { push 0xe9ce20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a092a4: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a0a790
extern "C" __declspec(naked) void asm_00a0a790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { test al, al }
	__asm { je L_00a0a7d9 }
	__asm { test ebx, ebx }
	__asm { jg L_00a0a7d9 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0a7c8 }
	__asm { push 0x18 }
	__asm { push 0xe9cb4c }
	__asm { push 0xe9cb8c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0a7d9 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0a7c8: }
	__asm { movzx eax, al }
	__asm { push 0xe9cba0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0a7d9: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { and ecx, 1 }
	__asm { dec bl }
	__asm { shl ecx, 2 }
	__asm { mov al, 0xf }
	__asm { shl al, cl }
	__asm { shl bl, cl }
	__asm { shr edx, 1 }
	__asm { add edx, dword ptr [ebp + 8] }
	__asm { and bl, al }
	__asm { not al }
	__asm { and al, byte ptr [edx] }
	__asm { or bl, al }
	__asm { mov byte ptr [edx], bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ddcd4[];
extern "C" char g_012e4b5c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0ab80
extern "C" __declspec(naked) void asm_00a0ab80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd439d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af830 }
	__asm { mov dword ptr [esi], 0xe9cf14 }
	__asm { mov dword ptr [esi + 4], 0xe9cf8c }
	__asm { mov dword ptr [esi + 0x18], 0xe9cf94 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9cfa0 }
	__asm { mov eax, dword ptr [g_012ddcd4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a0ac1a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ddcd4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9cf04 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddba8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a0ac1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ddba8 }
	__asm { inc dword ptr [g_012e4b5c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dde04[];
extern "C" char g_012e4b60[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0b5d0
extern "C" __declspec(naked) void asm_00a0b5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43a96 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af830 }
	__asm { mov dword ptr [esi], 0xe9d20c }
	__asm { mov dword ptr [esi + 4], 0xe9d284 }
	__asm { mov dword ptr [esi + 0x18], 0xe9d28c }
	__asm { mov dword ptr [esi + 0x1c], 0xe9d298 }
	__asm { mov eax, dword ptr [g_012dde04] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a0b66a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dde04], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9d1f8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddcd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a0b66a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ddcd8 }
	__asm { inc dword ptr [g_012e4b60] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012ddf34[];
extern "C" char g_012e4afc[];
extern "C" void fn_004118e0();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0bf00
extern "C" __declspec(naked) void asm_00a0bf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43b36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af830 }
	__asm { mov dword ptr [esi], 0xe9d47c }
	__asm { mov dword ptr [esi + 4], 0xe9d4f4 }
	__asm { mov dword ptr [esi + 0x18], 0xe9d4fc }
	__asm { mov dword ptr [esi + 0x1c], 0xe9d508 }
	__asm { mov eax, dword ptr [g_012ddf34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a0bf9a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ddf34], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9d470 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12dde08 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a0bf9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12dde08 }
	__asm { inc dword ptr [g_012e4afc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de064[];
extern "C" char g_012e4af8[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0c790
extern "C" __declspec(naked) void asm_00a0c790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43bc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe9d74c }
	__asm { mov dword ptr [esi + 4], 0xe9d7c4 }
	__asm { mov dword ptr [esi + 0x18], 0xe9d7cc }
	__asm { mov dword ptr [esi + 0x1c], 0xe9d7d8 }
	__asm { mov eax, dword ptr [g_012de064] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a0c829 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de064], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9d73c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddf38 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a0c829: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ddf38 }
	__asm { inc dword ptr [g_012e4af8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4d18[];
extern "C" char g_012ed47c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0d800
extern "C" __declspec(naked) void asm_00a0d800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43d16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe3f41c }
	__asm { mov dword ptr [esi + 4], 0xe3f494 }
	__asm { mov dword ptr [esi + 0x18], 0xe3f49c }
	__asm { mov dword ptr [esi + 0x1c], 0xe3f4a8 }
	__asm { mov eax, dword ptr [g_012ed47c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a0d899 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed47c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe3f4e4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed350 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a0d899: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ed350 }
	__asm { inc dword ptr [g_012e4d18] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0dea0
extern "C" __declspec(naked) void asm_00a0dea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_00a0deb3 }
	__asm { add edi, -0x1c }
	__asm { jmp L_00a0deb5 }
	__asm { L_00a0deb3: }
	__asm { xor edi, edi }
	__asm { L_00a0deb5: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00a0df08 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { add ebx, edi }
	__asm { cmp ebx, eax }
	__asm { je L_00a0dee6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_00a0dee6: }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00a0defe }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push dword ptr [esi + 4] }
	__asm { add ecx, edi }
	__asm { call eax }
	__asm { L_00a0defe: }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { L_00a0df08: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e4ad8[];
extern "C" char g_012ee18c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0df10
extern "C" __declspec(naked) void asm_00a0df10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43e36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe9dd0c }
	__asm { mov dword ptr [esi + 4], 0xe9dd84 }
	__asm { mov dword ptr [esi + 0x18], 0xe9dd8c }
	__asm { mov dword ptr [esi + 0x1c], 0xe9dd98 }
	__asm { mov eax, dword ptr [g_012ee18c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a0dfa9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee18c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9dcf8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee060 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a0dfa9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ee060 }
	__asm { inc dword ptr [g_012e4ad8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00a0e660
extern "C" __declspec(naked) void asm_00a0e660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a0e6ab }
	__asm { push esi }
	__asm { push 0x4033d0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00a0e6ab: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a0e6c8 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0e6c8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a0e800
extern "C" __declspec(naked) void asm_00a0e800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub eax, 0 }
	__asm { je L_00a0e84f }
	__asm { dec eax }
	__asm { je L_00a0e85d }
	__asm { dec eax }
	__asm { je L_00a0e856 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a0e84f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0e83e }
	__asm { push 0x61 }
	__asm { push 0xe9dec8 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0e84f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0e83e: }
	__asm { movzx eax, al }
	__asm { push 0xe9dfc0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0e84f: }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0e856: }
	__asm { mov eax, 2 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0e85d: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a0e870
extern "C" __declspec(naked) void asm_00a0e870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub eax, 0 }
	__asm { je L_00a0e8bf }
	__asm { dec eax }
	__asm { je L_00a0e8ca }
	__asm { dec eax }
	__asm { je L_00a0e8c3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a0e8bf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0e8ae }
	__asm { push 0x6f }
	__asm { push 0xe9dec8 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0e8bf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0e8ae: }
	__asm { movzx eax, al }
	__asm { push 0xe9e018 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0e8bf: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0e8c3: }
	__asm { mov eax, 2 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0e8ca: }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de23c[];
extern "C" char g_012de240[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00a0e980
extern "C" __declspec(naked) void asm_00a0e980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd43e9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x679d20 }
	__asm { push 0x12de21c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de240] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a0e9e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de240], eax }
	__asm { push 0xe9dcf4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de23c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0e9e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012de23c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a0ea00
extern "C" __declspec(naked) void asm_00a0ea00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00a0ea5c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, 5 }
	__asm { jl L_00a0ea50 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0ea3f }
	__asm { push 0x88 }
	__asm { push 0xe9dec8 }
	__asm { push 0xe9e070 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0ea50 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0ea3f: }
	__asm { movzx eax, al }
	__asm { push 0xe9e0f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0ea50: }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov eax, dword ptr [eax + esi*8] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a0ea5c: }
	__asm { mov ecx, dword ptr [edi + 0x68] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [ecx + eax*8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4bdc[];
extern "C" char g_012e84ec[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0edc0
extern "C" __declspec(naked) void asm_00a0edc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43ec6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe9e174 }
	__asm { mov dword ptr [esi + 4], 0xe9e1ec }
	__asm { mov dword ptr [esi + 0x18], 0xe9e1f4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9e200 }
	__asm { mov eax, dword ptr [g_012e84ec] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a0ee59 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e84ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9e15c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e83c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7cb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a0ee59: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e83c0 }
	__asm { inc dword ptr [g_012e4bdc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01306fe1[];
extern "C" void fn_006b9740();
extern "C" void fn_00a0f490();
// FUNCTION: ROBLOXSTUDIO 0x00a0fad0
extern "C" __declspec(naked) void asm_00a0fad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00a0fb1d }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jg L_00a0fb1d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0fb0c }
	__asm { push 0x1e }
	__asm { push 0xe9e3d0 }
	__asm { push 0xe9e47c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0fb1d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0fb0c: }
	__asm { movzx eax, al }
	__asm { push 0xe9e490 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0fb1d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a0fb49 }
	__asm { movzx eax, byte ptr [g_01306fe1] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_00a0f490 }
	__asm { L_00a0fb49: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00bbf840();
// FUNCTION: ROBLOXSTUDIO 0x00a103e0
extern "C" __declspec(naked) void asm_00a103e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00a1042d }
	__asm { cmp byte ptr [esi + 0xc4], 0 }
	__asm { je L_00a1042d }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00a1041c }
	__asm { push 0x37 }
	__asm { push 0xe9e7d4 }
	__asm { push 0xe9e810 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a1042d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a1041c: }
	__asm { movzx eax, al }
	__asm { push 0xe9e878 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a1042d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { jb L_00a1043b }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a1043b: }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_00bbf840 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00bbf840();
// FUNCTION: ROBLOXSTUDIO 0x00a10450
extern "C" __declspec(naked) void asm_00a10450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00a1049d }
	__asm { cmp byte ptr [esi + 0xc4], 0 }
	__asm { je L_00a1049d }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00a1048c }
	__asm { push 0x3e }
	__asm { push 0xe9e7d4 }
	__asm { push 0xe9e810 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a1049d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a1048c: }
	__asm { movzx eax, al }
	__asm { push 0xe9e8d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a1049d: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00bbf840 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00402750();
extern "C" void fn_00403540();
extern "C" void fn_00a1a350();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a1a0d0
extern "C" __declspec(naked) void asm_00a1a0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a1a350 }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00402750 }
	__asm { lea ecx, [eax + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { cmp ecx, eax }
	__asm { je L_00a1a142 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00a1a142: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00a1a153 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a1a153: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a1a490
extern "C" __declspec(naked) void asm_00a1a490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46240 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a1a4e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xea3d54 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a1a4ea }
	__asm { L_00a1a4e8: }
	__asm { xor eax, eax }
	__asm { L_00a1a4ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a1a50e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00a1a50e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a1a520
extern "C" __declspec(naked) void asm_00a1a520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46250 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a1a578 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xea3d6c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a1a57a }
	__asm { L_00a1a578: }
	__asm { xor eax, eax }
	__asm { L_00a1a57a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1b510
extern "C" __declspec(naked) void asm_00a1b510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00a1b573 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a1b55f }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { fld dword ptr [edi + 0x20] }
	__asm { pop edi }
	__asm { fstp dword ptr [esi + 0x20] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a1b55f: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a1b573: }
	__asm { fld dword ptr [edi + 0x20] }
	__asm { pop edi }
	__asm { fstp dword ptr [esi + 0x20] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a1b070();
extern "C" void fn_00a1b470();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a1b650
extern "C" __declspec(naked) void asm_00a1b650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a1b6af }
	__asm { mov ecx, esi }
	__asm { call fn_00a1b470 }
	__asm { mov dword ptr [esi], 0xea3c4c }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [esi + 0x3c], 0 }
	__asm { jmp L_00a1b6b1 }
	__asm { L_00a1b6af: }
	__asm { xor esi, esi }
	__asm { L_00a1b6b1: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a1b070 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xea3c5c }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10268[];
extern "C" void fn_006bb4a0();
extern "C" void fn_00b873b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a1baa0
extern "C" __declspec(naked) void asm_00a1baa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46458 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00a1bb0a }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x34] }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00b873b0 }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_00a1bb0a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xea3c1c }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 0x2c] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a1bb29 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_00a1bb29: }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_006bb4a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10338[];
extern "C" char g_00e1033c[];
extern "C" void fn_006bb4a0();
extern "C" void fn_00a1c1b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a1bb50
extern "C" __declspec(naked) void asm_00a1bb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46478 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a1c1b0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call dword ptr [g_00e10338] }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { call dword ptr [g_00e1033c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xea3c1c }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edi + 0x2c] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a1bbc2 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_00a1bbc2: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_006bb4a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e131b8[];
extern "C" void fn_00adee70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a1bbe0
extern "C" __declspec(naked) void asm_00a1bbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd64fa9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00adee70 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e131b8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a1bc2c }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a1bc2c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a1c8d0();
extern "C" void fn_00b2deb0();
// FUNCTION: ROBLOXSTUDIO 0x00a1c2e0
extern "C" __declspec(naked) void asm_00a1c2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46288 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { add ecx, 0x30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a1c8d0 }
	__asm { mov bl, al }
	__asm { test bl, bl }
	__asm { je L_00a1c328 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_00b2deb0 }
	__asm { L_00a1c328: }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a1c34f }
	__asm { test al, 1 }
	__asm { jne L_00a1c34f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a1c34f }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a1c34f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1c880
extern "C" __declspec(naked) void asm_00a1c880()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00a1c8ce }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { dec edx }
	__asm { and edx, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00a1c8bc }
	__asm { test al, 1 }
	__asm { jne L_00a1c8b6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [edi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a1c8b6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a1c8b6: }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00a1c8bc: }
	__asm { dec dword ptr [esi + 0x10] }
	__asm { pop edi }
	__asm { jne L_00a1c8cb }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00a1c8cb: }
	__asm { inc dword ptr [esi + 0xc] }
	__asm { L_00a1c8ce: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a20800();
extern "C" void fn_00a4f5c0();
// FUNCTION: ROBLOXSTUDIO 0x00a20a00
extern "C" __declspec(naked) void asm_00a20a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_00a20a4e }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jg L_00a20a4e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a20a3d }
	__asm { push 0x8f }
	__asm { push 0xea41a4 }
	__asm { push 0xe90068 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a20a4e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a20a3d: }
	__asm { movzx eax, al }
	__asm { push 0xea4420 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a20a4e: }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00a20800 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00a20a79 }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00a4f5c0 }
	__asm { test al, al }
	__asm { jne L_00a20a79 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a20a79: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00814560();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a24460
extern "C" __declspec(naked) void asm_00a24460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ace }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a244ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a244ce: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { call fn_00814560 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_00814560();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a244f0
extern "C" __declspec(naked) void asm_00a244f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a2455e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a2455e: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { call fn_00814560 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a88980();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a24580
extern "C" __declspec(naked) void asm_00a24580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ace }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 8] }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { mov esi, eax }
	__asm { call fn_004115f0 }
	__asm { mov ecx, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test cl, 1 }
	__asm { jne L_00a245f1 }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_012f39f0], ecx }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a245f1: }
	__asm { push esi }
	__asm { mov ecx, 0x12f3968 }
	__asm { call fn_00a88980 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_00a88980();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a24610
extern "C" __declspec(naked) void asm_00a24610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 8] }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { mov esi, eax }
	__asm { call fn_004115f0 }
	__asm { mov ecx, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test cl, 1 }
	__asm { jne L_00a24681 }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_012f4d10], ecx }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a24681: }
	__asm { push esi }
	__asm { mov ecx, 0x12f4c88 }
	__asm { call fn_00a88980 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00814630();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a247e0
extern "C" __declspec(naked) void asm_00a247e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24ace }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a24856 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a24856: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12f3968 }
	__asm { call fn_00814630 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_00814630();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a24880
extern "C" __declspec(naked) void asm_00a24880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd466fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a248f6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a248f6: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12f4c88 }
	__asm { call fn_00814630 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a26f70();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a26a10
extern "C" __declspec(naked) void asm_00a26a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd468b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a26a68 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xea60c8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a26a6a }
	__asm { L_00a26a68: }
	__asm { xor eax, eax }
	__asm { L_00a26a6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a26f70 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a26f90();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a26b40
extern "C" __declspec(naked) void asm_00a26b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd468c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a26b98 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xea60b0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a26b9a }
	__asm { L_00a26b98: }
	__asm { xor eax, eax }
	__asm { L_00a26b9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a26f90 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a26fb0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a26c70
extern "C" __declspec(naked) void asm_00a26c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd468d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a26cc8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xea64b0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a26cca }
	__asm { L_00a26cc8: }
	__asm { xor eax, eax }
	__asm { L_00a26cca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a26fb0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a27020();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a26da0
extern "C" __declspec(naked) void asm_00a26da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd468e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a26df8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xea64c8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a26dfa }
	__asm { L_00a26df8: }
	__asm { xor eax, eax }
	__asm { L_00a26dfa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a27020 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00af9ed0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d02750();
// FUNCTION: ROBLOXSTUDIO 0x00a26fb0
extern "C" __declspec(naked) void asm_00a26fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46938 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00a2700c }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00a26fe3 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a26fe3: }
	__asm { push 0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d02750 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00af9ed0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2700c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00af9ed0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d02750();
// FUNCTION: ROBLOXSTUDIO 0x00a27020
extern "C" __declspec(naked) void asm_00a27020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46938 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00a2707c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00a27053 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a27053: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d02750 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00af9ed0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2707c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2fd60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a278a0
extern "C" __declspec(naked) void asm_00a278a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd469f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { test byte ptr [eax + 0x28], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00a278db }
	__asm { call fn_00a2fd60 }
	__asm { L_00a278db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a27fa0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a28080
extern "C" __declspec(naked) void asm_00a28080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46a70 }
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
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a27fa0 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [ecx + 4], 0 }
	__asm { je L_00a280c7 }
	__asm { mov byte ptr [ecx + 4], 0 }
	__asm { L_00a280c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp byte ptr [eax + 4], 0 }
	__asm { je L_00a280e8 }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { L_00a280e8: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a27fa0();
extern "C" void fn_00a2bde0();
extern "C" void fn_00a2cb70();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a28180
extern "C" __declspec(naked) void asm_00a28180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46a90 }
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
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a27fa0 }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [esi + 0x40], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a281d7 }
	__asm { mov ecx, esi }
	__asm { call fn_00a2bde0 }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { L_00a281d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a2cb70 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa281f9 }
	__asm { ret }
}

extern "C" void fn_00a27fa0();
extern "C" void fn_00a2be60();
extern "C" void fn_00a2cb90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a28290
extern "C" __declspec(naked) void asm_00a28290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46ab0 }
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
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a27fa0 }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [esi + 0x88], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a282ed }
	__asm { mov ecx, esi }
	__asm { call fn_00a2be60 }
	__asm { mov byte ptr [esi + 0x88], 0 }
	__asm { L_00a282ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a2cb90 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa2830f }
	__asm { ret }
}

extern "C" void fn_00a27fa0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a283b0
extern "C" __declspec(naked) void asm_00a283b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46ad0 }
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
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a27fa0 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [ecx + 1], 0 }
	__asm { je L_00a283f7 }
	__asm { mov byte ptr [ecx + 1], 0 }
	__asm { L_00a283f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp byte ptr [eax + 1], 0 }
	__asm { je L_00a28418 }
	__asm { mov byte ptr [eax + 1], 0 }
	__asm { L_00a28418: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a27fa0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a284b0
extern "C" __declspec(naked) void asm_00a284b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46af0 }
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
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a27fa0 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [ecx + 8], 0 }
	__asm { je L_00a284f7 }
	__asm { mov byte ptr [ecx + 8], 0 }
	__asm { L_00a284f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp byte ptr [eax + 8], 0 }
	__asm { je L_00a28518 }
	__asm { mov byte ptr [eax + 8], 0 }
	__asm { L_00a28518: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10288[];
extern "C" void fn_00a29fd0();
// FUNCTION: ROBLOXSTUDIO 0x00a29f60
extern "C" __declspec(naked) void asm_00a29f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test byte ptr [esi + 0x3c], 1 }
	__asm { jne L_00a29fa3 }
	__asm { mov edx, dword ptr [esi + 0x38] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { lea eax, [esi + 8] }
	__asm { sub ecx, edx }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00a29f82 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a29f82: }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10288] }
	__asm { add dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp eax, dword ptr [esi + 0x18] }
	__asm { jne L_00a29fbd }
	__asm { or dword ptr [esi + 0x3c], 1 }
	__asm { L_00a29fa3: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00a29fd0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00a29fbd: }
	__asm { xor eax, eax }
	__asm { xor edx, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a2b080
extern "C" __declspec(naked) void asm_00a2b080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd274b8 }
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
	__asm { mov dword ptr [esi], 0xe844fc }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi], 0xe84508 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2b0df }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a2b0df: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xea6478 }
	__asm { mov dword ptr [esi + 0x14], 0xea6484 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a2b230
extern "C" __declspec(naked) void asm_00a2b230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd274b8 }
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
	__asm { mov dword ptr [esi], 0xe3b74c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00a2b270 }
	__asm { add edi, 0xc }
	__asm { jmp L_00a2b272 }
	__asm { L_00a2b270: }
	__asm { xor edi, edi }
	__asm { L_00a2b272: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a2b288 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a2b288: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xea6440 }
	__asm { mov dword ptr [esi + 0xc], 0xea644c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102d4[];
extern "C" void fn_00a2b3e0();
// FUNCTION: ROBLOXSTUDIO 0x00a2b2c0
extern "C" __declspec(naked) void asm_00a2b2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46e2d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00a2b30c }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov dword ptr [esi + 8], 0xea6018 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2b30c: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00a2b3e0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xea6024 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 8], 0xea6030 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x20] }
	__asm { mov dword ptr [ecx + esi + 4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102d4[];
extern "C" void fn_00a2b4c0();
// FUNCTION: ROBLOXSTUDIO 0x00a2b350
extern "C" __declspec(naked) void asm_00a2b350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46e5d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00a2b39c }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov dword ptr [esi + 8], 0xef885c }
	__asm { call dword ptr [g_00e102d4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00a2b39c: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00a2b4c0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xea5dfc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 8], 0xea5e08 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x18] }
	__asm { mov dword ptr [ecx + esi + 4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10318[];
extern "C" void fn_00a2bde0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2c3a0
extern "C" __declspec(naked) void asm_00a2c3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd68228 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a2c3da }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2c3da: }
	__asm { cmp byte ptr [esi + 0x7c], 0 }
	__asm { je L_00a2c3ec }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { call fn_00a2bde0 }
	__asm { mov byte ptr [esi + 0x7c], 0 }
	__asm { L_00a2c3ec: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10318[];
extern "C" void fn_00a2be60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2d040
extern "C" __declspec(naked) void asm_00a2d040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd68228 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0xd8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a2d079 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2d079: }
	__asm { cmp byte ptr [esi + 0xc8], 0 }
	__asm { push edi }
	__asm { je L_00a2d092 }
	__asm { lea ecx, [esi + 0x40] }
	__asm { call fn_00a2be60 }
	__asm { mov byte ptr [esi + 0xc8], 0 }
	__asm { L_00a2d092: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { pop edi }
	__asm { je L_00a2d0aa }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2d0aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a2a7d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a2d410
extern "C" __declspec(naked) void asm_00a2d410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd284ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x34 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a2d478 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x30] }
	__asm { push eax }
	__asm { call fn_00a2a7d0 }
	__asm { test eax, eax }
	__asm { je L_00a2d478 }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add eax, 0x28 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a2d478: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2aab0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a2d4a0
extern "C" __declspec(naked) void asm_00a2d4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd284ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x3c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a2d508 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x38] }
	__asm { push eax }
	__asm { call fn_00a2aab0 }
	__asm { test eax, eax }
	__asm { je L_00a2d508 }
	__asm { mov ecx, dword ptr [eax + 0x30] }
	__asm { add eax, 0x30 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a2d508: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2ada0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a2d530
extern "C" __declspec(naked) void asm_00a2d530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd284ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x2c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a2d598 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_00a2ada0 }
	__asm { test eax, eax }
	__asm { je L_00a2d598 }
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
	__asm { L_00a2d598: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10314[];
extern "C" void fn_00a27320();
extern "C" void fn_00a27800();
// FUNCTION: ROBLOXSTUDIO 0x00a2d8e0
extern "C" __declspec(naked) void asm_00a2d8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp esi, 2 }
	__asm { jne L_00a2d902 }
	__asm { mov eax, dword ptr [edi] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10314] }
	__asm { jmp L_00a2d907 }
	__asm { L_00a2d902: }
	__asm { cmp esi, 1 }
	__asm { je L_00a2d932 }
	__asm { L_00a2d907: }
	__asm { mov eax, dword ptr [edi + 0x80] }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { cmp esi, 3 }
	__asm { jne L_00a2d925 }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00a27800 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2d925: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00a27320 }
	__asm { L_00a2d932: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102e8[];
extern "C" void fn_00403160();
extern "C" void fn_00d02750();
// FUNCTION: ROBLOXSTUDIO 0x00a2d980
extern "C" __declspec(naked) void asm_00a2d980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 1 }
	__asm { jne L_00a2d99b }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e102e8] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2d99b: }
	__asm { cmp eax, 3 }
	__asm { jne L_00a2d9ac }
	__asm { lea eax, [ecx + 0x3c] }
	__asm { push eax }
	__asm { call fn_00403160 }
	__asm { add esp, 4 }
	__asm { L_00a2d9ac: }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { mov dword ptr [eax + 0x30], 0 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [edx + 0x28], eax }
	__asm { mov dword ptr [edx + 0x2c], eax }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_00d02750 }
	__asm { ret }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { mov dword ptr [eax + 0x38], 0 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { mov dword ptr [edx + 0x30], eax }
	__asm { mov dword ptr [edx + 0x34], eax }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov byte ptr [ecx + 0x18], 0 }
	__asm { call fn_00d02750 }
	__asm { ret }
}

extern "C" void fn_00af9ed0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d02750();
// FUNCTION: ROBLOXSTUDIO 0x00a2daa0
extern "C" __declspec(naked) void asm_00a2daa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47138 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test esi, esi }
	__asm { je L_00a2dafd }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00a2dad4 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2dad4: }
	__asm { push 0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d02750 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00af9ed0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2dafd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00af9ed0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d02750();
// FUNCTION: ROBLOXSTUDIO 0x00a2db10
extern "C" __declspec(naked) void asm_00a2db10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47138 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test esi, esi }
	__asm { je L_00a2db6d }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00a2db44 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2db44: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d02750 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00af9ed0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2db6d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2bbb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2f1b0
extern "C" __declspec(naked) void asm_00a2f1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47398 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov word ptr [ebp + 0x20], 0x101 }
	__asm { call fn_00a2bbb0 }
	__asm { cmp dword ptr [ebp + 0x50], 0x10 }
	__asm { jb L_00a2f1fd }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2f1fd: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { mov dword ptr [ebp + 0x50], 0xf }
	__asm { mov dword ptr [ebp + 0x4c], 0 }
	__asm { mov byte ptr [ebp + 0x3c], 0 }
	__asm { jb L_00a2f220 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2f220: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a2ba10();
extern "C" void fn_00a2f550();
// FUNCTION: ROBLOXSTUDIO 0x00a2f6d0
extern "C" __declspec(naked) void asm_00a2f6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { test byte ptr [ecx + 0x60], 1 }
	__asm { je L_00a2f71d }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push 0xea642c }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp + 0x14], 1 }
	__asm { mov dword ptr [ebp + 0x18], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
	__asm { L_00a2f71d: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 0x1b] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00a2f550 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10304[];
extern "C" void fn_00a29c40();
extern "C" void fn_00a2d230();
// FUNCTION: ROBLOXSTUDIO 0x00a2fcd0
extern "C" __declspec(naked) void asm_00a2fcd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { cmp eax, esi }
	__asm { je L_00a2fd39 }
	__asm { push -1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10304] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, -1 }
	__asm { je L_00a2fd22 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov byte ptr [eax], bl }
	__asm { jmp L_00a2fd24 }
	__asm { L_00a2fd22: }
	__asm { xor ebx, ebx }
	__asm { L_00a2fd24: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2fd39: }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a2d230 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a2d230();
// FUNCTION: ROBLOXSTUDIO 0x00a2fe80
extern "C" __declspec(naked) void asm_00a2fe80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx + 0x20] }
	__asm { sub esp, 0x14 }
	__asm { mov eax, edx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x24] }
	__asm { or eax, esi }
	__asm { je L_00a2fed8 }
	__asm { sub edx, 1 }
	__asm { sbb esi, 0 }
	__asm { mov dword ptr [ecx + 0x24], esi }
	__asm { mov dword ptr [ecx + 0x20], edx }
	__asm { add ecx, 4 }
	__asm { pop esi }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_00a2fec0 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00a2fec0: }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { mov byte ptr [ecx + edx], al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a2fed8: }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a2d230 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a301d0
extern "C" __declspec(naked) void asm_00a301d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { mov ebx, eax }
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { cmp dword ptr [esi + 8], ebx }
	__asm { jne L_00a301ec }
	__asm { cmp dword ptr [esi + 0xc], edi }
	__asm { je L_00a30221 }
	__asm { L_00a301ec: }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { je L_00a3020a }
	__asm { cmp ecx, -1 }
	__asm { ja L_00a30204 }
	__asm { push ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00a3020a }
	__asm { L_00a30204: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a3020a: }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [esi], eax }
	__asm { test ecx, ecx }
	__asm { je L_00a30221 }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a30221: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29bb0();
// FUNCTION: ROBLOXSTUDIO 0x00a309b0
extern "C" __declspec(naked) void asm_00a309b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { add edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { adc ebx, dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_00a309de }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a309de: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10314] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x80] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29bb0 }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29bb0();
// FUNCTION: ROBLOXSTUDIO 0x00a30a20
extern "C" __declspec(naked) void asm_00a30a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { add edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { adc ebx, dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_00a30a4e }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a30a4e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10314] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [esi + 0x40] }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [esi + 0xd0] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29bb0 }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29be0();
// FUNCTION: ROBLOXSTUDIO 0x00a30a90
extern "C" __declspec(naked) void asm_00a30a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { add edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { adc ebx, dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_00a30abe }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a30abe: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10314] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29be0 }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00a31340();
// FUNCTION: ROBLOXSTUDIO 0x00a30c90
extern "C" __declspec(naked) void asm_00a30c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47450 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a31340 }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { test ecx, ecx }
	__asm { je L_00a30ccd }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a30ccd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa30ccd }
	__asm { ret }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00a31400();
// FUNCTION: ROBLOXSTUDIO 0x00a30cf0
extern "C" __declspec(naked) void asm_00a30cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47460 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a31400 }
	__asm { mov ecx, dword ptr [esi + 0xd0] }
	__asm { test ecx, ecx }
	__asm { je L_00a30d2d }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a30d2d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa30d2d }
	__asm { ret }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00a31340();
// FUNCTION: ROBLOXSTUDIO 0x00a31010
extern "C" __declspec(naked) void asm_00a31010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd474b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a31340 }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { test ecx, ecx }
	__asm { je L_00a3104d }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a3104d: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa31066 }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104c4[];
extern "C" void fn_00a31400();
// FUNCTION: ROBLOXSTUDIO 0x00a31080
extern "C" __declspec(naked) void asm_00a31080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd474c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a31400 }
	__asm { mov ecx, dword ptr [esi + 0xd0] }
	__asm { test ecx, ecx }
	__asm { je L_00a310bd }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a310bd: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 0xa310d6 }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" void fn_00a29d70();
// FUNCTION: ROBLOXSTUDIO 0x00a314c0
extern "C" __declspec(naked) void asm_00a314c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { mov ebx, eax }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { jl L_00a314ed }
	__asm { jg L_00a314f4 }
	__asm { test ebx, ebx }
	__asm { jne L_00a314f4 }
	__asm { L_00a314ed: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a314f4: }
	__asm { mov esi, dword ptr [edi + 0x40] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102fc] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" void fn_00a29d70();
// FUNCTION: ROBLOXSTUDIO 0x00a31550
extern "C" __declspec(naked) void asm_00a31550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { mov ebx, eax }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { jl L_00a3157d }
	__asm { jg L_00a31584 }
	__asm { test ebx, ebx }
	__asm { jne L_00a31584 }
	__asm { L_00a3157d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a31584: }
	__asm { mov esi, dword ptr [edi + 0x48] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102fc] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
}

extern "C" char g_00e10528[];
extern "C" char g_00e130b4[];
extern "C" char g_00e130b8[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a33580
extern "C" __declspec(naked) void asm_00a33580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { lea eax, [ebp - 4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e130b4] }
	__asm { test eax, eax }
	__asm { je L_00a335c1 }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { je L_00a335c1 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e130b8] }
	__asm { test eax, eax }
	__asm { je L_00a335cd }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { xor edx, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a335c1: }
	__asm { or eax, 0xffffffff }
	__asm { or edx, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a335cd: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp + 8], 0xea6558 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102fc[];
extern "C" void fn_00a29d70();
// FUNCTION: ROBLOXSTUDIO 0x00a33980
extern "C" __declspec(naked) void asm_00a33980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102fc] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { mov ebx, eax }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { jl L_00a339ad }
	__asm { jg L_00a339b4 }
	__asm { test ebx, ebx }
	__asm { jne L_00a339b4 }
	__asm { L_00a339ad: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a339b4: }
	__asm { mov esi, dword ptr [edi + 0x44] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102fc] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00a29d70 }
}

extern "C" void fn_00a33f40();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a33eb0
extern "C" __declspec(naked) void asm_00a33eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47790 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a33f08 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xea6d88 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00a33f0a }
	__asm { L_00a33f08: }
	__asm { xor eax, eax }
	__asm { L_00a33f0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a33f40 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a340c0();
extern "C" void fn_00a342a0();
extern "C" void fn_00a36ae0();
extern "C" void fn_00bc6470();
extern "C" void fn_00bc7050();
// FUNCTION: ROBLOXSTUDIO 0x00a346a0
extern "C" __declspec(naked) void asm_00a346a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { mov esi, dword ptr [esi + 0x70] }
	__asm { push dword ptr [esi + 0x20] }
	__asm { push esi }
	__asm { call fn_00bc6470 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00bc7050 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { L_00a346c8: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { push 0xa34290 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { call fn_00a36ae0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a346c8 }
	__asm { lea ecx, [esi - 0x2c] }
	__asm { call fn_00a340c0 }
	__asm { push esi }
	__asm { call fn_00a342a0 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007a62e0();
// FUNCTION: ROBLOXSTUDIO 0x00a34940
extern "C" __declspec(naked) void asm_00a34940()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007a62e0 }
	__asm { test al, al }
	__asm { je L_00a349c5 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a34995 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00a34995 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00a34995 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a34984 }
	__asm { push 0x48 }
	__asm { push 0xe53f10 }
	__asm { push 0xe611e4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a34995 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a34984: }
	__asm { movzx eax, al }
	__asm { push 0xe61208 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a34995: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a349a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00a349a0: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00a349ac }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_00a349ac: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { dec dword ptr [eax] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_00a349c5: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00a36700();
// FUNCTION: ROBLOXSTUDIO 0x00a34d60
extern "C" __declspec(naked) void asm_00a34d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { cmp ecx, 0x1f40 }
	__asm { jg L_00a34dc4 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, dword ptr [esi + 0xc] }
	__asm { sar eax, 4 }
	__asm { add eax, ecx }
	__asm { cmp eax, 0x1f40 }
	__asm { jg L_00a34dc4 }
	__asm { test ecx, ecx }
	__asm { jle L_00a34dbc }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { shl edi, 4 }
	__asm { sub eax, edx }
	__asm { cmp eax, edi }
	__asm { jg L_00a34da3 }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00a36700 }
	__asm { add esp, 8 }
	__asm { L_00a34da3: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { add ecx, edi }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { cmp dword ptr [edx + 8], ecx }
	__asm { jae L_00a34dc6 }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a34dbc: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a34dc4: }
	__asm { xor eax, eax }
	__asm { L_00a34dc6: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc7100();
extern "C" void fn_00bc9420();
extern "C" void fn_00bcb120();
// FUNCTION: ROBLOXSTUDIO 0x00a34dd0
extern "C" __declspec(naked) void asm_00a34dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp esi, 2 }
	__asm { jl L_00a34e1a }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a34df4 }
	__asm { push edi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a34df4: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { sub eax, dword ptr [edi + 0xc] }
	__asm { sar eax, 4 }
	__asm { dec eax }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bcb120 }
	__asm { shl esi, 4 }
	__asm { add esp, 0xc }
	__asm { mov eax, 0x10 }
	__asm { sub eax, esi }
	__asm { add dword ptr [edi + 8], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a34e1a: }
	__asm { test esi, esi }
	__asm { jne L_00a34e41 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { push 0xf12f2d }
	__asm { push edi }
	__asm { call fn_00bc9420 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 8], 4 }
	__asm { add dword ptr [edi + 8], 0x10 }
	__asm { L_00a34e41: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a34ff0
extern "C" __declspec(naked) void asm_00a34ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add esp, 8 }
	__asm { sub ecx, 6 }
	__asm { je L_00a3503f }
	__asm { dec ecx }
	__asm { je L_00a3503f }
	__asm { dec ecx }
	__asm { je L_00a35022 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35022: }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [edx + 0x48] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 0x4c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 0x50] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3503f: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 8], 5 }
	__asm { mov dword ptr [ecx], eax }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bc9420();
extern "C" void fn_00bcc670();
// FUNCTION: ROBLOXSTUDIO 0x00a35060
extern "C" __declspec(naked) void asm_00a35060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, edx }
	__asm { add esp, 8 }
	__asm { mov edi, eax }
	__asm { lea ebx, [ecx + 1] }
	__asm { L_00a35082: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00a35082 }
	__asm { sub ecx, ebx }
	__asm { push ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_00bc9420 }
	__asm { push dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 8], 4 }
	__asm { call fn_00bcc670 }
	__asm { add esp, 0x1c }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a350c0
extern "C" __declspec(naked) void asm_00a350c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov ecx, edx }
	__asm { add esp, 8 }
	__asm { sub ecx, 5 }
	__asm { je L_00a350f5 }
	__asm { sub ecx, 2 }
	__asm { je L_00a350ee }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [eax + edx*4 + 0x98] }
	__asm { jmp L_00a350fa }
	__asm { L_00a350ee: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { jmp L_00a350fa }
	__asm { L_00a350f5: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { L_00a350fa: }
	__asm { test ecx, ecx }
	__asm { jne L_00a35103 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35103: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 8], 5 }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34b80();
extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a35170
extern "C" __declspec(naked) void asm_00a35170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_00a34b80 }
	__asm { mov esi, eax }
	__asm { add esp, 0xc }
	__asm { test esi, esi }
	__asm { je L_00a351b7 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { add dword ptr [edi + 8], 0x10 }
	__asm { mov eax, esi }
	__asm { L_00a351b7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a351c0
extern "C" __declspec(naked) void asm_00a351c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00a34c10 }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { cmp edx, esi }
	__asm { jbe L_00a351fa }
	__asm { lea ecx, [edx - 0x10] }
	__asm { L_00a351e0: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub edx, 0x10 }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { lea ecx, [ecx - 0x10] }
	__asm { cmp edx, esi }
	__asm { ja L_00a351e0 }
	__asm { L_00a351fa: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a345e0();
extern "C" void fn_00a34a60();
extern "C" void fn_00bc7100();
// FUNCTION: ROBLOXSTUDIO 0x00a35350
extern "C" __declspec(naked) void asm_00a35350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd477d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a35382 }
	__asm { push esi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a35382: }
	__asm { push esi }
	__asm { call fn_00a345e0 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ecx], edi }
	__asm { mov dword ptr [ecx + 8], 8 }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { add esp, 4 }
	__asm { add esi, -0x2c }
	__asm { test edi, edi }
	__asm { je L_00a353a9 }
	__asm { lea ecx, [edi - 0x2c] }
	__asm { jmp L_00a353ab }
	__asm { L_00a353a9: }
	__asm { xor ecx, ecx }
	__asm { L_00a353ab: }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a353c2 }
	__asm { push esi }
	__asm { call fn_00a34a60 }
	__asm { L_00a353c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00a36730();
// FUNCTION: ROBLOXSTUDIO 0x00a354f0
extern "C" __declspec(naked) void asm_00a354f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_00a35505 }
	__asm { xor edx, edx }
	__asm { jmp L_00a35514 }
	__asm { L_00a35505: }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a34c10 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { sub edx, dword ptr [edi + 0x20] }
	__asm { L_00a35514: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { shl ecx, 4 }
	__asm { sub eax, ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { sub eax, dword ptr [edi + 0x20] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0xa34bf0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_00a36730 }
	__asm { add esp, 0x14 }
	__asm { cmp esi, -1 }
	__asm { pop esi }
	__asm { jne L_00a35555 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { cmp edx, dword ptr [ecx + 8] }
	__asm { jb L_00a35555 }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { L_00a35555: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc7100();
extern "C" void fn_00bc9420();
// FUNCTION: ROBLOXSTUDIO 0x00a35710
extern "C" __declspec(naked) void asm_00a35710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jne L_00a3572d }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { add dword ptr [ecx + 8], 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3572d: }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { lea ecx, [edi + 1] }
	__asm { L_00a35735: }
	__asm { mov al, byte ptr [edi] }
	__asm { inc edi }
	__asm { test al, al }
	__asm { jne L_00a35735 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { sub edi, ecx }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a35755 }
	__asm { push ebx }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a35755: }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00bc9420 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 8], 4 }
	__asm { add dword ptr [ebx + 8], 0x10 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bc9420();
extern "C" void fn_00bcc7e0();
// FUNCTION: ROBLOXSTUDIO 0x00a35b70
extern "C" __declspec(naked) void asm_00a35b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, edx }
	__asm { add esp, 8 }
	__asm { mov edi, eax }
	__asm { lea ebx, [ecx + 1] }
	__asm { L_00a35b92: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00a35b92 }
	__asm { sub ecx, ebx }
	__asm { push ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_00bc9420 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub eax, 0x10 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 8], 4 }
	__asm { call fn_00bcc7e0 }
	__asm { add esp, 0x1c }
	__asm { add dword ptr [esi + 8], -0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bc7100();
extern "C" void fn_00bcc960();
// FUNCTION: ROBLOXSTUDIO 0x00a35e70
extern "C" __declspec(naked) void asm_00a35e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { mov ecx, eax }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ecx + 8], 4 }
	__asm { je L_00a35ecd }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00bcc960 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a35eab }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00a35ea6 }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_00a35ea6: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35eab: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a35ebf }
	__asm { push esi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a35ebf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { L_00a35ecd: }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { test edx, edx }
	__asm { je L_00a35edb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { L_00a35edb: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { add eax, 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a36120
extern "C" __declspec(naked) void asm_00a36120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, ebx }
	__asm { je L_00a36171 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov eax, edi }
	__asm { neg eax }
	__asm { shl eax, 4 }
	__asm { add dword ptr [esi + 8], eax }
	__asm { test edi, edi }
	__asm { jle L_00a36170 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_00a36146: }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { add edx, eax }
	__asm { lea eax, [ecx + 0x10] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 0x10 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { dec edi }
	__asm { jne L_00a36146 }
	__asm { L_00a36170: }
	__asm { pop edi }
	__asm { L_00a36171: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36890();
extern "C" void fn_00a36d10();
extern "C" void fn_00a379c0();
extern "C" void fn_00bc7100();
extern "C" void fn_00bcb4c0();
// FUNCTION: ROBLOXSTUDIO 0x00a365b0
extern "C" __declspec(naked) void asm_00a365b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, 0xc8 }
	__asm { inc word ptr [esi + 0x34] }
	__asm { mov ax, word ptr [esi + 0x34] }
	__asm { cmp ax, cx }
	__asm { jb L_00a365d9 }
	__asm { jne L_00a36617 }
	__asm { push 0xea6f08 }
	__asm { push esi }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { L_00a365d9: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a36890 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a365f7 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00bcb4c0 }
	__asm { add esp, 8 }
	__asm { L_00a365f7: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, 0xffff }
	__asm { add word ptr [esi + 0x34], ax }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a36614 }
	__asm { push esi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a36614: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a36617: }
	__asm { mov ecx, 0xe1 }
	__asm { cmp ax, cx }
	__asm { jb L_00a365d9 }
	__asm { push 5 }
	__asm { push esi }
	__asm { call fn_00a36d10 }
}

extern "C" void fn_00a363d0();
extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
// FUNCTION: ROBLOXSTUDIO 0x00a36c30
extern "C" __declspec(naked) void asm_00a36c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea ebx, [edi + 6] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { lea eax, [ebx + 1] }
	__asm { cmp eax, 0xfffffff }
	__asm { ja L_00a36c68 }
	__asm { mov eax, ebx }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00a36c71 }
	__asm { L_00a36c68: }
	__asm { push esi }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00a36c71: }
	__asm { push dword ptr [ebp + 8] }
	__asm { shl edi, 4 }
	__asm { add edi, eax }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], ebx }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { call fn_00a363d0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" char g_00e105fc[];
extern "C" void fn_00a36e80();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a36d10
extern "C" __declspec(naked) void asm_00a36d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 0x70] }
	__asm { test ecx, ecx }
	__asm { je L_00a36d53 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov esi, dword ptr [edi + 0x70] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push 0x1143964 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], 0xea6ef0 }
	__asm { mov dword ptr [ebp - 0xc], edi }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00a36d53: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov byte ptr [edi + 6], cl }
	__asm { cmp dword ptr [eax + 0x58], 0 }
	__asm { je L_00a36d75 }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00a36e80 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x58] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a36d75: }
	__asm { push 1 }
	__asm { call dword ptr [g_00e105fc] }
}

extern "C" void fn_00a36bb0();
extern "C" void fn_00a36c90();
extern "C" void fn_00bc6470();
// FUNCTION: ROBLOXSTUDIO 0x00a36e80
extern "C" __declspec(naked) void asm_00a36e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_00bc6470 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a36c90 }
	__asm { mov ax, word ptr [esi + 0x36] }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [esi + 0x30], 0x4e20 }
	__asm { mov word ptr [esi + 0x34], ax }
	__asm { mov byte ptr [esi + 0x39], 1 }
	__asm { jle L_00a36eea }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { sub ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { inc eax }
	__asm { add eax, edx }
	__asm { cmp eax, 0x4e20 }
	__asm { jge L_00a36eea }
	__asm { push 0x4e20 }
	__asm { push esi }
	__asm { call fn_00a36bb0 }
	__asm { add esp, 8 }
	__asm { L_00a36eea: }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a372c0
extern "C" __declspec(naked) void asm_00a372c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00a3730f }
	__asm { sub eax, 2 }
	__asm { je L_00a372ff }
	__asm { dec eax }
	__asm { jne L_00a37315 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor edx, edx }
	__asm { test ecx, 0x100 }
	__asm { je L_00a372ee }
	__asm { and ecx, 0xfffffeff }
	__asm { cmp ecx, dword ptr [eax + 0x28] }
	__asm { jmp L_00a372f4 }
	__asm { L_00a372ee: }
	__asm { movzx eax, byte ptr [eax + 0x4b] }
	__asm { cmp ecx, eax }
	__asm { L_00a372f4: }
	__asm { setl dl }
	__asm { test edx, edx }
	__asm { jne L_00a37315 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a372ff: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [eax + 0x4b] }
	__asm { cmp dword ptr [ebp + 0xc], eax }
	__asm { jl L_00a37315 }
	__asm { L_00a3730b: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3730f: }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00a3730b }
	__asm { L_00a37315: }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a373c0
extern "C" __declspec(naked) void asm_00a373c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { cmp dword ptr [edx + 8], 6 }
	__asm { jne L_00a37406 }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp byte ptr [eax + 6], 0 }
	__asm { jne L_00a37406 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp ecx, dword ptr [eax + 0x14] }
	__asm { jne L_00a373e5 }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_00a373e5: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { sub eax, dword ptr [edx + 0xc] }
	__asm { sar eax, 2 }
	__asm { dec eax }
	__asm { js L_00a37406 }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00a37402 }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a37402: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a37406: }
	__asm { or eax, 0xffffffff }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a45610();
// FUNCTION: ROBLOXSTUDIO 0x00a37490
extern "C" __declspec(naked) void asm_00a37490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [edx + 6], 0 }
	__asm { je L_00a374ce }
	__asm { push 0x3c }
	__asm { mov dword ptr [ecx + 0x10], 0xea6f7c }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { lea eax, [ecx + 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ecx + 0x1c], 0xffffffff }
	__asm { mov dword ptr [ecx + 0x20], 0xffffffff }
	__asm { mov dword ptr [ecx + 0xc], 0xe52260 }
	__asm { call fn_00a45610 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a374ce: }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { push 0x3c }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { add eax, 0x10 }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { cmp dword ptr [ecx + 0x1c], 0 }
	__asm { mov eax, dword ptr [eax + 0x40] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov edx, 0xe6f998 }
	__asm { mov eax, 0xe3064c }
	__asm { cmovne eax, edx }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea eax, [ecx + 0x24] }
	__asm { push eax }
	__asm { call fn_00a45610 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34cd0();
extern "C" void fn_00a37410();
// FUNCTION: ROBLOXSTUDIO 0x00a37b60
extern "C" __declspec(naked) void asm_00a37b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 0x60] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { push edi }
	__asm { lea eax, [eax + ecx*8] }
	__asm { push esi }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_00a37410 }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { test edi, edi }
	__asm { je L_00a37ba8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { shl esi, 4 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { add ecx, -0x10 }
	__asm { add ecx, esi }
	__asm { push ecx }
	__asm { push ebx }
	__asm { call fn_00a34cd0 }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { L_00a37ba8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a37410();
// FUNCTION: ROBLOXSTUDIO 0x00a37c60
extern "C" __declspec(naked) void asm_00a37c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 0x60] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { push edi }
	__asm { lea eax, [eax + ecx*8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_00a37410 }
	__asm { mov ebx, eax }
	__asm { add esp, 0xc }
	__asm { test ebx, ebx }
	__asm { je L_00a37cae }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx - 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { add edi, edi }
	__asm { mov dword ptr [ecx + edi*8 - 0x10], eax }
	__asm { mov eax, dword ptr [edx - 0xc] }
	__asm { mov dword ptr [ecx + edi*8 - 0xc], eax }
	__asm { mov eax, dword ptr [edx - 8] }
	__asm { mov dword ptr [ecx + edi*8 - 8], eax }
	__asm { L_00a37cae: }
	__asm { add dword ptr [esi + 8], -0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a37cc0
extern "C" __declspec(naked) void asm_00a37cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov bh, byte ptr [edx + 0x4b] }
	__asm { cmp bh, 0xfa }
	__asm { ja L_00a37d20 }
	__asm { mov bl, byte ptr [edx + 0x4a] }
	__asm { movzx eax, byte ptr [edx + 0x49] }
	__asm { movzx ecx, bl }
	__asm { and ecx, 1 }
	__asm { add ecx, eax }
	__asm { movzx eax, bh }
	__asm { cmp ecx, eax }
	__asm { jg L_00a37d20 }
	__asm { test bl, 4 }
	__asm { je L_00a37cef }
	__asm { test bl, 1 }
	__asm { je L_00a37d20 }
	__asm { L_00a37cef: }
	__asm { movzx eax, byte ptr [edx + 0x48] }
	__asm { cmp dword ptr [edx + 0x24], eax }
	__asm { jg L_00a37d20 }
	__asm { mov eax, dword ptr [edx + 0x30] }
	__asm { mov ecx, dword ptr [edx + 0x2c] }
	__asm { cmp eax, ecx }
	__asm { je L_00a37d06 }
	__asm { test eax, eax }
	__asm { jne L_00a37d20 }
	__asm { L_00a37d06: }
	__asm { test ecx, ecx }
	__asm { jle L_00a37d20 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov eax, dword ptr [eax + ecx*4 - 4] }
	__asm { and eax, 0x3f }
	__asm { cmp al, 0x1e }
	__asm { jne L_00a37d20 }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a37d20: }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10658[];
extern "C" char g_00e10728[];
// FUNCTION: ROBLOXSTUDIO 0x00a382b0
extern "C" __declspec(naked) void asm_00a382b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edi], 0 }
	__asm { je L_00a382d3 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov eax, 0x1004e20 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a382d3: }
	__asm { push dword ptr [edi + 4] }
	__asm { call dword ptr [g_00e10728] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a382e8 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a382e8: }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { lea esi, [edi + 8] }
	__asm { push 0x200 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10658] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ecx], eax }
	__asm { xor ecx, ecx }
	__asm { cmp ecx, eax }
	__asm { sbb eax, eax }
	__asm { and eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35250();
extern "C" void fn_00a35620();
extern "C" void fn_00a35e20();
extern "C" void fn_00a360d0();
extern "C" void fn_00a36100();
extern "C" void fn_00a385a0();
// FUNCTION: ROBLOXSTUDIO 0x00a38740
extern "C" __declspec(naked) void asm_00a38740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a35e20 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { jne L_00a387a0 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a35250 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a3879e }
	__asm { push 3 }
	__asm { push edi }
	__asm { call fn_00a36100 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { call fn_00a360d0 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a36100 }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0xea70c4 }
	__asm { push edi }
	__asm { call fn_00a35620 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0x34 }
	__asm { L_00a3879e: }
	__asm { mov eax, ebx }
	__asm { L_00a387a0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35620();
extern "C" void fn_00a35e70();
extern "C" void fn_00a360d0();
extern "C" void fn_00a36100();
extern "C" void fn_00a385a0();
// FUNCTION: ROBLOXSTUDIO 0x00a387b0
extern "C" __declspec(naked) void asm_00a387b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00a35e70 }
	__asm { mov ebx, eax }
	__asm { add esp, 0xc }
	__asm { test ebx, ebx }
	__asm { jne L_00a38805 }
	__asm { push esi }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a36100 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { call fn_00a360d0 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a36100 }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0xea70c4 }
	__asm { push edi }
	__asm { call fn_00a35620 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0x34 }
	__asm { mov eax, ebx }
	__asm { pop esi }
	__asm { L_00a38805: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35620();
extern "C" void fn_00a360d0();
extern "C" void fn_00a36100();
extern "C" void fn_00a385a0();
// FUNCTION: ROBLOXSTUDIO 0x00a38960
extern "C" __declspec(naked) void asm_00a38960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a360d0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { cmp eax, ecx }
	__asm { je L_00a389ad }
	__asm { push esi }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00a36100 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call fn_00a360d0 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a36100 }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0xea70c4 }
	__asm { push edi }
	__asm { call fn_00a35620 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0x34 }
	__asm { pop esi }
	__asm { L_00a389ad: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a350c0();
extern "C" void fn_00a35710();
extern "C" void fn_00a35850();
extern "C" void fn_00a359d0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
// FUNCTION: ROBLOXSTUDIO 0x00a38bc0
extern "C" __declspec(naked) void asm_00a38bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a38c02 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_00a38c07 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a38c02: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a38c07: }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a359d0 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34e50();
extern "C" void fn_00a35060();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35b70();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360d0();
// FUNCTION: ROBLOXSTUDIO 0x00a38fc0
extern "C" __declspec(naked) void asm_00a38fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00a38fe9 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a38fe9: }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a34e50 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35b70 }
	__asm { add esp, 0x28 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a35650();
extern "C" void fn_00a35890();
extern "C" void fn_00a35950();
// FUNCTION: ROBLOXSTUDIO 0x00a392a0
extern "C" __declspec(naked) void asm_00a392a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { test ebx, ebx }
	__asm { js L_00a392f2 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [esi + 0x270f] }
	__asm { cmp eax, 0x270f }
	__asm { ja L_00a392cc }
	__asm { push edi }
	__asm { call fn_00a35150 }
	__asm { inc esi }
	__asm { add esp, 4 }
	__asm { add esi, eax }
	__asm { L_00a392cc: }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a35890 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a35950 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a35650 }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a35950 }
	__asm { add esp, 0x2c }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00a392f2: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35620();
extern "C" void fn_00a35690();
extern "C" void fn_00a37ab0();
extern "C" void fn_00a37bb0();
// FUNCTION: ROBLOXSTUDIO 0x00a39300
extern "C" __declspec(naked) void asm_00a39300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a37bb0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00a3934f }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { push 0xea70d8 }
	__asm { push esi }
	__asm { call fn_00a37ab0 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jle L_00a3934f }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { push 0xea70dc }
	__asm { push esi }
	__asm { call fn_00a35620 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3934f: }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { push esi }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc7c[];
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a3aca0
extern "C" __declspec(naked) void asm_00a3aca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a3ad0c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3ad0c }
	__asm { push dword ptr [g_0128dc7c] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a3ad04 }
	__asm { call fn_00a35d10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3ad04: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a3ad0c: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb24[];
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
// FUNCTION: ROBLOXSTUDIO 0x00a3ae30
extern "C" __declspec(naked) void asm_00a3ae30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a3ae9c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3ae9c }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { je L_00a3ae94 }
	__asm { call fn_00a35d10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3ae94: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a3ae9c: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eacc[];
extern "C" void fn_006d19a0();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b140
extern "C" __declspec(naked) void asm_00a3b140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x30 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a3b19b }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { L_00a3b19b: }
	__asm { push dword ptr [g_0124eacc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb1c[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b210
extern "C" __declspec(naked) void asm_00a3b210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd47888 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x1c }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00a3b26f }
	__asm { mov dword ptr [esi], 0xe461dc }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { L_00a3b26f: }
	__asm { push dword ptr [g_0124eb1c] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb30[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b3a0
extern "C" __declspec(naked) void asm_00a3b3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0x10 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00a3b3d0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00a3b3d0: }
	__asm { push dword ptr [g_0124eb30] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eae0[];
extern "C" void fn_00a35ef0();
extern "C" void fn_00a36100();
extern "C" void fn_00a387b0();
extern "C" void fn_00a39260();
// FUNCTION: ROBLOXSTUDIO 0x00a3bc50
extern "C" __declspec(naked) void asm_00a3bc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_0124eae0], 0 }
	__asm { je L_00a3bc90 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35ef0 }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { test edi, edi }
	__asm { jne L_00a3bc8a }
	__asm { push 4 }
	__asm { push esi }
	__asm { call fn_00a36100 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a39260 }
	__asm { add esp, 0x14 }
	__asm { L_00a3bc8a: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3bc90: }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a387b0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_008eac90();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3be50
extern "C" __declspec(naked) void asm_00a3be50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008eac90 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { push 8 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3bea2 }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { L_00a3bea2: }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb24[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3bf60
extern "C" __declspec(naked) void asm_00a3bf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb24] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb24] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { mov cx, word ptr [eax] }
	__asm { mov ax, word ptr [eax + 2] }
	__asm { add cx, word ptr [esi] }
	__asm { add ax, word ptr [esi + 2] }
	__asm { push 4 }
	__asm { push edi }
	__asm { mov word ptr [ebp - 4], cx }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { je L_00a3bfb1 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00a3bfb1: }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb18[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3c080
extern "C" __declspec(naked) void asm_00a3c080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb18] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb18] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { movzx ecx, word ptr [eax] }
	__asm { add cx, word ptr [esi] }
	__asm { mov bx, word ptr [eax + 4] }
	__asm { add bx, word ptr [esi + 4] }
	__asm { mov word ptr [ebp - 6], cx }
	__asm { movzx ecx, word ptr [eax + 2] }
	__asm { add cx, word ptr [esi + 2] }
	__asm { push 6 }
	__asm { push edi }
	__asm { mov word ptr [ebp - 4], cx }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { je L_00a3c0e0 }
	__asm { mov ecx, dword ptr [ebp - 6] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov word ptr [eax + 4], bx }
	__asm { L_00a3c0e0: }
	__asm { push dword ptr [g_0124eb18] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eacc[];
extern "C" void fn_00a356f0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3c110
extern "C" __declspec(naked) void asm_00a3c110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eacc] }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call fn_00a389c0 }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { fld dword ptr [esi + 0x24] }
	__asm { fstp qword ptr [esp] }
	__asm { push ebx }
	__asm { call fn_00a356f0 }
	__asm { fld dword ptr [esi + 0x28] }
	__asm { add esp, 4 }
	__asm { fstp qword ptr [esp] }
	__asm { push ebx }
	__asm { call fn_00a356f0 }
	__asm { fld dword ptr [esi + 0x2c] }
	__asm { add esp, 4 }
	__asm { fstp qword ptr [esp] }
	__asm { push ebx }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { L_00a3c161: }
	__asm { mov edi, 3 }
	__asm { L_00a3c166: }
	__asm { fld dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push ebx }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { add esi, 4 }
	__asm { dec edi }
	__asm { jne L_00a3c166 }
	__asm { dec dword ptr [ebp - 4] }
	__asm { jne L_00a3c161 }
	__asm { lea eax, [edi + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb18[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3ccd0
extern "C" __declspec(naked) void asm_00a3ccd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb18] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb18] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { mov cx, word ptr [eax] }
	__asm { add esp, 0x18 }
	__asm { cmp cx, word ptr [esi] }
	__asm { jne L_00a3cd1c }
	__asm { mov cx, word ptr [eax + 2] }
	__asm { cmp cx, word ptr [esi + 2] }
	__asm { jne L_00a3cd1c }
	__asm { mov ax, word ptr [eax + 4] }
	__asm { cmp ax, word ptr [esi + 4] }
	__asm { jne L_00a3cd1c }
	__asm { mov eax, 1 }
	__asm { jmp L_00a3cd1e }
	__asm { L_00a3cd1c: }
	__asm { xor eax, eax }
	__asm { L_00a3cd1e: }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a35560 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_008eabd0();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3fd60
extern "C" __declspec(naked) void asm_00a3fd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008eabd0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { push 8 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3fdb2 }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { L_00a3fdb2: }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb24[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3fe70
extern "C" __declspec(naked) void asm_00a3fe70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb24] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb24] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { movzx ecx, word ptr [esi] }
	__asm { sub cx, word ptr [eax] }
	__asm { push 4 }
	__asm { mov word ptr [ebp - 4], cx }
	__asm { movzx ecx, word ptr [esi + 2] }
	__asm { sub cx, word ptr [eax + 2] }
	__asm { push edi }
	__asm { mov word ptr [ebp - 2], cx }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { je L_00a3fec1 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00a3fec1: }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb18[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3ff90
extern "C" __declspec(naked) void asm_00a3ff90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb18] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb18] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { movzx ecx, word ptr [esi] }
	__asm { sub cx, word ptr [eax] }
	__asm { push 6 }
	__asm { mov word ptr [ebp - 6], cx }
	__asm { movzx ecx, word ptr [esi + 2] }
	__asm { sub cx, word ptr [eax + 2] }
	__asm { mov si, word ptr [esi + 4] }
	__asm { sub si, word ptr [eax + 4] }
	__asm { push edi }
	__asm { mov word ptr [ebp - 4], cx }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { je L_00a3ffef }
	__asm { mov ecx, dword ptr [ebp - 6] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov word ptr [eax + 4], si }
	__asm { L_00a3ffef: }
	__asm { push dword ptr [g_0124eb18] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_008eac00();
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a40520
extern "C" __declspec(naked) void asm_00a40520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_008eac00 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { push 8 }
	__asm { push esi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a40561 }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { L_00a40561: }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb24[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a40620
extern "C" __declspec(naked) void asm_00a40620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0124eb24] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a389c0 }
	__asm { mov cx, word ptr [eax] }
	__asm { mov ax, word ptr [eax + 2] }
	__asm { neg cx }
	__asm { neg ax }
	__asm { push 4 }
	__asm { push esi }
	__asm { mov word ptr [ebp - 4], cx }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00a4065f }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00a4065f: }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb18[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a40720
extern "C" __declspec(naked) void asm_00a40720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb18] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a389c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov ax, word ptr [eax + 4] }
	__asm { mov word ptr [ebp - 0xc], ax }
	__asm { mov edi, dword ptr [ebp - 0xc] }
	__asm { mov eax, ecx }
	__asm { shr ecx, 0x10 }
	__asm { neg eax }
	__asm { neg ecx }
	__asm { push 6 }
	__asm { push esi }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { mov word ptr [ebp - 6], cx }
	__asm { neg edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00a40771 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov word ptr [eax + 4], di }
	__asm { L_00a40771: }
	__asm { push dword ptr [g_0124eb18] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb14[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a40cb0
extern "C" __declspec(naked) void asm_00a40cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0xc }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a40ce1 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { L_00a40ce1: }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00a35e70();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a419f0
extern "C" __declspec(naked) void asm_00a419f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35e70 }
	__asm { mov edx, eax }
	__asm { add esp, 0xc }
	__asm { test edx, edx }
	__asm { je L_00a41a2a }
	__asm { mov ecx, edx }
	__asm { push esi }
	__asm { lea esi, [ecx + 1] }
	__asm { L_00a41a12: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00a41a12 }
	__asm { sub ecx, esi }
	__asm { pop esi }
	__asm { cmp ecx, 0x30d40 }
	__asm { jae L_00a41a53 }
	__asm { mov eax, edx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a41a2a: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xea7420 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00a41a53: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xea7430 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0124eadc[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a420b0
extern "C" __declspec(naked) void asm_00a420b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0xc }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a420e0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { L_00a420e0: }
	__asm { push dword ptr [g_0124eadc] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0124eb30[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a42110
extern "C" __declspec(naked) void asm_00a42110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push 0x10 }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a4214d }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { L_00a4214d: }
	__asm { push dword ptr [g_0124eb30] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0124eb14[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a42290
extern "C" __declspec(naked) void asm_00a42290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 0xc }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a422c0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { L_00a422c0: }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00421060();
extern "C" void fn_00a43890();
// FUNCTION: ROBLOXSTUDIO 0x00a42340
extern "C" __declspec(naked) void asm_00a42340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov edx, esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a42383 }
	__asm { lea ecx, [eax + 5] }
	__asm { test ecx, ecx }
	__asm { je L_00a42365 }
	__asm { add ecx, -5 }
	__asm { jmp L_00a42367 }
	__asm { L_00a42365: }
	__asm { xor ecx, ecx }
	__asm { L_00a42367: }
	__asm { cmp dword ptr [ecx - 8], 0 }
	__asm { je L_00a42383 }
	__asm { mov dword ptr [edx], eax }
	__asm { test eax, eax }
	__asm { je L_00a42378 }
	__asm { add eax, 5 }
	__asm { jmp L_00a4237a }
	__asm { L_00a42378: }
	__asm { xor eax, eax }
	__asm { L_00a4237a: }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a42383: }
	__asm { push dword ptr [esi] }
	__asm { call fn_00a43890 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00421060();
extern "C" void fn_00a426e0();
// FUNCTION: ROBLOXSTUDIO 0x00a423a0
extern "C" __declspec(naked) void asm_00a423a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a426e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a423fe }
	__asm { lea ecx, [eax + 5] }
	__asm { test ecx, ecx }
	__asm { je L_00a423d2 }
	__asm { add ecx, -5 }
	__asm { jmp L_00a423d4 }
	__asm { L_00a423d2: }
	__asm { xor ecx, ecx }
	__asm { L_00a423d4: }
	__asm { cmp dword ptr [ecx - 8], 0 }
	__asm { je L_00a423fe }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_00a423f3 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a423f3: }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00a423fe: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00a42410
extern "C" __declspec(naked) void asm_00a42410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00a42439 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a4243e }
	__asm { L_00a42439: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a4243e: }
	__asm { cmp ecx, 0x11efd14 }
	__asm { je L_00a42487 }
	__asm { test eax, eax }
	__asm { je L_00a4244e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a42453 }
	__asm { L_00a4244e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a42453: }
	__asm { push 0x11efd14 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00a42487 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00a42487: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a424a0
extern "C" __declspec(naked) void asm_00a424a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00a424c9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a424ce }
	__asm { L_00a424c9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a424ce: }
	__asm { cmp ecx, 0x12105f0 }
	__asm { je L_00a42517 }
	__asm { test eax, eax }
	__asm { je L_00a424de }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a424e3 }
	__asm { L_00a424de: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a424e3: }
	__asm { push 0x12105f0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00a42517 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00a42517: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a42530
extern "C" __declspec(naked) void asm_00a42530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00a42559 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a4255e }
	__asm { L_00a42559: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a4255e: }
	__asm { cmp ecx, 0x1210668 }
	__asm { je L_00a425a7 }
	__asm { test eax, eax }
	__asm { je L_00a4256e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a42573 }
	__asm { L_00a4256e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a42573: }
	__asm { push 0x1210668 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00a425a7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00a425a7: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a425c0
extern "C" __declspec(naked) void asm_00a425c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00a425e9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a425ee }
	__asm { L_00a425e9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a425ee: }
	__asm { cmp ecx, 0x124ebbc }
	__asm { je L_00a42637 }
	__asm { test eax, eax }
	__asm { je L_00a425fe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a42603 }
	__asm { L_00a425fe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a42603: }
	__asm { push 0x124ebbc }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00a42637 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00a42637: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a42650
extern "C" __declspec(naked) void asm_00a42650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00a42679 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a4267e }
	__asm { L_00a42679: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a4267e: }
	__asm { cmp ecx, 0x12c32a4 }
	__asm { je L_00a426c7 }
	__asm { test eax, eax }
	__asm { je L_00a4268e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a42693 }
	__asm { L_00a4268e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a42693: }
	__asm { push 0x12c32a4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00a426c7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00a426c7: }
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
// FUNCTION: ROBLOXSTUDIO 0x00a426e0
extern "C" __declspec(naked) void asm_00a426e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00a42709 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a4270e }
	__asm { L_00a42709: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a4270e: }
	__asm { cmp ecx, 0x11efd20 }
	__asm { je L_00a42757 }
	__asm { test eax, eax }
	__asm { je L_00a4271e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a42723 }
	__asm { L_00a4271e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a42723: }
	__asm { push 0x11efd20 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00a42757 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00a42757: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00788700();
extern "C" void fn_007d5710();
extern "C" void fn_00a360d0();
extern "C" void fn_00a42c80();
// FUNCTION: ROBLOXSTUDIO 0x00a42a60
extern "C" __declspec(naked) void asm_00a42a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a42abd }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_007d5710 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00788700 }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a42abd: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a42c80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
