// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
// FUNCTION: ROBLOXSTUDIO 0x00428440
extern "C" __declspec(naked) void asm_00428440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72478 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test ebx, ebx }
	__asm { jne L_0042847e }
	__asm { mov eax, 0x80004003 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042847e: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { jne L_0042849d }
	__asm { pop edi }
	__asm { mov eax, 0x80004003 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042849d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xa0] }
	__asm { add esi, 0x58 }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 0x78] }
	__asm { mov dword ptr [edi], 1 }
	__asm { mov eax, dword ptr [eax + 0x44] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { js L_004284ec }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jge L_004284ea }
	__asm { mov ebx, 0x80004005 }
	__asm { jmp L_004284ec }
	__asm { L_004284ea: }
	__asm { xor ebx, ebx }
	__asm { L_004284ec: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b1120();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00428510
extern "C" __declspec(naked) void asm_00428510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd725b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov esi, dword ptr [ebx + 0xa0] }
	__asm { add esi, 0x58 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b1120 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { js L_004285b0 }
	__asm { mov eax, dword ptr [ebx + 0x78] }
	__asm { test eax, eax }
	__asm { jne L_00428566 }
	__asm { mov edi, 0x8000ffff }
	__asm { jmp L_004285b0 }
	__asm { L_00428566: }
	__asm { cmp word ptr [eax + 0x3e], 0x20 }
	__asm { je L_004285ae }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004285ae }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0042859d }
	__asm { push 0x1fe }
	__asm { push 0x1005088 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004285ae }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0042859d: }
	__asm { movzx eax, al }
	__asm { push 0x10051c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004285ae: }
	__asm { xor edi, edi }
	__asm { L_004285b0: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_00e10504[];
extern "C" char g_01006430[];
extern "C" char g_01006434[];
extern "C" char g_01006438[];
extern "C" char g_0100643c[];
extern "C" void fn_00428720();
extern "C" void fn_006b2c90();
extern "C" void fn_00cf64a0();
// FUNCTION: ROBLOXSTUDIO 0x00428610
extern "C" __declspec(naked) void asm_00428610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd721fc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [g_01006430] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0x10 }
	__asm { mov edx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [g_01006434] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [g_01006438] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [g_0100643c] }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { call fn_006b2c90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x58] }
	__asm { push esi }
	__asm { mov dword ptr [edi], 0x1006294 }
	__asm { mov dword ptr [edi + 0xc], 0x1006254 }
	__asm { mov dword ptr [edi + 0x10], 0x1006238 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { push 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x54], eax }
	__asm { test eax, eax }
	__asm { jne L_004286ac }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_004286f5 }
	__asm { mov dword ptr [eax], 0x8007000e }
	__asm { jmp L_004286f5 }
	__asm { L_004286ac: }
	__asm { push 0x1c0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_004286dc }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call fn_00428720 }
	__asm { mov ecx, eax }
	__asm { jmp L_004286de }
	__asm { L_004286dc: }
	__asm { xor ecx, ecx }
	__asm { L_004286de: }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_004286f5 }
	__asm { test ebx, ebx }
	__asm { je L_004286f5 }
	__asm { mov dword ptr [ebx], 0x8007000e }
	__asm { L_004286f5: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00429020
extern "C" __declspec(naked) void asm_00429020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { jne L_0042903a }
	__asm { mov eax, 0x80004003 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042903a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { jne L_0042904f }
	__asm { pop esi }
	__asm { mov eax, 0x80004003 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042904f: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 0x78] }
	__asm { mov ecx, 1 }
	__asm { test al, al }
	__asm { je L_0042909e }
	__asm { cmp cx, word ptr [ebx] }
	__asm { je L_0042909e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0042908d }
	__asm { push 0x30d }
	__asm { push 0x1005088 }
	__asm { push 0x10053e8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0042909e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0042908d: }
	__asm { movzx eax, al }
	__asm { push 0x1005418 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0042909e: }
	__asm { mov dword ptr [esi + 4], 0x4000 }
	__asm { movzx ecx, word ptr [ebx + 2] }
	__asm { movzx eax, word ptr [ebx + 0xe] }
	__asm { imul eax, ecx }
	__asm { imul eax, dword ptr [ebx + 4] }
	__asm { cdq }
	__asm { and edx, 0x1ffff }
	__asm { add eax, edx }
	__asm { sar eax, 0x11 }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { mov ecx, eax }
	__asm { cmp eax, 1 }
	__asm { mov eax, 1 }
	__asm { cmovl ecx, eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { js L_004290f4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { cmp ecx, dword ptr [esi + 4] }
	__asm { mov edx, 0x80004005 }
	__asm { cmovl eax, edx }
	__asm { L_004290f4: }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_006b26a0();
extern "C" void fn_006b29d0();
extern "C" void fn_006b2a10();
// FUNCTION: ROBLOXSTUDIO 0x00429170
extern "C" __declspec(naked) void asm_00429170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72460 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { jne L_004291b3 }
	__asm { mov eax, 0x80004003 }
	__asm { mov ecx, dword ptr [esp + 0x5c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004291b3: }
	__asm { mov esi, dword ptr [ebx + 0xa0] }
	__asm { add esi, 0x58 }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x64], 0 }
	__asm { call fn_006b2a10 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push ecx }
	__asm { mov byte ptr [esp + 0x68], 1 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x34] }
	__asm { push edi }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call fn_006b26a0 }
	__asm { neg eax }
	__asm { sbb edi, edi }
	__asm { lea ecx, [esp + 0x10] }
	__asm { and edi, 0x7fffbffb }
	__asm { mov byte ptr [esp + 0x64], 0 }
	__asm { call fn_006b29d0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [esp + 0x5c] }
	__asm { lea eax, [edi - 0x7fffbffb] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_006b27c0();
extern "C" void fn_006b2b00();
// FUNCTION: ROBLOXSTUDIO 0x00429230
extern "C" __declspec(naked) void asm_00429230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72578 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { jne L_00429268 }
	__asm { mov eax, 0x80004003 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00429268: }
	__asm { mov esi, dword ptr [ecx + 0xa0] }
	__asm { add esi, 0x58 }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { jns L_00429290 }
	__asm { mov edi, 0x80070057 }
	__asm { jmp L_004292e6 }
	__asm { L_00429290: }
	__asm { jle L_00429299 }
	__asm { mov edi, 0x40103 }
	__asm { jmp L_004292e6 }
	__asm { L_00429299: }
	__asm { push 0x12 }
	__asm { mov ecx, edi }
	__asm { call fn_006b27c0 }
	__asm { test eax, eax }
	__asm { jne L_004292ad }
	__asm { mov edi, 0x8007000e }
	__asm { jmp L_004292e6 }
	__asm { L_004292ad: }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, 4 }
	__asm { mov word ptr [eax + 0xc], cx }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov dword ptr [eax + 0xe], 0x10 }
	__asm { push eax }
	__asm { mov dword ptr [eax], 0x20001 }
	__asm { mov dword ptr [eax + 4], 0xbb80 }
	__asm { mov dword ptr [eax + 8], 0x2ee00 }
	__asm { mov word ptr [eax + 0x10], cx }
	__asm { call fn_006b2b00 }
	__asm { mov edi, eax }
	__asm { L_004292e6: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e132c4[];
extern "C" void fn_004298f0();
extern "C" void fn_00429af0();
// FUNCTION: ROBLOXSTUDIO 0x004294d0
extern "C" __declspec(naked) void asm_004294d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72390 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1006104 }
	__asm { mov dword ptr [esi + 4], 0x10060f8 }
	__asm { mov dword ptr [ebp - 4], 8 }
	__asm { call fn_00429af0 }
	__asm { test al, al }
	__asm { je L_00429513 }
	__asm { mov ecx, esi }
	__asm { call fn_004298f0 }
	__asm { L_00429513: }
	__asm { call dword ptr [g_00e132c4] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { mov ecx, dword ptr [esi + 0x6c] }
	__asm { test ecx, ecx }
	__asm { je L_0042952a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0042952a: }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov ecx, dword ptr [esi + 0x68] }
	__asm { test ecx, ecx }
	__asm { je L_0042953b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0042953b: }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { test ecx, ecx }
	__asm { je L_0042954c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0042954c: }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov ecx, dword ptr [esi + 0x60] }
	__asm { test ecx, ecx }
	__asm { je L_0042955d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0042955d: }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov ecx, dword ptr [esi + 0x5c] }
	__asm { test ecx, ecx }
	__asm { je L_0042956e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0042956e: }
	__asm { cmp dword ptr [esi + 0x58], 0x10 }
	__asm { jb L_00429580 }
	__asm { push dword ptr [esi + 0x44] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00429580: }
	__asm { mov dword ptr [esi + 0x58], 0xf }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov byte ptr [esi + 0x44], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_004295a3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_004295a3: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { test ecx, ecx }
	__asm { je L_004295b4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_004295b4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x1005018 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1022c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00429af0
extern "C" __declspec(naked) void asm_00429af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { test ecx, ecx }
	__asm { jne L_00429b01 }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00429b01: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { lea edx, [ebp - 4] }
	__asm { push edx }
	__asm { push -1 }
	__asm { push ecx }
	__asm { call dword ptr [eax + 0x28] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov esi, eax }
	__asm { test cl, cl }
	__asm { je L_00429b57 }
	__asm { test esi, esi }
	__asm { jns L_00429b74 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00429b46 }
	__asm { push 0x3ef }
	__asm { push 0x1005088 }
	__asm { push 0x1005680 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00429b57 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00429b46: }
	__asm { movzx eax, cl }
	__asm { push 0x1005708 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00429b57: }
	__asm { test esi, esi }
	__asm { jns L_00429b74 }
	__asm { push 0 }
	__asm { push 0x1005768 }
	__asm { push 1 }
	__asm { call dword ptr [g_00e1022c] }
	__asm { add esp, 0xc }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00429b74: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp - 4], 2 }
	__asm { pop esi }
	__asm { sete al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0042a550();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0042ad10
extern "C" __declspec(naked) void asm_0042ad10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72658 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call dword ptr [eax + 0x48] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0042ad94 }
	__asm { test eax, eax }
	__asm { jns L_0042ad94 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0042ad83 }
	__asm { push 0x503 }
	__asm { push 0x1005088 }
	__asm { push 0x1005680 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0042ad94 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0042ad83: }
	__asm { movzx eax, cl }
	__asm { push 0x1005f58 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0042ad94: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_0042a550 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0042adb8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 8] }
	__asm { L_0042adb8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" void fn_0042ba80();
// FUNCTION: ROBLOXSTUDIO 0x0042b960
extern "C" __declspec(naked) void asm_0042b960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, ecx }
	__asm { test al, 1 }
	__asm { jne L_0042b984 }
	__asm { lea eax, [ecx + 2] }
	__asm { shr eax, 1 }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_0042b984 }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_0042ba80 }
	__asm { L_0042b984: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push ebx }
	__asm { lea eax, [ecx*2 - 1] }
	__asm { and dword ptr [esi + 0xc], eax }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { add edi, dword ptr [esi + 0xc] }
	__asm { dec ecx }
	__asm { mov eax, edi }
	__asm { shr eax, 1 }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ebx, [ecx*4] }
	__asm { cmp dword ptr [ebx + eax], 0 }
	__asm { jne L_0042b9cd }
	__asm { push 0x10 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0042b9c7 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0042b9c7: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebx + eax], ecx }
	__asm { L_0042b9cd: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { and edi, 1 }
	__asm { mov eax, dword ptr [eax + ebx] }
	__asm { lea edx, [eax + edi*8] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test edx, edx }
	__asm { je L_0042b9ec }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_0042b9ec: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10264[];
extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x0042bca0
extern "C" __declspec(naked) void asm_0042bca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { cmp edi, ecx }
	__asm { jae L_0042bcbc }
	__asm { push 0xf12f30 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_0042bcbc: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { ja L_0042bcee }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { jb L_0042bce0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor edx, edx }
	__asm { mov word ptr [eax + ecx*2], dx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042bce0: }
	__asm { mov eax, esi }
	__asm { xor edx, edx }
	__asm { pop edi }
	__asm { mov word ptr [eax + ecx*2], dx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042bcee: }
	__asm { test edx, edx }
	__asm { je L_0042bd3d }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_0042bcfc }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0042bcfe }
	__asm { L_0042bcfc: }
	__asm { mov eax, esi }
	__asm { L_0042bcfe: }
	__asm { sub edi, edx }
	__asm { push ebx }
	__asm { lea ebx, [eax + ecx*2] }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { je L_0042bd1b }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { lea eax, [ebx + edx*2] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { L_0042bd1b: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { pop ebx }
	__asm { jb L_0042bd35 }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + edi*2], cx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042bd35: }
	__asm { mov eax, esi }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + edi*2], cx }
	__asm { L_0042bd3d: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1026c[];
extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10328[];
extern "C" char g_00e10354[];
extern "C" char g_0131ab88[];
extern "C" void fn_0042d2c0();
// FUNCTION: ROBLOXSTUDIO 0x0042d0b0
extern "C" __declspec(naked) void asm_0042d0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7271d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [edi + 0x78] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], 0x10065e4 }
	__asm { mov dword ptr [edi + 0x10], 0x1004fbc }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { lea esi, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e10328] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + eax], 0xf1129c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x78] }
	__asm { mov dword ptr [ecx + edi - 4], eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe3addc }
	__asm { mov byte ptr [esi + 0x4c], 0 }
	__asm { mov byte ptr [esi + 0x45], 0 }
	__asm { call dword ptr [g_00e10354] }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov eax, dword ptr [g_0131ab88] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { push 0x40 }
	__asm { push 0x21 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0042d2c0 }
	__asm { test eax, eax }
	__asm { jne L_0042d18b }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 2 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, edi }
	__asm { call dword ptr [g_00e1026c] }
	__asm { L_0042d18b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10354[];
extern "C" char g_00e10368[];
extern "C" char g_00e10370[];
extern "C" char g_00e10378[];
extern "C" char g_0131ab88[];
extern "C" void fn_0042df00();
// FUNCTION: ROBLOXSTUDIO 0x0042d2c0
extern "C" __declspec(naked) void asm_0042d2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72878 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x50], 0 }
	__asm { jne L_0042d3ad }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10370] }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { test edi, edi }
	__asm { je L_0042d3ad }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x4c], 1 }
	__asm { mov byte ptr [esi + 0x45], 0 }
	__asm { call dword ptr [g_00e10354] }
	__asm { lea ecx, [edi + 8] }
	__asm { lea eax, [edi + 4] }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { mov dword ptr [esi + 0x20], edi }
	__asm { mov dword ptr [esi + 0x50], edi }
	__asm { mov eax, dword ptr [g_0131ab88] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { call dword ptr [g_00e10378] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042df00 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10368] }
	__asm { test al, al }
	__asm { je L_0042d36f }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { jmp L_0042d37a }
	__asm { L_0042d36f: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x40], edi }
	__asm { call dword ptr [g_00e10354] }
	__asm { L_0042d37a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0042d399 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_0042d399 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_0042d399: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0042d3ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" void fn_00403540();
extern "C" void fn_0042d5c0();
// FUNCTION: ROBLOXSTUDIO 0x0042d3d0
extern "C" __declspec(naked) void asm_0042d3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6f971 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_0042d3fe }
	__asm { push 1 }
	__asm { call fn_0042d5c0 }
	__asm { L_0042d3fe: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { dec ecx }
	__asm { and dword ptr [esi + 0xc], ecx }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [ecx*4] }
	__asm { cmp dword ptr [edi + eax], 0 }
	__asm { jne L_0042d43b }
	__asm { push 0x18 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0042d435 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0042d435: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + eax], ecx }
	__asm { L_0042d43b: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edi + eax] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { pop edi }
	__asm { test ecx, ecx }
	__asm { je L_0042d470 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_0042d470: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101c8[];
extern "C" char g_00e10528[];
extern "C" char g_00e131a0[];
extern "C" void fn_0040ebf0();
extern "C" void fn_0040ed30();
// FUNCTION: ROBLOXSTUDIO 0x0042d490
extern "C" __declspec(naked) void asm_0042d490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72860 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x68 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0042d516 }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov esi, eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { mov dword ptr [esp + 0x14], 0xf138a8 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [esp + 0x24], 1 }
	__asm { mov dword ptr [esp + 0x28], esi }
	__asm { mov dword ptr [esp + 0x40], 0xf }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { mov dword ptr [esp + 0x18], 0xe32dec }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x80], 0 }
	__asm { call fn_0040ebf0 }
	__asm { L_0042d516: }
	__asm { mov al, byte ptr [edi + 4] }
	__asm { test al, al }
	__asm { je L_0042d57a }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov esi, eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x48] }
	__asm { mov dword ptr [esp + 0x18], 0xf138d0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [esp + 0x50], 0x24 }
	__asm { mov dword ptr [esp + 0x54], esi }
	__asm { mov dword ptr [esp + 0x6c], 0xf }
	__asm { mov dword ptr [esp + 0x68], 0 }
	__asm { mov byte ptr [esp + 0x58], 0 }
	__asm { mov dword ptr [esp + 0x44], 0xe32dec }
	__asm { lea eax, [esp + 0x44] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x80], 1 }
	__asm { call fn_0040ebf0 }
	__asm { L_0042d57a: }
	__asm { call dword ptr [g_00e101c8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov ebx, eax }
	__asm { cmp ecx, ebx }
	__asm { jne L_0042d58d }
	__asm { inc dword ptr [esi] }
	__asm { jmp L_0042d5a0 }
	__asm { L_0042d58d: }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_0040ed30 }
	__asm { lea eax, [esi + 4] }
	__asm { xchg dword ptr [eax], ebx }
	__asm { mov dword ptr [esi], 1 }
	__asm { L_0042d5a0: }
	__asm { mov ecx, dword ptr [esp + 0x74] }
	__asm { mov byte ptr [edi + 4], 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10570[];
extern "C" void fn_0042d900();
// FUNCTION: ROBLOXSTUDIO 0x0042d940
extern "C" __declspec(naked) void asm_0042d940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_0042d97f }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { cmp dword ptr [eax], ecx }
	__asm { jae L_0042d97f }
	__asm { cmp ebx, -1 }
	__asm { je L_0042d967 }
	__asm { movzx eax, byte ptr [ecx - 1] }
	__asm { cmp eax, ebx }
	__asm { jne L_0042d97f }
	__asm { L_0042d967: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { inc dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { pop esi }
	__asm { dec dword ptr [eax] }
	__asm { xor eax, eax }
	__asm { cmp ebx, -1 }
	__asm { cmovne eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042d97f: }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { test eax, eax }
	__asm { je L_0042d9bf }
	__asm { cmp ebx, -1 }
	__asm { je L_0042d9bf }
	__asm { cmp dword ptr [esi + 0x40], 0 }
	__asm { jne L_0042d9a4 }
	__asm { movzx ecx, bl }
	__asm { push eax }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10570] }
	__asm { add esp, 8 }
	__asm { cmp eax, -1 }
	__asm { jne L_0042d9b7 }
	__asm { L_0042d9a4: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { lea ecx, [esi + 0x44] }
	__asm { cmp dword ptr [eax], ecx }
	__asm { je L_0042d9bf }
	__asm { mov byte ptr [ecx], bl }
	__asm { mov ecx, esi }
	__asm { call fn_0042d900 }
	__asm { L_0042d9b7: }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0042d9bf: }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102d0[];
