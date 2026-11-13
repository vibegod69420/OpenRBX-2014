// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00642b30
extern "C" __declspec(naked) void asm_00642b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { movzx eax, byte ptr [ecx + 0x10] }
	__asm { cmp eax, 0x18 }
	__asm { jne L_00642b51 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 0x28], eax }
	__asm { setne al }
	__asm { add eax, 9 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00642b51: }
	__asm { cmp eax, 0x19 }
	__asm { jne L_00642b65 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 0x28], eax }
	__asm { setne al }
	__asm { add eax, 0xb }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00642b65: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe36884 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00642f80
extern "C" __declspec(naked) void asm_00642f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 0x10], 2 }
	__asm { je L_00642fc3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { dec eax }
	__asm { mov ecx, eax }
	__asm { shr ecx, 0x10 }
	__asm { or ecx, eax }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { or eax, ecx }
	__asm { mov ecx, eax }
	__asm { shr ecx, 4 }
	__asm { or ecx, eax }
	__asm { mov eax, ecx }
	__asm { shr eax, 2 }
	__asm { or eax, ecx }
	__asm { mov ecx, eax }
	__asm { shr ecx, 1 }
	__asm { or ecx, eax }
	__asm { inc ecx }
	__asm { cmp dword ptr [ebp + 0xc], ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { lea edx, [ebp + 0x10] }
	__asm { cmovae eax, edx }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00642fc3: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ebp + 0xc], ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { lea edx, [ebp + 0x10] }
	__asm { cmovae eax, edx }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00643610();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00643580
extern "C" __declspec(naked) void asm_00643580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10730 }
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
	__asm { je L_006435d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe37094 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006435da }
	__asm { L_006435d8: }
	__asm { xor eax, eax }
	__asm { L_006435da: }
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
	__asm { call fn_00643610 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012dce50[];
extern "C" void fn_00646370();
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x00646300
extern "C" __declspec(naked) void asm_00646300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dl, byte ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov ax, word ptr [edi + 0x70] }
	__asm { mov cl, byte ptr [edi + 0x72] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { cmp al, dl }
	__asm { jne L_00646329 }
	__asm { mov al, byte ptr [ebp - 3] }
	__asm { cmp al, byte ptr [esi + 1] }
	__asm { jne L_00646329 }
	__asm { cmp cl, byte ptr [esi + 2] }
	__asm { je L_00646368 }
	__asm { L_00646329: }
	__asm { mov cl, byte ptr [g_012dce50] }
	__asm { test cl, cl }
	__asm { je L_00646352 }
	__asm { movzx eax, byte ptr [esi + 2] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [esi + 1] }
	__asm { push eax }
	__asm { movzx eax, dl }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe3786c }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00646352: }
	__asm { mov ax, word ptr [esi] }
	__asm { mov word ptr [edi + 0x70], ax }
	__asm { mov al, byte ptr [esi + 2] }
	__asm { push 0x20 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi + 0x72], al }
	__asm { call fn_00646370 }
	__asm { L_00646368: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_011d86d2[];
extern "C" char g_011d86d3[];
// FUNCTION: ROBLOXSTUDIO 0x00646d30
extern "C" __declspec(naked) void asm_00646d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov cl, byte ptr [g_011d86d2] }
	__asm { mov bl, byte ptr [edi + 0x8c] }
	__asm { mov al, byte ptr [edi + 0x8d] }
	__asm { test cl, cl }
	__asm { je L_00646d57 }
	__asm { cmp bl, cl }
	__asm { sbb bl, bl }
	__asm { and bl, 1 }
	__asm { dec bl }
	__asm { L_00646d57: }
	__asm { mov cl, byte ptr [g_011d86d3] }
	__asm { test cl, cl }
	__asm { je L_00646d69 }
	__asm { cmp al, cl }
	__asm { sbb al, al }
	__asm { and al, 1 }
	__asm { dec al }
	__asm { L_00646d69: }
	__asm { movzx ecx, byte ptr [edi + 0x71] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { movzx edx, al }
	__asm { movzx eax, byte ptr [edi + 0x70] }
	__asm { imul ecx, edx }
	__asm { add ecx, 0xff }
	__asm { imul eax, edx }
	__asm { sar ecx, 8 }
	__asm { mov byte ptr [esi + 1], cl }
	__asm { movzx ecx, byte ptr [edi + 0x72] }
	__asm { imul ecx, edx }
	__asm { add eax, 0xff }
	__asm { sar eax, 8 }
	__asm { add ecx, 0xff }
	__asm { mov byte ptr [esi], al }
	__asm { sar ecx, 8 }
	__asm { pop edi }
	__asm { mov byte ptr [esi + 3], bl }
	__asm { mov byte ptr [esi + 2], cl }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00646e00();
// FUNCTION: ROBLOXSTUDIO 0x00646e61
extern "C" __declspec(naked) void asm_00646e61()
{
	__asm { sub byte ptr [edi], al }
	__asm { add byte ptr [ebx + 0x478b08c4], al }
	__asm { sub byte ptr [ebx + 0x148bfc4d], cl }
	__asm { mov al, 0x8b }
	__asm { xor al, byte ptr [ebp - 0x7aca8b0a] }
	__asm { leave }
	__asm { je L_00646e93 }
	__asm { mov eax, dword ptr [edx + 0x4014] }
	__asm { mov ecx, dword ptr [ecx + 0x4014] }
	__asm { cmp eax, ecx }
	__asm { jb L_00646e93 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { jne L_00646eab }
	__asm { cmp esi, dword ptr [ecx] }
	__asm { jbe L_00646eab }
	__asm { L_00646e93: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_00646eae }
	__asm { L_00646eab: }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { L_00646eae: }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { sub eax, dword ptr [edi + 0x28] }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { inc edx }
	__asm { sar eax, 2 }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { cmp edx, eax }
	__asm { jb fn_00646e00 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebx], esi }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { pop esi }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00647120
extern "C" __declspec(naked) void asm_00647120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [edi + 0x3c] }
	__asm { imul esi, dword ptr [eax + 4] }
	__asm { add esi, dword ptr [eax + 8] }
	__asm { imul esi, dword ptr [edi + 0x34] }
	__asm { add esi, dword ptr [eax] }
	__asm { test cl, cl }
	__asm { je L_00647189 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { sub eax, dword ptr [edi + 0x28] }
	__asm { sar eax, 2 }
	__asm { cmp esi, eax }
	__asm { jb L_00647189 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00647178 }
	__asm { push 0x15e }
	__asm { push 0xe373c0 }
	__asm { push 0xe37408 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00647189 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00647178: }
	__asm { movzx ecx, cl }
	__asm { push 0xe37420 }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00647189: }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0064a580
extern "C" __declspec(naked) void asm_0064a580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov al, byte ptr [esi + 1] }
	__asm { mov bh, byte ptr [esi] }
	__asm { mov bl, byte ptr [esi + 2] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { mov byte ptr [ebp - 2], al }
	__asm { mov eax, dword ptr [ecx + 0x4c] }
	__asm { mov byte ptr [ebp - 3], bh }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { cmp byte ptr [eax + 0x18], 0 }
	__asm { je L_0064a5be }
	__asm { mov al, byte ptr [ebp + 0xf] }
	__asm { mov byte ptr [ebp - 3], bl }
	__asm { mov byte ptr [ebp - 2], al }
	__asm { mov byte ptr [ebp - 1], bh }
	__asm { lea ecx, [ebp - 3] }
	__asm { jmp L_0064a5cc }
	__asm { L_0064a5be: }
	__asm { mov ax, word ptr [ebp - 3] }
	__asm { mov word ptr [ebp + 0xd], ax }
	__asm { mov byte ptr [ebp + 0xf], bl }
	__asm { lea ecx, [ebp + 0xd] }
	__asm { L_0064a5cc: }
	__asm { mov ax, word ptr [ecx] }
	__asm { mov dl, byte ptr [ecx + 2] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movzx ecx, byte ptr [ebp - 6] }
	__asm { mov byte ptr [eax], cl }
	__asm { movzx ecx, byte ptr [ebp - 5] }
	__asm { mov byte ptr [eax + 1], cl }
	__asm { movzx ecx, byte ptr [esi + 3] }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 2], dl }
	__asm { mov byte ptr [eax + 3], cl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ac80e0();
// FUNCTION: ROBLOXSTUDIO 0x00654bf0
extern "C" __declspec(naked) void asm_00654bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_00654c32 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_00654c32 }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00654c1a }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { L_00654c1a: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00654c4b }
	__asm { mov eax, dword ptr [esi] }
	__asm { fld dword ptr [eax + edi*4] }
	__asm { pop edi }
	__asm { fstp dword ptr [ecx] }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00654c32: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00654c40 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { L_00654c40: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00654c4b }
	__asm { fld dword ptr [edi] }
	__asm { fstp dword ptr [eax] }
	__asm { L_00654c4b: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dce7c[];
extern "C" char g_012dce80[];
extern "C" char g_012dce84[];
extern "C" char g_012dce88[];
extern "C" char g_012dce8c[];
extern "C" char g_012dce90[];
extern "C" char g_012dce94[];
extern "C" void fn_006dea00();
// FUNCTION: ROBLOXSTUDIO 0x00655190
extern "C" __declspec(naked) void asm_00655190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3dc0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dce94] }
	__asm { push esi }
	__asm { test al, 1 }
	__asm { jne L_006551ff }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce94], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006dea00 }
	__asm { mov esi, eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [g_012dce7c], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [g_012dce80], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [g_012dce84], ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [g_012dce88], ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [g_012dce8c], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [g_012dce90], eax }
	__asm { L_006551ff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12dce7c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e82234[];
extern "C" char g_012dd28c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00656b90
extern "C" __declspec(naked) void asm_00656b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10b0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012dd28c] }
	__asm { test al, 1 }
	__asm { jne L_00656bfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dd28c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e82234] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12dd160 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddff60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00656bfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12dd160 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e82238[];