extern "C" char g_00e10564[];
extern "C" char g_00e10568[];
extern "C" void fn_0042e480();
// FUNCTION: ROBLOXSTUDIO 0x0042dc40
extern "C" __declspec(naked) void asm_0042dc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { lea ecx, [esi + 0x44] }
	__asm { cmp dword ptr [eax], ecx }
	__asm { jne L_0042dc72 }
	__asm { cmp dword ptr [ebp + 0x14], 1 }
	__asm { jne L_0042dc72 }
	__asm { cmp dword ptr [esi + 0x40], 0 }
	__asm { jne L_0042dc72 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { add edi, -1 }
	__asm { adc ebx, -1 }
	__asm { jmp L_0042dc78 }
	__asm { L_0042dc72: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_0042dc78: }
	__asm { cmp dword ptr [esi + 0x50], 0 }
	__asm { je L_0042dd12 }
	__asm { mov ecx, esi }
	__asm { call fn_0042e480 }
	__asm { test al, al }
	__asm { je L_0042dd12 }
	__asm { mov eax, edi }
	__asm { or eax, ebx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { jne L_0042dc9f }
	__asm { cmp eax, 1 }
	__asm { je L_0042dcb2 }
	__asm { L_0042dc9f: }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x50] }
	__asm { call dword ptr [g_00e10568] }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_0042dd12 }
	__asm { L_0042dcb2: }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x50] }
	__asm { call dword ptr [g_00e10564] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_0042dd12 }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { lea eax, [esi + 0x44] }
	__asm { cmp dword ptr [edx], eax }
	__asm { jne L_0042dce5 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { sub ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0042dce5: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_0042dd12: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [g_00e102d0] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e102d0[];
extern "C" char g_00e10564[];
extern "C" char g_00e10568[];
extern "C" char g_00e1056c[];
extern "C" void fn_0042e030();
extern "C" void fn_0042e480();
// FUNCTION: ROBLOXSTUDIO 0x0042dd50
extern "C" __declspec(naked) void asm_0042dd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { cmp dword ptr [esi + 0x50], 0 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { je L_0042de03 }
	__asm { call fn_0042e480 }
	__asm { test al, al }
	__asm { je L_0042de03 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x50] }
	__asm { call dword ptr [g_00e1056c] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_0042de03 }
	__asm { mov eax, edi }
	__asm { or eax, ebx }
	__asm { je L_0042ddb4 }
	__asm { push 1 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x50] }
	__asm { call dword ptr [g_00e10568] }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_0042de03 }
	__asm { L_0042ddb4: }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x50] }
	__asm { call dword ptr [g_00e10564] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_0042de03 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { call fn_0042e030 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
	__asm { L_0042de03: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [g_00e102d0] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10354[];
extern "C" char g_00e10560[];
extern "C" char g_0131ab88[];
// FUNCTION: ROBLOXSTUDIO 0x0042de40
extern "C" __declspec(naked) void asm_0042de40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { test ecx, ecx }
	__asm { je L_0042dec1 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { jne L_0042de66 }
	__asm { mov eax, edi }
	__asm { or eax, dword ptr [ebp + 0x10] }
	__asm { jne L_0042de66 }
	__asm { mov eax, 4 }
	__asm { jmp L_0042de68 }
	__asm { L_0042de66: }
	__asm { xor eax, eax }
	__asm { L_0042de68: }
	__asm { push edi }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10560] }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_0042dec1 }
	__asm { mov edi, dword ptr [esi + 0x50] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x4c], 1 }
	__asm { mov byte ptr [esi + 0x45], al }
	__asm { call dword ptr [g_00e10354] }
	__asm { test edi, edi }
	__asm { je L_0042dea7 }
	__asm { lea eax, [edi + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { lea eax, [edi + 4] }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { mov dword ptr [esi + 0x20], edi }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { L_0042dea7: }
	__asm { mov dword ptr [esi + 0x50], edi }
	__asm { mov eax, dword ptr [g_0131ab88] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0042dec1: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
extern "C" char g_00e1034c[];
extern "C" char g_00e10350[];
extern "C" char g_00e10360[];
extern "C" char g_00e10364[];
extern "C" char g_00e10518[];
extern "C" char g_0131ab84[];
extern "C" void fn_00cf64e2();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0042df00
extern "C" __declspec(naked) void asm_0042df00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd726c9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10348] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [g_0131ab84] }
	__asm { mov ecx, dword ptr [g_00e10364] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call dword ptr [g_00e10350] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { cmp edi, dword ptr [eax + 0xc] }
	__asm { jae L_0042df5c }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [ecx + edi*4] }
	__asm { test esi, esi }
	__asm { jne L_0042dfc8 }
	__asm { jmp L_0042df5e }
	__asm { L_0042df5c: }
	__asm { xor esi, esi }
	__asm { L_0042df5e: }
	__asm { cmp byte ptr [eax + 0x14], 0 }
	__asm { je L_0042df75 }
	__asm { call dword ptr [g_00e1034c] }
	__asm { cmp edi, dword ptr [eax + 0xc] }
	__asm { jae L_0042df79 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [eax + edi*4] }
	__asm { L_0042df75: }
	__asm { test esi, esi }
	__asm { jne L_0042dfc8 }
	__asm { L_0042df79: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { jne L_0042dfc8 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10360] }
	__asm { add esp, 8 }
	__asm { cmp eax, -1 }
	__asm { jne L_0042dfaf }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10518] }
	__asm { push 0x1179e30 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_0042dfaf: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [g_0131ab84], esi }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 4] }
	__asm { push esi }
	__asm { call fn_00cf64e2 }
	__asm { add esp, 4 }
	__asm { L_0042dfc8: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10344] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_004036a0();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x0042e290