extern "C" char g_012dd02c[];
extern "C" void fn_00656b90();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00656c10
extern "C" __declspec(naked) void asm_00656c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10b2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012dd02c] }
	__asm { test al, 1 }
	__asm { jne L_00656c7c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dd02c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e82238] }
	__asm { call fn_00656b90 }
	__asm { push eax }
	__asm { mov ecx, 0x12dcf00 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddff70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00656c7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12dcf00 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e82230[];
extern "C" char g_012dd15c[];
extern "C" void fn_00656b90();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00656c90
extern "C" __declspec(naked) void asm_00656c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10b4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012dd15c] }
	__asm { test al, 1 }
	__asm { jne L_00656cfc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dd15c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e82230] }
	__asm { call fn_00656b90 }
	__asm { push eax }
	__asm { mov ecx, 0x12dd030 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddff80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00656cfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12dd030 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dd290[];
extern "C" char g_012dd294[];
extern "C" char g_012dd298[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00657590
extern "C" __declspec(naked) void asm_00657590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp ecx, eax }
	__asm { jae L_006575bf }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { lea eax, [esi + eax*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006575bf: }
	__asm { mov eax, dword ptr [g_012dd298] }
	__asm { test al, 1 }
	__asm { jne L_006575f1 }
	__asm { or eax, 1 }
	__asm { push 0xddff90 }
	__asm { mov dword ptr [g_012dd298], eax }
	__asm { mov dword ptr [g_012dd290], 0 }
	__asm { mov dword ptr [g_012dd294], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_006575f1: }
	__asm { mov eax, 0x12dd290 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006588e0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00657890
extern "C" __declspec(naked) void asm_00657890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test dl, dl }
	__asm { je L_006578e7 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp dword ptr [esi], eax }
	__asm { je L_006578e7 }
	__asm { mov eax, dword ptr [eax - 0x40] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jb L_006578e7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006578d6 }
	__asm { push 0x7a }
	__asm { push 0xe39140 }
	__asm { push 0xe392c8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006578e7 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_006578d6: }
	__asm { movzx eax, dl }
	__asm { push 0xe39318 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006578e7: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006588e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00657b20
extern "C" __declspec(naked) void asm_00657b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edx }
	__asm { je L_00657b6a }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { lea edi, [esi + 0xc] }
	__asm { L_00657b35: }
	__asm { test esi, esi }
	__asm { je L_00657b54 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [edi - 8] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [edi - 4] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [edi] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [edi + 4] }
	__asm { L_00657b54: }
	__asm { add ecx, 0x14 }
	__asm { add esi, 0x14 }
	__asm { add edi, 0x14 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp ecx, edx }
	__asm { jne L_00657b35 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00657b6a: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00658050();
extern "C" void fn_006587a0();
// FUNCTION: ROBLOXSTUDIO 0x00658980
extern "C" __declspec(naked) void asm_00658980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x66666667 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov edx, esi }
	__asm { sub edx, ebx }
	__asm { imul edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sar edx, 3 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cmp ecx, eax }
	__asm { jbe L_006589c3 }
	__asm { lea eax, [eax + eax*4] }
	__asm { push esi }
	__asm { lea eax, [ebx + eax*4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006587a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006589c3: }
	__asm { jae L_006589d7 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00658050 }
	__asm { L_006589d7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0065f0a0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0065e530
extern "C" __declspec(naked) void asm_0065e530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11560 }
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
	__asm { je L_0065e588 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe39bc8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0065e58a }
	__asm { L_0065e588: }
	__asm { xor eax, eax }
	__asm { L_0065e58a: }
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
	__asm { call fn_0065f0a0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0065e670
extern "C" __declspec(naked) void asm_0065e670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_0065e6d0 }
	__asm { add esi, 0x30 }
	__asm { L_0065e682: }
	__asm { cmp dword ptr [esi], 0x10 }
	__asm { jb L_0065e692 }
	__asm { push dword ptr [esi - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065e692: }
	__asm { mov dword ptr [esi], 0xf }
	__asm { mov dword ptr [esi - 4], 0 }
	__asm { mov byte ptr [esi - 0x14], 0 }
	__asm { cmp dword ptr [esi - 0x1c], 0x10 }
	__asm { jb L_0065e6b4 }
	__asm { push dword ptr [esi - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065e6b4: }
	__asm { mov dword ptr [esi - 0x1c], 0xf }
	__asm { mov dword ptr [esi - 0x20], 0 }
	__asm { mov byte ptr [esi - 0x30], 0 }
	__asm { add esi, 0x48 }
	__asm { lea eax, [esi - 0x30] }
	__asm { cmp eax, edi }
	__asm { jne L_0065e682 }
	__asm { L_0065e6d0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0063ee40();
extern "C" void fn_0063eec0();
extern "C" void fn_00640970();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00660270
extern "C" __declspec(naked) void asm_00660270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00640970 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_006602c7 }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_0063eec0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_006602ad }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { je L_006602ad }
	__asm { cmp dword ptr [eax + 0xc8], 5 }
	__asm { jne L_006602c7 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006602ad: }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_0063ee40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_006602c7 }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { jne L_006602c9 }
	__asm { L_006602c7: }
	__asm { xor eax, eax }
	__asm { L_006602c9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x00660380
extern "C" __declspec(naked) void asm_00660380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_009b53d0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_006603e1 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_006603a0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_006603ab }
	__asm { add esi, -0x20 }
	__asm { jmp L_006603ad }
	__asm { L_006603ab: }
	__asm { xor esi, esi }
	__asm { L_006603ad: }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_006603c8 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x20] }
	__asm { jmp L_006603da }
	__asm { L_006603c8: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { lea edx, [esi + 0x20] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_006603da: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_006603a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_006603e1: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00660380();
extern "C" void fn_009b53d0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x006603f0
extern "C" __declspec(naked) void asm_006603f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00660424 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00660424: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_0066045a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_0066045a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00660380 }
	__asm { L_0066045a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10604[];
extern "C" char g_00e10608[];
// FUNCTION: ROBLOXSTUDIO 0x00660470
extern "C" __declspec(naked) void asm_00660470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 0x10], edi }
	__asm { jbe L_006604cf }
	__asm { push ebx }
	__asm { L_00660480: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0066048a }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0066048c }
	__asm { L_0066048a: }
	__asm { mov eax, esi }
	__asm { L_0066048c: }
	__asm { movsx eax, byte ptr [eax + edi] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10604] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006604c8 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 0x10 }
	__asm { jb L_006604aa }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006604ac }
	__asm { L_006604aa: }
	__asm { mov ecx, esi }
	__asm { L_006604ac: }
	__asm { cmp eax, 0x10 }
	__asm { jb L_006604b5 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { jmp L_006604b7 }
	__asm { L_006604b5: }
	__asm { mov ebx, esi }
	__asm { L_006604b7: }
	__asm { movsx eax, byte ptr [ecx + edi] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10608] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebx + edi], al }
	__asm { L_006604c8: }
	__asm { inc edi }
	__asm { cmp edi, dword ptr [esi + 0x10] }
	__asm { jb L_00660480 }
	__asm { pop ebx }
	__asm { L_006604cf: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00663630
extern "C" __declspec(naked) void asm_00663630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119d0 }
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
	__asm { je L_00663688 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3a764 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0066368a }
	__asm { L_00663688: }
	__asm { xor eax, eax }
	__asm { L_0066368a: }
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
	__asm { je L_006636ae }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_006636ae: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00663770