extern "C" __declspec(naked) void asm_0042e290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp edi, -1 }
	__asm { jne L_0042e2aa }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0042e2aa: }
	__asm { cmp edi, -2 }
	__asm { jbe L_0042e2ba }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0042e2ba: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, edi }
	__asm { jae L_0042e2e2 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { call fn_004036a0 }
	__asm { test edi, edi }
	__asm { je L_0042e347 }
	__asm { L_0042e2ce: }
	__asm { cmp edi, 1 }
	__asm { jne L_0042e30f }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0042e306 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [ecx], al }
	__asm { jmp L_0042e32a }
	__asm { L_0042e2e2: }
	__asm { test edi, edi }
	__asm { jne L_0042e2ce }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { cmp eax, 0x10 }
	__asm { jb L_0042e2fb }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042e2fb: }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { mov byte ptr [eax], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042e306: }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ecx], al }
	__asm { jmp L_0042e32a }
	__asm { L_0042e30f: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0042e319 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0042e31b }
	__asm { L_0042e319: }
	__asm { mov ecx, esi }
	__asm { L_0042e31b: }
	__asm { movsx eax, byte ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { L_0042e32a: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { jb L_0042e341 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042e341: }
	__asm { mov eax, esi }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { L_0042e347: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_004036a0();
extern "C" void fn_0042e380();
// FUNCTION: ROBLOXSTUDIO 0x0042e3d0
extern "C" __declspec(naked) void asm_0042e3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { or eax, 0xffffffff }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { sub eax, ecx }
	__asm { cmp eax, ebx }
	__asm { ja L_0042e3f1 }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0042e3f1: }
	__asm { test ebx, ebx }
	__asm { je L_0042e470 }
	__asm { push edi }
	__asm { lea edi, [ecx + ebx] }
	__asm { cmp edi, -2 }
	__asm { jbe L_0042e409 }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0042e409: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, edi }
	__asm { jae L_0042e443 }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_004036a0 }
	__asm { test edi, edi }
	__asm { je L_0042e46f }
	__asm { L_0042e41d: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push ebx }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_0042e380 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { jb L_0042e469 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042e443: }
	__asm { test edi, edi }
	__asm { jne L_0042e41d }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { cmp eax, 0x10 }
	__asm { jb L_0042e45d }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042e45d: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov byte ptr [eax], 0 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042e469: }
	__asm { mov eax, esi }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { L_0042e46f: }
	__asm { pop edi }
	__asm { L_0042e470: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e101cc[];
extern "C" char g_00e101e4[];
extern "C" void fn_0042ea80();
extern "C" void fn_0042ee00();
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x0042ec70
extern "C" __declspec(naked) void asm_0042ec70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, esi }
	__asm { shr eax, 4 }
	__asm { push edi }
	__asm { inc eax }
	__asm { movzx eax, ax }
	__asm { push 6 }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e101e4] }
	__asm { test eax, eax }
	__asm { je L_0042ed1a }
	__asm { push esi }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_0042ee00 }
	__asm { mov ebx, eax }
	__asm { add esp, 0xc }
	__asm { test ebx, ebx }
	__asm { je L_0042ed1a }
	__asm { movzx ecx, word ptr [ebx] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { lea eax, [ebx + 2] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 3 }
	__asm { call dword ptr [g_00e101cc] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0042ed23 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, 1 }
	__asm { sub ecx, dword ptr [eax - 4] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { sub eax, esi }
	__asm { or ecx, eax }
	__asm { jge L_0042ece5 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0042ea80 }
	__asm { L_0042ece5: }
	__asm { movzx eax, word ptr [ebx] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { push dword ptr [edi] }
	__asm { push eax }
	__asm { lea eax, [ebx + 2] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 3 }
	__asm { call dword ptr [g_00e101cc] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp esi, dword ptr [ecx - 8] }
	__asm { jg L_0042ed23 }
	__asm { mov dword ptr [ecx - 0xc], esi }
	__asm { mov ecx, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov byte ptr [esi + ecx], 0 }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042ed1a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0042ed23: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
}

extern "C" char g_00e101e8[];
extern "C" void fn_0042ee00();
extern "C" void fn_00cf61dc();
// FUNCTION: ROBLOXSTUDIO 0x0042ed90
extern "C" __declspec(naked) void asm_0042ed90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov ecx, 0x131645c }
	__asm { call fn_00cf61dc }
	__asm { mov esi, eax }
	__asm { mov edi, 1 }
	__asm { test esi, esi }
	__asm { je L_0042eded }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { shr ebx, 4 }
	__asm { L_0042edb3: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebx + 1] }
	__asm { movzx eax, ax }
	__asm { push eax }
	__asm { push 6 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101e8] }
	__asm { test eax, eax }
	__asm { je L_0042eddb }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0042ee00 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0042edf4 }
	__asm { L_0042eddb: }
	__asm { push edi }
	__asm { mov ecx, 0x131645c }
	__asm { call fn_00cf61dc }
	__asm { mov esi, eax }
	__asm { inc edi }
	__asm { test esi, esi }
	__asm { jne L_0042edb3 }
	__asm { L_0042eded: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0042edf4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e10f54[];
extern "C" char g_00e10f58[];
extern "C" char g_00e10f60[];
extern "C" char g_00e110a8[];
extern "C" char g_012e0eb4[];
extern "C" char g_0131de3c[];
extern "C" void fn_0043aaf0();
extern "C" void fn_008c68b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00430650
extern "C" __declspec(naked) void asm_00430650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73407 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131de3c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_004306a5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131de3c], eax }
	__asm { push 0 }
	__asm { mov ecx, 0x131de40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10f60] }
	__asm { push 0xddc5f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004306a5: }
	__asm { push 0x131de40 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10f58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [esi + 0x58], 0 }
	__asm { je L_004306d6 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { je L_0043071c }
	__asm { cmp byte ptr [esi + 0x69], 0 }
	__asm { jne L_0043071c }
	__asm { push 0x1006930 }
	__asm { jmp L_00430705 }
	__asm { L_004306d6: }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { jne L_00430700 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { call fn_0043aaf0 }
	__asm { test eax, eax }
	__asm { je L_00430700 }
	__asm { cmp dword ptr [eax + 0x78], 1 }
	__asm { jne L_00430700 }
	__asm { push 2 }
	__asm { mov ecx, eax }
	__asm { call fn_008c68b0 }
	__asm { L_00430700: }
	__asm { push 0x1006990 }
	__asm { L_00430705: }
	__asm { mov byte ptr [esi + 0x69], 1 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { L_0043071c: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10f54] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_012bfa3d[];
extern "C" char g_012e0eb4[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eb9c[];
extern "C" void fn_00430850();
extern "C" void fn_00430900();
extern "C" void fn_00433bb0();
extern "C" void fn_00434230();
extern "C" void fn_00437390();
extern "C" void fn_0043aaf0();
extern "C" void fn_004a4c90();
extern "C" void fn_008c68b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00430740
extern "C" __declspec(naked) void asm_00430740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0043078c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0043078c: }
	__asm { cmp dword ptr [g_0131eb9c], 0 }
	__asm { jne L_004307bc }
	__asm { push 0x10069f0 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004307bc: }
	__asm { cmp dword ptr [esi + 0x58], 0 }
	__asm { je L_00430833 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { je L_004307f1 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { call fn_0043aaf0 }
	__asm { test eax, eax }
	__asm { je L_004307e6 }
	__asm { cmp dword ptr [eax + 0x78], 1 }
	__asm { jne L_004307e6 }
	__asm { push 2 }
	__asm { mov ecx, eax }
	__asm { call fn_008c68b0 }
	__asm { L_004307e6: }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { push dword ptr [ecx + 0x58] }
	__asm { call fn_00434230 }
	__asm { L_004307f1: }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { call fn_00433bb0 }
	__asm { test al, al }
	__asm { je L_0043080b }
	__asm { cmp byte ptr [g_012bfa3d], 0 }
	__asm { je L_0043080b }
	__asm { call fn_00430900 }
	__asm { L_0043080b: }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00430850 }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00430826 }
	__asm { mov eax, dword ptr [eax + 0x128] }
	__asm { jmp L_00430829 }
	__asm { L_00430826: }
	__asm { or eax, 0xffffffff }
	__asm { L_00430829: }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x20] }
	__asm { call fn_00437390 }
	__asm { L_00430833: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_01318fba[];
extern "C" char g_01320164[];
extern "C" void fn_004318a0();
extern "C" void fn_00432ae0();
extern "C" void fn_0057e360();
extern "C" void fn_005812a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00430850
extern "C" __declspec(naked) void asm_00430850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { test ecx, ecx }
	__asm { je L_00430888 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00432ae0 }
	__asm { test al, al }
	__asm { je L_00430888 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_004318a0 }
	__asm { L_00430888: }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_004308b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004308b9: }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { je L_004308ce }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005812a0 }
	__asm { jmp L_004308ea }
	__asm { L_004308ce: }
	__asm { push 0x1035b00 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push 0x1320168 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { L_004308ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [esi + 0x69], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0eb4[];
extern "C" void fn_004033d0();
extern "C" void fn_004316d0();
extern "C" void fn_0043f040();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_007abc80();
// FUNCTION: ROBLOXSTUDIO 0x00430df0
extern "C" __declspec(naked) void asm_00430df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd740e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { jne L_00430e50 }
	__asm { cmp byte ptr [g_012e0eb4], al }
	__asm { je L_00430e35 }
	__asm { call fn_007abc80 }
	__asm { mov byte ptr [eax + 0xbd], 0 }
	__asm { L_00430e35: }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_0043f040 }
	__asm { L_00430e3d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00430e50: }
	__asm { cmp eax, 2 }
	__asm { jne L_00430e3d }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_004316d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 0x100691c }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0x430e3d }
	__asm { ret }
}

extern "C" char g_00e10fb8[];
extern "C" void fn_004033d0();
extern "C" void fn_00431850();
extern "C" void fn_0043f040();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_007a9a60();
extern "C" void fn_007abc80();
// FUNCTION: ROBLOXSTUDIO 0x00430f30
extern "C" __declspec(naked) void asm_00430f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd74108 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { call fn_007abc80 }
	__asm { mov ecx, eax }
	__asm { call fn_007a9a60 }
	__asm { mov ecx, esi }
	__asm { call fn_00431850 }
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
	__asm { push 0x1007e30 }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push eax }
	__asm { push 2 }
	__asm { push 0x1006b58 }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 0x11], 0 }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_0043f040 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 0x100691c }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0x430fbe }
	__asm { ret }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_01318fba[];