extern "C" __declspec(naked) void asm_00663770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp edx, edi }
	__asm { je L_006637c8 }
	__asm { push esi }
	__asm { lea esi, [eax + 0x14] }
	__asm { add edx, 0x14 }
	__asm { L_00663788: }
	__asm { fld dword ptr [edx - 0x14] }
	__asm { add edx, 0x20 }
	__asm { fstp dword ptr [eax] }
	__asm { add eax, 0x20 }
	__asm { fld dword ptr [edx - 0x30] }
	__asm { lea ecx, [edx - 0x14] }
	__asm { fstp dword ptr [esi - 0x10] }
	__asm { add esi, 0x20 }
	__asm { fld dword ptr [edx - 0x2c] }
	__asm { fstp dword ptr [esi - 0x2c] }
	__asm { fld dword ptr [edx - 0x28] }
	__asm { fstp dword ptr [esi - 0x28] }
	__asm { fld dword ptr [edx - 0x24] }
	__asm { fstp dword ptr [esi - 0x24] }
	__asm { fld dword ptr [edx - 0x20] }
	__asm { fstp dword ptr [esi - 0x20] }
	__asm { fld dword ptr [edx - 0x1c] }
	__asm { fstp dword ptr [esi - 0x1c] }
	__asm { fld dword ptr [edx - 0x18] }
	__asm { fstp dword ptr [esi - 0x18] }
	__asm { cmp ecx, edi }
	__asm { jne L_00663788 }
	__asm { pop esi }
	__asm { L_006637c8: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00665630
extern "C" __declspec(naked) void asm_00665630()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { inc dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { inc word ptr [esi + 0x24] }
	__asm { cmp eax, dword ptr [esi + 0xc] }
	__asm { jb L_0066565a }
	__asm { mov ax, word ptr [esi + 8] }
	__asm { inc word ptr [esi + 0x22] }
	__asm { mov word ptr [esi + 0x24], ax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { jmp L_0066565d }
	__asm { L_0066565a: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { L_0066565d: }
	__asm { add dword ptr [esi + 0x28], eax }
	__asm { add dword ptr [esi + 0x2c], eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006656a7 }
	__asm { test byte ptr [esi + 0x28], 1 }
	__asm { je L_006656a7 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00665696 }
	__asm { push 0x59 }
	__asm { push 0xe3a778 }
	__asm { push 0xe3a7c8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006656a7 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00665696: }
	__asm { movzx eax, al }
	__asm { push 0xe3a7e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006656a7: }
	__asm { movsx eax, word ptr [esi + 0x22] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { setg al }
	__asm { mov byte ptr [esi + 0x30], al }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006656f0
extern "C" __declspec(naked) void asm_006656f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test edi, edi }
	__asm { jne L_0066571a }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0066571a: }
	__asm { cmp edi, -1 }
	__asm { jbe L_0066572a }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0066572a: }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00665749 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00665749: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" void fn_00663830();
extern "C" void fn_006656f0();
extern "C" void fn_00665970();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00665790
extern "C" __declspec(naked) void asm_00665790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11a60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_006656f0 }
	__asm { test al, al }
	__asm { je L_006657e8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [esi] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00663830 }
	__asm { lea eax, [ebx + edi] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_006657e8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00665970 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00666390
extern "C" __declspec(naked) void asm_00666390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_006663e0 }
	__asm { push 0x10 }
	__asm { mov word ptr [esi + 8], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_006663bb }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006663bb: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006663e0: }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_006663ea }
	__asm { mov byte ptr [esi + 9], 0 }
	__asm { L_006663ea: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8550[];
extern "C" void fn_00663ff0();
// FUNCTION: ROBLOXSTUDIO 0x00667be0
extern "C" __declspec(naked) void asm_00667be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { lea edx, [esi + esi*2] }
	__asm { movzx eax, word ptr [edx*2 + 0x11d8f18] }
	__asm { add ax, word ptr [ecx + 0x1e] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [ecx + 0x20] }
	__asm { add ax, word ptr [edx*2 + 0x11d8f1a] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { movzx eax, word ptr [ecx + 0x22] }
	__asm { add ax, word ptr [edx*2 + 0x11d8f1c] }
	__asm { mov edx, dword ptr [esi*4 + 0x11d93f0] }
	__asm { add edx, dword ptr [ecx + 0x28] }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov al, byte ptr [edx] }
	__asm { cmp al, byte ptr [g_012f8550] }
	__asm { je L_00667c5d }
	__asm { shr al, 3 }
	__asm { and al, 7 }
	__asm { je L_00667c5d }
	__asm { cmp al, 5 }
	__asm { je L_00667c55 }
	__asm { lea eax, [ebp - 6] }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_00663ff0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00667c5d }
	__asm { L_00667c55: }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00667c5d: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00668840();
extern "C" void fn_00668bb0();
extern "C" void fn_00668c70();
// FUNCTION: ROBLOXSTUDIO 0x00668b10
extern "C" __declspec(naked) void asm_00668b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00668840 }
	__asm { mov eax, dword ptr [esi + 0x74] }
	__asm { mov ecx, dword ptr [eax + 0xba0] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub eax, 0 }
	__asm { je L_00668b4a }
	__asm { dec eax }
	__asm { jne L_00668b52 }
	__asm { mov ecx, esi }
	__asm { call fn_00668bb0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00668b4a: }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00668c70 }
	__asm { L_00668b52: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00460030();
// FUNCTION: ROBLOXSTUDIO 0x0066c2f0
extern "C" __declspec(naked) void asm_0066c2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { call fn_00460030 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_0066c33e }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_0066c348 }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0066c348 }
	__asm { L_0066c33e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0066c348: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0066c3a0
extern "C" __declspec(naked) void asm_0066c3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edx }
	__asm { je L_0066c3fc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { lea edi, [esi + 0xc] }
	__asm { L_0066c3b5: }
	__asm { test esi, esi }
	__asm { je L_0066c3e6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { fstp dword ptr [edi + 0xc] }
	__asm { fld dword ptr [ecx + 0x1c] }
	__asm { fstp dword ptr [edi + 0x10] }
	__asm { L_0066c3e6: }
	__asm { add ecx, 0x20 }
	__asm { add esi, 0x20 }
	__asm { add edi, 0x20 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp ecx, edx }
	__asm { jne L_0066c3b5 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0066c3fc: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0066d3d0
extern "C" __declspec(naked) void asm_0066d3d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x2c], 0x10 }
	__asm { jb L_0066d3e4 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066d3e4: }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { push edi }
	__asm { je L_0066d426 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_0066d426: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { pop edi }
	__asm { je L_0066d452 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0066d452: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0066d730
extern "C" __declspec(naked) void asm_0066d730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test eax, eax }
	__asm { jne L_0066d758 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0066d758: }
	__asm { cmp eax, 0x7fffffff }
	__asm { jbe L_0066d76a }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0066d76a: }
	__asm { push edi }
	__asm { lea edi, [eax + eax] }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0066d78d }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0066d78d: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0066d7a0
extern "C" __declspec(naked) void asm_0066d7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test edi, edi }
	__asm { jne L_0066d7ca }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0066d7ca: }
	__asm { cmp edi, 0x7ffffff }
	__asm { jbe L_0066d7dd }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0066d7dd: }
	__asm { shl edi, 5 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0066d7ff }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0066d7ff: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0066d810
extern "C" __declspec(naked) void asm_0066d810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { test esi, esi }
	__asm { jne L_0066d83a }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0066d83a: }
	__asm { cmp esi, 0x35e50d7 }
	__asm { jbe L_0066d84d }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0066d84d: }
	__asm { imul esi, esi, 0x4c }
	__asm { push esi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0066d86f }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0066d86f: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0066dc20