extern "C" char g_01320164[];
extern "C" void fn_004033d0();
extern "C" void fn_00430df0();
extern "C" void fn_00430eb0();
extern "C" void fn_00430f30();
extern "C" void fn_0057e360();
extern "C" void fn_005812a0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00431290
extern "C" __declspec(naked) void asm_00431290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73c36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, edx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { sub eax, 0 }
	__asm { je L_0043133a }
	__asm { dec eax }
	__asm { je L_0043132f }
	__asm { dec eax }
	__asm { jne L_004312d1 }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00430eb0 }
	__asm { L_004312d1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00431309 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00431309: }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { je L_00431382 }
	__asm { mov ecx, 0x1320168 }
	__asm { call fn_005812a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0043132f: }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00430df0 }
	__asm { jmp L_004312d1 }
	__asm { L_0043133a: }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00430f30 }
	__asm { jmp L_004312d1 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 0x100691c }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0x4312d1 }
	__asm { ret }
	__asm { L_00431382: }
	__asm { push 0x1035b00 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x1320168 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e128f8[];
extern "C" char g_00e128fc[];
extern "C" char g_00e12900[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004318a0
extern "C" __declspec(naked) void asm_004318a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { test al, 1 }
	__asm { jne L_004318ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004318ee: }
	__asm { mov edi, dword ptr [g_01320184] }
	__asm { cmp byte ptr [edi + 0x420], 0 }
	__asm { jne L_004319a4 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { mov ecx, dword ptr [edi + 0x274] }
	__asm { je L_0043196f }
	__asm { mov eax, dword ptr [ebx + 0x60] }
	__asm { mov esi, dword ptr [g_00e128fc] }
	__asm { test eax, eax }
	__asm { jne L_00431927 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e128f8] }
	__asm { mov dword ptr [ebx + 0x60], eax }
	__asm { jmp L_0043192c }
	__asm { L_00431927: }
	__asm { push eax }
	__asm { push 0 }
	__asm { call esi }
	__asm { L_0043192c: }
	__asm { push dword ptr [edi + 0x1d4] }
	__asm { mov ecx, dword ptr [edi + 0x274] }
	__asm { push 0 }
	__asm { call esi }
	__asm { push dword ptr [edi + 0x1d8] }
	__asm { mov ecx, dword ptr [edi + 0x274] }
	__asm { push 0 }
	__asm { call esi }
	__asm { push dword ptr [edi + 0x1dc] }
	__asm { mov ecx, dword ptr [edi + 0x274] }
	__asm { push 0 }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0043196f: }
	__asm { push dword ptr [edi + 0x1dc] }
	__asm { mov esi, dword ptr [g_00e12900] }
	__asm { call esi }
	__asm { push dword ptr [edi + 0x1d8] }
	__asm { mov ecx, dword ptr [edi + 0x274] }
	__asm { call esi }
	__asm { push dword ptr [edi + 0x1d4] }
	__asm { mov ecx, dword ptr [edi + 0x274] }
	__asm { call esi }
	__asm { push dword ptr [ebx + 0x60] }
	__asm { mov ecx, dword ptr [edi + 0x274] }
	__asm { call esi }
	__asm { L_004319a4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131ddcc[];
extern "C" char g_0131de2c[];
extern "C" void fn_0042f410();
extern "C" void fn_0042f6d0();
extern "C" void fn_00434ef0();
extern "C" void fn_00437220();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004328c0
extern "C" __declspec(naked) void asm_004328c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7333e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x5d], 0 }
	__asm { jne L_00432958 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_004328f0 }
	__asm { call fn_00434ef0 }
	__asm { L_004328f0: }
	__asm { mov eax, dword ptr [g_0131ddcc] }
	__asm { test al, 1 }
	__asm { jne L_00432921 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ddcc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042f6d0 }
	__asm { push 0xddc5e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00432921: }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { push esp }
	__asm { mov dword ptr [g_0131de2c], esi }
	__asm { call fn_0042f410 }
	__asm { mov eax, dword ptr [g_0131de2c] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00432946 }
	__asm { mov eax, dword ptr [eax + 0x128] }
	__asm { jmp L_00432949 }
	__asm { L_00432946: }
	__asm { or eax, 0xffffffff }
	__asm { L_00432949: }
	__asm { push eax }
	__asm { mov ecx, 0x131ddd8 }
	__asm { call fn_00437220 }
	__asm { mov byte ptr [esi + 0x5d], 1 }
	__asm { L_00432958: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0eb4[];
extern "C" char g_0131ddcc[];
extern "C" void fn_0042f6d0();
extern "C" void fn_00430650();
extern "C" void fn_00436ca0();
extern "C" void fn_007a49a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004342e0
extern "C" __declspec(naked) void asm_004342e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd73c16 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { jle L_004343b9 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { je L_00434327 }
	__asm { cmp dword ptr [esi + 0x58], 0 }
	__asm { jne L_0043437d }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [eax + 0x130] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { jmp L_0043437d }
	__asm { L_00434327: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_007a49a0 }
	__asm { mov edi, eax }
	__asm { lea ebx, [esi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ebx, edi }
	__asm { je L_0043436e }
	__asm { mov ecx, ebx }
	__asm { call fn_00436ca0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_0043436e: }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00436ca0 }
	__asm { L_0043437d: }
	__asm { mov eax, dword ptr [g_0131ddcc] }
	__asm { test al, 1 }
	__asm { jne L_004343ae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ddcc], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0042f6d0 }
	__asm { push 0xddc5e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004343ae: }
	__asm { push esi }
	__asm { mov ecx, 0x131ddd0 }
	__asm { call fn_00430650 }
	__asm { L_004343b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11104[];
extern "C" char g_00e12904[];
extern "C" void fn_00447610();
// FUNCTION: ROBLOXSTUDIO 0x00434db0
extern "C" __declspec(naked) void asm_00434db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72f45 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0x1007d64 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { call dword ptr [g_00e12904] }
	__asm { push 0x64 }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov word ptr [esi + 0x28], 0x100 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00434e51 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { mov ecx, eax }
	__asm { call fn_00447610 }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00434e51: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11100[];
extern "C" char g_00e11110[];
extern "C" char g_00e1291c[];
extern "C" char g_00e12920[];
extern "C" char g_00e12928[];
extern "C" char g_00e1292c[];
extern "C" char g_0131dfac[];
extern "C" void fn_0042f470();
extern "C" void fn_00432f30();
extern "C" void fn_0043fd60();
extern "C" void fn_004416c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00435590
extern "C" __declspec(naked) void asm_00435590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73b7b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1291c] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12928] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e12920] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_0043566e }
	__asm { push ecx }
	__asm { mov edx, 0x1007a18 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_0042f470 }
	__asm { mov esi, eax }
	__asm { mov edx, 0x1007a2c }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0042f470 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ecx], 0x3000 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1292c] }
	__asm { add esp, 0x20 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e11100] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_004356b0 }
	__asm { L_0043566e: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00432f30 }
	__asm { mov eax, dword ptr [g_0131dfac] }
	__asm { test al, 1 }
	__asm { jne L_004356a5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131dfac], eax }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_0043fd60 }
	__asm { push 0xddc6d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { L_004356a5: }
	__asm { push ecx }
	__asm { mov ecx, 0x131dfb0 }
	__asm { call fn_004416c0 }
	__asm { L_004356b0: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12904[];
extern "C" char g_00e12908[];
extern "C" char g_00e12910[];
extern "C" void fn_00433b80();
extern "C" void fn_00433bb0();
extern "C" void fn_00435930();
extern "C" void fn_004359b0();
extern "C" void fn_00447980();
// FUNCTION: ROBLOXSTUDIO 0x004356d0
extern "C" __declspec(naked) void asm_004356d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0043575b }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { test ebx, ebx }
	__asm { js L_0043575b }
	__asm { call dword ptr [g_00e12904] }
	__asm { cmp ebx, eax }
	__asm { jg L_0043575b }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { jne L_00435701 }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { test edi, edi }
	__asm { je L_0043575b }
	__asm { L_00435701: }
	__asm { mov ecx, edi }
	__asm { call fn_00433b80 }
	__asm { test al, al }
	__asm { jne L_00435717 }
	__asm { mov ecx, edi }
	__asm { call fn_00433bb0 }
	__asm { test al, al }
	__asm { je L_0043575b }
	__asm { L_00435717: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00435723 }
	__asm { call fn_00447980 }
	__asm { L_00435723: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12908] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12910] }
	__asm { cmp dword ptr [ebp - 0xc], 0 }
	__asm { je L_0043575b }
	__asm { cmp dword ptr [ebp - 8], 0 }
	__asm { je L_0043575b }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00435930 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004359b0 }
	__asm { L_0043575b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f6c[];
extern "C" char g_00e11110[];
extern "C" char g_00e12904[];
extern "C" char g_00e12908[];
extern "C" char g_00e12910[];
extern "C" char g_00e12934[];
extern "C" void fn_00435930();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00435860
extern "C" __declspec(naked) void asm_00435860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6f419 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00435902 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { js L_00435902 }
	__asm { call dword ptr [g_00e12904] }
	__asm { cmp edi, eax }
	__asm { jg L_00435902 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12908] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12910] }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { je L_00435902 }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { je L_00435902 }
	__asm { push 0 }
	__asm { push 0x12c31ac }
	__asm { push 0x12c3188 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e12934] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004358f1 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { call dword ptr [g_00e10f6c] }
	__asm { L_004358f1: }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { je L_00435902 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00435930 }
	__asm { L_00435902: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10508[];
extern "C" char g_00e12904[];
extern "C" void fn_00433c00();
extern "C" void fn_00433e20();
extern "C" void fn_004367e0();
extern "C" void fn_00436930();
// FUNCTION: ROBLOXSTUDIO 0x00436000
extern "C" __declspec(naked) void asm_00436000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd73bc8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { call dword ptr [g_00e12904] }
	__asm { cmp dword ptr [esi + 0x24], eax }
	__asm { je L_0043608f }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004367e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push eax }
	__asm { call fn_00433c00 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { test eax, eax }
	__asm { je L_00436074 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_00436074: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { call dword ptr [g_00e12904] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043608f: }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { jne L_004360a4 }
	__asm { mov ecx, esi }
	__asm { call fn_00436930 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_00433e20 }
	__asm { L_004360a4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12670[];
// FUNCTION: ROBLOXSTUDIO 0x00436750
extern "C" __declspec(naked) void asm_00436750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp eax, dword ptr [esi + 0x1c] }
	__asm { jne L_004367d4 }
	__asm { cmp byte ptr [esi + 0x29], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { je L_0043678b }
	__asm { movzx eax, word ptr [ecx + 8] }
	__asm { cmp eax, 6 }
	__asm { je L_00436775 }
	__asm { cmp eax, 7 }
	__asm { jne L_0043678b }
	__asm { L_00436775: }
	__asm { test byte ptr [ecx + 0x1c], 1 }
	__asm { je L_00436787 }
	__asm { or word ptr [ecx + 0xa], 4 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00436787: }
	__asm { mov byte ptr [esi + 0x29], 0 }
	__asm { L_0043678b: }
	__asm { movzx eax, word ptr [ecx + 8] }
	__asm { cmp eax, 9 }
	__asm { jne L_0043679f }
	__asm { mov byte ptr [esi + 0x29], 1 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0043679f: }
	__asm { cmp eax, 6 }
	__asm { je L_004367b9 }
	__asm { cmp eax, 0x33 }
	__asm { je L_004367b9 }
	__asm { cmp eax, 7 }
	__asm { jne L_004367d4 }
	__asm { mov byte ptr [esi + 0x28], 0 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004367b9: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov byte ptr [esi + 0x28], 1 }
	__asm { call dword ptr [g_00e12670] }
	__asm { test dword ptr [ebp + 8], 0xe000000 }
	__asm { je L_004367d4 }
	__asm { mov byte ptr [esi + 0x28], 0 }
	__asm { L_004367d4: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00436ca0();
extern "C" void fn_00437c60();
extern "C" void fn_0043e0c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00436bf0
extern "C" __declspec(naked) void asm_00436bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72c60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x88888889 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { sub esi, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call fn_00437c60 }
	__asm { test al, al }
	__asm { je L_00436c6f }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi] }
	__asm { push dword ptr [ebx + 4] }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0043e0c0 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_00436c6f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00436ca0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00437d00();
extern "C" void fn_0043e620();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00436ea0
extern "C" __declspec(naked) void asm_00436ea0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp esi, ebx }
	__asm { je L_00436ec7 }
	__asm { mov edi, edi }
	__asm { L_00436eb0: }
	__asm { mov ecx, esi }
	__asm { call fn_0043e620 }
	__asm { add esi, 0x78 }
	__asm { cmp esi, ebx }
	__asm { jne L_00436eb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00436ec7: }
	__asm { mov eax, esi }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92aa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00437d00 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_00436f42 }
	__asm { add esi, 5 }
	__asm { je L_00436f12 }
	__asm { add esi, -5 }
	__asm { jmp L_00436f14 }
	__asm { L_00436f12: }
	__asm { xor esi, esi }
	__asm { L_00436f14: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00436f41 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00436f41 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00436f41: }
	__asm { pop edi }
	__asm { L_00436f42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x0043a7a0
extern "C" __declspec(naked) void asm_0043a7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0043a7eb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0043a7eb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0043a832 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007c88 }
	__asm { mov dword ptr [esi + 8], 0x1007c80 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1007d18 }
	__asm { mov dword ptr [esi + 8], 0x1007d10 }
	__asm { jmp L_0043a834 }
	__asm { L_0043a832: }
	__asm { xor esi, esi }
	__asm { L_0043a834: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0043a851 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0043a851: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bdb0();
// FUNCTION: ROBLOXSTUDIO 0x0043aa20
extern "C" __declspec(naked) void asm_0043aa20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0043aa6b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0043aa6b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0043aab2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe51730 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007c70 }
	__asm { mov dword ptr [esi + 8], 0x1007c68 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1007d00 }
	__asm { mov dword ptr [esi + 8], 0x1007cf8 }
	__asm { jmp L_0043aab4 }
	__asm { L_0043aab2: }
	__asm { xor esi, esi }
	__asm { L_0043aab4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bdb0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0043aad1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0043aad1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x0043adc0
extern "C" __declspec(naked) void asm_0043adc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0043ae0b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0043ae0b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0043ae52 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007c58 }
	__asm { mov dword ptr [esi + 8], 0x1007c50 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1007ce8 }
	__asm { mov dword ptr [esi + 8], 0x1007ce0 }
	__asm { jmp L_0043ae54 }
	__asm { L_0043ae52: }
	__asm { xor esi, esi }
	__asm { L_0043ae54: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0043ae71 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0043ae71: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043c610();
// FUNCTION: ROBLOXSTUDIO 0x0043ae90
extern "C" __declspec(naked) void asm_0043ae90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0043aedb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0043aedb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0043af22 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe54238 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007c40 }
	__asm { mov dword ptr [esi + 8], 0x1007c38 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1007cd0 }
	__asm { mov dword ptr [esi + 8], 0x1007cc8 }
	__asm { jmp L_0043af24 }
	__asm { L_0043af22: }
	__asm { xor esi, esi }
	__asm { L_0043af24: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043c610 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0043af41 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0043af41: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x0043af60
extern "C" __declspec(naked) void asm_0043af60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0043afab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0043afab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0043aff2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007c28 }
	__asm { mov dword ptr [esi + 8], 0x1007c20 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1007cb8 }
	__asm { mov dword ptr [esi + 8], 0x1007cb0 }
	__asm { jmp L_0043aff4 }
	__asm { L_0043aff2: }
	__asm { xor esi, esi }
	__asm { L_0043aff4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0043b011 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0043b011: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043c7d0();
// FUNCTION: ROBLOXSTUDIO 0x0043b030
extern "C" __declspec(naked) void asm_0043b030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0043b07b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0043b07b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0043b0c2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0x1007c00 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007c10 }
	__asm { mov dword ptr [esi + 8], 0x1007c08 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1007ca0 }
	__asm { mov dword ptr [esi + 8], 0x1007c98 }
	__asm { jmp L_0043b0c4 }
	__asm { L_0043b0c2: }
	__asm { xor esi, esi }
	__asm { L_0043b0c4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043c7d0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0043b0e1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0043b0e1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_012e4e5c[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00439ec0();
extern "C" void fn_0043e280();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x0043b650
extern "C" __declspec(naked) void asm_0043b650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x7c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0043b6f8 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe52894 }
	__asm { mov dword ptr [esi + 4], 0xe5290c }
	__asm { mov dword ptr [esi + 0x18], 0xe52914 }
	__asm { mov dword ptr [esi + 0x1c], 0xe52920 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00439ec0 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4e5c] }
	__asm { mov dword ptr [esi], 0xe52934 }
	__asm { mov dword ptr [esi + 4], 0xe529ac }
	__asm { mov dword ptr [esi + 0x18], 0xe529b4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe529c0 }
	__asm { mov dword ptr [esi + 0x78], 0xf }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov byte ptr [esi + 0x64], 0 }
	__asm { jmp L_0043b6fa }
	__asm { L_0043b6f8: }
	__asm { xor esi, esi }
	__asm { L_0043b6fa: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0043e280 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0043b72b }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0043b72b }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0043b72b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131b18c[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00437ad0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0043c200
extern "C" __declspec(naked) void asm_0043c200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe52394 }
	__asm { test al, al }
	__asm { je L_0043c271 }
	__asm { cmp dword ptr [g_0131b18c], 0x29a }
	__asm { je L_0043c271 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0043c260 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043c271 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0043c260: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043c271: }
	__asm { mov ecx, esi }
	__asm { call fn_00437ad0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0043c2cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0043c2cb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131b188[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00437c00();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0043c510
extern "C" __declspec(naked) void asm_0043c510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe52598 }
	__asm { test al, al }
	__asm { je L_0043c581 }
	__asm { cmp dword ptr [g_0131b188], 0x29a }
	__asm { je L_0043c581 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0043c570 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043c581 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0043c570: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043c581: }
	__asm { mov ecx, esi }
	__asm { call fn_00437c00 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0043c5db }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0043c5db: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131b174[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00438360();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0043cc20
extern "C" __declspec(naked) void asm_0043cc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe526e0 }
	__asm { test al, al }
	__asm { je L_0043cc91 }
	__asm { cmp dword ptr [g_0131b174], 0x29a }
	__asm { je L_0043cc91 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0043cc80 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043cc91 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0043cc80: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043cc91: }
	__asm { mov ecx, esi }
	__asm { call fn_00438360 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0043cceb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0043cceb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131b170[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00438490();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0043cf30
extern "C" __declspec(naked) void asm_0043cf30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe52888 }
	__asm { test al, al }
	__asm { je L_0043cfa1 }
	__asm { cmp dword ptr [g_0131b170], 0x29a }
	__asm { je L_0043cfa1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0043cf90 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043cfa1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0043cf90: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043cfa1: }
	__asm { mov ecx, esi }
	__asm { call fn_00438490 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0043cffb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0043cffb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00402ce0();
extern "C" void fn_0043dc10();
// FUNCTION: ROBLOXSTUDIO 0x0043d2b0
extern "C" __declspec(naked) void asm_0043d2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7d938 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov edi, ecx }
	__asm { je L_0043d348 }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00402ce0 }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_0043d2ea }
	__asm { inc eax }
	__asm { jmp L_0043d2ec }
	__asm { L_0043d2ea: }
	__asm { xor eax, eax }
	__asm { L_0043d2ec: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_0043d31e }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_0043d31e }
	__asm { add eax, -8 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_0043d325 }
	__asm { L_0043d31e: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0043d325: }
	__asm { lea eax, [ebp + 8] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, edi }
	__asm { call fn_0043dc10 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0043d348 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0043d348: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00421060();
extern "C" void fn_0043a460();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0043d970
extern "C" __declspec(naked) void asm_0043d970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72a51 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0043a460 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_0043d9f2 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0043d9f2 }
	__asm { lea edx, [eax + 5] }
	__asm { test edx, edx }
	__asm { je L_0043d9d4 }
	__asm { add edx, -5 }
	__asm { jmp L_0043d9d6 }
	__asm { L_0043d9d4: }
	__asm { xor edx, edx }
	__asm { L_0043d9d6: }
	__asm { cmp dword ptr [edx - 8], 0 }
	__asm { je L_0043d9f2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { test eax, eax }
	__asm { je L_0043d9e7 }
	__asm { add eax, 5 }
	__asm { jmp L_0043d9e9 }
	__asm { L_0043d9e7: }
	__asm { xor eax, eax }
	__asm { L_0043d9e9: }
	__asm { push eax }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0043d9f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0131abb4[];
extern "C" char g_0131abb8[];
extern "C" char g_0131abbc[];
extern "C" char g_0131abc0[];
extern "C" char g_0131abc4[];
extern "C" char g_0131abc8[];
extern "C" char g_0131abcc[];
extern "C" char g_0131abd0[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0043da20
extern "C" __declspec(naked) void asm_0043da20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72ace }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131abd0] }
	__asm { test al, 1 }
	__asm { jne L_0043da62 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131abd0], eax }
	__asm { push 0xe6f660 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131abcc], eax }
	__asm { L_0043da62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72bbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131abc8] }
	__asm { test al, 1 }
	__asm { jne L_0043dab2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131abc8], eax }
	__asm { push 0xe5220c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131abc4], eax }
	__asm { L_0043dab2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72b7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131abc0] }
	__asm { test al, 1 }
	__asm { jne L_0043db02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131abc0], eax }
	__asm { push 0xe52214 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131abbc], eax }
	__asm { L_0043db02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd72aae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131abb8] }
	__asm { test al, 1 }
	__asm { jne L_0043db52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131abb8], eax }
	__asm { push 0xe52218 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131abb4], eax }
	__asm { L_0043db52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x0043dc10
extern "C" __declspec(naked) void asm_0043dc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push esi }
	__asm { mov esi, edx }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push edi }
	__asm { lea edi, [eax + edx*4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test eax, eax }
	__asm { je L_0043dd14 }
	__asm { push ebx }
	__asm { L_0043dc32: }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { mov ebx, eax }
	__asm { jne L_0043dc78 }
	__asm { push 0x10 }
	__asm { mov word ptr [esi + 8], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0043dd1a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { jmp L_0043dc82 }
	__asm { L_0043dc78: }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_0043dc82 }
	__asm { mov byte ptr [esi + 9], 0 }
	__asm { L_0043dc82: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0043dc96 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_0043dc96: }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [esi + 9], 1 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea eax, [ecx + 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { inc dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_0043dcc7 }
	__asm { add eax, -8 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_0043dcce }
	__asm { L_0043dcc7: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0043dcce: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_0043dcd9 }
	__asm { add ecx, -8 }
	__asm { jmp L_0043dcdb }
	__asm { L_0043dcd9: }
	__asm { xor ecx, ecx }
	__asm { L_0043dcdb: }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edx, [eax + edx*4] }
	__asm { jne L_0043dcf6 }
	__asm { mov dword ptr [edx], edi }
	__asm { lea edi, [ecx + 8] }
	__asm { jmp L_0043dd08 }
	__asm { L_0043dcf6: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0043dd08: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_0043dc32 }
	__asm { pop ebx }
	__asm { L_0043dd14: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0043dd1a: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_00e10504[];
extern "C" char g_00e129bc[];
extern "C" char g_00e129c0[];
extern "C" void fn_0043dd40();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0043ded0
extern "C" __declspec(naked) void asm_0043ded0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73b15 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_0043defe: }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_0043df85 }
	__asm { push 0xc }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0043df4e }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { call dword ptr [g_00e129bc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e129c0] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_0043defe }
	__asm { L_0043df4e: }
	__asm { xor esi, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_0043defe }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_0043df7c }
	__asm { L_0043df68: }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test ecx, ecx }
	__asm { je L_0043df78 }
	__asm { push ecx }
	__asm { call fn_0043dd40 }
	__asm { L_0043df78: }
	__asm { cmp esi, edi }
	__asm { jne L_0043df68 }
	__asm { L_0043df7c: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0043df85: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0043e620();
extern "C" void fn_0043e6e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0043e0c0
extern "C" __declspec(naked) void asm_0043e0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72a91 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { L_0043e0f1: }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_0043e13f }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0043e10c }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0043e6e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_0043e10c: }
	__asm { add esi, 0x78 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { add eax, 0x78 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_0043e0f1 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_0043e136 }
	__asm { L_0043e128: }
	__asm { mov ecx, esi }
	__asm { call fn_0043e620 }
	__asm { add esi, 0x78 }
	__asm { cmp esi, edi }
	__asm { jne L_0043e128 }
	__asm { L_0043e136: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0043e13f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043e620();
extern "C" void fn_0043e6e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0043e160
extern "C" __declspec(naked) void asm_0043e160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72a71 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { L_0043e194: }
	__asm { cmp edi, ebx }
	__asm { je L_0043e1db }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0043e1ab }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0043e6e0 }
	__asm { L_0043e1ab: }
	__asm { add esi, 0x78 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x78 }
	__asm { jmp L_0043e194 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_0043e1d2 }
	__asm { L_0043e1c4: }
	__asm { mov ecx, esi }
	__asm { call fn_0043e620 }
	__asm { add esi, 0x78 }
	__asm { cmp esi, edi }
	__asm { jne L_0043e1c4 }
	__asm { L_0043e1d2: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0043e1db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_00436bf0();
extern "C" void fn_0043e620();
// FUNCTION: ROBLOXSTUDIO 0x0043e4b0
extern "C" __declspec(naked) void asm_0043e4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd73238 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { call fn_00436bf0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_0043e52e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0043e52e: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { test esi, esi }
	__asm { je L_0043e570 }
	__asm { mov edi, dword ptr [ebp + 0x2c] }
	__asm { cmp esi, edi }
	__asm { je L_0043e566 }
	__asm { L_0043e555: }
	__asm { mov ecx, esi }
	__asm { call fn_0043e620 }
	__asm { add esi, 0x78 }
	__asm { cmp esi, edi }
	__asm { jne L_0043e555 }
	__asm { mov esi, dword ptr [ebp + 0x28] }
	__asm { L_0043e566: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0043e570: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_00e10fb8[];
extern "C" void fn_0044cb30();
extern "C" void fn_0044cc00();
extern "C" void fn_0044cc90();
// FUNCTION: ROBLOXSTUDIO 0x00441740
extern "C" __declspec(naked) void asm_00441740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov edi, 1 }
	__asm { L_00441752: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esp + 8], edi }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_00441765 }
	__asm { mov ecx, esi }
	__asm { call fn_0044cb30 }
	__asm { L_00441765: }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0044cc00 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp eax, ecx }
	__asm { jne L_00441799 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call fn_0044cc90 }
	__asm { L_00441799: }
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
	__asm { push 0x1009548 }
	__asm { push dword ptr [eax - 4] }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { inc edi }
	__asm { add esp, 0x5c }
	__asm { cmp edi, 3 }
	__asm { jl L_00441752 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_00e12a28[];
extern "C" char g_00e12a7c[];
extern "C" char g_00e12a80[];
extern "C" void fn_00445cf0();
extern "C" void fn_00449fd0();
extern "C" void fn_0044a140();
extern "C" void fn_0044a2b0();
extern "C" void fn_0044cb30();
extern "C" void fn_0044cc00();
extern "C" void fn_0044cc90();
// FUNCTION: ROBLOXSTUDIO 0x00441ac0
extern "C" __declspec(naked) void asm_00441ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7e0ac }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { mov edi, ecx }
	__asm { call fn_0044a2b0 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { mov ebx, dword ptr [g_00e12a7c] }
	__asm { call ebx }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00449fd0 }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call ebx }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { jne L_00441b25 }
	__asm { push 0x100a258 }
	__asm { mov byte ptr [esi + 0x28], 1 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0xc }
	__asm { L_00441b25: }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_0044a140 }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { mov ecx, esi }
	__asm { call ebx }
	__asm { push 0x34 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00441b56 }
	__asm { mov ecx, eax }
	__asm { call fn_00445cf0 }
	__asm { jmp L_00441b58 }
	__asm { L_00441b56: }
	__asm { xor eax, eax }
	__asm { L_00441b58: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12a80] }
	__asm { mov ebx, dword ptr [g_00e12a28] }
	__asm { mov esi, 1 }
	__asm { L_00441b73: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_00441b85 }
	__asm { mov ecx, edi }
	__asm { call fn_0044cb30 }
	__asm { L_00441b85: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0044cc00 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { jne L_00441bb3 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_0044cc90 }
	__asm { L_00441bb3: }
	__asm { mov ecx, dword ptr [eax - 4] }
	__asm { call ebx }
	__asm { inc esi }
	__asm { cmp esi, 3 }
	__asm { jl L_00441b73 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e12984[];
extern "C" char g_00e12a74[];
extern "C" char g_00e12a7c[];
extern "C" char g_00e12a80[];
extern "C" char g_00e12a84[];
extern "C" void fn_00442140();
// FUNCTION: ROBLOXSTUDIO 0x00442a40
extern "C" __declspec(naked) void asm_00442a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8763c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { call dword ptr [g_00e12a7c] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { cmp esi, dword ptr [ebx + 4] }
	__asm { je L_00442ab2 }
	__asm { L_00442a75: }
	__asm { push 0x28 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00442a98 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00442140 }
	__asm { jmp L_00442a9a }
	__asm { L_00442a98: }
	__asm { xor eax, eax }
	__asm { L_00442a9a: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12a80] }
	__asm { add esi, 0x78 }
	__asm { cmp esi, dword ptr [ebx + 4] }
	__asm { jne L_00442a75 }
	__asm { L_00442ab2: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { je L_00442ac6 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12984] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { L_00442ac6: }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a74] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12a84] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131ddcc[];
extern "C" char g_0131eb88[];
extern "C" void fn_00421eb0();
extern "C" void fn_0042f6d0();
extern "C" void fn_00430520();
extern "C" void fn_00433500();
extern "C" void fn_00439d00();
extern "C" void fn_00462bc0();
extern "C" void fn_004a4c90();
extern "C" void fn_004a5540();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00443bd0
extern "C" __declspec(naked) void asm_00443bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74adc }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x38] }
	__asm { test edi, edi }
	__asm { je L_00443d0b }
	__asm { add edi, 0x1c }
	__asm { je L_00443d0b }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00439d00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00443d0b }
	__asm { add edi, -0x1c }
	__asm { je L_00443d0b }
	__asm { sub esp, 0x10 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [esp + 0x20], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push dword ptr [edi + 0x8c] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { call fn_00462bc0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_00443c87 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov byte ptr [esp + 0x34], 1 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { L_00443c87: }
	__asm { mov ecx, 0x131eb8c }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { call fn_004a5540 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [esp + 0x1c], esp }
	__asm { push dword ptr [edi + 0x8c] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esp + 0x2c], 2 }
	__asm { mov eax, dword ptr [g_0131ddcc] }
	__asm { test al, 1 }
	__asm { jne L_00443ce6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ddcc], eax }
	__asm { mov byte ptr [esp + 0x2c], 3 }
	__asm { call fn_0042f6d0 }
	__asm { push 0xddc5e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esp + 0x2c], 2 }
	__asm { L_00443ce6: }
	__asm { mov ecx, 0x131ddd0 }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { call fn_00430520 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { je L_00443d0b }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { mov eax, dword ptr [eax + 0x68] }
	__asm { dec eax }
	__asm { push eax }
	__asm { call fn_00433500 }
	__asm { L_00443d0b: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12984[];
extern "C" char g_00e129cc[];
extern "C" char g_00e12abc[];
extern "C" char g_00e12ac0[];
extern "C" void fn_004446a0();
// FUNCTION: ROBLOXSTUDIO 0x00444370
extern "C" __declspec(naked) void asm_00444370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd74e18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { call dword ptr [g_00e129cc] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { test ebx, ebx }
	__asm { jle L_0044441a }
	__asm { mov ecx, edi }
	__asm { xor esi, esi }
	__asm { call fn_004446a0 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { test ebx, ebx }
	__asm { jle L_0044441a }
	__asm { L_004443b2: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12984] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { test ebx, ebx }
	__asm { je L_00444414 }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12ac0] }
	__asm { mov dl, byte ptr [ebp - 0xd] }
	__asm { cmp eax, 2 }
	__asm { sete cl }
	__asm { cmp dl, cl }
	__asm { jne L_00444414 }
	__asm { lea edi, [ebx + 0x2d] }
	__asm { mov dword ptr [ebp - 0x24], edi }
	__asm { mov bl, byte ptr [edi] }
	__asm { mov byte ptr [ebp - 0x20], bl }
	__asm { mov byte ptr [edi], 1 }
	__asm { xor eax, eax }
	__asm { test dl, dl }
	__asm { mov ecx, 2 }
	__asm { cmove eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12abc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov byte ptr [edi], bl }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { L_00444414: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebp - 0x1c] }
	__asm { jl L_004443b2 }
	__asm { L_0044441a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11070[];
extern "C" char g_00e11110[];
extern "C" char g_00e12ac4[];
extern "C" char g_012e16d4[];
extern "C" void fn_00402fd0();
extern "C" void fn_0042f4a0();
extern "C" void fn_0042fe10();
extern "C" void fn_004456e0();
extern "C" void fn_00847040();
extern "C" void fn_00848ef0();
// FUNCTION: ROBLOXSTUDIO 0x00445890
extern "C" __declspec(naked) void asm_00445890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74c61 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { je L_004459a5 }
	__asm { mov bl, byte ptr [esi + 0x2c] }
	__asm { lea edi, [esi + 0x2c] }
	__asm { mov dword ptr [esp + 0x18], edi }
	__asm { mov byte ptr [esp + 0x1c], bl }
	__asm { mov byte ptr [edi], 1 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { jne L_004459a3 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { lea ecx, [esp + 0x20] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esp + 0x48], 1 }
	__asm { call dword ptr [g_00e11070] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x44], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { add eax, 0x64 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { jb L_0044591f }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0044591f: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x38] }
	__asm { lea ecx, [esp + 0x2c] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_0044598f }
	__asm { push 1 }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { push ecx }
	__asm { call fn_0042f4a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call fn_0042fe10 }
	__asm { lea ecx, [esp + 0x20] }
	__asm { call fn_00847040 }
	__asm { mov byte ptr [esp + 0x44], 4 }
	__asm { mov edx, dword ptr [esi + 0x20] }
	__asm { test edx, edx }
	__asm { je L_00445964 }
	__asm { add edx, 0x1c }
	__asm { jmp L_00445966 }
	__asm { L_00445964: }
	__asm { xor edx, edx }
	__asm { L_00445966: }
	__asm { mov ecx, dword ptr [g_012e16d4] }
	__asm { lea edi, [esp + 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { push edx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_004456e0 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0x44], 3 }
	__asm { call fn_00848ef0 }
	__asm { lea edi, [esi + 0x2c] }
	__asm { L_0044598f: }
	__asm { cmp dword ptr [esp + 0x34], 0x10 }
	__asm { jb L_004459a3 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004459a3: }
	__asm { mov byte ptr [edi], bl }
	__asm { L_004459a5: }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ff8[];
extern "C" char g_00e11030[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12a60[];
extern "C" char g_00e12ac4[];
extern "C" void fn_00445b40();
// FUNCTION: ROBLOXSTUDIO 0x00445c20
extern "C" __declspec(naked) void asm_00445c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7557b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [edi + 0x2d], al }
	__asm { test al, al }
	__asm { je L_00445cd8 }
	__asm { push esi }
	__asm { call fn_00445b40 }
	__asm { mov byte ptr [ebp + 8], 0x20 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xa] }
	__asm { call dword ptr [g_00e11030] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { mov esi, eax }
	__asm { push 0x100a2e8 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp + 0xa] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10ff8] }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e12a60] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { pop esi }
	__asm { L_00445cd8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12a60[];
extern "C" char g_00e12ac4[];
extern "C" void fn_0042f4a0();
extern "C" void fn_00432f30();
// FUNCTION: ROBLOXSTUDIO 0x00445d30
extern "C" __declspec(naked) void asm_00445d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd74c32 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x30], 0 }
	__asm { jne L_00445dce }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00445dce }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_00445dbe }
	__asm { call fn_0042f4a0 }
	__asm { mov ecx, dword ptr [eax + 0x5c] }
	__asm { test ecx, ecx }
	__asm { je L_00445d89 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00432f30 }
	__asm { L_00445d89: }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [esi + 0x30], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e12a60] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { L_00445dbe: }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00445dce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1268c[];
extern "C" char g_00e12984[];
extern "C" char g_00e129cc[];
extern "C" void fn_004033d0();
extern "C" void fn_004456e0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
// FUNCTION: ROBLOXSTUDIO 0x004463c0
extern "C" __declspec(naked) void asm_004463c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd75698 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e129cc] }
	__asm { xor esi, esi }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov ebx, eax }
	__asm { call dword ptr [g_00e1268c] }
	__asm { L_00446400: }
	__asm { mov ecx, edi }
	__asm { cmp esi, ebx }
	__asm { jge L_0044642b }
	__asm { push esi }
	__asm { call dword ptr [g_00e12984] }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { je L_00446428 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00446421 }
	__asm { call fn_004456e0 }
	__asm { inc esi }
	__asm { jmp L_00446400 }
	__asm { L_00446421: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0x24] }
	__asm { L_00446428: }
	__asm { inc esi }
	__asm { jmp L_00446400 }
	__asm { L_0044642b: }
	__asm { push 1 }
	__asm { call dword ptr [g_00e1268c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push 1 }
	__asm { call dword ptr [g_00e1268c] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 0x100691c }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0x446433 }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e12984[];
extern "C" char g_00e129cc[];
extern "C" char g_00e12a7c[];
extern "C" char g_00e12a80[];
extern "C" void fn_004459c0();
extern "C" void fn_00445cf0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00446960
extern "C" __declspec(naked) void asm_00446960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74db4 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e129cc] }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { jle L_00446a1c }
	__asm { mov cl, byte ptr [edi + 0x28] }
	__asm { lea eax, [edi + 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0xd], cl }
	__asm { mov byte ptr [ebp - 0x18], cl }
	__asm { mov byte ptr [eax], 1 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { jle L_004469e0 }
	__asm { nop }
	__asm { L_004469b0: }
	__asm { push 0 }
	__asm { push 0x12c3934 }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12984] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004469db }
	__asm { mov ecx, eax }
	__asm { call fn_004459c0 }
	__asm { L_004469db: }
	__asm { inc esi }
	__asm { cmp esi, ebx }
	__asm { jl L_004469b0 }
	__asm { L_004469e0: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a7c] }
	__asm { push 0x34 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00446a07 }
	__asm { mov ecx, eax }
	__asm { call fn_00445cf0 }
	__asm { jmp L_00446a09 }
	__asm { L_00446a07: }
	__asm { xor eax, eax }
	__asm { L_00446a09: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12a80] }
	__asm { mov al, byte ptr [ebp - 0xd] }
	__asm { mov byte ptr [edi + 0x28], al }
	__asm { L_00446a1c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12a4c[];
extern "C" char g_00e12a50[];
extern "C" char g_00e12a54[];
extern "C" char g_00e12a74[];
extern "C" char g_00e12b50[];
extern "C" char g_00e12b54[];
extern "C" char g_00e12b58[];
extern "C" char g_00e12b68[];
extern "C" char g_00e12b6c[];
// FUNCTION: ROBLOXSTUDIO 0x00446dd0
extern "C" __declspec(naked) void asm_00446dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd76dc9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea ebx, [esi + 0x10] }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e12a4c] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00446e0c }
	__asm { push eax }
	__asm { call dword ptr [g_00e12a50] }
	__asm { jmp L_00446e13 }
	__asm { L_00446e0c: }
	__asm { push esi }
	__asm { call dword ptr [g_00e12a54] }
	__asm { L_00446e13: }
	__asm { cmp dword ptr [esi + 0x20], 1 }
	__asm { jne L_00446e8c }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a74] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12b68] }
	__asm { add eax, esi }
	__asm { cmp eax, 0x14 }
	__asm { jle L_00446e8c }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12b6c] }
	__asm { test eax, eax }
	__asm { jne L_00446e8c }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a4c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00446e8c }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12b54] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e12b50] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e12b58] }
	__asm { L_00446e8c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e125bc[];
extern "C" char g_00e125c0[];
extern "C" char g_00e129f0[];
extern "C" char g_00e129f4[];
extern "C" char g_00e12a00[];
extern "C" void fn_00446030();
// FUNCTION: ROBLOXSTUDIO 0x00447330
extern "C" __declspec(naked) void asm_00447330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd749a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { call dword ptr [g_00e125bc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [g_00e10504] }
	__asm { push 0x2c }
	__asm { mov dword ptr [edi], 0x10085ec }
	__asm { mov dword ptr [edi + 8], 0x10085d0 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00447399 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00446030 }
	__asm { jmp L_0044739b }
	__asm { L_00447399: }
	__asm { xor eax, eax }
	__asm { L_0044739b: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x10 }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { call esi }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_004473ce }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e129f0] }
	__asm { mov dword ptr [esi], 0x1004ac4 }
	__asm { mov dword ptr [esi + 8], 0x1004a84 }
	__asm { jmp L_004473d0 }
	__asm { L_004473ce: }
	__asm { xor esi, esi }
	__asm { L_004473d0: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e129f4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e125c0] }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { push dword ptr [edi + 0x14] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a00] }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0 }
	__asm { push 0x100a4f8 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x100a560 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f6c[];
extern "C" char g_00e110b4[];
extern "C" char g_00e110b8[];
extern "C" char g_00e12a20[];
extern "C" char g_00e12a40[];
extern "C" char g_00e12a7c[];
extern "C" char g_00e12a80[];
extern "C" char g_00e12bd0[];
extern "C" char g_00e12bd4[];
extern "C" void fn_004479c0();
extern "C" void fn_00447f00();
extern "C" void fn_00448010();
// FUNCTION: ROBLOXSTUDIO 0x00447870
extern "C" __declspec(naked) void asm_00447870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd75590 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e12a7c] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a40] }
	__asm { xor ecx, ecx }
	__asm { call fn_00447f00 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { sub esp, 0x44 }
	__asm { mov edi, esp }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_004478de }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebx + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_004478de: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00448010 }
	__asm { add esp, 0x44 }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10f6c] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12bd0] }
	__asm { test eax, eax }
	__asm { jle L_0044791d }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a40] }
	__asm { L_0044791d: }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a80] }
	__asm { mov ecx, esi }
	__asm { call fn_004479c0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12bd4] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a20] }
	__asm { mov ecx, dword ptr [g_00e110b4] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call dword ptr [g_00e110b8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { mov eax, 0x44795c }
	__asm { ret }
}

extern "C" char g_00e12c94[];
extern "C" char g_00e12c98[];
// FUNCTION: ROBLOXSTUDIO 0x00447b40
extern "C" __declspec(naked) void asm_00447b40()
{
	__asm { L_00447b40: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74c79 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e12c98] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { xor ebx, ebx }
	__asm { call dword ptr [g_00e12c94] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x34] }
	__asm { test eax, eax }
	__asm { jle L_00447bd9 }
	__asm { L_00447b83: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12c94] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 0 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call L_00447b40 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, edi }
	__asm { add esi, eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { inc ebx }
	__asm { call dword ptr [g_00e12c94] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x34] }
	__asm { cmp ebx, eax }
	__asm { jl L_00447b83 }
	__asm { L_00447bd9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10efc[];
extern "C" char g_00e12a4c[];
extern "C" char g_00e12a54[];
extern "C" char g_00e12c90[];
// FUNCTION: ROBLOXSTUDIO 0x00447bf0
extern "C" __declspec(naked) void asm_00447bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a4c] }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00447c6c }
	__asm { mov ecx, ebx }
	__asm { xor edx, edx }
	__asm { nop }
	__asm { L_00447c20: }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { lea edx, [edx + 1] }
	__asm { test ecx, ecx }
	__asm { jne L_00447c20 }
	__asm { lea eax, [edx - 1] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e12c90] }
	__asm { imul eax, dword ptr [ebp - 4] }
	__asm { cmp esi, eax }
	__asm { jle L_00447c6b }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12c90] }
	__asm { imul eax, dword ptr [ebp - 4] }
	__asm { add eax, 0x14 }
	__asm { cmp esi, eax }
	__asm { jge L_00447c6b }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { push 0x12c }
	__asm { mov dword ptr [edi + 0x18], ebx }
	__asm { call dword ptr [g_00e10efc] }
	__asm { L_00447c6b: }
	__asm { pop esi }
	__asm { L_00447c6c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a54] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1297c[];