extern "C" __declspec(naked) void asm_0066dc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { xor ebx, ebx }
	__asm { nop }
	__asm { L_0066dc30: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_0066dc3b }
	__asm { add esi, -0x1c }
	__asm { jmp L_0066dc3d }
	__asm { L_0066dc3b: }
	__asm { xor esi, esi }
	__asm { L_0066dc3d: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_0066dc53 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066dc53: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_0066dc30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00402f60();
// FUNCTION: ROBLOXSTUDIO 0x0066df30
extern "C" __declspec(naked) void asm_0066df30()
{
	__asm { push esi }
	__asm { mov esi, 0xd }
	__asm { cmp dword ptr [ecx + 0x10], esi }
	__asm { cmovb esi, dword ptr [ecx + 0x10] }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_0066df45 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0066df45: }
	__asm { mov eax, 0xd }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0xe3ada8 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { mov ecx, eax }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { jne L_0066df7b }
	__asm { cmp esi, 0xd }
	__asm { jae L_0066df73 }
	__asm { or ecx, 0xffffffff }
	__asm { test ecx, ecx }
	__asm { sete al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0066df73: }
	__asm { xor ecx, ecx }
	__asm { cmp esi, 0xd }
	__asm { setne cl }
	__asm { L_0066df7b: }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { sete al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_009b53d0();
extern "C" void fn_00b1a2f0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x0066e0d0
extern "C" __declspec(naked) void asm_0066e0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_0066e104 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0066e104: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_0066e13a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_0066e13a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b1a2f0 }
	__asm { L_0066e13a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00670390
extern "C" __declspec(naked) void asm_00670390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd121c0 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006703e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3b380 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006703ea }
	__asm { L_006703e8: }
	__asm { xor eax, eax }
	__asm { L_006703ea: }
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

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00670420
extern "C" __declspec(naked) void asm_00670420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd121d0 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00670478 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3b398 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0067047a }
	__asm { L_00670478: }
	__asm { xor eax, eax }
	__asm { L_0067047a: }
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

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006704b0
extern "C" __declspec(naked) void asm_006704b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd121e0 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00670508 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3b350 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0067050a }
	__asm { L_00670508: }
	__asm { xor eax, eax }
	__asm { L_0067050a: }
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

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00670540
extern "C" __declspec(naked) void asm_00670540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd121f0 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00670598 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3b368 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0067059a }
	__asm { L_00670598: }
	__asm { xor eax, eax }
	__asm { L_0067059a: }
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

extern "C" void fn_00670840();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00670670
extern "C" __declspec(naked) void asm_00670670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12200 }
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
	__asm { je L_006706c8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3b3c8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006706ca }
	__asm { L_006706c8: }
	__asm { xor eax, eax }
	__asm { L_006706ca: }
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
	__asm { call fn_00670840 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00670390();
extern "C" void fn_007de8e0();
extern "C" void fn_00a0c230();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00670a20
extern "C" __declspec(naked) void asm_00670a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x8c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00670a6e }
	__asm { mov ecx, eax }
	__asm { call fn_00a0c230 }
	__asm { mov esi, eax }
	__asm { jmp L_00670a70 }
	__asm { L_00670a6e: }
	__asm { xor esi, esi }
	__asm { L_00670a70: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00670390 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00670aa1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00670aa1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00670aa1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00670420();
extern "C" void fn_007de8e0();
extern "C" void fn_00a0c850();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00670ac0
extern "C" __declspec(naked) void asm_00670ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x9c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00670b0e }
	__asm { mov ecx, eax }
	__asm { call fn_00a0c850 }
	__asm { mov esi, eax }
	__asm { jmp L_00670b10 }
	__asm { L_00670b0e: }
	__asm { xor esi, esi }
	__asm { L_00670b10: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00670420 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00670b41 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00670b41 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00670b41: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006704b0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a0aeb0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00670b60
extern "C" __declspec(naked) void asm_00670b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x84 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00670bae }
	__asm { mov ecx, eax }
	__asm { call fn_00a0aeb0 }
	__asm { mov esi, eax }
	__asm { jmp L_00670bb0 }
	__asm { L_00670bae: }
	__asm { xor esi, esi }
	__asm { L_00670bb0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_006704b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00670be1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00670be1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00670be1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00670540();
extern "C" void fn_007de8e0();
extern "C" void fn_00a0b8a0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00670c00
extern "C" __declspec(naked) void asm_00670c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x78 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00670c4b }
	__asm { mov ecx, eax }
	__asm { call fn_00a0b8a0 }
	__asm { mov esi, eax }
	__asm { jmp L_00670c4d }
	__asm { L_00670c4b: }
	__asm { xor esi, esi }
	__asm { L_00670c4d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00670540 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00670c7e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00670c7e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00670c7e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9d464[];
extern "C" char g_012de1a8[];
extern "C" char g_012de1ac[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00670c90
extern "C" __declspec(naked) void asm_00670c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1223e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9d464], 0 }
	__asm { jne L_00670cc4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00670cc4: }
	__asm { push 0x670700 }
	__asm { push 0x12ddb98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de1ac] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00670d0e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de1ac], eax }
	__asm { push 0xe9d464 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de1a8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00670d0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012de1a8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9d738[];
extern "C" char g_012de1b0[];
extern "C" char g_012de1b4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00670d30
extern "C" __declspec(naked) void asm_00670d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1221e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9d738], 0 }
	__asm { jne L_00670d64 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00670d64: }
	__asm { push 0x670750 }
	__asm { push 0x12ddba0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de1b4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00670dae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de1b4], eax }
	__asm { push 0xe9d738 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de1b0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00670dae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012de1b0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9cef8[];
extern "C" char g_012de198[];
extern "C" char g_012de19c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00670dd0
extern "C" __declspec(naked) void asm_00670dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1225e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9cef8], 0 }
	__asm { jne L_00670e04 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00670e04: }
	__asm { push 0x6707a0 }
	__asm { push 0x12ddb88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de19c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00670e4e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de19c], eax }
	__asm { push 0xe9cef8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de198], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00670e4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012de198] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9d1f4[];
extern "C" char g_012de1a0[];
extern "C" char g_012de1a4[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00670e70
extern "C" __declspec(naked) void asm_00670e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1227e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9d1f4], 0 }
	__asm { jne L_00670ea4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00670ea4: }
	__asm { push 0x6707f0 }
	__asm { push 0x12ddb90 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de1a4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00670eee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de1a4], eax }
	__asm { push 0xe9d1f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de1a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00670eee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012de1a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e6ac38[];
extern "C" char g_012de194[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00672360
extern "C" __declspec(naked) void asm_00672360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1229e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012de194] }
	__asm { test al, 1 }
	__asm { jne L_006723cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de194], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e6ac38] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12de068 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_006723cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12de068 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9d464[];
extern "C" char g_012ddf34[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006723e0
extern "C" __declspec(naked) void asm_006723e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd122be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ddf34] }
	__asm { test al, 1 }
	__asm { jne L_0067244c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ddf34], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9d464] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12dde08 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0067244c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12dde08 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9d738[];
extern "C" char g_012de064[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00672460
extern "C" __declspec(naked) void asm_00672460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd122de }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012de064] }
	__asm { test al, 1 }
	__asm { jne L_006724cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de064], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9d738] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddf38 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_006724cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ddf38 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9cef8[];
extern "C" char g_012ddcd4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006724e0
extern "C" __declspec(naked) void asm_006724e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd122fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012ddcd4] }
	__asm { test al, 1 }
	__asm { jne L_0067254c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ddcd4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9cef8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddba8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0067254c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ddba8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9d1f4[];
extern "C" char g_012dde04[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00672560
extern "C" __declspec(naked) void asm_00672560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1231e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012dde04] }
	__asm { test al, 1 }
	__asm { jne L_006725cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dde04], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e9d1f4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddcd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_006725cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12ddcd8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006ad6a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00676940
extern "C" __declspec(naked) void asm_00676940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1256d }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006ad6a0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_0067697c }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067697c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00679260
extern "C" __declspec(naked) void asm_00679260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12670 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006792b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3c9f8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006792ba }
	__asm { L_006792b8: }
	__asm { xor eax, eax }
	__asm { L_006792ba: }
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

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006792f0
extern "C" __declspec(naked) void asm_006792f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12680 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00679348 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3c9e0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0067934a }
	__asm { L_00679348: }
	__asm { xor eax, eax }
	__asm { L_0067934a: }
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

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00679380
extern "C" __declspec(naked) void asm_00679380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12690 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006793d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3c978 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006793da }
	__asm { L_006793d8: }
	__asm { xor eax, eax }
	__asm { L_006793da: }
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

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00679410
extern "C" __declspec(naked) void asm_00679410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd126a0 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00679468 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3c9b0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0067946a }
	__asm { L_00679468: }
	__asm { xor eax, eax }
	__asm { L_0067946a: }
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

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006794a0
extern "C" __declspec(naked) void asm_006794a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd126b0 }
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
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006794f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3ca20 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_006794fa }
	__asm { L_006794f8: }
	__asm { xor eax, eax }
	__asm { L_006794fa: }
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