extern "C" char g_00e12a4c[];
extern "C" char g_00e12c6c[];
extern "C" char g_00e12c70[];
extern "C" char g_00e12c74[];
extern "C" char g_00e12c90[];
// FUNCTION: ROBLOXSTUDIO 0x00447e60
extern "C" __declspec(naked) void asm_00447e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { lea eax, [ebp - 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e12c74] }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1297c] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a4c] }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00447ef5 }
	__asm { cmp dword ptr [edi + 0x18], ebx }
	__asm { je L_00447ef5 }
	__asm { mov ecx, ebx }
	__asm { xor edx, edx }
	__asm { L_00447ea0: }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { lea edx, [edx + 1] }
	__asm { test ecx, ecx }
	__asm { jne L_00447ea0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { lea eax, [edx - 1] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e12c90] }
	__asm { imul eax, dword ptr [ebp - 4] }
	__asm { cmp esi, eax }
	__asm { jle L_00447eee }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12c90] }
	__asm { imul eax, dword ptr [ebp - 4] }
	__asm { add eax, 0x14 }
	__asm { cmp esi, eax }
	__asm { jge L_00447eee }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12c70] }
	__asm { test al, al }
	__asm { jne L_00447eee }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12c6c] }
	__asm { L_00447eee: }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { L_00447ef5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e125b4[];
extern "C" char g_00e125ec[];
extern "C" char g_00e125f0[];
extern "C" char g_00e12988[];
extern "C" char g_00e12c68[];
extern "C" void fn_00478ce0();
// FUNCTION: ROBLOXSTUDIO 0x00447f00
extern "C" __declspec(naked) void asm_00447f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd74b47 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x20 }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00447f4d }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12c68] }
	__asm { mov dword ptr [esi], 0x10083e0 }
	__asm { jmp L_00447f4f }
	__asm { L_00447f4d: }
	__asm { xor esi, esi }
	__asm { L_00447f4f: }
	__asm { push 0x100a854 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 1 }
	__asm { push ecx }
	__asm { push 6 }
	__asm { lea edx, [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00478ce0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e125ec] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e12988] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e125b4] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e125f0] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00449af0
extern "C" __declspec(naked) void asm_00449af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00449b3b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00449b3b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00449b82 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007fd4 }
	__asm { mov dword ptr [esi + 8], 0x1007fcc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1008094 }
	__asm { mov dword ptr [esi + 8], 0x100808c }
	__asm { jmp L_00449b84 }
	__asm { L_00449b82: }
	__asm { xor esi, esi }
	__asm { L_00449b84: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00449ba1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00449ba1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b8f0();
// FUNCTION: ROBLOXSTUDIO 0x00449bc0
extern "C" __declspec(naked) void asm_00449bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00449c0b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00449c0b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00449c52 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0x1007f1c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007fbc }
	__asm { mov dword ptr [esi + 8], 0x1007fb4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x100807c }
	__asm { mov dword ptr [esi + 8], 0x1008074 }
	__asm { jmp L_00449c54 }
	__asm { L_00449c52: }
	__asm { xor esi, esi }
	__asm { L_00449c54: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b8f0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00449c71 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00449c71: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044bab0();
// FUNCTION: ROBLOXSTUDIO 0x00449c90
extern "C" __declspec(naked) void asm_00449c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00449cdb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00449cdb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00449d22 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0x1007f14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007fa4 }
	__asm { mov dword ptr [esi + 8], 0x1007f9c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1008064 }
	__asm { mov dword ptr [esi + 8], 0x100805c }
	__asm { jmp L_00449d24 }
	__asm { L_00449d22: }
	__asm { xor esi, esi }
	__asm { L_00449d24: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044bab0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00449d41 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00449d41: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044bc70();
// FUNCTION: ROBLOXSTUDIO 0x00449d60
extern "C" __declspec(naked) void asm_00449d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00449dab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00449dab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00449df2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0x1007f0c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007f8c }
	__asm { mov dword ptr [esi + 8], 0x1007f84 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x100804c }
	__asm { mov dword ptr [esi + 8], 0x1008044 }
	__asm { jmp L_00449df4 }
	__asm { L_00449df2: }
	__asm { xor esi, esi }
	__asm { L_00449df4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044bc70 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00449e11 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00449e11: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044be30();
// FUNCTION: ROBLOXSTUDIO 0x00449e30
extern "C" __declspec(naked) void asm_00449e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00449e7b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00449e7b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00449ec2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0x1007f04 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007f74 }
	__asm { mov dword ptr [esi + 8], 0x1007f6c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1008034 }
	__asm { mov dword ptr [esi + 8], 0x100802c }
	__asm { jmp L_00449ec4 }
	__asm { L_00449ec2: }
	__asm { xor esi, esi }
	__asm { L_00449ec4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044be30 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00449ee1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00449ee1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044c000();
// FUNCTION: ROBLOXSTUDIO 0x00449f00
extern "C" __declspec(naked) void asm_00449f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00449f4b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00449f4b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00449f92 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0x1007efc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007f5c }
	__asm { mov dword ptr [esi + 8], 0x1007f54 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x100801c }
	__asm { mov dword ptr [esi + 8], 0x1008014 }
	__asm { jmp L_00449f94 }
	__asm { L_00449f92: }
	__asm { xor esi, esi }
	__asm { L_00449f94: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044c000 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00449fb1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00449fb1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x0044a440
extern "C" __declspec(naked) void asm_0044a440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0044a48b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0044a48b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0044a4d2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007f44 }
	__asm { mov dword ptr [esi + 8], 0x1007f3c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1008004 }
	__asm { mov dword ptr [esi + 8], 0x1007ffc }
	__asm { jmp L_0044a4d4 }
	__asm { L_0044a4d2: }
	__asm { xor esi, esi }
	__asm { L_0044a4d4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0044a4f1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0044a4f1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x0044a560
extern "C" __declspec(naked) void asm_0044a560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0044a5ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0044a5ab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0044a5f2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1007f2c }
	__asm { mov dword ptr [esi + 8], 0x1007f24 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1007fec }
	__asm { mov dword ptr [esi + 8], 0x1007fe4 }
	__asm { jmp L_0044a5f4 }
	__asm { L_0044a5f2: }
	__asm { xor esi, esi }
	__asm { L_0044a5f4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0044a611 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0044a611: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0044d240();
extern "C" void fn_007d2b80();
// FUNCTION: ROBLOXSTUDIO 0x0044a7a0
extern "C" __declspec(naked) void asm_0044a7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c37d8 }
	__asm { je L_0044a850 }
	__asm { push eax }
	__asm { mov ecx, 0x12c37d8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0044a850 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044a801 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0044a801: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2b80 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0044a83d }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0044a83d: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044a850: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0044d240 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0044d2d0();
extern "C" void fn_007d2b90();
// FUNCTION: ROBLOXSTUDIO 0x0044a8a0
extern "C" __declspec(naked) void asm_0044a8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c37b8 }
	__asm { je L_0044a946 }
	__asm { push eax }
	__asm { mov ecx, 0x12c37b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0044a946 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044a8fd }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0044a8fd: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2b90 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [esi], eax }
	__asm { test ecx, ecx }
	__asm { je L_0044a933 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0044a933: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044a946: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0044d2d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0044d360();
extern "C" void fn_007d2bb0();
// FUNCTION: ROBLOXSTUDIO 0x0044a990
extern "C" __declspec(naked) void asm_0044a990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c3798 }
	__asm { je L_0044aa42 }
	__asm { push eax }
	__asm { mov ecx, 0x12c3798 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0044aa42 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044a9f1 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0044a9f1: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2bb0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ax, word ptr [eax + 4] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov word ptr [esi + 4], ax }
	__asm { test ecx, ecx }
	__asm { je L_0044aa2f }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0044aa2f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044aa42: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0044d360 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov cx, word ptr [eax + 4] }
	__asm { mov word ptr [edx + 4], cx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0044d480();
extern "C" void fn_007d2b40();
// FUNCTION: ROBLOXSTUDIO 0x0044ac20
extern "C" __declspec(naked) void asm_0044ac20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c375c }
	__asm { je L_0044acd6 }
	__asm { push eax }
	__asm { mov ecx, 0x12c375c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0044acd6 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044ac81 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0044ac81: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2b40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_0044acc3 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0044acc3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044acd6: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0044d480 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0044d510();
extern "C" void fn_007d2b20();
// FUNCTION: ROBLOXSTUDIO 0x0044ad50
extern "C" __declspec(naked) void asm_0044ad50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd742b1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c3884 }
	__asm { je L_0044ae31 }
	__asm { push eax }
	__asm { mov ecx, 0x12c3884 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0044ae31 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044adbc }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0044adbc: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_007d2b20 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { mov dword ptr [esi], 0xe461dc }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test ecx, ecx }
	__asm { je L_0044ae6c }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044ae31: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0044d510 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { mov dword ptr [esi], 0xe461dc }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov ecx, dword ptr [edx + 0x18] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { L_0044ae6c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0044d5a0();
extern "C" void fn_007d2b70();
// FUNCTION: ROBLOXSTUDIO 0x0044aea0
extern "C" __declspec(naked) void asm_0044aea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c3744 }
	__asm { je L_0044af50 }
	__asm { push eax }
	__asm { mov ecx, 0x12c3744 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0044af50 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044af01 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0044af01: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2b70 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test ecx, ecx }
	__asm { je L_0044af3d }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0044af3d: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044af50: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0044d5a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0044d630();
extern "C" void fn_007d2b60();
// FUNCTION: ROBLOXSTUDIO 0x0044afa0
extern "C" __declspec(naked) void asm_0044afa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c372c }
	__asm { je L_0044b05c }
	__asm { push eax }
	__asm { mov ecx, 0x12c372c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0044b05c }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044b001 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0044b001: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2b60 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { test ecx, ecx }
	__asm { je L_0044b049 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0044b049: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044b05c: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0044d630 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_0044db70();
extern "C" void fn_007d1d20();
// FUNCTION: ROBLOXSTUDIO 0x0044dc00
extern "C" __declspec(naked) void asm_0044dc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd74251 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_0044dcd2 }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0044dcd2 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044dc6c }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0044dc6c: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_007d1d20 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test ecx, ecx }
	__asm { je L_0044dcfe }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044dcd2: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0044db70 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { L_0044dcfe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0044dd60();
extern "C" void fn_007d2990();
// FUNCTION: ROBLOXSTUDIO 0x0044ddf0
extern "C" __declspec(naked) void asm_0044ddf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c38a0 }
	__asm { je L_0044de96 }
	__asm { push eax }
	__asm { mov ecx, 0x12c38a0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0044de96 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044de4d }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0044de4d: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2990 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [esi], eax }
	__asm { test ecx, ecx }
	__asm { je L_0044de83 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0044de83: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044de96: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0044dd60 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0044dee0();
extern "C" void fn_006d19a0();
extern "C" void fn_007d2b00();
// FUNCTION: ROBLOXSTUDIO 0x0044dfa0
extern "C" __declspec(naked) void asm_0044dfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c38c0 }
	__asm { je L_0044e068 }
	__asm { push eax }
	__asm { mov ecx, 0x12c38c0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0044e068 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044e006 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0044e006: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2b00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { test ecx, ecx }
	__asm { je L_0044e093 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044e068: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0044dee0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], ecx }
	__asm { L_0044e093: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0044e0d0();
extern "C" void fn_007d2ba0();
// FUNCTION: ROBLOXSTUDIO 0x0044e160
extern "C" __declspec(naked) void asm_0044e160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd79538 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12c38e4 }
	__asm { je L_0044e216 }
	__asm { push eax }
	__asm { mov ecx, 0x12c38e4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0044e216 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0044e1c1 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0044e1c1: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d2ba0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_0044e203 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0044e203: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044e216: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_0044e0d0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b23c[];
extern "C" char g_0131b240[];
extern "C" void fn_006b9740();
extern "C" void fn_007cb490();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0044e3b0
extern "C" __declspec(naked) void asm_0044e3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74efe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b23c] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x20] }
	__asm { test al, 1 }
	__asm { jne L_0044e40a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b23c], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], 0x10082cc }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b240], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_0044e40f }
	__asm { L_0044e40a: }
	__asm { mov eax, dword ptr [g_0131b240] }
	__asm { L_0044e40f: }
	__asm { cmp dword ptr [edi + 0xc], eax }
	__asm { sete bl }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0044e478 }
	__asm { push 0 }
	__asm { push 0x12c3900 }
	__asm { push 0x12bc38c }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { movzx ecx, bl }
	__asm { neg eax }
	__asm { cmp ecx, eax }
	__asm { je L_0044e478 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0044e463 }
	__asm { push 0x1a6 }
	__asm { push 0xf14248 }
	__asm { push 0x10082d8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044e478 }
	__asm { L_0044e463: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1008330 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044e478: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10ebc[];
extern "C" char g_00e10ec4[];
extern "C" char g_00e10ef4[];
extern "C" char g_00e10fd4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110e4[];
extern "C" char g_00e11110[];
extern "C" char g_00e12298[];
extern "C" char g_00e1229c[];
extern "C" char g_00e12a08[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00403410();
extern "C" void fn_0044f7a0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0044efa0
extern "C" __declspec(naked) void asm_0044efa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7577f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x20], esi }
	__asm { mov dword ptr [esi], 0x100b17c }
	__asm { mov dword ptr [esi + 8], 0x100b160 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0044f01b }
	__asm { call dword ptr [g_00e1229c] }
	__asm { test eax, eax }
	__asm { je L_0044f01b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0044f006 }
	__asm { push 0x41 }
	__asm { push 0x100ad40 }
	__asm { push 0x100b080 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044f01b }
	__asm { L_0044f006: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x100b090 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044f01b: }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { push 0xa }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10ef4] }
	__asm { push eax }
	__asm { mov edx, 0x100ad2c }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0044f7a0 }
	__asm { push 0x100af98 }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00403410 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12298] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call dword ptr [g_00e10ebc] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call dword ptr [g_00e10fd4] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e12a08] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12284[];
extern "C" char g_00e12288[];
extern "C" char g_00e12c74[];
// FUNCTION: ROBLOXSTUDIO 0x0044f100
extern "C" __declspec(naked) void asm_0044f100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp byte ptr [ebx + 0x29], 0 }
	__asm { push edi }
	__asm { je L_0044f167 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12c74] }
	__asm { add esp, 4 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12288] }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { sub eax, dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { inc eax }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edx, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov esi, eax }
	__asm { push 0x1a }
	__asm { mov ecx, edi }
	__asm { sar esi, 1 }
	__asm { call dword ptr [edx + 0x6c] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { cdq }
	__asm { sub ecx, esi }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { sar eax, 1 }
	__asm { sub ecx, eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12284] }
	__asm { L_0044f167: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10eb4[];
extern "C" char g_00e1227c[];
extern "C" char g_00e12280[];
extern "C" char g_00e12394[];
extern "C" char g_00e123f0[];
extern "C" char g_00e12c74[];
extern "C" void fn_004504f0();
extern "C" void fn_004a4c30();
// FUNCTION: ROBLOXSTUDIO 0x0044f320
extern "C" __declspec(naked) void asm_0044f320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e123f0] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12280] }
	__asm { test al, al }
	__asm { je L_0044f3dd }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { jne L_0044f38a }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov byte ptr [esi + 0x28], 1 }
	__asm { call dword ptr [g_00e12c74] }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { add edx, dword ptr [edi + 0x14] }
	__asm { sub ecx, dword ptr [edi + 0x10] }
	__asm { sub edx, dword ptr [edi + 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x30], ecx }
	__asm { push 1 }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { call dword ptr [g_00e12394] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044f38a: }
	__asm { mov edi, dword ptr [g_00e12c74] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { call edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { sub ecx, dword ptr [esi + 0x30] }
	__asm { sub eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [esp + 0x10], ecx }
	__asm { add esp, 4 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { call dword ptr [g_00e10eb4] }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e1227c] }
	__asm { cmp esi, eax }
	__asm { jle L_0044f3dd }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { call fn_004a4c30 }
	__asm { mov ecx, dword ptr [eax + 0x24] }
	__asm { push esi }
	__asm { call fn_004504f0 }
	__asm { L_0044f3dd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1229c[];
extern "C" char g_00e12ba0[];
extern "C" char g_00e12c74[];
extern "C" void fn_0044f470();
extern "C" void fn_004a4c30();
extern "C" void fn_004a5d70();
// FUNCTION: ROBLOXSTUDIO 0x0044f5e0
extern "C" __declspec(naked) void asm_0044f5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e12ba0] }
	__asm { mov bl, al }
	__asm { movzx eax, word ptr [edi + 8] }
	__asm { mov ecx, 0xaf }
	__asm { cmp ax, cx }
	__asm { je L_0044f671 }
	__asm { cmp eax, 3 }
	__asm { je L_0044f671 }
	__asm { mov ecx, 0xae }
	__asm { cmp ax, cx }
	__asm { je L_0044f647 }
	__asm { cmp eax, 2 }
	__asm { je L_0044f647 }
	__asm { cmp eax, 0x18 }
	__asm { jne L_0044f63c }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1229c] }
	__asm { test eax, eax }
	__asm { je L_0044f63c }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_004a4c30 }
	__asm { mov ecx, eax }
	__asm { call fn_004a5d70 }
	__asm { L_0044f63c: }
	__asm { mov al, bl }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044f647: }
	__asm { cmp dword ptr [edi + 0x20], 1 }
	__asm { jne L_0044f63c }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12c74] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { add esp, 4 }
	__asm { mov al, bl }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0044f671: }
	__asm { cmp dword ptr [edi + 0x20], 1 }
	__asm { jne L_0044f63c }
	__asm { mov ecx, esi }
	__asm { call fn_0044f470 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12c8c[];
extern "C" char g_0131eb88[];
extern "C" void fn_00450980();
extern "C" void fn_004a4c90();
extern "C" void fn_004a5d70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00450120
extern "C" __declspec(naked) void asm_00450120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd757ec }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp esi, -1 }
	__asm { jne L_0045017b }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_00450177 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { L_00450177: }
	__asm { push 0 }
	__asm { jmp L_004501c7 }
	__asm { L_0045017b: }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { test al, al }
	__asm { jne L_004501d1 }
	__asm { push esi }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00450980 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_004501c6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [esp + 0x14], 1 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0xffffffff }
	__asm { L_004501c6: }
	__asm { push esi }
	__asm { L_004501c7: }
	__asm { mov ecx, 0x131eb8c }
	__asm { call fn_004a5d70 }
	__asm { L_004501d1: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11094[];
extern "C" char g_00e12210[];
extern "C" char g_00e12264[];
extern "C" void fn_004503b0();
extern "C" void fn_00450400();
// FUNCTION: ROBLOXSTUDIO 0x00450300
extern "C" __declspec(naked) void asm_00450300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { cmp ebx, ecx }
	__asm { jne L_0045033d }
	__asm { cmp word ptr [esi + 8], 0xe }
	__asm { jne L_0045033d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { push ebx }
	__asm { call eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push ecx }
	__asm { lea ecx, [edi + 0x20] }
	__asm { mov bl, al }
	__asm { call dword ptr [g_00e12210] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0045033d: }
	__asm { call dword ptr [g_00e12264] }
	__asm { push esi }
	__asm { push ebx }
	__asm { cmp ebx, eax }
	__asm { jne L_0045039b }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { call eax }
	__asm { mov bl, al }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { sub eax, 2 }
	__asm { je L_0045038a }
	__asm { dec eax }
	__asm { je L_00450377 }
	__asm { sub eax, 2 }
	__asm { jne L_00450392 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00450400 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00450377: }
	__asm { cmp dword ptr [esi + 0x20], 1 }
	__asm { mov al, bl }
	__asm { jne L_004503a3 }
	__asm { mov byte ptr [edi + 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0045038a: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004503b0 }
	__asm { L_00450392: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0045039b: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11094] }
	__asm { L_004503a3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10eb4[];
extern "C" char g_00e1227c[];
extern "C" char g_0131eb88[];
extern "C" char g_0131ebb0[];
extern "C" char g_0131ebb4[];
extern "C" void fn_0044e5f0();
extern "C" void fn_0044e920();
extern "C" void fn_0044e9e0();
extern "C" void fn_0044ff90();
extern "C" void fn_00450980();
extern "C" void fn_004a4c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00450400
extern "C" __declspec(naked) void asm_00450400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub edx, dword ptr [edi + 0x14] }
	__asm { sub eax, dword ptr [edi + 0x10] }
	__asm { cmp byte ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov dword ptr [esp + 0xc], edx }
	__asm { je L_004504d4 }
	__asm { lea ecx, [esp + 8] }
	__asm { call dword ptr [g_00e10eb4] }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e1227c] }
	__asm { add eax, 0x20 }
	__asm { cmp esi, eax }
	__asm { jle L_004504d4 }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00450980 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_0045049c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { L_0045049c: }
	__asm { mov ecx, dword ptr [g_0131ebb0] }
	__asm { push esi }
	__asm { call fn_0044ff90 }
	__asm { test al, al }
	__asm { je L_004504d0 }
	__asm { mov ecx, dword ptr [g_0131ebb4] }
	__asm { push esi }
	__asm { call fn_0044e5f0 }
	__asm { mov ecx, dword ptr [g_0131ebb4] }
	__asm { push esi }
	__asm { call fn_0044e9e0 }
	__asm { mov ecx, dword ptr [g_0131ebb4] }
	__asm { push esi }
	__asm { call fn_0044e920 }
	__asm { L_004504d0: }
	__asm { mov byte ptr [edi + 0x18], 0 }
	__asm { L_004504d4: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12214[];
extern "C" char g_00e12220[];
extern "C" char g_00e12c8c[];
extern "C" char g_0131eb88[];
extern "C" char g_0131ebb0[];
extern "C" char g_0131ebb4[];
extern "C" void fn_0044e770();
extern "C" void fn_0044fd00();
extern "C" void fn_00450720();
extern "C" void fn_004a4c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00450650
extern "C" __declspec(naked) void asm_00450650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { test al, al }
	__asm { je L_00450699 }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12214] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12220] }
	__asm { L_00450699: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { call fn_00450720 }
	__asm { test al, al }
	__asm { je L_0045070b }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_004506d8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_004506d8: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_0131ebb4] }
	__asm { push esi }
	__asm { call fn_0044e770 }
	__asm { test al, al }
	__asm { je L_004506f7 }
	__asm { mov ecx, dword ptr [g_0131ebb0] }
	__asm { push esi }
	__asm { call fn_0044fd00 }
	__asm { L_004506f7: }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0045070b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10eb0[];