extern "C" char g_012de25c[];
extern "C" char g_012de260[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00679e10
extern "C" __declspec(naked) void asm_00679e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1277e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de260] }
	__asm { test al, 1 }
	__asm { jne L_00679e4a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de260], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012de25c], eax }
	__asm { L_00679e4a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de26c[];
extern "C" char g_012de270[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00679e60
extern "C" __declspec(naked) void asm_00679e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1279e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de270] }
	__asm { test al, 1 }
	__asm { jne L_00679e9a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de270], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012de26c], eax }
	__asm { L_00679e9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00679410();
extern "C" void fn_007de8e0();
extern "C" void fn_00a0d8c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067a2d0
extern "C" __declspec(naked) void asm_0067a2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x114 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0067a31e }
	__asm { mov ecx, eax }
	__asm { call fn_00a0d8c0 }
	__asm { mov esi, eax }
	__asm { jmp L_0067a320 }
	__asm { L_0067a31e: }
	__asm { xor esi, esi }
	__asm { L_0067a320: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00679410 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0067a351 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0067a351 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0067a351: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006794a0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a0e550();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067a370
extern "C" __declspec(naked) void asm_0067a370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0067a3bb }
	__asm { mov ecx, eax }
	__asm { call fn_00a0e550 }
	__asm { mov esi, eax }
	__asm { jmp L_0067a3bd }
	__asm { L_0067a3bb: }
	__asm { xor esi, esi }
	__asm { L_0067a3bd: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_006794a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0067a3ee }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0067a3ee }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0067a3ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9e158[];
extern "C" char g_012de224[];
extern "C" char g_012de228[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0067a7d0
extern "C" __declspec(naked) void asm_0067a7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd126fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9e158], 0 }
	__asm { jne L_0067a804 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067a804: }
	__asm { push 0x679c80 }
	__asm { push 0x12de204 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de228] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0067a84e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de228], eax }
	__asm { push 0xe9e158 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de224], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067a84e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012de224] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9dac4[];
extern "C" char g_012de234[];
extern "C" char g_012de238[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0067a870
extern "C" __declspec(naked) void asm_0067a870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1271e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9dac4], 0 }
	__asm { jne L_0067a8a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067a8a4: }
	__asm { push 0x679cd0 }
	__asm { push 0x12de214 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de238] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0067a8ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de238], eax }
	__asm { push 0xe9dac4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de234], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067a8ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012de234] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e9dcf4[];
extern "C" char g_012de23c[];
extern "C" char g_012de240[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0067a910
extern "C" __declspec(naked) void asm_0067a910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd43e9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e9dcf4], 0 }
	__asm { jne L_0067a944 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067a944: }
	__asm { push 0x679d20 }
	__asm { push 0x12de21c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de240] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0067a98e }
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
	__asm { L_0067a98e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012de23c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e852e0[];
extern "C" char g_012de22c[];
extern "C" char g_012de230[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0067a9b0
extern "C" __declspec(naked) void asm_0067a9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1273e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e852e0], 0 }
	__asm { jne L_0067a9e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067a9e4: }
	__asm { push 0x679d70 }
	__asm { push 0x12de20c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012de230] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0067aa2e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de230], eax }
	__asm { push 0xe852e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de22c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067aa2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012de22c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e100fc[];
extern "C" char g_00e13190[];
extern "C" void fn_0067dca0();
extern "C" void fn_00cf6970();
// FUNCTION: ROBLOXSTUDIO 0x0067b0c0
extern "C" __declspec(naked) void asm_0067b0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x3e8 }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00cf6970 }
	__asm { mov ebx, edx }
	__asm { mov edi, eax }
	__asm { test ebx, ebx }
	__asm { jg L_0067b0ec }
	__asm { jl L_0067b0e8 }
	__asm { test edi, edi }
	__asm { jae L_0067b0ec }
	__asm { L_0067b0e8: }
	__asm { xor edi, edi }
	__asm { xor ebx, ebx }
	__asm { L_0067b0ec: }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { call dword ptr [g_00e100fc] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 0x18] }
	__asm { push 0x67e460 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { mov dword ptr [esi + 0xc], ebx }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { call fn_0067dca0 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e13190] }
	__asm { add esp, 0x24 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067c3f0
extern "C" __declspec(naked) void asm_0067c3f0()
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
	__asm { mov dword ptr [esi], 0xe3b79c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0067c430 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067c432 }
	__asm { L_0067c430: }
	__asm { xor edi, edi }
	__asm { L_0067c432: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067c448 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067c448: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe3b8b4 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b8c0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067c480
extern "C" __declspec(naked) void asm_0067c480()
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
	__asm { mov dword ptr [esi], 0xe3b808 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0067c4c0 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067c4c2 }
	__asm { L_0067c4c0: }
	__asm { xor edi, edi }
	__asm { L_0067c4c2: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067c4d8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067c4d8: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe3b924 }
	__asm { mov dword ptr [esi + 0xc], 0xe3b930 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067c510
extern "C" __declspec(naked) void asm_0067c510()
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
	__asm { mov dword ptr [esi], 0xe3b7d4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0067c550 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067c552 }
	__asm { L_0067c550: }
	__asm { xor edi, edi }
	__asm { L_0067c552: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067c568 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067c568: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe3b8ec }
	__asm { mov dword ptr [esi + 0xc], 0xe3b8f8 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067c5a0
extern "C" __declspec(naked) void asm_0067c5a0()
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
	__asm { mov dword ptr [esi], 0xe3b758 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0067c5e0 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067c5e2 }
	__asm { L_0067c5e0: }
	__asm { xor edi, edi }
	__asm { L_0067c5e2: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067c5f8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067c5f8: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe3b95c }
	__asm { mov dword ptr [esi + 0xc], 0xe3b968 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0067c630
extern "C" __declspec(naked) void asm_0067c630()
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
	__asm { mov dword ptr [esi], 0xe18168 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0067c670 }
	__asm { add edi, 0xc }
	__asm { jmp L_0067c672 }
	__asm { L_0067c670: }
	__asm { xor edi, edi }
	__asm { L_0067c672: }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067c688 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067c688: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe3b87c }
	__asm { mov dword ptr [esi + 0xc], 0xe3b888 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10528[];
extern "C" void fn_0067b220();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067d7a0
extern "C" __declspec(naked) void asm_0067d7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { cmp eax, 0x1fffffff }
	__asm { jbe L_0067d7f0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0xe3b868 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe3b758 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067b220 }
	__asm { L_0067d7f0: }
	__asm { test eax, eax }
	__asm { jne L_0067d804 }
	__asm { L_0067d7f4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0067d804: }
	__asm { cmp eax, 0x1fffffff }
	__asm { ja L_0067d81b }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0067d7f4 }
	__asm { L_0067d81b: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" void fn_0067b4e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067d830
extern "C" __declspec(naked) void asm_0067d830()
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
	__asm { je L_0067d898 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_0067b4e0 }
	__asm { test eax, eax }
	__asm { je L_0067d898 }
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
	__asm { L_0067d898: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067b7c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067d8c0
extern "C" __declspec(naked) void asm_0067d8c0()
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
	__asm { je L_0067d928 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_0067b7c0 }
	__asm { test eax, eax }
	__asm { je L_0067d928 }
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
	__asm { L_0067d928: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067baa0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067d950
extern "C" __declspec(naked) void asm_0067d950()
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
	__asm { je L_0067d9b8 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_0067baa0 }
	__asm { test eax, eax }
	__asm { je L_0067d9b8 }
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
	__asm { L_0067d9b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067bd80();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067d9e0
extern "C" __declspec(naked) void asm_0067d9e0()
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
	__asm { je L_0067da48 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_0067bd80 }
	__asm { test eax, eax }
	__asm { je L_0067da48 }
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
	__asm { L_0067da48: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067c060();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0067da70
extern "C" __declspec(naked) void asm_0067da70()
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
	__asm { je L_0067dad8 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_0067c060 }
	__asm { test eax, eax }
	__asm { je L_0067dad8 }
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
	__asm { L_0067dad8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_00e1060c[];
extern "C" void fn_0067b270();
// FUNCTION: ROBLOXSTUDIO 0x0067e460
extern "C" __declspec(naked) void asm_0067e460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd40368 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e1060c] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0067e4b6 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xe3b76c }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0067b270 }
	__asm { L_0067e4b6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0067e7a0
extern "C" __declspec(naked) void asm_0067e7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0067e7e8 }
	__asm { cmp eax, 1 }
	__asm { je L_0067e7e8 }
	__asm { cmp eax, 2 }
	__asm { je L_0067e7fc }
	__asm { cmp eax, 3 }
	__asm { jne L_0067e7d7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11daaa0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e7d7: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11daaa0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e7e8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0067e7fc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_0067e7fc: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0067e800
extern "C" __declspec(naked) void asm_0067e800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0067e848 }
	__asm { cmp eax, 1 }
	__asm { je L_0067e848 }
	__asm { cmp eax, 2 }
	__asm { je L_0067e85c }
	__asm { cmp eax, 3 }
	__asm { jne L_0067e837 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11daa38 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e837: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11daa38 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067e848: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0067e85c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_0067e85c: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_004038a0();
extern "C" void fn_0067b130();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0067e970
extern "C" __declspec(naked) void asm_0067e970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12af0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push 0x28 }
	__asm { push 0xe3b7a4 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_004038a0 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { cmovae eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xe3b764 }
	__asm { jb L_0067e9e6 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067e9e6: }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0xe3b79c }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0067b130 }
}

extern "C" char g_00e10528[];
extern "C" void fn_004038a0();
extern "C" void fn_0067b180();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0067ea10
extern "C" __declspec(naked) void asm_0067ea10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12af0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push 0x22 }
	__asm { push 0xe3b810 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_004038a0 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { cmovae eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xe3b764 }
	__asm { jb L_0067ea86 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067ea86: }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0xe3b808 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0067b180 }
}

extern "C" char g_00e10528[];
extern "C" void fn_004038a0();
extern "C" void fn_0067b1d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0067eab0
extern "C" __declspec(naked) void asm_0067eab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12af0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push 0x27 }
	__asm { push 0xe3b7dc }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_004038a0 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { cmovae eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xe3b764 }
	__asm { jb L_0067eb26 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067eb26: }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0xe3b7d4 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0067b1d0 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
extern "C" void fn_0092dcf0();
// FUNCTION: ROBLOXSTUDIO 0x0067f1e0
extern "C" __declspec(naked) void asm_0067f1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd16098 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x88] }
	__asm { test edx, edx }
	__asm { jne L_0067f233 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x24], 0xe19198 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_0067f233: }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { fstp qword ptr [ebp - 0x18] }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0092dcf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
extern "C" void fn_0092dd80();
// FUNCTION: ROBLOXSTUDIO 0x0067f270
extern "C" __declspec(naked) void asm_0067f270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x88] }
	__asm { test edx, edx }
	__asm { jne L_0067f2c3 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x14], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe19198 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_0067f2c3: }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0092dd80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012fc99e[];
extern "C" void fn_00689070();
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x00681240
extern "C" __declspec(naked) void asm_00681240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12d7a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov al, byte ptr [g_012fc99e] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00681290 }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push 0xe3d19c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00681290: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x88] }
	__asm { call fn_00689070 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012fc99e[];
extern "C" void fn_00689070();
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x00681470
extern "C" __declspec(naked) void asm_00681470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd12db0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012fc99e] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_006814b1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { push 0xe3cf08 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_006814b1: }
	__asm { lea esi, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00689070 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012fc99e[];
extern "C" void fn_00689070();
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x00681500
extern "C" __declspec(naked) void asm_00681500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd12dc2 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012fc99e] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00681541 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { push 0xe3cf2c }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00681541: }
	__asm { lea esi, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xb8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00689070 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc99e[];
extern "C" void fn_00689070();
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x00681fa0
extern "C" __declspec(naked) void asm_00681fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_012fc99e] }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test dl, dl }
	__asm { je L_00681fd1 }
	__asm { push 0 }
	__asm { movzx eax, bl }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, dl }
	__asm { push 0xe3d208 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00681fd1: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x70] }
	__asm { test bl, bl }
	__asm { jne L_00681fed }
	__asm { lea ecx, [esi + 0x58] }
	__asm { L_00681fed: }
	__asm { call fn_00689070 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0068adf0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00686550
extern "C" __declspec(naked) void asm_00686550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x190 }
	__asm { call fn_0068adf0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_006865a9 }
	__asm { cmp eax, 1 }
	__asm { je L_006865a9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00686598 }
	__asm { push 0x506 }
	__asm { push 0xe3ccc0 }
	__asm { push 0xe3d790 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006865a9 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00686598: }
	__asm { movzx eax, cl }
	__asm { push 0xe3d7a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006865a9: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_006865bc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp + 8], 1 }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax] }
	__asm { L_006865bc: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0068acc0();
extern "C" void fn_00698510();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006866c0
extern "C" __declspec(naked) void asm_006866c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x18c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { call fn_0068acc0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0068671d }
	__asm { cmp eax, 1 }
	__asm { je L_0068671d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0068670c }
	__asm { push 0x51c }
	__asm { push 0xe3ccc0 }
	__asm { push 0xe3d790 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0068671d }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0068670c: }
	__asm { movzx eax, cl }
	__asm { push 0xe3d968 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0068671d: }
	__asm { test esi, esi }
	__asm { je L_00686731 }
	__asm { mov ecx, esi }
	__asm { call fn_00698510 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00686731: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00687ae0
extern "C" __declspec(naked) void asm_00687ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, ebx }
	__asm { je L_00687b1a }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { L_00687af3: }
	__asm { cmp edi, esi }
	__asm { je L_00687b03 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_00687b03: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { add esi, 0x1c }
	__asm { add edi, 0x1c }
	__asm { cmp esi, ebx }
	__asm { jne L_00687af3 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00687b1a: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00687b80
extern "C" __declspec(naked) void asm_00687b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp ebx, esi }
	__asm { je L_00687bba }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { L_00687b93: }
	__asm { sub esi, 0x1c }
	__asm { sub edi, 0x1c }
	__asm { cmp edi, esi }
	__asm { je L_00687ba9 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_00687ba9: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { cmp esi, ebx }
	__asm { jne L_00687b93 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00687bba: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00687bd0();
// FUNCTION: ROBLOXSTUDIO 0x00688290
extern "C" __declspec(naked) void asm_00688290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, edi }
	__asm { sub esi, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_006882e2 }
	__asm { L_006882b8: }
	__asm { push 0 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00687bd0 }
	__asm { sub esi, 0x1c }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0xc }
	__asm { sub edi, 0x1c }
	__asm { cmp eax, 1 }
	__asm { jg L_006882b8 }
	__asm { L_006882e2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00654ea0();
// FUNCTION: ROBLOXSTUDIO 0x00689de0
extern "C" __declspec(naked) void asm_00689de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push 1 }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov esi, ecx }
	__asm { call fn_00654ea0 }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 4], edi }
	__asm { jle L_00689e2a }
	__asm { xor edx, edx }
	__asm { mov edi, edi }
	__asm { L_00689e00: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [esi] }
	__asm { fld dword ptr [ecx + edx + 4] }
	__asm { add ecx, edx }
	__asm { add eax, edx }
	__asm { inc edi }
	__asm { fstp dword ptr [eax + 4] }
	__asm { add edx, 0x14 }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [eax + 0x10] }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jl L_00689e00 }
	__asm { L_00689e2a: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0068a170
extern "C" __declspec(naked) void asm_0068a170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test eax, eax }
	__asm { jne L_0068a198 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068a198: }
	__asm { cmp eax, 0x9249249 }
	__asm { jbe L_0068a1aa }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0068a1aa: }
	__asm { push edi }
	__asm { lea edi, [eax*8] }
	__asm { sub edi, eax }
	__asm { shl edi, 2 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0068a1d6 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068a1d6: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_00e99304[];
extern "C" char g_012de44c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0068a630
extern "C" __declspec(naked) void asm_0068a630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42cae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012de44c] }
	__asm { test al, 1 }
	__asm { jne L_0068a69c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de44c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e99304] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12de320 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde06f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0068a69c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12de320 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0068a940();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068b7a0