extern "C" char g_00e10ef8[];
extern "C" char g_00e121f4[];
extern "C" char g_00e121f8[];
extern "C" char g_00e121fc[];
extern "C" char g_00e12208[];
extern "C" char g_00e12274[];
extern "C" char g_00e1297c[];
extern "C" void fn_00450cf0();
// FUNCTION: ROBLOXSTUDIO 0x00450720
extern "C" __declspec(naked) void asm_00450720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { call dword ptr [g_00e1297c] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e121fc] }
	__asm { test eax, eax }
	__asm { je L_004507eb }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { cmp eax, ecx }
	__asm { je L_00450765 }
	__asm { push eax }
	__asm { call dword ptr [g_00e12274] }
	__asm { test al, al }
	__asm { je L_004507eb }
	__asm { L_00450765: }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12208] }
	__asm { mov edx, eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00450cf0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call dword ptr [g_00e121f4] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e121f8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call dword ptr [g_00e10eb0] }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov ecx, 0xf196a4 }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { push 0 }
	__asm { mov edx, dword ptr [eax + 0x1c] }
	__asm { sub edx, dword ptr [eax + 0x14] }
	__asm { push dword ptr [ebp + 8] }
	__asm { inc edx }
	__asm { lea eax, [ebp - 8] }
	__asm { cmp edx, 0x100 }
	__asm { cmovle ecx, eax }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { dec eax }
	__asm { add eax, ecx }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { call dword ptr [g_00e10ef8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004507eb: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ea8[];
extern "C" void fn_00450b70();
// FUNCTION: ROBLOXSTUDIO 0x004509e0
extern "C" __declspec(naked) void asm_004509e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { jne L_00450a13 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { lea eax, [edx + 1] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jg L_00450a13 }
	__asm { lea ecx, [ecx + edx*4] }
	__asm { add ecx, 0x10 }
	__asm { je L_00450a4e }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { inc dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00450a13: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov esi, dword ptr [esi] }
	__asm { push 4 }
	__asm { inc eax }
	__asm { push eax }
	__asm { push 0x14 }
	__asm { call dword ptr [g_00e10ea8] }
	__asm { add esp, 0x10 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_00450b70 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, 4 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { test eax, eax }
	__asm { je L_00450a4d }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00450a4d: }
	__asm { pop esi }
	__asm { L_00450a4e: }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { inc dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11008[];
extern "C" void fn_00450ae0();
extern "C" void fn_00450b70();
// FUNCTION: ROBLOXSTUDIO 0x00450a60
extern "C" __declspec(naked) void asm_00450a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { js L_00450a76 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp edi, dword ptr [eax + 8] }
	__asm { jl L_00450a93 }
	__asm { L_00450a76: }
	__asm { push 0x161 }
	__asm { push 0x100b998 }
	__asm { push 0x1002fbc }
	__asm { push 0x100b95c }
	__asm { call dword ptr [g_00e11008] }
	__asm { add esp, 0x10 }
	__asm { L_00450a93: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_00450aa9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_00450b70 }
	__asm { L_00450aa9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { lea ebx, [eax + 0x10] }
	__asm { je L_00450ac2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_00450b70 }
	__asm { L_00450ac2: }
	__asm { lea eax, [edi + 1] }
	__asm { mov ecx, esi }
	__asm { lea eax, [ebx + eax*4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea eax, [eax + edi*4] }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call fn_00450ae0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1018c[];
extern "C" char g_00e10194[];
extern "C" char g_00e101ec[];
extern "C" char g_00e101f8[];
extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10204[];
// FUNCTION: ROBLOXSTUDIO 0x00451130
extern "C" __declspec(naked) void asm_00451130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x8034 }
	__asm { push 8 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { push 0 }
	__asm { push 0x42000000 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 7 }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov edi, eax }
	__asm { call dword ptr [g_00e10204] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { cmp eax, -1 }
	__asm { je L_004511c1 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e1018c] }
	__asm { push 0x450f70 }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { movzx eax, byte ptr [ebp + 8] }
	__asm { push 0x49 }
	__asm { push eax }
	__asm { push 0x8000 }
	__asm { lea eax, [edi + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edi + 0x801c], 0x49 }
	__asm { call dword ptr [g_00e101ec] }
	__asm { test eax, eax }
	__asm { je L_004511b1 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004511b1: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov esi, dword ptr [g_00e10194] }
	__asm { call esi }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call esi }
	__asm { L_004511c1: }
	__asm { push edi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e101f8] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00408cf0();
extern "C" void fn_00409690();
extern "C" void fn_004510b0();
// FUNCTION: ROBLOXSTUDIO 0x00451210
extern "C" __declspec(naked) void asm_00451210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea ecx, [eax + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov dword ptr [eax], 0x100bc30 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp esi, edi }
	__asm { je L_00451281 }
	__asm { L_00451232: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call fn_004510b0 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_0045127a }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0045125f }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0045127a }
	__asm { L_00451253: }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00451253 }
	__asm { jmp L_0045127a }
	__asm { L_0045125f: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00451278 }
	__asm { L_00451268: }
	__asm { cmp esi, dword ptr [eax + 8] }
	__asm { jne L_00451278 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00451268 }
	__asm { L_00451278: }
	__asm { mov esi, eax }
	__asm { L_0045127a: }
	__asm { cmp esi, edi }
	__asm { jne L_00451232 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { L_00451281: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov esi, edi }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { jne L_004512af }
	__asm { L_00451294: }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00409690 }
	__asm { mov esi, dword ptr [esi] }
	__asm { push edi }
	__asm { call ebx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov edi, esi }
	__asm { je L_00451294 }
	__asm { L_004512af: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00408cf0 }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { push dword ptr [esi + 4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0x100bc4c }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040d250();
extern "C" void fn_0040dd60();
extern "C" void fn_00450e70();
extern "C" void fn_00451130();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004512f0
extern "C" __declspec(naked) void asm_004512f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { inc dword ptr [edi + 0xc] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { jb L_00451315 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_00451317 }
	__asm { L_00451315: }
	__asm { mov ecx, esi }
	__asm { L_00451317: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00451130 }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { test ebx, ebx }
	__asm { je L_004513a7 }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [ebx + 0x8030], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 0x8028], eax }
	__asm { mov dword ptr [ebx + 0x8024], edi }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx + 0x802c], ecx }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00451360 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov edi, edi }
	__asm { L_00451360: }
	__asm { mov al, byte ptr [esi] }
	__asm { mov byte ptr [ecx], al }
	__asm { lea esi, [esi + 1] }
	__asm { lea ecx, [ecx + 1] }
	__asm { test al, al }
	__asm { jne L_00451360 }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [esp + 0x1c], ebx }
	__asm { call fn_0040d250 }
	__asm { push eax }
	__asm { lea edx, [eax + 0x10] }
	__asm { push edx }
	__asm { push ecx }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0040dd60 }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004513a7: }
	__asm { push esi }
	__asm { lea ecx, [esp + 0x18] }
	__asm { call fn_00450e70 }
	__asm { push 0x1179ec0 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004037f0();
extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
// FUNCTION: ROBLOXSTUDIO 0x00451670
extern "C" __declspec(naked) void asm_00451670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd75949 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { jne L_004516c0 }
	__asm { xor ecx, ecx }
	__asm { jmp L_004516ce }
	__asm { L_004516c0: }
	__asm { mov ecx, edi }
	__asm { lea edx, [ecx + 1] }
	__asm { L_004516c5: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_004516c5 }
	__asm { sub ecx, edx }
	__asm { L_004516ce: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov ebx, dword ptr [esi + 0x10] }
	__asm { add eax, ecx }
	__asm { cmp ebx, eax }
	__asm { ja L_00451704 }
	__asm { cmp dword ptr [esi + 0x14], eax }
	__asm { je L_00451704 }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004037f0 }
	__asm { test al, al }
	__asm { je L_00451704 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { jb L_004516fe }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00451700 }
	__asm { L_004516fe: }
	__asm { mov eax, esi }
	__asm { L_00451700: }
	__asm { mov byte ptr [eax + ebx], 0 }
	__asm { L_00451704: }
	__asm { cmp byte ptr [edi], 0 }
	__asm { pop ebx }
	__asm { jne L_0045170e }
	__asm { xor ecx, ecx }
	__asm { jmp L_0045171c }
	__asm { L_0045170e: }
	__asm { mov ecx, edi }
	__asm { lea edx, [ecx + 1] }
	__asm { L_00451713: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00451713 }
	__asm { sub ecx, edx }
	__asm { L_0045171c: }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0040f730 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { call fn_0040f890 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" char g_00e121a0[];
extern "C" char g_00e121a4[];
extern "C" char g_00e12678[];
extern "C" char g_00e12690[];
extern "C" char g_00e12794[];
// FUNCTION: ROBLOXSTUDIO 0x00451830
extern "C" __declspec(naked) void asm_00451830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd95e49 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e12794] }
	__asm { push 7 }
	__asm { mov esi, ecx }
	__asm { call edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e121a4] }
	__asm { test al, al }
	__asm { je L_004518ca }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { push ebx }
	__asm { push 7 }
	__asm { call edi }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov edi, dword ptr [g_00e12690] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { setg bl }
	__asm { call dword ptr [g_00e11110] }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_004518ca }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { push dword ptr [eax + 8] }
	__asm { call dword ptr [g_00e121a0] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { call dword ptr [g_00e12678] }
	__asm { L_004518ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11110[];
extern "C" char g_00e12690[];
extern "C" char g_00e128c4[];
extern "C" char g_00e129e0[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00451980
extern "C" __declspec(naked) void asm_00451980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8acbc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12690] }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { setg byte ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov esi, dword ptr [g_00e129e0] }
	__asm { push ebx }
	__asm { call esi }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { push ebx }
	__asm { call esi }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00451a06 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00451a06: }
	__asm { mov ecx, dword ptr [g_01320184] }
	__asm { mov esi, dword ptr [g_00e128c4] }
	__asm { mov ecx, dword ptr [ecx + 0x144] }
	__asm { push ebx }
	__asm { call esi }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00451a4c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00451a4c: }
	__asm { mov ecx, dword ptr [g_01320184] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [ecx + 0x1b0] }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e78[];
extern "C" char g_00e10f20[];
extern "C" void fn_00451a70();
// FUNCTION: ROBLOXSTUDIO 0x00451ba0
extern "C" __declspec(naked) void asm_00451ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd75a29 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10e78] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00451a70 }
	__asm { test al, al }
	__asm { je L_00451c0e }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { je L_00451c0e }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov bl, al }
	__asm { jmp L_00451c10 }
	__asm { L_00451c0e: }
	__asm { xor bl, bl }
	__asm { L_00451c10: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10f20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e12194[];
extern "C" char g_00e12198[];
extern "C" char g_00e1259c[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00451c40
extern "C" __declspec(naked) void asm_00451c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd8acbc }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00451c8e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00451c8e: }
	__asm { mov eax, dword ptr [g_01320184] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [eax + 0x1b0] }
	__asm { push 0x18 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12198] }
	__asm { test al, al }
	__asm { je L_00451cca }
	__asm { L_00451caa: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e12194] }
	__asm { or word ptr [esi + 0xa], 4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00451cca: }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_00451cfb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00451cfb: }
	__asm { mov eax, dword ptr [g_01320184] }
	__asm { push 0x17 }
	__asm { mov ebx, dword ptr [eax + 0x144] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12198] }
	__asm { test al, al }
	__asm { jne L_00451caa }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1259c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11110[];
extern "C" char g_00e12174[];
extern "C" char g_00e125b0[];
extern "C" char g_00e12690[];
extern "C" char g_00e12a28[];
extern "C" void fn_004555b0();
extern "C" void fn_00455f00();
// FUNCTION: ROBLOXSTUDIO 0x00452600
extern "C" __declspec(naked) void asm_00452600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd95e49 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12690] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { mov ebx, dword ptr [g_00e125b0] }
	__asm { mov esi, 1 }
	__asm { call ebx }
	__asm { mov ecx, 3 }
	__asm { test al, al }
	__asm { cmovne esi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_0045265d }
	__asm { or esi, 4 }
	__asm { L_0045265d: }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_00452669 }
	__asm { or esi, 8 }
	__asm { L_00452669: }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { push esi }
	__asm { call dword ptr [g_00e12174] }
	__asm { test eax, eax }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_004555b0 }
	__asm { mov ecx, eax }
	__asm { call fn_00455f00 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e12a28] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11098[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110ac[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12380[];
extern "C" void fn_004555b0();
// FUNCTION: ROBLOXSTUDIO 0x00452730
extern "C" __declspec(naked) void asm_00452730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd76172 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_004527c8 }
	__asm { push 0x100bf50 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [edi + 0x40] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12380] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0x100bf58 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x100bfa8 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x40] }
	__asm { call dword ptr [g_00e11098] }
	__asm { add esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x100bff8 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { call fn_004555b0 }
	__asm { push eax }
	__asm { push 0x100c058 }
	__asm { jmp L_0045283b }
	__asm { L_004527c8: }
	__asm { push 0x100bcb0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [edi + 0x40] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12380] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov esi, dword ptr [g_00e110a8] }
	__asm { push 0x100c0a8 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { call fn_004555b0 }
	__asm { push eax }
	__asm { push 0x100c108 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x40] }
	__asm { call dword ptr [g_00e11098] }
	__asm { add esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x100c158 }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x100c1a8 }
	__asm { L_0045283b: }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x40] }
	__asm { call dword ptr [g_00e110ac] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e78[];
extern "C" char g_00e10f20[];
extern "C" char g_00e11110[];
extern "C" char g_00e12690[];
extern "C" void fn_00451a70();
extern "C" void fn_00451ba0();
extern "C" void fn_00453f10();
// FUNCTION: ROBLOXSTUDIO 0x00453ca0
extern "C" __declspec(naked) void asm_00453ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd76122 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { je L_00453d5c }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10e78] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00451a70 }
	__asm { test al, al }
	__asm { je L_00453d4c }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00453d41 }
	__asm { mov ecx, esi }
	__asm { call fn_00453f10 }
	__asm { test al, al }
	__asm { je L_00453d41 }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12690] }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov edx, esp }
	__asm { lea edi, [ebp - 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push edi }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push eax }
	__asm { call dword ptr [edx + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00453d41: }
	__asm { push 1 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00451ba0 }
	__asm { L_00453d4c: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10f20] }
	__asm { L_00453d5c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e74[];
extern "C" char g_00e10e80[];
extern "C" char g_00e10e84[];
extern "C" char g_00e10f20[];
extern "C" char g_00e10f24[];
extern "C" char g_00e11110[];
extern "C" char g_00e125b0[];
extern "C" char g_00e12690[];
// FUNCTION: ROBLOXSTUDIO 0x00453f10
extern "C" __declspec(naked) void asm_00453f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd760fb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea edx, [ebp - 0x18] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_00453ff4 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12690] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_00453fe7 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10f24] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { call dword ptr [g_00e125b0] }
	__asm { test al, al }
	__asm { jne L_00453f96 }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10e84] }
	__asm { L_00453f96: }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { call dword ptr [g_00e125b0] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { setne cl }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10e80] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10e74] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00453fe1 }
	__asm { call dword ptr [g_00e10f20] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov bl, 1 }
	__asm { jmp L_00453ff6 }
	__asm { L_00453fe1: }
	__asm { call dword ptr [g_00e10f20] }
	__asm { L_00453fe7: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00453ff4: }
	__asm { xor bl, bl }
	__asm { L_00453ff6: }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