extern "C" __declspec(naked) void asm_0068b7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0068b7dc }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_0068b7c3 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068a940 }
	__asm { L_0068b7c3: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0068b7dc: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0068aad0();
extern "C" void fn_0068ac00();
// FUNCTION: ROBLOXSTUDIO 0x0068b820
extern "C" __declspec(naked) void asm_0068b820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0068b858 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_0068b843 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068aad0 }
	__asm { L_0068b843: }
	__asm { mov ecx, esi }
	__asm { call fn_0068ac00 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0068b858: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0068a890();
// FUNCTION: ROBLOXSTUDIO 0x0068bb40
extern "C" __declspec(naked) void asm_0068bb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_0068a890 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_0068bba1 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_0068bb60: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_0068bb6b }
	__asm { add esi, -0xc }
	__asm { jmp L_0068bb6d }
	__asm { L_0068bb6b: }
	__asm { xor esi, esi }
	__asm { L_0068bb6d: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_0068bb88 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0xc] }
	__asm { jmp L_0068bb9a }
	__asm { L_0068bb88: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea edx, [esi + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_0068bb9a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_0068bb60 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0068bba1: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0068a890();
// FUNCTION: ROBLOXSTUDIO 0x0068bbb0
extern "C" __declspec(naked) void asm_0068bbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_0068a890 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_0068bc11 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_0068bbd0: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_0068bbdb }
	__asm { add esi, -4 }
	__asm { jmp L_0068bbdd }
	__asm { L_0068bbdb: }
	__asm { xor esi, esi }
	__asm { L_0068bbdd: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_0068bbf8 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { jmp L_0068bc0a }
	__asm { L_0068bbf8: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edx, [esi + 4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_0068bc0a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_0068bbd0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0068bc11: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0068a890();
extern "C" void fn_0068bb40();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x0068bc20
extern "C" __declspec(naked) void asm_0068bc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_0068bc54 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_0068a890 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068bc54: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_0068bc8a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_0068bc8a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068bb40 }
	__asm { L_0068bc8a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0068a890();
extern "C" void fn_0068bbb0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x0068bca0
extern "C" __declspec(naked) void asm_0068bca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_0068bcd4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_0068a890 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068bcd4: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_0068bd0a }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_0068bd0a }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068bbb0 }
	__asm { L_0068bd0a: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x0068d7c0
extern "C" __declspec(naked) void asm_0068d7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { shr eax, 0x14 }
	__asm { test al, 1 }
	__asm { je L_0068d7dc }
	__asm { mov edx, dword ptr [edx] }
	__asm { jmp L_0068d7e1 }
	__asm { L_0068d7dc: }
	__asm { mov edx, 0xf12f2d }
	__asm { L_0068d7e1: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_0068d80d }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068d80d: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_0068d813: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0068d813 }
	__asm { sub ecx, edi }
	__asm { pop edi }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10618[];
extern "C" void fn_0068fcd0();
// FUNCTION: ROBLOXSTUDIO 0x0068df20
extern "C" __declspec(naked) void asm_0068df20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { inc dword ptr [esi] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov dl, byte ptr [eax] }
	__asm { lea ecx, [eax + 1] }
	__asm { mov dword ptr [esi], ecx }
	__asm { cmp dl, 0x61 }
	__asm { jne L_0068df6a }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { mov dword ptr [esi], ecx }
	__asm { cmp al, 0x6c }
	__asm { jne L_0068df6a }
	__asm { mov al, byte ptr [ecx] }
	__asm { lea edx, [ecx + 1] }
	__asm { mov dword ptr [esi], edx }
	__asm { cmp al, 0x73 }
	__asm { jne L_0068df6a }
	__asm { mov cl, byte ptr [edx] }
	__asm { lea eax, [edx + 1] }
	__asm { mov dword ptr [esi], eax }
	__asm { cmp cl, 0x65 }
	__asm { jne L_0068df6a }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { call fn_0068fcd0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0068df6a: }
	__asm { mov dword ptr [edi + 0x58], 0xe3f364 }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { push 1 }
	__asm { dec eax }
	__asm { mov dword ptr [edi + 0x5c], eax }
	__asm { lea eax, [edi + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10618] }
}

extern "C" char g_00e10618[];
extern "C" void fn_00690180();
// FUNCTION: ROBLOXSTUDIO 0x0068e020
extern "C" __declspec(naked) void asm_0068e020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { inc dword ptr [esi] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov dl, byte ptr [eax] }
	__asm { lea ecx, [eax + 1] }
	__asm { mov dword ptr [esi], ecx }
	__asm { cmp dl, 0x75 }
	__asm { jne L_0068e05f }
	__asm { mov al, byte ptr [ecx] }
	__asm { lea edx, [ecx + 1] }
	__asm { mov dword ptr [esi], edx }
	__asm { cmp al, 0x6c }
	__asm { jne L_0068e05f }
	__asm { mov cl, byte ptr [edx] }
	__asm { lea eax, [edx + 1] }
	__asm { mov dword ptr [esi], eax }
	__asm { cmp cl, 0x6c }
	__asm { jne L_0068e05f }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00690180 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0068e05f: }
	__asm { mov dword ptr [edi + 0x58], 0xe3f364 }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { push 1 }
	__asm { dec eax }
	__asm { mov dword ptr [edi + 0x5c], eax }
	__asm { lea eax, [edi + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10618] }
}

extern "C" char g_00e10618[];
extern "C" void fn_0068fcd0();
// FUNCTION: ROBLOXSTUDIO 0x0068ead0
extern "C" __declspec(naked) void asm_0068ead0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { inc dword ptr [esi] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov dl, byte ptr [eax] }
	__asm { lea ecx, [eax + 1] }
	__asm { mov dword ptr [esi], ecx }
	__asm { cmp dl, 0x72 }
	__asm { jne L_0068eb11 }
	__asm { mov al, byte ptr [ecx] }
	__asm { lea edx, [ecx + 1] }
	__asm { mov dword ptr [esi], edx }
	__asm { cmp al, 0x75 }
	__asm { jne L_0068eb11 }
	__asm { mov cl, byte ptr [edx] }
	__asm { lea eax, [edx + 1] }
	__asm { mov dword ptr [esi], eax }
	__asm { cmp cl, 0x65 }
	__asm { jne L_0068eb11 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { call fn_0068fcd0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0068eb11: }
	__asm { mov dword ptr [edi + 0x58], 0xe3f364 }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { push 1 }
	__asm { mov dword ptr [edi + 0x5c], eax }
	__asm { lea eax, [edi + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10618] }
}

extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x0068ec10
extern "C" __declspec(naked) void asm_0068ec10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { shl ecx, 4 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { lea eax, [edx + ecx] }
	__asm { cmp eax, dword ptr [ebx + 0x10] }
	__asm { jb L_0068ec63 }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x14] }
	__asm { mov esi, edx }
	__asm { sub edx, eax }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { add edi, edi }
	__asm { sub esi, eax }
	__asm { cmp edi, edx }
	__asm { cmovb edi, edx }
	__asm { push edi }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { push eax }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + esi] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [ebx + 0x14], edi }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { pop esi }
	__asm { L_0068ec63: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebx + 0xc], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0068f930();
// FUNCTION: ROBLOXSTUDIO 0x0068f700
extern "C" __declspec(naked) void asm_0068f700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13951 }
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
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0068f930 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0068f761 }
	__asm { test al, 1 }
	__asm { jne L_0068f761 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0068f761 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0068f761: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0068f780
extern "C" __declspec(naked) void asm_0068f780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], 0x1206 }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { test esi, esi }
	__asm { jl L_0068f7cc }
	__asm { jg L_0068f7a0 }
	__asm { test edx, edx }
	__asm { jb L_0068f7cc }
	__asm { L_0068f7a0: }
	__asm { xor eax, eax }
	__asm { or eax, esi }
	__asm { mov dword ptr [ecx + 0xc], 0x3206 }
	__asm { jne L_0068f7b4 }
	__asm { mov dword ptr [ecx + 0xc], 0x3a06 }
	__asm { L_0068f7b4: }
	__asm { and edx, 0x80000000 }
	__asm { or edx, esi }
	__asm { mov eax, ecx }
	__asm { jne L_0068f7e4 }
	__asm { or dword ptr [ecx + 0xc], 0x400 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0068f7cc: }
	__asm { cmp esi, -1 }
	__asm { jl L_0068f7e2 }
	__asm { jg L_0068f7db }
	__asm { cmp edx, 0x80000000 }
	__asm { jb L_0068f7e2 }
	__asm { L_0068f7db: }
	__asm { mov dword ptr [ecx + 0xc], 0x1606 }
	__asm { L_0068f7e2: }
	__asm { mov eax, ecx }
	__asm { L_0068f7e4: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10268[];
extern "C" char g_00e10388[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068fac0
extern "C" __declspec(naked) void asm_0068fac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp esi, edi }
	__asm { je L_0068fb24 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0068faf7 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0068faf7: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_0068fb24: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x0068fcd0
extern "C" __declspec(naked) void asm_0068fcd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp eax, dword ptr [edi + 0x20] }
	__asm { jb L_0068fd13 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov edx, dword ptr [edi + 0x24] }
	__asm { push esi }
	__asm { sub ebx, ecx }
	__asm { lea esi, [edx + edx] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x24], esi }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { pop esi }
	__asm { L_0068fd13: }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ecx + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_0068fd32 }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp + 8], al }
	__asm { setne al }
	__asm { add eax, 0x101 }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_0068fd32: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x0068fd40
extern "C" __declspec(naked) void asm_0068fd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp eax, dword ptr [edi + 0x20] }
	__asm { jb L_0068fd83 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov edx, dword ptr [edi + 0x24] }
	__asm { push esi }
	__asm { sub ebx, ecx }
	__asm { lea esi, [edx + edx] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x24], esi }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { pop esi }
	__asm { L_0068fd83: }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ecx + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_0068fd9e }
	__asm { fld qword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0xc], 0x4206 }
	__asm { fstp qword ptr [ecx] }
	__asm { L_0068fd9e: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0068f780();
extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x00690030
extern "C" __declspec(naked) void asm_00690030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp eax, dword ptr [edi + 0x20] }
	__asm { jb L_00690073 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov edx, dword ptr [edi + 0x24] }
	__asm { push esi }
	__asm { sub ebx, ecx }
	__asm { lea esi, [edx + edx] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x24], esi }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { pop esi }
	__asm { L_00690073: }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ecx + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_0069008d }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0068f780 }
	__asm { L_0069008d: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x006900a0
extern "C" __declspec(naked) void asm_006900a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp eax, dword ptr [edi + 0x20] }
	__asm { jb L_006900e2 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov edx, dword ptr [edi + 0x24] }
	__asm { sub ebx, ecx }
	__asm { lea esi, [edx + edx] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x24], esi }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { L_006900e2: }
	__asm { mov esi, dword ptr [edi + 0x1c] }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { test esi, esi }
	__asm { je L_0069010c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { mov dword ptr [esi + 0xc], 0x1606 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { test ecx, ecx }
	__asm { js L_0069010c }
	__asm { mov dword ptr [esi + 0xc], 0x3e06 }
	__asm { L_0069010c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
// FUNCTION: ROBLOXSTUDIO 0x00690120
extern "C" __declspec(naked) void asm_00690120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { add edi, 3 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { and edi, 0xfffffffc }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { add eax, edi }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jbe L_00690163 }
	__asm { cmp dword ptr [ebx + 4], edi }
	__asm { push esi }
	__asm { mov esi, edi }
	__asm { cmova esi, dword ptr [ebx + 4] }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [ebx], eax }
	__asm { pop esi }
	__asm { L_00690163: }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { lea eax, [edx + 0xc] }
	__asm { add eax, ecx }
	__asm { add ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x00690180
extern "C" __declspec(naked) void asm_00690180()
{
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp eax, dword ptr [edi + 0x20] }
	__asm { jb L_006901c0 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov edx, dword ptr [edi + 0x24] }
	__asm { push esi }
	__asm { sub ebx, ecx }
	__asm { lea esi, [edx + edx] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x24], esi }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { pop esi }
	__asm { L_006901c0: }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ecx + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_006901d6 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { L_006901d6: }
	__asm { ret }
}

extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x006902a0
extern "C" __declspec(naked) void asm_006902a0()
{
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp eax, dword ptr [edi + 0x20] }
	__asm { jb L_006902e0 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov edx, dword ptr [edi + 0x24] }
	__asm { push esi }
	__asm { sub ebx, ecx }
	__asm { lea esi, [edx + edx] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x24], esi }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { pop esi }
	__asm { L_006902e0: }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ecx + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00690300 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ecx + 0xc], 4 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_00690300: }
	__asm { ret }
}

extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x00690310
extern "C" __declspec(naked) void asm_00690310()
{
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp eax, dword ptr [edi + 0x20] }
	__asm { jb L_00690350 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov edx, dword ptr [edi + 0x24] }
	__asm { push esi }
	__asm { sub ebx, ecx }
	__asm { lea esi, [edx + edx] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x24], esi }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { pop esi }
	__asm { L_00690350: }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ecx + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00690370 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ecx + 0xc], 3 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_00690370: }
	__asm { ret }
}

extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x00690420
extern "C" __declspec(naked) void asm_00690420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp eax, dword ptr [edi + 0x20] }
	__asm { jb L_00690463 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov edx, dword ptr [edi + 0x24] }
	__asm { push esi }
	__asm { sub ebx, ecx }
	__asm { lea esi, [edx + edx] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x24], esi }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { pop esi }
	__asm { L_00690463: }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ecx + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00690490 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0xc], 0x3a06 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { test eax, eax }
	__asm { js L_00690490 }
	__asm { mov dword ptr [ecx + 0xc], 0x3e06 }
	__asm { L_00690490: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de1f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0067a870();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00692f10
extern "C" __declspec(naked) void asm_00692f10()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00692faa }
	__asm { cmp dword ptr [g_012de1f4], 0x29a }
	__asm { je L_00692f5f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00692f4a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00692f5f }
	__asm { L_00692f4a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00692f5f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00692faa }
	__asm { cmp dword ptr [g_012de1f4], 0x29a }
	__asm { je L_00692faa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00692f95 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00692faa }
	__asm { L_00692f95: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00692faa: }
	__asm { jmp fn_0067a870 }
}

extern "C" char g_012de4e8[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00693b00
extern "C" __declspec(naked) void asm_00693b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47ce8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ax, word ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov word ptr [esi], ax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { cmp byte ptr [g_012de4e8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00693b81 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 8], 0x12de4e4 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 8], 0x695b60 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_012de4e8], 1 }
	__asm { L_00693b81: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x006942c0
extern "C" __declspec(naked) void asm_006942c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_00694304 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_00694304 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp eax, dword ptr [edx + 8] }
	__asm { jne L_00694304 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { cmp eax, dword ptr [edx + 0xc] }
	__asm { jne L_00694304 }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { cmp eax, dword ptr [edx + 0x10] }
	__asm { jne L_00694304 }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { cmp eax, dword ptr [edx + 0x14] }
	__asm { jne L_00694304 }
	__asm { mov ecx, 1 }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00694304: }
	__asm { xor ecx, ecx }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00695c20
extern "C" __declspec(naked) void asm_00695c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00695c6e }
	__asm { cmp word ptr [esi], -1 }
	__asm { jge L_00695c6e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00695c5d }
	__asm { push 0x2b }
	__asm { push 0xe3f7a0 }
	__asm { push 0xe3f7f0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00695c6e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00695c5d: }
	__asm { movzx eax, al }
	__asm { push 0xe3f800 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00695c6e: }
	__asm { movsx eax, word ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add eax, 4 }
	__asm { lea eax, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + eax*4] }
	__asm { cmp dword ptr [eax + ecx*8], esi }
	__asm { lea eax, [eax + ecx*8] }
	__asm { je L_00695c8e }
	__asm { L_00695c85: }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 0x18 }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00695c85 }
	__asm { L_00695c8e: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00699370
extern "C" __declspec(naked) void asm_00699370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006993c4 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_006993bd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006993ac }
	__asm { push 0x1e7 }
	__asm { push 0xe40e40 }
	__asm { push 0xe40fc4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006993bd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006993ac: }
	__asm { movzx eax, al }
	__asm { push 0xe41030 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006993bd: }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006993c4: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de579[];
extern "C" void fn_00770e20();
// FUNCTION: ROBLOXSTUDIO 0x0069b530
extern "C" __declspec(naked) void asm_0069b530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi], 0x10 }
	__asm { mov dword ptr [ebp + 8], 0x400 }
	__asm { call fn_00770e20 }
	__asm { cmp eax, 0x400 }
	__asm { lea edx, [ebp + 0xc] }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmovle ecx, edx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul dword ptr [esi] }
	__asm { shr edx, 1 }
	__asm { mov dword ptr [edi + 8], edx }
	__asm { jne L_0069b57a }
	__asm { mov dword ptr [edi + 8], 0x800000 }
	__asm { L_0069b57a: }
	__asm { mov al, byte ptr [g_012de579] }
	__asm { mov dword ptr [edi], 0x20 }
	__asm { test al, al }
	__asm { je L_0069b592 }
	__asm { movzx ecx, al }
	__asm { shl ecx, 0x14 }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { L_0069b592: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0069d470();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0069b680
extern "C" __declspec(naked) void asm_0069b680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14300 }
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
	__asm { je L_0069b6d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe41514 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0069b6da }
	__asm { L_0069b6d8: }
	__asm { xor eax, eax }
	__asm { L_0069b6da: }
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
	__asm { call fn_0069d470 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}
