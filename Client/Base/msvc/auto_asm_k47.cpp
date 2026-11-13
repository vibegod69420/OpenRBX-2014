// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00cbad90();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00cbec80
extern "C" __declspec(naked) void asm_00cbec80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp dword ptr [edi + 4], eax }
	__asm { jne L_00cbed04 }
	__asm { test eax, eax }
	__asm { jne L_00cbec9b }
	__asm { mov dword ptr [edi + 8], 0x10 }
	__asm { jmp L_00cbeca0 }
	__asm { L_00cbec9b: }
	__asm { add eax, eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { L_00cbeca0: }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00cbad90 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov ebx, eax }
	__asm { je L_00cbed01 }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 4], esi }
	__asm { jbe L_00cbecde }
	__asm { L_00cbecc1: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea edx, [esi*8] }
	__asm { inc esi }
	__asm { mov eax, dword ptr [ecx + edx] }
	__asm { mov dword ptr [edx + ebx], eax }
	__asm { mov eax, dword ptr [ecx + edx + 4] }
	__asm { mov dword ptr [edx + ebx + 4], eax }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jb L_00cbecc1 }
	__asm { L_00cbecde: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00cbed00 }
	__asm { push 0x403160 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00cbed00: }
	__asm { pop esi }
	__asm { L_00cbed01: }
	__asm { mov dword ptr [edi], ebx }
	__asm { pop ebx }
	__asm { L_00cbed04: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea edx, [eax + ecx*8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { inc dword ptr [edi + 4] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00cbed30
extern "C" __declspec(naked) void asm_00cbed30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { jne L_00cbedbb }
	__asm { test eax, eax }
	__asm { jne L_00cbed4b }
	__asm { mov dword ptr [esi + 8], 0x10 }
	__asm { jmp L_00cbed50 }
	__asm { L_00cbed4b: }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00cbed50: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push ebx }
	__asm { test eax, eax }
	__asm { jne L_00cbed5c }
	__asm { xor ebx, ebx }
	__asm { jmp L_00cbed77 }
	__asm { L_00cbed5c: }
	__asm { xor ecx, ecx }
	__asm { mov edx, 0x10 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { L_00cbed77: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00cbedb8 }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 4], edi }
	__asm { jbe L_00cbedad }
	__asm { xor edx, edx }
	__asm { L_00cbed86: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add ecx, edx }
	__asm { inc edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + ebx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + ebx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + ebx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + ebx + 0xc], eax }
	__asm { add edx, 0x10 }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jb L_00cbed86 }
	__asm { L_00cbedad: }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { L_00cbedb8: }
	__asm { mov dword ptr [esi], ebx }
	__asm { pop ebx }
	__asm { L_00cbedbb: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { shl edx, 4 }
	__asm { add edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00cbedf0
extern "C" __declspec(naked) void asm_00cbedf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { jne L_00cbee86 }
	__asm { test eax, eax }
	__asm { jne L_00cbee10 }
	__asm { mov dword ptr [esi + 8], 0x10 }
	__asm { jmp L_00cbee15 }
	__asm { L_00cbee10: }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00cbee15: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_00cbee35 }
	__asm { xor ecx, ecx }
	__asm { mov edx, 0x10 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { L_00cbee35: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_00cbee81 }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 4], edi }
	__asm { jbe L_00cbee76 }
	__asm { push ebx }
	__asm { mov ebx, 0xfffffff8 }
	__asm { lea edx, [eax + 8] }
	__asm { sub ebx, eax }
	__asm { L_00cbee50: }
	__asm { lea ecx, [ebx + edx] }
	__asm { add ecx, dword ptr [esi] }
	__asm { inc edi }
	__asm { lea edx, [edx + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx - 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx - 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx - 0xc], eax }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jb L_00cbee50 }
	__asm { pop ebx }
	__asm { L_00cbee76: }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { L_00cbee81: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00cbee86: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { shl edx, 4 }
	__asm { add edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cbed30();
// FUNCTION: ROBLOXSTUDIO 0x00cbf720
extern "C" __declspec(naked) void asm_00cbf720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { call fn_00cbed30 }
	__asm { test esi, esi }
	__asm { je L_00cbf7fe }
	__asm { mov edi, edi }
	__asm { L_00cbf760: }
	__asm { mov edi, dword ptr [edi] }
	__asm { lea eax, [esi - 1] }
	__asm { shr eax, 1 }
	__asm { mov ecx, eax }
	__asm { shl ecx, 4 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { lea edx, [edi + ecx] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp + 0x14], edi }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { cmp ecx, dword ptr [ebx + 4] }
	__asm { jb L_00cbf7fe }
	__asm { ja L_00cbf78b }
	__asm { mov ecx, dword ptr [edx] }
	__asm { cmp ecx, dword ptr [ebx] }
	__asm { jbe L_00cbf7fe }
	__asm { L_00cbf78b: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { shl esi, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov edx, dword ptr [esi + edi] }
	__asm { mov esi, dword ptr [esi + edi + 4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov ebx, dword ptr [eax + ecx + 0xc] }
	__asm { mov edi, dword ptr [eax + edi + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [edx + eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { add ecx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { mov dword ptr [ecx + 8], edi }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 0xc], ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { test eax, eax }
	__asm { jne L_00cbf760 }
	__asm { L_00cbf7fe: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cbed30();
extern "C" void fn_00cbf720();
// FUNCTION: ROBLOXSTUDIO 0x00cbfc30
extern "C" __declspec(naked) void asm_00cbfc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0xc], 0 }
	__asm { jne L_00cbfccb }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edx, edx }
	__asm { je L_00cbfc80 }
	__asm { lea ecx, [edx - 1] }
	__asm { shr ecx, 1 }
	__asm { cmp ecx, edx }
	__asm { jae L_00cbfc80 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, ecx }
	__asm { shl eax, 4 }
	__asm { add eax, dword ptr [esi] }
	__asm { L_00cbfc67: }
	__asm { cmp ebx, dword ptr [eax + 4] }
	__asm { jb L_00cbfcb1 }
	__asm { ja L_00cbfc78 }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { cmp edi, dword ptr [eax] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { jb L_00cbfcb1 }
	__asm { L_00cbfc78: }
	__asm { inc ecx }
	__asm { add eax, 0x10 }
	__asm { cmp ecx, edx }
	__asm { jb L_00cbfc67 }
	__asm { L_00cbfc80: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00cbed30 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov byte ptr [esi + 0xc], 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cbfcb1: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00cbf720 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cbfccb: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00cbed30 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cbfd80();
// FUNCTION: ROBLOXSTUDIO 0x00cbfd00
extern "C" __declspec(naked) void asm_00cbfd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { cmp esi, ecx }
	__asm { ja L_00cbfd14 }
	__asm { sub ecx, esi }
	__asm { jmp L_00cbfd1b }
	__asm { L_00cbfd14: }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { sub eax, esi }
	__asm { add ecx, eax }
	__asm { L_00cbfd1b: }
	__asm { test ecx, ecx }
	__asm { je L_00cbfd6e }
	__asm { lea ecx, [esi + 1] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { xor esi, esi }
	__asm { cmp ecx, dword ptr [edx + 0xc] }
	__asm { mov eax, ecx }
	__asm { cmove eax, esi }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test edi, edi }
	__asm { jne L_00cbfd44 }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov edi, dword ptr [eax + ecx*4 - 4] }
	__asm { jmp L_00cbfd48 }
	__asm { L_00cbfd44: }
	__asm { mov edi, dword ptr [eax + edi*4 - 4] }
	__asm { L_00cbfd48: }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0xdfe }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { push 0xeff248 }
	__asm { push edi }
	__asm { lea ecx, [edx + 0x54] }
	__asm { call fn_00cbfd80 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cbfd6e: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012afa4c[];
// FUNCTION: ROBLOXSTUDIO 0x00cbfd80
extern "C" __declspec(naked) void asm_00cbfd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ecx + 0xe0] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test edx, edx }
	__asm { jne L_00cbfe00 }
	__asm { mov dword ptr [eax], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { dec dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { cmp dword ptr [esi + 0xc], edx }
	__asm { jle L_00cbfdc5 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp ebx, eax }
	__asm { jne L_00cbfdc5 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00cbfdc5: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test ecx, ecx }
	__asm { jne L_00cbfde0 }
	__asm { mov dword ptr [esi], ebx }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xc], ebx }
	__asm { mov dword ptr [ebx + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cbfde0: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ebx }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cbfe00: }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { mov eax, 0x8d3dcb09 }
	__asm { mul dword ptr [esi + 0x10] }
	__asm { shr edx, 7 }
	__asm { cmp dword ptr [ebx + 4], edx }
	__asm { jne L_00cbfe63 }
	__asm { cmp dword ptr [esi + 8], 4 }
	__asm { jl L_00cbfe63 }
	__asm { cmp ebx, dword ptr [esi] }
	__asm { jne L_00cbfe25 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00cbfe25: }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { dec dword ptr [esi + 8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebx + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebx }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0x24 }
	__asm { pop edi }
	__asm { L_00cbfe63: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012afa4c[];
// FUNCTION: ROBLOXSTUDIO 0x00cbfe70
extern "C" __declspec(naked) void asm_00cbfe70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test edx, edx }
	__asm { jne L_00cbfeed }
	__asm { mov dword ptr [eax], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { dec dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { cmp dword ptr [esi + 0xc], edx }
	__asm { jle L_00cbfeb2 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp ebx, eax }
	__asm { jne L_00cbfeb2 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00cbfeb2: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test ecx, ecx }
	__asm { jne L_00cbfecd }
	__asm { mov dword ptr [esi], ebx }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xc], ebx }
	__asm { mov dword ptr [ebx + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cbfecd: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ebx }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cbfeed: }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul dword ptr [esi + 0x10] }
	__asm { shr edx, 3 }
	__asm { cmp dword ptr [ebx + 4], edx }
	__asm { jne L_00cbff50 }
	__asm { cmp dword ptr [esi + 8], 4 }
	__asm { jl L_00cbff50 }
	__asm { cmp ebx, dword ptr [esi] }
	__asm { jne L_00cbff12 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00cbff12: }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { dec dword ptr [esi + 8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebx + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebx }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0x24 }
	__asm { pop edi }
	__asm { L_00cbff50: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00cc0390
extern "C" __declspec(naked) void asm_00cc0390()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0xeec] }
	__asm { test eax, eax }
	__asm { je L_00cc03d0 }
	__asm { cmp eax, 0x200 }
	__asm { jbe L_00cc03c6 }
	__asm { push dword ptr [esi + 0xee4] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xeec], 0 }
	__asm { mov dword ptr [esi + 0xee4], 0 }
	__asm { L_00cc03c6: }
	__asm { mov dword ptr [esi + 0xee8], 0 }
	__asm { L_00cc03d0: }
	__asm { mov eax, dword ptr [esi + 0xef8] }
	__asm { test eax, eax }
	__asm { je L_00cc040d }
	__asm { cmp eax, 0x200 }
	__asm { jbe L_00cc0403 }
	__asm { push dword ptr [esi + 0xef0] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xef8], 0 }
	__asm { mov dword ptr [esi + 0xef0], 0 }
	__asm { L_00cc0403: }
	__asm { mov dword ptr [esi + 0xef4], 0 }
	__asm { L_00cc040d: }
	__asm { mov eax, dword ptr [esi + 0xf04] }
	__asm { test eax, eax }
	__asm { je L_00cc044a }
	__asm { cmp eax, 0x200 }
	__asm { jbe L_00cc0440 }
	__asm { push dword ptr [esi + 0xefc] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xf04], 0 }
	__asm { mov dword ptr [esi + 0xefc], 0 }
	__asm { L_00cc0440: }
	__asm { mov dword ptr [esi + 0xf00], 0 }
	__asm { L_00cc044a: }
	__asm { mov eax, dword ptr [esi + 0xf10] }
	__asm { test eax, eax }
	__asm { je L_00cc0487 }
	__asm { cmp eax, 0x200 }
	__asm { jbe L_00cc047d }
	__asm { push dword ptr [esi + 0xf08] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xf10], 0 }
	__asm { mov dword ptr [esi + 0xf08], 0 }
	__asm { L_00cc047d: }
	__asm { mov dword ptr [esi + 0xf0c], 0 }
	__asm { L_00cc0487: }
	__asm { mov eax, dword ptr [esi + 0xf1c] }
	__asm { test eax, eax }
	__asm { je L_00cc04c4 }
	__asm { cmp eax, 0x200 }
	__asm { jbe L_00cc04ba }
	__asm { push dword ptr [esi + 0xf14] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xf1c], 0 }
	__asm { mov dword ptr [esi + 0xf14], 0 }
	__asm { L_00cc04ba: }
	__asm { mov dword ptr [esi + 0xf18], 0 }
	__asm { L_00cc04c4: }
	__asm { mov dword ptr [esi + 0xf20], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00bd0930();
extern "C" void fn_00c6ca60();
extern "C" void fn_00cbf940();
extern "C" void fn_00cc0980();
extern "C" void fn_00cc0b50();
extern "C" void fn_00cc4a90();
extern "C" void fn_00cf3f50();
extern "C" void fn_00cf3f70();
// FUNCTION: ROBLOXSTUDIO 0x00cc07b0
extern "C" __declspec(naked) void asm_00cc07b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 0xea0] }
	__asm { mov ecx, esi }
	__asm { call fn_00bd0930 }
	__asm { cmp dword ptr [edi + 0xf54], 0 }
	__asm { lea eax, [eax*8 - 0x48] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jbe L_00cc08e4 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov edi, edi }
	__asm { L_00cc07f0: }
	__asm { mov ecx, ebx }
	__asm { call fn_00c6ca60 }
	__asm { cmp byte ptr [edi + 0xf68], 0 }
	__asm { mov word ptr [ebp - 0x1c], 1 }
	__asm { mov byte ptr [ebp - 0x1a], 0 }
	__asm { je L_00cc0831 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x27] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf3f70 }
	__asm { fld qword ptr [ebp - 0xc] }
	__asm { mov al, byte ptr [ebp + 0x27] }
	__asm { fstp dword ptr [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 0x19], al }
	__asm { jmp L_00cc0835 }
	__asm { L_00cc0831: }
	__asm { mov byte ptr [ebp - 0x19], 0 }
	__asm { L_00cc0835: }
	__asm { mov ecx, ebx }
	__asm { call fn_00c6ca60 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_00cc0b50 }
	__asm { push 1 }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea ecx, [edi + 0xf50] }
	__asm { push ebx }
	__asm { call fn_00cc0980 }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push 0x5a }
	__asm { add esi, 7 }
	__asm { push 0xeff1f8 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { shr esi, 3 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x1030] }
	__asm { mov dword ptr [ebp - 0x34], esi }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { call fn_00cbf940 }
	__asm { add dword ptr [edi + 0x1020], esi }
	__asm { push 0x8b5 }
	__asm { push 0xeff248 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { adc dword ptr [edi + 0x1024], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { add dword ptr [edi + 0x1028], esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { adc dword ptr [edi + 0x102c], 0 }
	__asm { push esi }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cc4a90 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x20 }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea esi, [edi + 0xea0] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { call fn_00cf3f50 }
	__asm { cmp dword ptr [edi + 0xf54], 0 }
	__asm { ja L_00cc07f0 }
	__asm { pop ebx }
	__asm { L_00cc08e4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00c6cac0();
extern "C" void fn_00c6cae0();
extern "C" void fn_00c6e3a0();
extern "C" void fn_00cbb000();
// FUNCTION: ROBLOXSTUDIO 0x00cc0b50
extern "C" __declspec(naked) void asm_00cc0b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cae0 }
	__asm { cmp byte ptr [edi + 8], 0 }
	__asm { mov ecx, esi }
	__asm { je L_00cc0bac }
	__asm { call fn_00c6cae0 }
	__asm { cmp byte ptr [edi + 0xb], 0 }
	__asm { mov ecx, esi }
	__asm { je L_00cc0b7d }
	__asm { call fn_00c6cae0 }
	__asm { jmp L_00cc0b82 }
	__asm { L_00cc0b7d: }
	__asm { call fn_00c6cac0 }
	__asm { L_00cc0b82: }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea eax, [edx - 1] }
	__asm { and eax, 7 }
	__asm { sub edx, eax }
	__asm { add edx, 7 }
	__asm { mov dword ptr [esi], edx }
	__asm { cmp byte ptr [edi + 0xb], 0 }
	__asm { je L_00cc0c23 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6e3a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc0bac: }
	__asm { cmp byte ptr [edi + 9], 0 }
	__asm { je L_00cc0bc4 }
	__asm { call fn_00c6cac0 }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cae0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc0bc4: }
	__asm { call fn_00c6cac0 }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cac0 }
	__asm { cmp byte ptr [edi + 0xa], 0 }
	__asm { mov ecx, esi }
	__asm { je L_00cc0bdf }
	__asm { call fn_00c6cae0 }
	__asm { jmp L_00cc0be4 }
	__asm { L_00cc0bdf: }
	__asm { call fn_00c6cac0 }
	__asm { L_00cc0be4: }
	__asm { cmp byte ptr [edi + 0xc], 0 }
	__asm { mov ecx, esi }
	__asm { je L_00cc0bf3 }
	__asm { call fn_00c6cae0 }
	__asm { jmp L_00cc0bf8 }
	__asm { L_00cc0bf3: }
	__asm { call fn_00c6cac0 }
	__asm { L_00cc0bf8: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov ecx, esi }
	__asm { je L_00cc0c07 }
	__asm { call fn_00c6cae0 }
	__asm { jmp L_00cc0c0c }
	__asm { L_00cc0c07: }
	__asm { call fn_00c6cac0 }
	__asm { L_00cc0c0c: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push edi }
	__asm { lea eax, [ecx - 1] }
	__asm { and eax, 7 }
	__asm { sub ecx, eax }
	__asm { add ecx, 7 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00cbb000 }
	__asm { L_00cc0c23: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x00cc2660
extern "C" __declspec(naked) void asm_00cc2660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x28 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cc26ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00cc26ab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00cc26f8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xeff610 }
	__asm { mov dword ptr [esi + 8], 0xeff620 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xeff628 }
	__asm { mov dword ptr [esi + 8], 0xeff638 }
	__asm { jmp L_00cc26fa }
	__asm { L_00cc26f8: }
	__asm { xor esi, esi }
	__asm { L_00cc26fa: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00cc2717 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00cc2717: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e100c0[];
extern "C" char g_00e100f0[];
extern "C" char g_00e101c0[];
extern "C" char g_00e1054c[];
extern "C" char g_00e13164[];
extern "C" char g_00e13168[];
extern "C" void fn_00c688b0();
// FUNCTION: ROBLOXSTUDIO 0x00cc4820
extern "C" __declspec(naked) void asm_00cc4820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x54 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push esi }
	__asm { push 0x50 }
	__asm { push eax }
	__asm { call dword ptr [g_00e13168] }
	__asm { cmp eax, -1 }
	__asm { jne L_00cc487b }
	__asm { call dword ptr [g_00e101c0] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 0x400 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0x1300 }
	__asm { call dword ptr [g_00e100f0] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { push 0xeff704 }
	__asm { L_00cc4864: }
	__asm { call dword ptr [g_00e1054c] }
	__asm { add esp, 0xc }
	__asm { push dword ptr [ebp - 4] }
	__asm { call dword ptr [g_00e100c0] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc487b: }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call dword ptr [g_00e13164] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_00cc48b9 }
	__asm { call dword ptr [g_00e101c0] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 0x400 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0x1300 }
	__asm { call dword ptr [g_00e100f0] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { push 0xeff72c }
	__asm { jmp L_00cc4864 }
	__asm { L_00cc48b9: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { lea edx, [edi + 4] }
	__asm { L_00cc48c2: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00cc48df }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { inc ecx }
	__asm { add edx, 0x14 }
	__asm { cmp ecx, 0xa }
	__asm { jl L_00cc48c2 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc48df: }
	__asm { cmp ecx, 0xa }
	__asm { jge L_00cc4903 }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { lea esi, [edi + eax*4] }
	__asm { mov edi, 0xa }
	__asm { sub edi, ecx }
	__asm { L_00cc48f1: }
	__asm { push 0x131484c }
	__asm { mov ecx, esi }
	__asm { call fn_00c688b0 }
	__asm { add esi, 0x14 }
	__asm { dec edi }
	__asm { jne L_00cc48f1 }
	__asm { L_00cc4903: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e13128[];
extern "C" char g_00e13134[];
extern "C" char g_00e13138[];
extern "C" char g_00e13150[];
extern "C" char g_00e13160[];
// FUNCTION: ROBLOXSTUDIO 0x00cc4990
extern "C" __declspec(naked) void asm_00cc4990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { xor eax, eax }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e13138] }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 2 }
	__asm { mov word ptr [ebp - 0xe], ax }
	__asm { call dword ptr [g_00e13160] }
	__asm { mov edi, eax }
	__asm { cmp edi, -1 }
	__asm { jne L_00cc49cc }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc49cc: }
	__asm { mov eax, 2 }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00cc49ed }
	__asm { cmp byte ptr [eax], 0 }
	__asm { je L_00cc49ed }
	__asm { push eax }
	__asm { call dword ptr [g_00e13134] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { jmp L_00cc49f4 }
	__asm { L_00cc49ed: }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { L_00cc49f4: }
	__asm { push esi }
	__asm { push 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { call dword ptr [g_00e13128] }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e13150] }
	__asm { xor eax, eax }
	__asm { cmp esi, -1 }
	__asm { pop esi }
	__asm { setle al }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e13144[];
extern "C" char g_00e1315c[];
extern "C" char g_00e1316c[];
extern "C" char g_01314844[];
extern "C" void fn_00425500();
extern "C" void fn_00cc4bf0();
// FUNCTION: ROBLOXSTUDIO 0x00cc4b00
extern "C" __declspec(naked) void asm_00cc4b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [g_01314844] }
	__asm { sub esp, 0xc }
	__asm { test ecx, ecx }
	__asm { je L_00cc4b25 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc4b25: }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call fn_00425500 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e13144] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push 4 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00425500 }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e1315c] }
	__asm { mov ecx, dword ptr [g_01314844] }
	__asm { test ecx, ecx }
	__asm { je L_00cc4b8c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call dword ptr [eax + 4] }
	__asm { xor ebx, ebx }
	__asm { cmp eax, -1 }
	__asm { sete bl }
	__asm { jmp L_00cc4bc0 }
	__asm { L_00cc4b8c: }
	__asm { cmp esi, -1 }
	__asm { jne L_00cc4b95 }
	__asm { or ebx, esi }
	__asm { jmp L_00cc4bc0 }
	__asm { L_00cc4b95: }
	__asm { push 0x570 }
	__asm { push 0xeff6b8 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00cc4bf0 }
	__asm { add esp, 0x18 }
	__asm { cmp eax, -1 }
	__asm { je L_00cc4bb8 }
	__asm { xor ebx, ebx }
	__asm { jmp L_00cc4bc0 }
	__asm { L_00cc4bb8: }
	__asm { call dword ptr [g_00e1316c] }
	__asm { mov ebx, eax }
	__asm { L_00cc4bc0: }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00425500 }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e1315c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6bf20();
extern "C" void fn_00c6c5c0();
extern "C" void fn_00cc4e60();
extern "C" void fn_00cc5240();
// FUNCTION: ROBLOXSTUDIO 0x00cc51b0
extern "C" __declspec(naked) void asm_00cc51b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00cc5240 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6bf20 }
	__asm { mov cx, word ptr [ebp - 4] }
	__asm { mov dl, al }
	__asm { test cx, cx }
	__asm { je L_00cc5222 }
	__asm { movzx eax, cx }
	__asm { push ebx }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cc4e60 }
	__asm { movzx eax, word ptr [ebp - 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 0x10] }
	__asm { call fn_00c6c5c0 }
	__asm { mov bl, al }
	__asm { test bl, bl }
	__asm { je L_00cc5210 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { movzx edx, word ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov byte ptr [edx + ecx], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc5210: }
	__asm { mov ecx, esi }
	__asm { call fn_00cc5240 }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc5222: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { lea eax, [ecx - 1] }
	__asm { and eax, 7 }
	__asm { sub ecx, eax }
	__asm { add ecx, 7 }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { pop edi }
	__asm { mov al, dl }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cca0();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00cc5450
extern "C" __declspec(naked) void asm_00cc5450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0xd6710e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { lea edx, [ecx + 1] }
	__asm { L_00cc5471: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00cc5471 }
	__asm { sub ecx, edx }
	__asm { movzx eax, cx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { test al, 1 }
	__asm { jne L_00cc54ab }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_00cc54b0 }
	__asm { L_00cc54ab: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00cc54b0: }
	__asm { push esi }
	__asm { test al, al }
	__asm { jne L_00cc54cc }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { jmp L_00cc54cf }
	__asm { L_00cc54cc: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { L_00cc54cf: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { movzx eax, word ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cca0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_008bb540();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cc55e0
extern "C" __declspec(naked) void asm_00cc55e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6c3e1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_008bb540 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov word ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00cc564f }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov al, byte ptr [ebx + 0x18] }
	__asm { mov byte ptr [esi + 0x18], al }
	__asm { L_00cc564f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00c6c7a0();
extern "C" void fn_00c6d780();
extern "C" void fn_00cc5f30();
extern "C" void fn_00cc6100();
// FUNCTION: ROBLOXSTUDIO 0x00cc5bf0
extern "C" __declspec(naked) void asm_00cc5bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 4] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c6c7a0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test al, al }
	__asm { jne L_00cc5c2c }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { jb L_00cc5c20 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00cc5c20: }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cc5c2c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { jns L_00cc5c58 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6d780 }
	__asm { mov al, byte ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { and al, 0x7f }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00cc6100 }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cc5c58: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00cc5f30 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0057db00();
extern "C" void fn_00794900();
// FUNCTION: ROBLOXSTUDIO 0x00cc5e70
extern "C" __declspec(naked) void asm_00cc5e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { jne L_00cc5e87 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc5e87: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ebx, eax }
	__asm { shr ebx, 3 }
	__asm { add ebx, eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { test edi, edi }
	__asm { je L_00cc5ee8 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00cc5ee8 }
	__asm { L_00cc5eb8: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_00cc5ee8 }
	__asm { cmp esi, ebx }
	__asm { jne L_00cc5ee0 }
	__asm { test ecx, ecx }
	__asm { je L_00cc5ed7 }
	__asm { lea eax, [ecx - 8] }
	__asm { jmp L_00cc5ed9 }
	__asm { L_00cc5ed7: }
	__asm { xor eax, eax }
	__asm { L_00cc5ed9: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { cmp edx, dword ptr [eax] }
	__asm { je L_00cc5ef3 }
	__asm { L_00cc5ee0: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_00cc5eb8 }
	__asm { L_00cc5ee8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc5ef3: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00cc5efe }
	__asm { add eax, -8 }
	__asm { jmp L_00cc5f00 }
	__asm { L_00cc5efe: }
	__asm { xor eax, eax }
	__asm { L_00cc5f00: }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { call fn_00794900 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { call fn_0057db00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6cf00();
extern "C" void fn_00c6fc90();
extern "C" void fn_00cc5ad0();
extern "C" void fn_00cc5e70();
// FUNCTION: ROBLOXSTUDIO 0x00cc6290
extern "C" __declspec(naked) void asm_00cc6290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [ebx + 0x14], 0 }
	__asm { mov edi, ecx }
	__asm { jne L_00cc62a9 }
	__asm { mov byte ptr [ebp + 0xf], 0 }
	__asm { jmp L_00cc62dc }
	__asm { L_00cc62a9: }
	__asm { movzx eax, byte ptr [edi + 0x218] }
	__asm { mov byte ptr [ebp - 8], al }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], ebx }
	__asm { call fn_00cc5ad0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov al, byte ptr [eax + 4] }
	__asm { test al, al }
	__asm { jne L_00cc62f4 }
	__asm { mov al, byte ptr [ecx + 4] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { L_00cc62dc: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cc62f4: }
	__asm { mov eax, dword ptr [edi + 0x218] }
	__asm { add eax, 6 }
	__asm { mov ecx, edi }
	__asm { lea eax, [edi + eax*4] }
	__asm { push eax }
	__asm { call fn_00cc5e70 }
	__asm { mov eax, dword ptr [edi + 0x218] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + eax*4 + 0x18], ebx }
	__asm { mov al, byte ptr [edi + 0x218] }
	__asm { or al, 0x80 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { push 8 }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6fc90 }
	__asm { mov eax, dword ptr [edi + 0x218] }
	__asm { cdq }
	__asm { mov ecx, 0x7f }
	__asm { idiv ecx }
	__asm { add esp, 8 }
	__asm { inc edx }
	__asm { mov dword ptr [edi + 0x218], edx }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403110();
// FUNCTION: ROBLOXSTUDIO 0x00cc6670
extern "C" __declspec(naked) void asm_00cc6670()
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
	__asm { mov dword ptr [esi], 0 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00cc66aa }
	__asm { sub eax, 4 }
	__asm { L_00cc66aa: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_00cc66f8 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00cc66f8 }
	__asm { add eax, -0x30 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc66f8: }
	__asm { lea eax, [ebp - 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cc65b0();
extern "C" void fn_00d0da10();
// FUNCTION: ROBLOXSTUDIO 0x00cc6840
extern "C" __declspec(naked) void asm_00cc6840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movzx edx, word ptr [eax + 4] }
	__asm { movzx ebx, word ptr [eax] }
	__asm { push esi }
	__asm { push edi }
	__asm { movzx edi, word ptr [eax + 2] }
	__asm { mov esi, edi }
	__asm { and esi, 0xf }
	__asm { shl esi, 5 }
	__asm { mov eax, edx }
	__asm { and eax, 0x1f }
	__asm { add esi, eax }
	__asm { mov eax, ebx }
	__asm { and eax, 0x1f }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { sar bx, 5 }
	__asm { sar di, 4 }
	__asm { mov word ptr [ebp - 6], bx }
	__asm { mov word ptr [ebp - 4], di }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ebp - 6], eax }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { sar dx, 5 }
	__asm { inc eax }
	__asm { mov word ptr [ebp - 2], dx }
	__asm { add eax, ecx }
	__asm { je L_00cc689c }
	__asm { inc eax }
	__asm { jmp L_00cc689e }
	__asm { L_00cc689c: }
	__asm { xor eax, eax }
	__asm { L_00cc689e: }
	__asm { push eax }
	__asm { movsx edx, dx }
	__asm { lea eax, [ebp - 6] }
	__asm { push eax }
	__asm { shl edx, 5 }
	__asm { movsx eax, di }
	__asm { add edx, eax }
	__asm { movsx eax, bx }
	__asm { shl edx, 5 }
	__asm { add edx, eax }
	__asm { push edx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00cc65b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00cc68df }
	__asm { push esi }
	__asm { lea ecx, [eax + 8] }
	__asm { call fn_00d0da10 }
	__asm { test al, al }
	__asm { je L_00cc68df }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc68df: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00495680();
extern "C" void fn_006b9740();
extern "C" void fn_00d0dd40();
// FUNCTION: ROBLOXSTUDIO 0x00cc68f0
extern "C" __declspec(naked) void asm_00cc68f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { je L_00cc693d }
	__asm { cmp dword ptr [ebx + 0x1c], 0 }
	__asm { ja L_00cc693d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cc6928 }
	__asm { push 0x44 }
	__asm { push 0xeff890 }
	__asm { push 0xeafdd4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cc693d }
	__asm { L_00cc6928: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeff8d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cc693d: }
	__asm { mov esi, dword ptr [ebx] }
	__asm { test esi, esi }
	__asm { je L_00cc695b }
	__asm { L_00cc6943: }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00495680 }
	__asm { test eax, eax }
	__asm { jne L_00cc69a0 }
	__asm { mov esi, dword ptr [esi + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00cc695b }
	__asm { add esi, -0x30 }
	__asm { jne L_00cc6943 }
	__asm { L_00cc695b: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00cc6997 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cc6982 }
	__asm { push 0x55 }
	__asm { push 0xeff890 }
	__asm { push 0xf14aa8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cc6997 }
	__asm { L_00cc6982: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeff940 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cc6997: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc69a0: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebx], esi }
	__asm { call fn_00d0dd40 }
	__asm { movzx eax, word ptr [esi] }
	__asm { mov cx, word ptr [esi + 4] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { shl ax, 5 }
	__asm { mov word ptr [ebp - 0xc], ax }
	__asm { movzx eax, word ptr [esi + 2] }
	__asm { shl ax, 4 }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { shl cx, 5 }
	__asm { mov word ptr [edx + 4], cx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, ecx }
	__asm { and eax, 0x1f }
	__asm { add word ptr [edx], ax }
	__asm { mov eax, ecx }
	__asm { shr eax, 5 }
	__asm { shr ecx, 0xa }
	__asm { and eax, 0x1f }
	__asm { add word ptr [edx + 4], ax }
	__asm { and ecx, 0xf }
	__asm { add word ptr [edx + 2], cx }
	__asm { dec dword ptr [ebx + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cc6710();
extern "C" void fn_00d0dc40();
// FUNCTION: ROBLOXSTUDIO 0x00cc6a10
extern "C" __declspec(naked) void asm_00cc6a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movzx edx, word ptr [eax] }
	__asm { push esi }
	__asm { movzx esi, word ptr [eax + 2] }
	__asm { push edi }
	__asm { movzx edi, word ptr [eax + 4] }
	__asm { mov ebx, esi }
	__asm { and ebx, 0xf }
	__asm { mov eax, edi }
	__asm { and eax, 0x1f }
	__asm { shl ebx, 5 }
	__asm { add ebx, eax }
	__asm { mov eax, edx }
	__asm { and eax, 0x1f }
	__asm { sar dx, 5 }
	__asm { sar si, 4 }
	__asm { mov word ptr [ebp - 8], si }
	__asm { shl ebx, 5 }
	__asm { add ebx, eax }
	__asm { mov word ptr [ebp - 0xa], dx }
	__asm { mov eax, dword ptr [ebp - 0xa] }
	__asm { mov dword ptr [ebp - 0xa], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0xa] }
	__asm { sar di, 5 }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { mov word ptr [ebp - 6], di }
	__asm { call fn_00cc6710 }
	__asm { lea ecx, [eax + 8] }
	__asm { push ebx }
	__asm { call fn_00d0dc40 }
	__asm { movzx eax, al }
	__asm { add dword ptr [esi + 0x1c], eax }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_00cc6aa4 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00cc6aa4 }
	__asm { add eax, -0x30 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc6aa4: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop edi }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00cc7120
extern "C" __declspec(naked) void asm_00cc7120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6c4a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00cc7188 }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_00cc7188 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cc7173 }
	__asm { push 0x51 }
	__asm { push 0xefffb4 }
	__asm { push 0xefffec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cc7188 }
	__asm { L_00cc7173: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf000a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cc7188: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edx, [esi + 4] }
	__asm { cmp eax, edx }
	__asm { je L_00cc71a7 }
	__asm { L_00cc7192: }
	__asm { lea ecx, [eax] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { cmp eax, edx }
	__asm { jne L_00cc7192 }
	__asm { L_00cc71a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edx], edx }
	__asm { mov dword ptr [edx + 4], edx }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006c54a0();
// FUNCTION: ROBLOXSTUDIO 0x00cc7530
extern "C" __declspec(naked) void asm_00cc7530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006c54a0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], edx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00cc759d }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_00cc7596 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cc7581 }
	__asm { push 0x3c }
	__asm { push 0xefffb4 }
	__asm { push 0xefffec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cc7596 }
	__asm { L_00cc7581: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeffff8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cc7596: }
	__asm { mov dword ptr [esi + 0xc], 4 }
	__asm { L_00cc759d: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov dword ptr [eax], edx }
	__asm { inc dword ptr [esi] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00cc75fb }
	__asm { cmp dword ptr [esi + 0xc], 4 }
	__asm { je L_00cc75f4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cc75df }
	__asm { push 0x45 }
	__asm { push 0xefffb4 }
	__asm { push 0xf00048 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cc75f4 }
	__asm { L_00cc75df: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf00058 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cc75f4: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_00cc75fb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006c54a0();
// FUNCTION: ROBLOXSTUDIO 0x00cc7610
extern "C" __declspec(naked) void asm_00cc7610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006c54a0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], edx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00cc767d }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_00cc7676 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cc7661 }
	__asm { push 0x3c }
	__asm { push 0xefffb4 }
	__asm { push 0xefffec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cc7676 }
	__asm { L_00cc7661: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeffff8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cc7676: }
	__asm { mov dword ptr [esi + 0xc], 5 }
	__asm { L_00cc767d: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov dword ptr [eax], edx }
	__asm { inc dword ptr [esi] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00cc76db }
	__asm { cmp dword ptr [esi + 0xc], 5 }
	__asm { je L_00cc76d4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cc76bf }
	__asm { push 0x45 }
	__asm { push 0xefffb4 }
	__asm { push 0xf00048 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cc76d4 }
	__asm { L_00cc76bf: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf00058 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cc76d4: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_00cc76db: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6cf00();
extern "C" void fn_00c85d70();
extern "C" void fn_00ca6930();
// FUNCTION: ROBLOXSTUDIO 0x00cc7750
extern "C" __declspec(naked) void asm_00cc7750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { dec eax }
	__asm { cmp eax, 2 }
	__asm { ja L_00cc7771 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 2 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc7771: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 2 }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { call fn_00c6cf00 }
	__asm { call fn_00c85d70 }
	__asm { test al, al }
	__asm { jne L_00cc77ae }
	__asm { call fn_00ca6930 }
	__asm { test al, al }
	__asm { jne L_00cc77ae }
	__asm { push 1 }
	__asm { push 4 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc77ae: }
	__asm { push 1 }
	__asm { push 5 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c6cf00 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0092d390();
extern "C" void fn_0092d4d0();
// FUNCTION: ROBLOXSTUDIO 0x00cc81c0
extern "C" __declspec(naked) void asm_00cc81c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { lea eax, [edi + 0x90] }
	__asm { push eax }
	__asm { push 0xf001e0 }
	__asm { call fn_0092d390 }
	__asm { lea edx, [edi + 0xa8] }
	__asm { push edx }
	__asm { push 0x100a894 }
	__asm { mov ecx, eax }
	__asm { call fn_0092d4d0 }
	__asm { push edi }
	__asm { push 0xf001f0 }
	__asm { mov ecx, esi }
	__asm { call fn_0092d390 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { push ecx }
	__asm { push 0x100a894 }
	__asm { mov ecx, eax }
	__asm { call fn_0092d4d0 }
	__asm { lea eax, [edi + 0x48] }
	__asm { push eax }
	__asm { push 0xf00200 }
	__asm { mov ecx, esi }
	__asm { call fn_0092d390 }
	__asm { lea ecx, [edi + 0x60] }
	__asm { push ecx }
	__asm { push 0x100a894 }
	__asm { mov ecx, eax }
	__asm { call fn_0092d4d0 }
	__asm { lea eax, [edi + 0xd8] }
	__asm { push eax }
	__asm { push 0xf00210 }
	__asm { mov ecx, esi }
	__asm { call fn_0092d390 }
	__asm { lea ecx, [edi + 0xf0] }
	__asm { push ecx }
	__asm { push 0x100a894 }
	__asm { mov ecx, eax }
	__asm { call fn_0092d4d0 }
	__asm { lea eax, [edi + 0x120] }
	__asm { push eax }
	__asm { push 0xf00220 }
	__asm { mov ecx, esi }
	__asm { call fn_0092d390 }
	__asm { lea edx, [edi + 0x138] }
	__asm { push edx }
	__asm { push 0x100a894 }
	__asm { mov ecx, eax }
	__asm { call fn_0092d4d0 }
	__asm { lea eax, [edi + 0x168] }
	__asm { push eax }
	__asm { push 0xf0022c }
	__asm { mov ecx, esi }
	__asm { call fn_0092d390 }
	__asm { lea ecx, [edi + 0x180] }
	__asm { push ecx }
	__asm { push 0x100a894 }
	__asm { mov ecx, eax }
	__asm { call fn_0092d4d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
extern "C" void fn_00c86af0();
extern "C" void fn_00cc8a10();
// FUNCTION: ROBLOXSTUDIO 0x00cc8ad0
extern "C" __declspec(naked) void asm_00cc8ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { test eax, eax }
	__asm { je L_00cc8ae5 }
	__asm { add eax, 0x1c }
	__asm { jmp L_00cc8ae7 }
	__asm { L_00cc8ae5: }
	__asm { xor eax, eax }
	__asm { L_00cc8ae7: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_00cc8b3d }
	__asm { test eax, eax }
	__asm { je L_00cc8b3d }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_00cc8b3d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cc8b28 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cc8b3d }
	__asm { L_00cc8b28: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cc8b3d: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { add ecx, 0x212c }
	__asm { call fn_00cc8a10 }
	__asm { push dword ptr [esi + 0x24] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { call fn_00c86af0 }
	__asm { test al, al }
	__asm { je L_00cc8b72 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { push dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call dword ptr [eax + 0xe0] }
	__asm { L_00cc8b72: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e13084[];
extern "C" char g_00e1308c[];
extern "C" char g_012f86ac[];
extern "C" void fn_0084b3f0();
extern "C" void fn_008523c0();
extern "C" void fn_00c702e0();
extern "C" void fn_00c703b0();
extern "C" void fn_00c70570();
extern "C" void fn_00cc7750();
extern "C" void fn_00cc8570();
extern "C" void fn_00cc8870();
// FUNCTION: ROBLOXSTUDIO 0x00cc9930
extern "C" __declspec(naked) void asm_00cc9930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xf003d8 }
	__asm { mov ebx, ecx }
	__asm { call dword ptr [g_00e1308c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 6 }
	__asm { mov edi, dword ptr [esi] }
	__asm { add edi, 7 }
	__asm { push esi }
	__asm { shr edi, 3 }
	__asm { call fn_00cc7750 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c70570 }
	__asm { lea eax, [ebx + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c702e0 }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { call fn_008523c0 }
	__asm { add esp, 0x1c }
	__asm { mov ecx, eax }
	__asm { call fn_0084b3f0 }
	__asm { or eax, dword ptr [g_012f86ac] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c703b0 }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [ecx + 0x21c0] }
	__asm { cmp byte ptr [eax + 0x72], 0 }
	__asm { je L_00cc99c1 }
	__asm { push 2 }
	__asm { add ecx, 0xec8 }
	__asm { call fn_00cc8570 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { sub eax, edi }
	__asm { push eax }
	__asm { push 2 }
	__asm { add ecx, 0xec8 }
	__asm { call fn_00cc8870 }
	__asm { L_00cc99c1: }
	__asm { call dword ptr [g_00e13084] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e13084[];
extern "C" char g_00e1308c[];
extern "C" char g_012f86ac[];
extern "C" void fn_0084b3f0();
extern "C" void fn_008523c0();
extern "C" void fn_00c702e0();
extern "C" void fn_00c703b0();
extern "C" void fn_00c70570();
extern "C" void fn_00cc7750();
extern "C" void fn_00cc8570();
extern "C" void fn_00cc8870();
// FUNCTION: ROBLOXSTUDIO 0x00cc9a10
extern "C" __declspec(naked) void asm_00cc9a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xf00404 }
	__asm { mov ebx, ecx }
	__asm { call dword ptr [g_00e1308c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 5 }
	__asm { mov edi, dword ptr [esi] }
	__asm { add edi, 7 }
	__asm { push esi }
	__asm { shr edi, 3 }
	__asm { call fn_00cc7750 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00c70570 }
	__asm { lea eax, [ebx + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c702e0 }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { call fn_008523c0 }
	__asm { add esp, 0x1c }
	__asm { mov ecx, eax }
	__asm { call fn_0084b3f0 }
	__asm { or eax, dword ptr [g_012f86ac] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c703b0 }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [ecx + 0x21c0] }
	__asm { cmp byte ptr [eax + 0x72], 0 }
	__asm { je L_00cc9aa1 }
	__asm { push 2 }
	__asm { add ecx, 0xec8 }
	__asm { call fn_00cc8570 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { sub eax, edi }
	__asm { push eax }
	__asm { push 2 }
	__asm { add ecx, 0xec8 }
	__asm { call fn_00cc8870 }
	__asm { L_00cc9aa1: }
	__asm { call dword ptr [g_00e13084] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
extern "C" void fn_00cc9f30();
// FUNCTION: ROBLOXSTUDIO 0x00cc9e20
extern "C" __declspec(naked) void asm_00cc9e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6c8f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10344] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [g_00e10348] }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x1c], esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { test eax, eax }
	__asm { je L_00cc9e81 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00cc9e7d }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call edi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call ebx }
	__asm { jmp L_00cc9e81 }
	__asm { L_00cc9e7d: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00cc9e81: }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x20], esp }
	__asm { test eax, eax }
	__asm { je L_00cc9ec2 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00cc9ebe }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call edi }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call ebx }
	__asm { jmp L_00cc9ec2 }
	__asm { L_00cc9ebe: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00cc9ec2: }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00cc9efd }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00cc9ef9 }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call edi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call ebx }
	__asm { jmp L_00cc9efd }
	__asm { L_00cc9ef9: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00cc9efd: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cc9f30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x2c }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
// FUNCTION: ROBLOXSTUDIO 0x00cc9f30
extern "C" __declspec(naked) void asm_00cc9f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x2c] }
	__asm { cmp eax, dword ptr [ebp + 0x20] }
	__asm { je L_00cc9f99 }
	__asm { push ebx }
	__asm { L_00cc9f41: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { jne L_00cc9f4c }
	__asm { xor edx, edx }
	__asm { jmp L_00cc9f4e }
	__asm { L_00cc9f4c: }
	__asm { mov edx, dword ptr [ecx] }
	__asm { L_00cc9f4e: }
	__asm { mov esi, dword ptr [edx + 8] }
	__asm { mov ebx, dword ptr [ebp + 0x24] }
	__asm { mov ecx, eax }
	__asm { dec esi }
	__asm { shr ecx, 2 }
	__asm { and esi, ecx }
	__asm { and eax, 3 }
	__asm { test ebx, ebx }
	__asm { je L_00cc9f65 }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { L_00cc9f65: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { mov esi, dword ptr [ecx + esi*4] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [esi + eax*4] }
	__asm { shr ecx, 2 }
	__asm { dec edx }
	__asm { and edx, ecx }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { and edi, 3 }
	__asm { mov ecx, dword ptr [ecx + edx*4] }
	__asm { mov dword ptr [ecx + edi*4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x2c] }
	__asm { inc eax }
	__asm { inc edi }
	__asm { mov dword ptr [ebp + 0x2c], edi }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { cmp eax, dword ptr [ebp + 0x20] }
	__asm { jne L_00cc9f41 }
	__asm { pop ebx }
	__asm { L_00cc9f99: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00cc9fda }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00cc9fd6 }
	__asm { push 3 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10348] }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10344] }
	__asm { mov ecx, dword ptr [ebp + 0x2c] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cc9fd6: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00cc9fda: }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
extern "C" void fn_00cca100();
// FUNCTION: ROBLOXSTUDIO 0x00cc9ff0
extern "C" __declspec(naked) void asm_00cc9ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6c8f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10344] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [g_00e10348] }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x1c], esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { test eax, eax }
	__asm { je L_00cca051 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00cca04d }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call edi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call ebx }
	__asm { jmp L_00cca051 }
	__asm { L_00cca04d: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00cca051: }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x20], esp }
	__asm { test eax, eax }
	__asm { je L_00cca092 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00cca08e }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call edi }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call ebx }
	__asm { jmp L_00cca092 }
	__asm { L_00cca08e: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00cca092: }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00cca0cd }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00cca0c9 }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call edi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call ebx }
	__asm { jmp L_00cca0cd }
	__asm { L_00cca0c9: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00cca0cd: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cca100 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x2c }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x00cca260
extern "C" __declspec(naked) void asm_00cca260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cca2ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00cca2ab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00cca2fe }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xf00f90 }
	__asm { mov dword ptr [esi + 8], 0xf00fa0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xf00fa8 }
	__asm { mov dword ptr [esi + 8], 0xf00fb8 }
	__asm { jmp L_00cca300 }
	__asm { L_00cca2fe: }
	__asm { xor esi, esi }
	__asm { L_00cca300: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00cca31d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00cca31d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00cca340
extern "C" __declspec(naked) void asm_00cca340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cca38b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00cca38b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00cca3de }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xf00f08 }
	__asm { mov dword ptr [esi + 8], 0xf00f18 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xf00f20 }
	__asm { mov dword ptr [esi + 8], 0xf00f30 }
	__asm { jmp L_00cca3e0 }
	__asm { L_00cca3de: }
	__asm { xor esi, esi }
	__asm { L_00cca3e0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00cca3fd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00cca3fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_009c9900();
// FUNCTION: ROBLOXSTUDIO 0x00cca420
extern "C" __declspec(naked) void asm_00cca420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cca46b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00cca46b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00cca4be }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe9524c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xf00ed8 }
	__asm { mov dword ptr [esi + 8], 0xf00ee8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xf00ef0 }
	__asm { mov dword ptr [esi + 8], 0xf00f00 }
	__asm { jmp L_00cca4c0 }
	__asm { L_00cca4be: }
	__asm { xor esi, esi }
	__asm { L_00cca4c0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009c9900 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00cca4dd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00cca4dd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004b0770();
extern "C" void fn_00ccaa90();
extern "C" void fn_00cccdb0();
extern "C" void fn_00cde850();
extern "C" void fn_00cf6522();
extern "C" void fn_00d0ce00();
// FUNCTION: ROBLOXSTUDIO 0x00cca7f0
extern "C" __declspec(naked) void asm_00cca7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c408 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_00d0ce00 }
	__asm { movzx edx, byte ptr [esi] }
	__asm { lea ecx, [esi + 1] }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { add ecx, edx }
	__asm { je L_00cca829 }
	__asm { inc ecx }
	__asm { jmp L_00cca82b }
	__asm { L_00cca829: }
	__asm { xor ecx, ecx }
	__asm { L_00cca82b: }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ccaa90 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00cca85d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cca85d: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_00cca867 }
	__asm { inc eax }
	__asm { jmp L_00cca869 }
	__asm { L_00cca867: }
	__asm { xor eax, eax }
	__asm { L_00cca869: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cccdb0 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { test edx, edx }
	__asm { je L_00cca8a4 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { L_00cca8a4: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_00cde850 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b0770 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [esi + 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00cca8df }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cca8df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012e4cd4[];
extern "C" void fn_00403110();
extern "C" void fn_007af680();
extern "C" void fn_00813610();
// FUNCTION: ROBLOXSTUDIO 0x00ccb070
extern "C" __declspec(naked) void asm_00ccb070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xf0044c }
	__asm { mov dword ptr [esi + 4], 0xf004c4 }
	__asm { mov dword ptr [esi + 0x18], 0xf004cc }
	__asm { mov dword ptr [esi + 0x1c], 0xf004d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00813610 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4cd4] }
	__asm { mov dword ptr [esi + 0x64], 0xeb03e0 }
	__asm { push 0 }
	__asm { mov byte ptr [esi + 0x68], 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { mov dword ptr [esi], 0xf004ec }
	__asm { mov dword ptr [esi + 4], 0xf00564 }
	__asm { mov dword ptr [esi + 0x18], 0xf0056c }
	__asm { mov dword ptr [esi + 0x1c], 0xf00578 }
	__asm { mov dword ptr [esi + 0x64], 0xf00588 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00ccb120 }
	__asm { sub eax, 4 }
	__asm { L_00ccb120: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc97f[];
extern "C" void fn_006b8a90();
extern "C" void fn_00b7f8d0();
// FUNCTION: ROBLOXSTUDIO 0x00ccb160
extern "C" __declspec(naked) void asm_00ccb160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6783b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fldz }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { fstp qword ptr [edi + 0x18] }
	__asm { mov dword ptr [edi], 0xef6dac }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { call fn_00b7f8d0 }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov dword ptr [edi + 0x28], 0xffffffff }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov al, byte ptr [g_012fc97f] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00ccb1fa }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xef6e60 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00ccb1fa: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xf008ec }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x44], eax }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov byte ptr [edi + 0x4c], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
// FUNCTION: ROBLOXSTUDIO 0x00ccbae0
extern "C" __declspec(naked) void asm_00ccbae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [g_00e10348] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00ccbb17 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00ccbb15 }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call edx }
	__asm { lea ecx, [ebp - 4] }
	__asm { call dword ptr [g_00e10344] }
	__asm { mov edx, dword ptr [g_00e10348] }
	__asm { jmp L_00ccbb17 }
	__asm { L_00ccbb15: }
	__asm { mov ebx, dword ptr [eax] }
	__asm { L_00ccbb17: }
	__asm { mov edi, dword ptr [edi + 8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00ccbb59 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test eax, eax }
	__asm { jne L_00ccbb55 }
	__asm { push 3 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call edx }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call dword ptr [g_00e10344] }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ccbb55: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00ccbb59: }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
extern "C" void fn_00ccbae0();
extern "C" void fn_00ccce60();
// FUNCTION: ROBLOXSTUDIO 0x00ccd110
extern "C" __declspec(naked) void asm_00ccd110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6cc48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push 1 }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00ccbae0 }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00ccd182 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00ccd17e }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10348] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e10344] }
	__asm { jmp L_00ccd182 }
	__asm { L_00ccd17e: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00ccd182: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00ccce60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0042ba60();
extern "C" void fn_00b86090();
extern "C" void fn_00ce10d0();
// FUNCTION: ROBLOXSTUDIO 0x00ccd820
extern "C" __declspec(naked) void asm_00ccd820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ebx, [ecx + 0x298] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0042ba60 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00b86090 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [eax + 8] }
	__asm { je L_00ccd8ac }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00ccd850: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { test eax, eax }
	__asm { jne L_00ccd85b }
	__asm { xor esi, esi }
	__asm { jmp L_00ccd85d }
	__asm { L_00ccd85b: }
	__asm { mov esi, dword ptr [eax] }
	__asm { L_00ccd85d: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, edx }
	__asm { dec eax }
	__asm { shr ecx, 2 }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { and edx, 3 }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { mov ecx, dword ptr [eax + edx*4] }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { mov edx, dword ptr [ecx + 0x3c] }
	__asm { mov ecx, dword ptr [ecx + 0x40] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_00ccd88b }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_00ccd88b }
	__asm { cmp ecx, dword ptr [edi + 8] }
	__asm { je L_00ccd8b7 }
	__asm { L_00ccd88b: }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call fn_00ce10d0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00b86090 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [eax + 8] }
	__asm { jne L_00ccd850 }
	__asm { L_00ccd8ac: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ccd8b7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00ccbbe0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ccdcd0
extern "C" __declspec(naked) void asm_00ccdcd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, ecx }
	__asm { test al, 3 }
	__asm { jne L_00ccdcf6 }
	__asm { lea eax, [ecx + 4] }
	__asm { shr eax, 2 }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_00ccdcf6 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ccbbe0 }
	__asm { L_00ccdcf6: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push ebx }
	__asm { lea eax, [ecx*4 - 1] }
	__asm { and dword ptr [esi + 0xc], eax }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { add edi, dword ptr [esi + 0xc] }
	__asm { dec ecx }
	__asm { mov eax, edi }
	__asm { shr eax, 2 }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ebx, [ecx*4] }
	__asm { cmp dword ptr [ebx + eax], 0 }
	__asm { jne L_00ccdd3f }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00ccdd39 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ccdd39: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebx + eax], ecx }
	__asm { L_00ccdd3f: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { and edi, 3 }
	__asm { mov eax, dword ptr [eax + ebx] }
	__asm { lea ecx, [eax + edi*4] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00ccdd58 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00ccdd58: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00ccc190();
extern "C" void fn_00ccc5d0();
extern "C" void fn_00cce0c0();
extern "C" void fn_00cce350();
// FUNCTION: ROBLOXSTUDIO 0x00cce730
extern "C" __declspec(naked) void asm_00cce730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x288], 0 }
	__asm { je L_00cce7cd }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x23c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cce0c0 }
	__asm { test al, al }
	__asm { je L_00cce7cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00cce7a2 }
	__asm { cmp dword ptr [esi + 0x234], 0 }
	__asm { jge L_00cce7a2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cce791 }
	__asm { push 0x357 }
	__asm { push 0xf00728 }
	__asm { push 0xf00db4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cce7a2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cce791: }
	__asm { movzx eax, al }
	__asm { push 0xf00dd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cce7a2: }
	__asm { mov ecx, esi }
	__asm { call fn_00ccc190 }
	__asm { mov ecx, esi }
	__asm { call fn_00ccc5d0 }
	__asm { test al, al }
	__asm { je L_00cce7c6 }
	__asm { cmp byte ptr [esi + 0x288], 0 }
	__asm { je L_00cce7c6 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00cce350 }
	__asm { L_00cce7c6: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cce7cd: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01314240[];
extern "C" void fn_006b8aae();
extern "C" void fn_00c8e410();
// FUNCTION: ROBLOXSTUDIO 0x00ccecd0
extern "C" __declspec(naked) void asm_00ccecd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0x4c], 0 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov edx, dword ptr [esi + 0x3c] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { jne L_00cced60 }
	__asm { cmp eax, 0xfffff830 }
	__asm { jl L_00cced60 }
	__asm { cmp edx, 0xfffff830 }
	__asm { jl L_00cced60 }
	__asm { cmp ecx, 0xfffff830 }
	__asm { jl L_00cced60 }
	__asm { cmp eax, 0x7d0 }
	__asm { jg L_00cced60 }
	__asm { cmp edx, 0x7d0 }
	__asm { jg L_00cced60 }
	__asm { cmp ecx, 0x7d0 }
	__asm { jg L_00cced60 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_01314240] }
	__asm { test bl, bl }
	__asm { je L_00cced42 }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { movzx eax, bl }
	__asm { push 0xf00b20 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00cced42: }
	__asm { mov ecx, dword ptr [edi + 0x208] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00c8e410 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov byte ptr [esi + 0x4c], 1 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cced60: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c70030();
extern "C" void fn_00c70570();
extern "C" void fn_00c92ef0();
extern "C" void fn_00cc7750();
// FUNCTION: ROBLOXSTUDIO 0x00ccf1d0
extern "C" __declspec(naked) void asm_00ccf1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xd }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00cc7750 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { add esp, 8 }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { xor ebx, ebx }
	__asm { lea eax, [edx + 1] }
	__asm { lea edi, [esi + 0x38] }
	__asm { cmp dword ptr [esi + 0x3c], eax }
	__asm { jne L_00ccf20d }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00ccf242 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_00ccf242 }
	__asm { mov ebx, 1 }
	__asm { jmp L_00ccf242 }
	__asm { L_00ccf20d: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 0x40], eax }
	__asm { jne L_00ccf228 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00ccf242 }
	__asm { cmp dword ptr [esi + 0x3c], edx }
	__asm { jne L_00ccf242 }
	__asm { mov ebx, 2 }
	__asm { jmp L_00ccf242 }
	__asm { L_00ccf228: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { inc eax }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_00ccf242 }
	__asm { cmp dword ptr [esi + 0x3c], edx }
	__asm { jne L_00ccf242 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { mov edx, 3 }
	__asm { cmove ebx, edx }
	__asm { L_00ccf242: }
	__asm { test bl, 1 }
	__asm { setg al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c70570 }
	__asm { test bl, 2 }
	__asm { setg al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c70570 }
	__asm { add esp, 0x10 }
	__asm { test ebx, ebx }
	__asm { jne L_00ccf279 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c70030 }
	__asm { add esp, 8 }
	__asm { L_00ccf279: }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c92ef0 }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 0x24], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { sete al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00ccf830();
// FUNCTION: ROBLOXSTUDIO 0x00ccf750
extern "C" __declspec(naked) void asm_00ccf750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { je L_00ccf7f1 }
	__asm { test esi, esi }
	__asm { je L_00ccf770 }
	__asm { test edi, edi }
	__asm { jne L_00ccf7a3 }
	__asm { L_00ccf770: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ccf78e }
	__asm { push 0x33 }
	__asm { push 0xf010b0 }
	__asm { push 0xf01214 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ccf7a3 }
	__asm { L_00ccf78e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf01228 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ccf7a3: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ccf7f1 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { cmp eax, dword ptr [edi + 0x1c] }
	__asm { jb L_00ccf7f1 }
	__asm { ja L_00ccf7be }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { cmp eax, dword ptr [edi + 0x18] }
	__asm { jb L_00ccf7f1 }
	__asm { L_00ccf7be: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ccf7dc }
	__asm { push 0x34 }
	__asm { push 0xf010b0 }
	__asm { push 0xf01288 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ccf7f1 }
	__asm { L_00ccf7dc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf012b8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ccf7f1: }
	__asm { mov al, byte ptr [esi + 0x21] }
	__asm { cmp al, byte ptr [edi + 0x21] }
	__asm { jne L_00ccf828 }
	__asm { cmp dword ptr [esi + 0x10], 1 }
	__asm { jne L_00ccf828 }
	__asm { cmp dword ptr [edi + 0x10], 1 }
	__asm { jne L_00ccf828 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00ccf830 }
	__asm { mov esi, dword ptr [eax + 0x54] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_00ccf830 }
	__asm { add eax, 0x50 }
	__asm { cmp esi, dword ptr [eax + 4] }
	__asm { jne L_00ccf828 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ccf828: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e100d8[];
extern "C" char g_00e100dc[];
extern "C" char g_00e100e0[];
extern "C" char g_00e10124[];
extern "C" char g_00e10154[];
extern "C" char g_01314c0c[];
extern "C" char g_01314c10[];
extern "C" void fn_00cf6900();
extern "C" void fn_00cf6a20();
extern "C" void fn_00cf6eb0();
// FUNCTION: ROBLOXSTUDIO 0x00ccfe70
extern "C" __declspec(naked) void asm_00ccfe70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_01314c10], 0 }
	__asm { jne L_00ccfea8 }
	__asm { mov byte ptr [g_01314c10], 1 }
	__asm { call dword ptr [g_00e10154] }
	__asm { push 0x1314c08 }
	__asm { push 0x1314c04 }
	__asm { push eax }
	__asm { call dword ptr [g_00e100d8] }
	__asm { call dword ptr [g_00e10124] }
	__asm { mov dword ptr [g_01314c0c], eax }
	__asm { L_00ccfea8: }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e100dc] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e100e0] }
	__asm { mov edi, dword ptr [ebp - 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp - 8] }
	__asm { call fn_00cf6eb0 }
	__asm { push 0 }
	__asm { push 0xf4240 }
	__asm { push ebx }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call fn_00cf6a20 }
	__asm { push edi }
	__asm { push esi }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf6900 }
	__asm { push 0 }
	__asm { push 0xf4240 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov edi, edx }
	__asm { call fn_00cf6a20 }
	__asm { add eax, esi }
	__asm { adc edx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cd0050
extern "C" __declspec(naked) void asm_00cd0050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6cd51 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { nop }
	__asm { L_00cd0080: }
	__asm { cmp edi, ebx }
	__asm { je L_00cd00c7 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00cd00af }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { fld dword ptr [edi + 0x30] }
	__asm { fstp dword ptr [esi + 0x30] }
	__asm { L_00cd00af: }
	__asm { add esi, 0x34 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x34 }
	__asm { jmp L_00cd0080 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00cd00c7: }
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

// FUNCTION: ROBLOXSTUDIO 0x00cd0210
extern "C" __declspec(naked) void asm_00cd0210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { sub eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { sar eax, 5 }
	__asm { cmp eax, ecx }
	__asm { jne L_00cd027b }
	__asm { test ecx, ecx }
	__asm { je L_00cd02c9 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fld dword ptr [eax + 0x18] }
	__asm { fstp dword ptr [ecx + 0x18] }
	__asm { fld dword ptr [eax + 0x1c] }
	__asm { fstp dword ptr [ecx + 0x1c] }
	__asm { add dword ptr [edx + 0xc], 0x20 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_00cd0271 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00cd0271: }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cd027b: }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00cd02b4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [esi + 0x10] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { fstp dword ptr [esi + 0x18] }
	__asm { fld dword ptr [ecx + 0x1c] }
	__asm { fstp dword ptr [esi + 0x1c] }
	__asm { L_00cd02b4: }
	__asm { add dword ptr [edx + 0xc], 0x20 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { pop esi }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_00cd02c6 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00cd02c6: }
	__asm { inc dword ptr [edx + 0x10] }
	__asm { L_00cd02c9: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cd0050();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cd0560
extern "C" __declspec(naked) void asm_00cd0560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6cd60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { test esi, esi }
	__asm { je L_00cd05b7 }
	__asm { cmp esi, 0x4ec4ec4 }
	__asm { ja L_00cd05b1 }
	__asm { mov eax, esi }
	__asm { imul eax, eax, 0x34 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { test edi, edi }
	__asm { jne L_00cd05b7 }
	__asm { L_00cd05b1: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00cd05b7: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cd0050 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, 0x4ec4ec4f }
	__asm { imul ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sar edx, 4 }
	__asm { mov ebx, edx }
	__asm { shr ebx, 0x1f }
	__asm { add esp, 0x18 }
	__asm { add ebx, edx }
	__asm { test eax, eax }
	__asm { je L_00cd0600 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cd0600: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { imul esi, esi, 0x34 }
	__asm { imul ebx, ebx, 0x34 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esi, edi }
	__asm { add ebx, edi }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_00cd0560();
// FUNCTION: ROBLOXSTUDIO 0x00cd0640
extern "C" __declspec(naked) void asm_00cd0640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x4ec4ec4f }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00cd06db }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x4ec4ec4f }
	__asm { imul esi }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x4ec4ec4 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00cd0691 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00cd0691: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x4ec4ec4f }
	__asm { imul ebx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x4ec4ec4 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00cd06c8 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cd0560 }
	__asm { L_00cd06c8: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cd0560 }
	__asm { L_00cd06db: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_00cd0640();
// FUNCTION: ROBLOXSTUDIO 0x00cd08b0
extern "C" __declspec(naked) void asm_00cd08b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ebx, ecx }
	__asm { jae L_00cd093a }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, ebx }
	__asm { ja L_00cd093a }
	__asm { sub ebx, eax }
	__asm { mov eax, 0x4ec4ec4f }
	__asm { imul ebx }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00cd08ff }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00cd0640 }
	__asm { L_00cd08ff: }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { imul edi, edi, 0x34 }
	__asm { add edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00cd097c }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebx + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ebx + 0x2c], eax }
	__asm { fld dword ptr [edi + 0x30] }
	__asm { fstp dword ptr [ebx + 0x30] }
	__asm { jmp L_00cd097c }
	__asm { L_00cd093a: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00cd0948 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00cd0640 }
	__asm { L_00cd0948: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00cd097c }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { fld dword ptr [ebx + 0x30] }
	__asm { fstp dword ptr [edi + 0x30] }
	__asm { L_00cd097c: }
	__asm { add dword ptr [esi + 4], 0x34 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c0990();
extern "C" void fn_00917b80();
extern "C" void fn_00c715a0();
extern "C" void fn_00c862f0();
extern "C" void fn_00ccff10();
extern "C" void fn_00cd1fa0();
// FUNCTION: ROBLOXSTUDIO 0x00cd2110
extern "C" __declspec(naked) void asm_00cd2110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x21c0] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { cmp byte ptr [eax + 0xdc], 0 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { je L_00cd218d }
	__asm { call fn_00c715a0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test al, al }
	__asm { lea eax, [esi + 8] }
	__asm { je L_00cd2168 }
	__asm { push edi }
	__asm { push eax }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cd1fa0 }
	__asm { push edi }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x10] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00cd1fa0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0x20 }
	__asm { jmp L_00cd21b7 }
	__asm { L_00cd2168: }
	__asm { push eax }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ccff10 }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x10] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00ccff10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jmp L_00cd21b7 }
	__asm { L_00cd218d: }
	__asm { call fn_00917b80 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { L_00cd21b7: }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00cd21e2 }
	__asm { push 1 }
	__asm { add ecx, 0x168 }
	__asm { call fn_00c862f0 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { sub eax, esi }
	__asm { shr eax, 3 }
	__asm { push eax }
	__asm { add ecx, 0x180 }
	__asm { call fn_006c0990 }
	__asm { L_00cd21e2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cd02f0();
extern "C" void fn_00cd0430();
extern "C" void fn_00cd07b0();
extern "C" void fn_00cd2a80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cd2af0
extern "C" __declspec(naked) void asm_00cd2af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ce40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sub eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 5 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp edi, eax }
	__asm { je L_00cd2b8e }
	__asm { push edi }
	__asm { call fn_00cd07b0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov ebx, eax }
	__asm { cmp ecx, edi }
	__asm { lea edx, [ebp + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmovae eax, edx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cd0430 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { push ebx }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { call fn_00cd02f0 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00cd2a80 }
	__asm { L_00cd2b8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00cd2bb1 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cd2bb1: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_004cab00();
extern "C" void fn_00cd38b0();
// FUNCTION: ROBLOXSTUDIO 0x00cd31e0
extern "C" __declspec(naked) void asm_00cd31e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x38 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cd322b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00cd322b: }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00cd3246 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cd38b0 }
	__asm { mov esi, eax }
	__asm { jmp L_00cd3248 }
	__asm { L_00cd3246: }
	__asm { xor esi, esi }
	__asm { L_00cd3248: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004cab00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00cd3265 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00cd3265: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cd35c0();
extern "C" void fn_00cd51b0();
extern "C" void fn_00cf4e30();
// FUNCTION: ROBLOXSTUDIO 0x00cd3450
extern "C" __declspec(naked) void asm_00cd3450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { je L_00cd3462 }
	__asm { lea eax, [esi - 0xc] }
	__asm { jmp L_00cd3464 }
	__asm { L_00cd3462: }
	__asm { xor eax, eax }
	__asm { L_00cd3464: }
	__asm { mov eax, dword ptr [eax + 0x30] }
	__asm { inc eax }
	__asm { push eax }
	__asm { call fn_00cd51b0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { call fn_00cf4e30 }
	__asm { xor edx, edx }
	__asm { div dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { add esp, 4 }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { lea edi, [eax + ecx*4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, edi }
	__asm { je L_00cd34a7 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { L_00cd3492: }
	__asm { test eax, eax }
	__asm { je L_00cd349b }
	__asm { lea ecx, [eax - 0x30] }
	__asm { jmp L_00cd349d }
	__asm { L_00cd349b: }
	__asm { xor ecx, ecx }
	__asm { L_00cd349d: }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { je L_00cd34c7 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, edi }
	__asm { jne L_00cd3492 }
	__asm { L_00cd34a7: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00cd35c0 }
	__asm { mov ecx, eax }
	__asm { cmp ecx, ebx }
	__asm { jne L_00cd34f5 }
	__asm { test ebx, ebx }
	__asm { je L_00cd34e2 }
	__asm { add ebx, 0x30 }
	__asm { jmp L_00cd34e4 }
	__asm { L_00cd34c7: }
	__asm { test eax, eax }
	__asm { je L_00cd34d7 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add eax, -0x30 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cd34d7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cd34e2: }
	__asm { xor ebx, ebx }
	__asm { L_00cd34e4: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edi], ebx }
	__asm { cmp dword ptr [esi + 0x20], eax }
	__asm { jbe L_00cd34f5 }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { L_00cd34f5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cd3450();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cd3500
extern "C" __declspec(naked) void asm_00cd3500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6ced0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x38 }
	__asm { mov ebx, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00cd353c }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00cd353c: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cd3450 }
	__asm { mov edi, eax }
	__asm { cmp edi, esi }
	__asm { jne L_00cd3577 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { inc dword ptr [ebx + 0x30] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cd3577: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00787350();
extern "C" void fn_00cd4420();
extern "C" void fn_00cd4490();
// FUNCTION: ROBLOXSTUDIO 0x00cd35c0
extern "C" __declspec(naked) void asm_00cd35c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebx + 8] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call fn_00cd4490 }
	__asm { test al, al }
	__asm { jne L_00cd3608 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { test eax, eax }
	__asm { je L_00cd35fe }
	__asm { pop esi }
	__asm { add eax, -0x20 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cd35fe: }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cd3608: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00cd4420 }
	__asm { mov ebx, eax }
	__asm { cmp ebx, edi }
	__asm { jne L_00cd3652 }
	__asm { test esi, esi }
	__asm { je L_00cd3627 }
	__asm { add esi, -0xc }
	__asm { jmp L_00cd3629 }
	__asm { L_00cd3627: }
	__asm { xor esi, esi }
	__asm { L_00cd3629: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00cd3635 }
	__asm { add eax, 0x20 }
	__asm { jmp L_00cd3637 }
	__asm { L_00cd3635: }
	__asm { xor eax, eax }
	__asm { L_00cd3637: }
	__asm { test edi, edi }
	__asm { je L_00cd3640 }
	__asm { add edi, 0x20 }
	__asm { jmp L_00cd3642 }
	__asm { L_00cd3640: }
	__asm { xor edi, edi }
	__asm { L_00cd3642: }
	__asm { push eax }
	__asm { push dword ptr [ebp - 8] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { call fn_00787350 }
	__asm { add esp, 0x10 }
	__asm { L_00cd3652: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cd4520();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cd3660
extern "C" __declspec(naked) void asm_00cd3660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6cee0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [eax + 0x20] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [eax + 0x18] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { push dword ptr [eax + 0x10] }
	__asm { push dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { push edi }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cd4520 }
	__asm { test al, al }
	__asm { jne L_00cd36d6 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { dec dword ptr [esi + 0x30] }
	__asm { add esp, 4 }
	__asm { xor al, al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cd36d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 0x30] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00403110();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cd3820
extern "C" __declspec(naked) void asm_00cd3820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push 0x10320b0 }
	__asm { push 0x1032040 }
	__asm { mov esi, ecx }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x10320b0 }
	__asm { jne L_00cd384e }
	__asm { sub eax, 4 }
	__asm { L_00cd384e: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { je L_00cd3875 }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_00cd386f }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00cd3877 }
	__asm { L_00cd386f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00cd3875: }
	__asm { xor eax, eax }
	__asm { L_00cd3877: }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { cmp eax, ecx }
	__asm { je L_00cd388c }
	__asm { L_00cd3883: }
	__asm { mov dword ptr [eax], eax }
	__asm { add eax, 4 }
	__asm { cmp eax, ecx }
	__asm { jne L_00cd3883 }
	__asm { L_00cd388c: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + ecx*4], edx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" char g_012b09f0[];
extern "C" void fn_00b5cbf0();
extern "C" void fn_00ccfd60();
extern "C" void fn_00cd0380();
extern "C" void fn_00cd3920();
extern "C" void fn_00cd3bb0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cd39c0
extern "C" __declspec(naked) void asm_00cd39c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6cf53 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00cd0380 }
	__asm { lea esi, [edi + 0x48] }
	__asm { push 0x38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xf01cf8 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00cd3a1b }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00cd3a1b: }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cd3920 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { lea ecx, [edi + 0x88] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cd3bb0 }
	__asm { lea esi, [edi + 0x120] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { call fn_00b5cbf0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_00ccfd60 }
	__asm { mov dword ptr [edi + 0x148], 0 }
	__asm { mov dword ptr [edi + 0x14c], 0 }
	__asm { fld qword ptr [g_012b09f0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fstp qword ptr [edi + 0x150] }
	__asm { fldz }
	__asm { mov byte ptr [edi + 0x170], 1 }
	__asm { fst qword ptr [edi + 0x158] }
	__asm { mov eax, edi }
	__asm { fst qword ptr [edi + 0x160] }
	__asm { fstp qword ptr [edi + 0x168] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cd4270
extern "C" __declspec(naked) void asm_00cd4270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [esi + edx*4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, ecx }
	__asm { L_00cd4285: }
	__asm { cmp esi, edx }
	__asm { ja L_00cd428d }
	__asm { cmp edx, eax }
	__asm { jbe L_00cd4291 }
	__asm { L_00cd428d: }
	__asm { mov edx, dword ptr [edx] }
	__asm { jmp L_00cd4285 }
	__asm { L_00cd4291: }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { sar eax, 2 }
	__asm { cmp dword ptr [ebp + 0x10], eax }
	__asm { je L_00cd42a5 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cd42a5: }
	__asm { push ebx }
	__asm { mov eax, edi }
	__asm { cmp ecx, edi }
	__asm { je L_00cd42cb }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { nop }
	__asm { L_00cd42b0: }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, edx }
	__asm { je L_00cd42c7 }
	__asm { test eax, eax }
	__asm { je L_00cd42bf }
	__asm { lea esi, [eax - 0x30] }
	__asm { jmp L_00cd42c1 }
	__asm { L_00cd42bf: }
	__asm { xor esi, esi }
	__asm { L_00cd42c1: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { cmp ecx, dword ptr [esi] }
	__asm { je L_00cd42d4 }
	__asm { L_00cd42c7: }
	__asm { cmp dword ptr [eax], edi }
	__asm { jne L_00cd42b0 }
	__asm { L_00cd42cb: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cd42d4: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00c9c570();
extern "C" void fn_00cd43c0();
// FUNCTION: ROBLOXSTUDIO 0x00cd42e0
extern "C" __declspec(naked) void asm_00cd42e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_00cd42f1 }
	__asm { lea eax, [edi - 0xc] }
	__asm { jmp L_00cd42f3 }
	__asm { L_00cd42f1: }
	__asm { xor eax, eax }
	__asm { L_00cd42f3: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { test eax, eax }
	__asm { je L_00cd4302 }
	__asm { add eax, -0x20 }
	__asm { jmp L_00cd4304 }
	__asm { L_00cd4302: }
	__asm { xor eax, eax }
	__asm { L_00cd4304: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_00cd4356 }
	__asm { test esi, esi }
	__asm { je L_00cd431a }
	__asm { lea eax, [esi + 0x20] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_00cd4321 }
	__asm { L_00cd431a: }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { L_00cd4321: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c9c570 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { je L_00cd4339 }
	__asm { add ecx, -0x20 }
	__asm { jmp L_00cd433b }
	__asm { L_00cd4339: }
	__asm { xor ecx, ecx }
	__asm { L_00cd433b: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { cmp eax, dword ptr [ecx + 0xc] }
	__asm { ja L_00cd4356 }
	__asm { jb L_00cd434d }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jae L_00cd4356 }
	__asm { L_00cd434d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cd4356: }
	__asm { test esi, esi }
	__asm { je L_00cd4362 }
	__asm { lea eax, [esi + 0x20] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_00cd4369 }
	__asm { L_00cd4362: }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { L_00cd4369: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00cd43c0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { je L_00cd4381 }
	__asm { add ecx, -0x20 }
	__asm { jmp L_00cd4383 }
	__asm { L_00cd4381: }
	__asm { xor ecx, ecx }
	__asm { L_00cd4383: }
	__asm { test edi, edi }
	__asm { je L_00cd438c }
	__asm { add edi, -0xc }
	__asm { jmp L_00cd438e }
	__asm { L_00cd438c: }
	__asm { xor edi, edi }
	__asm { L_00cd438e: }
	__asm { cmp ecx, dword ptr [edi + 4] }
	__asm { je L_00cd43ae }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { cmp eax, dword ptr [ebx + 0xc] }
	__asm { ja L_00cd43ae }
	__asm { jb L_00cd43a5 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp eax, dword ptr [ebx + 8] }
	__asm { jae L_00cd43ae }
	__asm { L_00cd43a5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cd43ae: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00cd4490
extern "C" __declspec(naked) void asm_00cd4490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_00cd449d }
	__asm { lea esi, [ecx - 0xc] }
	__asm { jmp L_00cd449f }
	__asm { L_00cd449d: }
	__asm { xor esi, esi }
	__asm { L_00cd449f: }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00cd44ab }
	__asm { lea eax, [ecx - 0xc] }
	__asm { jmp L_00cd44ad }
	__asm { L_00cd44ab: }
	__asm { xor eax, eax }
	__asm { L_00cd44ad: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { and ecx, 0xfffffffe }
	__asm { je L_00cd44bd }
	__asm { add ecx, -0x20 }
	__asm { jmp L_00cd44bf }
	__asm { L_00cd44bd: }
	__asm { xor ecx, ecx }
	__asm { L_00cd44bf: }
	__asm { mov dl, 1 }
	__asm { test ecx, ecx }
	__asm { je L_00cd44f4 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov edi, edi }
	__asm { L_00cd44d0: }
	__asm { mov esi, ecx }
	__asm { cmp eax, dword ptr [ecx + 0xc] }
	__asm { ja L_00cd44e5 }
	__asm { jb L_00cd44de }
	__asm { cmp edi, dword ptr [ecx + 8] }
	__asm { jae L_00cd44e5 }
	__asm { L_00cd44de: }
	__asm { mov ecx, dword ptr [ecx + 0x24] }
	__asm { mov dl, 1 }
	__asm { jmp L_00cd44ea }
	__asm { L_00cd44e5: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor dl, dl }
	__asm { L_00cd44ea: }
	__asm { test ecx, ecx }
	__asm { je L_00cd44f3 }
	__asm { add ecx, -0x20 }
	__asm { jne L_00cd44d0 }
	__asm { L_00cd44f3: }
	__asm { pop edi }
	__asm { L_00cd44f4: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { xor eax, eax }
	__asm { test dl, dl }
	__asm { sete al }
	__asm { mov dword ptr [ecx], eax }
	__asm { test esi, esi }
	__asm { je L_00cd4511 }
	__asm { lea eax, [esi + 0x20] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cd4511: }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00b198c0();
// FUNCTION: ROBLOXSTUDIO 0x00cd6580
extern "C" __declspec(naked) void asm_00cd6580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cd65cb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00cd65cb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00cd661e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xec5388 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xf025dc }
	__asm { mov dword ptr [esi + 8], 0xf025ec }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xf025f4 }
	__asm { mov dword ptr [esi + 8], 0xf02604 }
	__asm { jmp L_00cd6620 }
	__asm { L_00cd661e: }
	__asm { xor esi, esi }
	__asm { L_00cd6620: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b198c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00cd663d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00cd663d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cd6870();
// FUNCTION: ROBLOXSTUDIO 0x00cd6740
extern "C" __declspec(naked) void asm_00cd6740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { jle L_00cd67c6 }
	__asm { mov edi, edi }
	__asm { L_00cd6750: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00cd6799 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { cmp dword ptr [ecx + 8], esi }
	__asm { je L_00cd6799 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cd6788 }
	__asm { push 0x71 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cd6799 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cd6788: }
	__asm { movzx eax, al }
	__asm { push 0xeccc30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cd6799: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { call fn_00cd6870 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { jl L_00cd6750 }
	__asm { L_00cd67c6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cd6920();
// FUNCTION: ROBLOXSTUDIO 0x00cd67d0
extern "C" __declspec(naked) void asm_00cd67d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { jle L_00cd6868 }
	__asm { L_00cd67e2: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00cd682b }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { cmp dword ptr [ecx + 8], esi }
	__asm { je L_00cd682b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cd681a }
	__asm { push 0x71 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cd682b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cd681a: }
	__asm { movzx eax, al }
	__asm { push 0xeccc30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cd682b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { call fn_00cd6920 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { jl L_00cd67e2 }
	__asm { L_00cd6868: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00cd6870
extern "C" __declspec(naked) void asm_00cd6870()
{
	__asm { L_00cd6870: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_00cd6880 }
	__asm { lea eax, [edi - 8] }
	__asm { jmp L_00cd6882 }
	__asm { L_00cd6880: }
	__asm { xor eax, eax }
	__asm { L_00cd6882: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { jle L_00cd690d }
	__asm { L_00cd6896: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00cd68e0 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00cd68e0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cd68cf }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cd68e0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00cd68cf: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cd68e0: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { call L_00cd6870 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { jl L_00cd6896 }
	__asm { L_00cd690d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00cd6920
extern "C" __declspec(naked) void asm_00cd6920()
{
	__asm { L_00cd6920: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_00cd6930 }
	__asm { lea eax, [edi - 8] }
	__asm { jmp L_00cd6932 }
	__asm { L_00cd6930: }
	__asm { xor eax, eax }
	__asm { L_00cd6932: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { add ecx, eax }
	__asm { call dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { jle L_00cd69d6 }
	__asm { nop }
	__asm { L_00cd6950: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00cd6999 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { cmp dword ptr [ecx + 8], esi }
	__asm { je L_00cd6999 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cd6988 }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cd6999 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cd6988: }
	__asm { movzx eax, al }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cd6999: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { call L_00cd6920 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { jl L_00cd6950 }
	__asm { L_00cd69d6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5b980();
extern "C" void fn_00cd6b00();
// FUNCTION: ROBLOXSTUDIO 0x00cd69e0
extern "C" __declspec(naked) void asm_00cd69e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00b5b980 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { mov esi, eax }
	__asm { test dl, dl }
	__asm { je L_00cd6a35 }
	__asm { test esi, esi }
	__asm { jne L_00cd6a35 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cd6a24 }
	__asm { push 0xd0 }
	__asm { push 0xe68b68 }
	__asm { push 0x100a87c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cd6a35 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00cd6a24: }
	__asm { movzx eax, dl }
	__asm { push 0xe68bb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cd6a35: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov ecx, edi }
	__asm { call fn_00cd6b00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5c9f0();
extern "C" void fn_00cd6be0();
// FUNCTION: ROBLOXSTUDIO 0x00cd6a70
extern "C" __declspec(naked) void asm_00cd6a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00b5c9f0 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { mov esi, eax }
	__asm { test dl, dl }
	__asm { je L_00cd6ac2 }
	__asm { test esi, esi }
	__asm { jne L_00cd6ac2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cd6ab1 }
	__asm { push 0x44 }
	__asm { push 0xf02608 }
	__asm { push 0xe519bc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cd6ac2 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00cd6ab1: }
	__asm { movzx eax, dl }
	__asm { push 0xf02650 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cd6ac2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov ecx, edi }
	__asm { call fn_00cd6be0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cd69e0();
// FUNCTION: ROBLOXSTUDIO 0x00cd6be0
extern "C" __declspec(naked) void asm_00cd6be0()
{
	__asm { L_00cd6be0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0x18 }
	__asm { mov edx, esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { call fn_00cd69e0 }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x18], esi }
	__asm { jle L_00cd6cba }
	__asm { L_00cd6c25: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00cd6c6f }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00cd6c6f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cd6c5e }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cd6c6f }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00cd6c5e: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cd6c6f: }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { test eax, eax }
	__asm { je L_00cd6c7e }
	__asm { add eax, -8 }
	__asm { jmp L_00cd6c80 }
	__asm { L_00cd6c7e: }
	__asm { xor eax, eax }
	__asm { L_00cd6c80: }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov ecx, ebx }
	__asm { call L_00cd6be0 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x18] }
	__asm { jl L_00cd6c25 }
	__asm { L_00cd6cba: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5bb60();
extern "C" void fn_00c86b40();
// FUNCTION: ROBLOXSTUDIO 0x00cd7770
extern "C" __declspec(naked) void asm_00cd7770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { je L_00cd77e1 }
	__asm { test ebx, ebx }
	__asm { je L_00cd782b }
	__asm { test edi, edi }
	__asm { je L_00cd77e1 }
	__asm { mov esi, dword ptr [edi + 0xe0] }
	__asm { mov ecx, ebx }
	__asm { call fn_00b5bb60 }
	__asm { cmp eax, esi }
	__asm { je L_00cd77de }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cd77c9 }
	__asm { push 0x244 }
	__asm { push 0xf020b0 }
	__asm { push 0xf02418 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cd77de }
	__asm { L_00cd77c9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf02478 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cd77de: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_00cd77e1: }
	__asm { test ebx, ebx }
	__asm { je L_00cd782b }
	__asm { test edi, edi }
	__asm { je L_00cd782b }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { mov eax, dword ptr [ecx + 0x21c0] }
	__asm { cmp byte ptr [eax + 0xdc], 0 }
	__asm { je L_00cd780a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x80] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00cd782b }
	__asm { L_00cd780a: }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { cmp byte ptr [ecx + 0x45dc], 0 }
	__asm { je L_00cd7821 }
	__asm { L_00cd7816: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cd7821: }
	__asm { push edi }
	__asm { call fn_00c86b40 }
	__asm { test al, al }
	__asm { je L_00cd7816 }
	__asm { L_00cd782b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004226b0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0067af70();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_007cd560();
extern "C" void fn_00cd6580();
// FUNCTION: ROBLOXSTUDIO 0x00cd78e0
extern "C" __declspec(naked) void asm_00cd78e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov edx, dword ptr [ebx + 0x50] }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { je L_00cd794b }
	__asm { mov eax, dword ptr [edx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00cd791c }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00cd791e }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00cd791e }
	__asm { L_00cd791c: }
	__asm { mov eax, edx }
	__asm { L_00cd791e: }
	__asm { test eax, eax }
	__asm { je L_00cd794b }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00cd794b }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00cd794b }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00cd794b }
	__asm { call fn_0067af70 }
	__asm { jmp L_00cd794d }
	__asm { L_00cd794b: }
	__asm { xor eax, eax }
	__asm { L_00cd794d: }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x234] }
	__asm { mov dword ptr [ebp - 0x20], 0xcd7ca0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call fn_00cd6580 }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00cd7998 }
	__asm { lea ecx, [ebx + 0x3c] }
	__asm { call fn_006b9e50 }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x3c] }
	__asm { call fn_006b9b80 }
	__asm { L_00cd7998: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00cd79b2 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00cd79b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01314cb8[];
extern "C" void fn_006c46a0();
extern "C" void fn_00c816b0();
// FUNCTION: ROBLOXSTUDIO 0x00cd7af0
extern "C" __declspec(naked) void asm_00cd7af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_01314cb8], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00cd7b25 }
	__asm { fld dword ptr [edi + 0x218] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_006c46a0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cd7b25: }
	__asm { push dword ptr [edi + 0x21c] }
	__asm { lea eax, [edi + 0x208] }
	__asm { push eax }
	__asm { call fn_00c816b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00cd7b62 }
	__asm { fld dword ptr [edi + 0x218] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, edi }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_006c46a0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cd7b62: }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00891aa0();
extern "C" void fn_00c70570();
extern "C" void fn_00c70bb0();
extern "C" void fn_00c72310();
// FUNCTION: ROBLOXSTUDIO 0x00cd7cd0
extern "C" __declspec(naked) void asm_00cd7cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { call fn_00891aa0 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { add esp, 4 }
	__asm { mov edi, eax }
	__asm { test dl, dl }
	__asm { je L_00cd7d2a }
	__asm { test edi, edi }
	__asm { jne L_00cd7d2a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cd7d19 }
	__asm { push 0x1aa }
	__asm { push 0xf020b0 }
	__asm { push 0xe67470 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cd7d2a }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00cd7d19: }
	__asm { movzx eax, dl }
	__asm { push 0xf022d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cd7d2a: }
	__asm { mov ecx, dword ptr [ebx + 0x50] }
	__asm { push edi }
	__asm { call fn_00c70bb0 }
	__asm { test al, al }
	__asm { je L_00cd7d61 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00c70570 }
	__asm { mov ecx, dword ptr [ebx + 0x50] }
	__asm { add esp, 8 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00c72310 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call dword ptr [eax + 4] }
	__asm { pop esi }
	__asm { L_00cd7d61: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00891b10();
extern "C" void fn_0099c980();
extern "C" void fn_00c72750();
extern "C" void fn_00c86af0();
extern "C" void fn_00cd8e30();
// FUNCTION: ROBLOXSTUDIO 0x00cd7d70
extern "C" __declspec(naked) void asm_00cd7d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test al, al }
	__asm { je L_00cd7dc6 }
	__asm { cmp byte ptr [esi + 0x45dc], 0 }
	__asm { jne L_00cd7dc6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cd7db5 }
	__asm { push 0x13f }
	__asm { push 0xf020b0 }
	__asm { push 0xf020f0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cd7dc6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cd7db5: }
	__asm { movzx eax, al }
	__asm { push 0xf02118 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cd7dc6: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00891b10 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00cd7e08 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00c86af0 }
	__asm { test al, al }
	__asm { je L_00cd7e08 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00c72750 }
	__asm { test al, al }
	__asm { je L_00cd7e08 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_0099c980 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00cd8e30 }
	__asm { L_00cd7e08: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006c0990();
extern "C" void fn_00c862f0();
extern "C" void fn_00cf4a70();
extern "C" void fn_00cf4c30();
// FUNCTION: ROBLOXSTUDIO 0x00cd8e30
extern "C" __declspec(naked) void asm_00cd8e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [edi] }
	__asm { add eax, 0x24 }
	__asm { push eax }
	__asm { add esi, 7 }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { shr esi, 3 }
	__asm { call fn_00cf4c30 }
	__asm { mov ecx, dword ptr [ebx + 0x54] }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { je L_00cd8e83 }
	__asm { push 1 }
	__asm { add ecx, 0x288 }
	__asm { call fn_00c862f0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebx + 0x54] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { sub eax, esi }
	__asm { push eax }
	__asm { add ecx, 0x2a0 }
	__asm { call fn_006c0990 }
	__asm { L_00cd8e83: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [edi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add esi, 7 }
	__asm { push edi }
	__asm { shr esi, 3 }
	__asm { call fn_00cf4a70 }
	__asm { mov ecx, dword ptr [ebx + 0x54] }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { je L_00cd8ec7 }
	__asm { push 1 }
	__asm { add ecx, 0x2d0 }
	__asm { call fn_00c862f0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebx + 0x54] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { sub eax, esi }
	__asm { push eax }
	__asm { add ecx, 0x2e8 }
	__asm { call fn_006c0990 }
	__asm { L_00cd8ec7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5bbc0();
extern "C" void fn_00b5c350();
extern "C" void fn_00c70300();
extern "C" void fn_00cd8c10();
// FUNCTION: ROBLOXSTUDIO 0x00cd8ed0
extern "C" __declspec(naked) void asm_00cd8ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { push 1 }
	__asm { lea ebx, [esi + 0x40] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_00b5c350 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00b5bbc0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00cd8f39 }
	__asm { cmp dword ptr [esi + 0x44], 0xff }
	__asm { jl L_00cd8f39 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cd8f28 }
	__asm { push 0x206 }
	__asm { push 0xf020b0 }
	__asm { push 0xf02384 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cd8f39 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cd8f28: }
	__asm { movzx eax, al }
	__asm { push 0xf023a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cd8f39: }
	__asm { movzx eax, byte ptr [esi + 0x44] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c70300 }
	__asm { xor edi, edi }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x44], edi }
	__asm { jle L_00cd8f6e }
	__asm { xor ebx, ebx }
	__asm { L_00cd8f52: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { add eax, ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00cd8c10 }
	__asm { inc edi }
	__asm { add ebx, 0x1c }
	__asm { cmp edi, dword ptr [esi + 0x44] }
	__asm { jl L_00cd8f52 }
	__asm { L_00cd8f6e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00497220();
extern "C" void fn_006c0990();
extern "C" void fn_00872710();
extern "C" void fn_00c715a0();
extern "C" void fn_00c862f0();
extern "C" void fn_00cd6480();
extern "C" void fn_00cd8fd0();
// FUNCTION: ROBLOXSTUDIO 0x00cd9150
extern "C" __declspec(naked) void asm_00cd9150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [eax + 0x50] }
	__asm { mov eax, dword ptr [eax + 0x21c0] }
	__asm { cmp byte ptr [eax + 0xdc], 0 }
	__asm { je L_00cd923b }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [edi] }
	__asm { add ebx, 7 }
	__asm { shr ebx, 3 }
	__asm { call fn_00c715a0 }
	__asm { test al, al }
	__asm { je L_00cd91ca }
	__asm { call fn_00497220 }
	__asm { mov ecx, eax }
	__asm { call fn_00872710 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00cd8fd0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [edi + 0x14] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { lea eax, [edi + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cd8fd0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 0x28 }
	__asm { jmp L_00cd9208 }
	__asm { L_00cd91ca: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { fld dword ptr [esi + 8] }
	__asm { mov ecx, edi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [esi + 4] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00cd6480 }
	__asm { fld dword ptr [esi + 0x14] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, edi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [esi + 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [esi + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00cd6480 }
	__asm { L_00cd9208: }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [esi + 0x54] }
	__asm { test ecx, ecx }
	__asm { je L_00cd9238 }
	__asm { push 1 }
	__asm { add ecx, 0x318 }
	__asm { call fn_00c862f0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi + 0x54] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { sub eax, ebx }
	__asm { push eax }
	__asm { add ecx, 0x330 }
	__asm { call fn_006c0990 }
	__asm { L_00cd9238: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00cd923b: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00cd9440
extern "C" __declspec(naked) void asm_00cd9440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cd948b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00cd948b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00cd94de }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xf02de0 }
	__asm { mov dword ptr [esi + 8], 0xf02df0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xf02df8 }
	__asm { mov dword ptr [esi + 8], 0xf02e08 }
	__asm { jmp L_00cd94e0 }
	__asm { L_00cd94de: }
	__asm { xor esi, esi }
	__asm { L_00cd94e0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00cd94fd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00cd94fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cda860
extern "C" __declspec(naked) void asm_00cda860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x74], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_00cda8bd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00cda8b0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x70] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00cda8b0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x70] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00cda8c8 }
	__asm { L_00cda8bd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x70] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00cda8c8: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00cda8de }
	__asm { add ecx, -0x70 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cda8de: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cd97c0();
extern "C" void fn_00cdb980();
// FUNCTION: ROBLOXSTUDIO 0x00cdb540
extern "C" __declspec(naked) void asm_00cdb540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea edi, [ebx + 4] }
	__asm { test edi, edi }
	__asm { je L_00cdb557 }
	__asm { lea eax, [edi + 0x10] }
	__asm { jmp L_00cdb559 }
	__asm { L_00cdb557: }
	__asm { xor eax, eax }
	__asm { L_00cdb559: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 0x10], edi }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_00cd97c0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { add esp, 0x18 }
	__asm { cmp eax, edi }
	__asm { jne L_00cdb599 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { jmp L_00cdb5b7 }
	__asm { L_00cdb599: }
	__asm { cmp byte ptr [ebp - 0xc], 0 }
	__asm { je L_00cdb5ac }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jne L_00cdb5b7 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { jmp L_00cdb5b7 }
	__asm { L_00cdb5ac: }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { cmp eax, dword ptr [edi + 8] }
	__asm { jne L_00cdb5b7 }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { L_00cdb5b7: }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00cdb980 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [eax], esi }
	__asm { inc dword ptr [ebx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004033d0();
extern "C" void fn_006b9740();
extern "C" void fn_007737e0();
extern "C" void fn_007739a0();
extern "C" void fn_00c5b1d0();
extern "C" void fn_00c5d1a0();
extern "C" void fn_00cd8bc0();
// FUNCTION: ROBLOXSTUDIO 0x00cdcb60
extern "C" __declspec(naked) void asm_00cdcb60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0xf0] }
	__asm { test ecx, ecx }
	__asm { je L_00cdcc64 }
	__asm { movzx eax, byte ptr [edi + 0xf8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c5b1d0 }
	__asm { test al, al }
	__asm { jne L_00cdcc52 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00cd8bc0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sub eax, esi }
	__asm { push eax }
	__asm { mov dword ptr [ebx + 8], esi }
	__asm { movzx eax, byte ptr [edi + 0xf8] }
	__asm { mov ecx, dword ptr [edi + 0xf0] }
	__asm { push esi }
	__asm { push ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c5d1a0 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { jne L_00cdcc52 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 0xf02ba0 }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007737e0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00cdcc52 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cdcc41 }
	__asm { push 0x138 }
	__asm { push 0xf02708 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cdcc52 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cdcc41: }
	__asm { movzx eax, al }
	__asm { push 0xf02bb8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cdcc52: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cdcc64: }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cd8bc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00cdccb0();
extern "C" void fn_00cddac0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cdcd20
extern "C" __declspec(naked) void asm_00cdcd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d640 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00cdcd53: }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { je L_00cdcdc4 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00cdccb0 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, 0x6666665 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00cdcd86 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00cdcd86: }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_00cdcd53 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_00cdcdbb }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { L_00cdcda7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_00cddac0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_00cdcda7 }
	__asm { L_00cdcdbb: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00cdcdc4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00cdce90
extern "C" __declspec(naked) void asm_00cdce90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cdcedb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00cdcedb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00cdcf2e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xf03760 }
	__asm { mov dword ptr [esi + 8], 0xf03770 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xf03778 }
	__asm { mov dword ptr [esi + 8], 0xf03788 }
	__asm { jmp L_00cdcf30 }
	__asm { L_00cdcf2e: }
	__asm { xor esi, esi }
	__asm { L_00cdcf30: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00cdcf4d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00cdcf4d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00941e40();
extern "C" void fn_00cdcde0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00cdd790
extern "C" __declspec(naked) void asm_00cdd790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d7d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { test esi, esi }
	__asm { je L_00cdd7e8 }
	__asm { cmp esi, 0xccccccc }
	__asm { ja L_00cdd7e2 }
	__asm { lea eax, [esi + esi*4] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { test ebx, ebx }
	__asm { jne L_00cdd7e8 }
	__asm { L_00cdd7e2: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00cdd7e8: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cdcde0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edi, dword ptr [edi] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edi }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { test edi, edi }
	__asm { je L_00cdd860 }
	__asm { cmp edi, dword ptr [ebp - 0x18] }
	__asm { je L_00cdd84e }
	__asm { nop }
	__asm { L_00cdd830: }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_00941e40 }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add edi, 0x14 }
	__asm { add esp, 4 }
	__asm { cmp edi, dword ptr [ebp - 0x18] }
	__asm { jne L_00cdd830 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00cdd84e: }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 4 }
	__asm { jmp L_00cdd863 }
	__asm { L_00cdd860: }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { L_00cdd863: }
	__asm { lea eax, [esi + esi*4] }
	__asm { mov dword ptr [edi], ebx }
	__asm { lea eax, [ebx + eax*4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [ebx + eax*4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_00cdd790();
// FUNCTION: ROBLOXSTUDIO 0x00cdd8a0
extern "C" __declspec(naked) void asm_00cdd8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00cdd93b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul esi }
	__asm { sar edx, 3 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0xccccccc }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00cdd8f1 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00cdd8f1: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0xccccccc }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00cdd928 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cdd790 }
	__asm { L_00cdd928: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00cdd790 }
	__asm { L_00cdd93b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cdd1a0();
extern "C" void fn_00cdd8a0();
// FUNCTION: ROBLOXSTUDIO 0x00cde4d0
extern "C" __declspec(naked) void asm_00cde4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ebx, ecx }
	__asm { jae L_00cde539 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, ebx }
	__asm { ja L_00cde539 }
	__asm { sub ebx, eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00cde51f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00cdd8a0 }
	__asm { L_00cde51f: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*4] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { lea ebx, [eax + ecx*4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_00cde557 }
	__asm { L_00cde539: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00cde547 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00cdd8a0 }
	__asm { L_00cde547: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { L_00cde557: }
	__asm { test edi, edi }
	__asm { je L_00cde577 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [edi], eax }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_00cdd1a0 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { L_00cde577: }
	__asm { add dword ptr [esi + 4], 0x14 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cdd9d0();
// FUNCTION: ROBLOXSTUDIO 0x00cdf250
extern "C" __declspec(naked) void asm_00cdf250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp edi, esi }
	__asm { jne L_00cdf275 }
	__asm { cmp edx, eax }
	__asm { jne L_00cdf28a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cdf275: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, eax }
	__asm { jne L_00cdf28a }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi], ecx }
	__asm { cmp ecx, ebx }
	__asm { jne L_00cdf28a }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_00cdf28a: }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jbe L_00cdf2c7 }
	__asm { lea ecx, [esi + 4] }
	__asm { add edi, 4 }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { je L_00cdf2b8 }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp edi, ecx }
	__asm { jne L_00cdf2a8 }
	__asm { cmp edx, eax }
	__asm { je L_00cdf2b8 }
	__asm { cmp edx, esi }
	__asm { je L_00cdf2b8 }
	__asm { L_00cdf2a8: }
	__asm { push 1 }
	__asm { push esi }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, edi }
	__asm { call fn_00cdd9d0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00cdf2b8: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cdf2c7: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { lea ebx, [esi + 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { lea esi, [edi + 4] }
	__asm { cmp eax, dword ptr [ebx] }
	__asm { je L_00cdf2f1 }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp esi, ebx }
	__asm { jne L_00cdf2e4 }
	__asm { cmp ecx, eax }
	__asm { je L_00cdf2f1 }
	__asm { cmp ecx, edx }
	__asm { je L_00cdf2f1 }
	__asm { L_00cdf2e4: }
	__asm { push 1 }
	__asm { push edx }
	__asm { push eax }
	__asm { push ebx }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00cdd9d0 }
	__asm { L_00cdf2f1: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00ce0760
extern "C" __declspec(naked) void asm_00ce0760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ce07ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00ce07ab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00ce07fe }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xf03d68 }
	__asm { mov dword ptr [esi + 8], 0xf03d78 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xf03d80 }
	__asm { mov dword ptr [esi + 8], 0xf03d90 }
	__asm { jmp L_00ce0800 }
	__asm { L_00ce07fe: }
	__asm { xor esi, esi }
	__asm { L_00ce0800: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00ce081d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00ce081d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ce1310
extern "C" __declspec(naked) void asm_00ce1310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x64], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_00ce136d }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00ce1360 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x60] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00ce1360: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x60] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00ce1378 }
	__asm { L_00ce136d: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x60] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00ce1378: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00ce138e }
	__asm { add ecx, -0x60 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ce138e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00891aa0();
extern "C" void fn_0099c980();
extern "C" void fn_00a0fac0();
extern "C" void fn_00b5bb60();
extern "C" void fn_00c572f0();
extern "C" void fn_00cd8f90();
extern "C" void fn_00cd9150();
extern "C" void fn_00cf4a70();
extern "C" void fn_00cf4c30();
// FUNCTION: ROBLOXSTUDIO 0x00ce2d00
extern "C" __declspec(naked) void asm_00ce2d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { call fn_00c572f0 }
	__asm { test al, al }
	__asm { je L_00ce2da0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00891aa0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00ce2d3b }
	__asm { lea esi, [eax + 0x70] }
	__asm { mov ecx, esi }
	__asm { call fn_00a0fac0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_00a0fac0 }
	__asm { jmp L_00ce2d5a }
	__asm { L_00ce2d3b: }
	__asm { mov ecx, esi }
	__asm { call fn_00b5bb60 }
	__asm { mov ecx, eax }
	__asm { call fn_0099c980 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_00b5bb60 }
	__asm { mov ecx, eax }
	__asm { call fn_0099c980 }
	__asm { L_00ce2d5a: }
	__asm { cmp byte ptr [ebp + 0x14], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea edi, [eax + 0x30] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { jne L_00ce2d7d }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 0x24 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cf4c30 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 0xc }
	__asm { L_00ce2d7d: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00cf4a70 }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [ebp + 0x14], 0 }
	__asm { jne L_00ce2d99 }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00cd9150 }
	__asm { L_00ce2d99: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00ce2da0: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cd8f90 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0041fe80();
extern "C" void fn_00b0d5e0();
extern "C" void fn_00ce3c80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce3260
extern "C" __declspec(naked) void asm_00ce3260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6dbc8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b0d5e0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b0d5e0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00ce3c80 }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ce32da }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [ebp + 0x17] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { push esi }
	__asm { call fn_0041fe80 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00ce32da: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b0d5e0 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ce3339 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea ecx, [ebp + 0x17] }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { L_00ce3339: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00ce3362 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea ecx, [ebp + 0x17] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00ce3362: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0041fe80();
extern "C" void fn_00b0d5e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce3c80
extern "C" __declspec(naked) void asm_00ce3c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6dc40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b0d5e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { lea ecx, [esi + 4] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b0d5e0 }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00ce3ceb }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { call fn_0041fe80 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00ce3ceb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00ce3d14 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00ce3d14: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00cdcc90();
extern "C" void fn_00ce3380();
// FUNCTION: ROBLOXSTUDIO 0x00ce4b90
extern "C" __declspec(naked) void asm_00ce4b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx + 4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov eax, edi }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x218] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00ce3380 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov al, byte ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { test al, al }
	__asm { je L_00ce4c3d }
	__asm { mov edi, dword ptr [ebx + 0x230] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { lea ecx, [ebx + 0x230] }
	__asm { push edi }
	__asm { call fn_00cdcc90 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebx + 0x234] }
	__asm { mov ecx, 0x15555554 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00ce4c2e }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00ce4c2e: }
	__asm { inc eax }
	__asm { mov dword ptr [ebx + 0x234], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00ce4c3d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c7fbf0();
// FUNCTION: ROBLOXSTUDIO 0x00ce4d60
extern "C" __declspec(naked) void asm_00ce4d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_00ce4da9 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_00ce4da9 }
	__asm { sub edi, ecx }
	__asm { sar edi, 3 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00ce4d8a }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00c7fbf0 }
	__asm { L_00ce4d8a: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_00ce4dc8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx + edi*8] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + edi*8 + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ce4da9: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00ce4db7 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00c7fbf0 }
	__asm { L_00ce4db7: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00ce4dc8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00ce4dc8: }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c687d0();
extern "C" void fn_00cf64a0();
// FUNCTION: ROBLOXSTUDIO 0x00ce5f90
extern "C" __declspec(naked) void asm_00ce5f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6dd9b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { jne L_00ce5fc5 }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce5fc5: }
	__asm { xor ecx, ecx }
	__asm { mov eax, edi }
	__asm { mov edx, 0x10 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00ce6015 }
	__asm { dec edi }
	__asm { mov esi, ebx }
	__asm { js L_00ce6017 }
	__asm { L_00ce5ff5: }
	__asm { mov ecx, esi }
	__asm { call fn_00c687d0 }
	__asm { add esi, 0x10 }
	__asm { dec edi }
	__asm { jns L_00ce5ff5 }
	__asm { mov eax, ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce6015: }
	__asm { xor ebx, ebx }
	__asm { L_00ce6017: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00ce6030
extern "C" __declspec(naked) void asm_00ce6030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6dd9b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { jne L_00ce6063 }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce6063: }
	__asm { xor ecx, ecx }
	__asm { mov eax, esi }
	__asm { mov edx, 0x1208 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { xor eax, eax }
	__asm { add ecx, 4 }
	__asm { setb al }
	__asm { neg eax }
	__asm { or eax, ecx }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ce60c5 }
	__asm { push 0xce6d70 }
	__asm { push 0xce68b0 }
	__asm { push esi }
	__asm { lea edi, [eax + 4] }
	__asm { push 0x1208 }
	__asm { push edi }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_00cf676b }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce60c5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor edi, edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c68890();
extern "C" void fn_00cf64a0();
// FUNCTION: ROBLOXSTUDIO 0x00ce60e0
extern "C" __declspec(naked) void asm_00ce60e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6dd9b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { jne L_00ce6115 }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce6115: }
	__asm { xor ecx, ecx }
	__asm { mov eax, edi }
	__asm { mov edx, 0x14 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00ce6165 }
	__asm { dec edi }
	__asm { mov esi, ebx }
	__asm { js L_00ce6167 }
	__asm { L_00ce6145: }
	__asm { mov ecx, esi }
	__asm { call fn_00c68890 }
	__asm { add esi, 0x14 }
	__asm { dec edi }
	__asm { jns L_00ce6145 }
	__asm { mov eax, ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce6165: }
	__asm { xor ebx, ebx }
	__asm { L_00ce6167: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00ce6180
extern "C" __declspec(naked) void asm_00ce6180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6dd9b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { jne L_00ce61b3 }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce61b3: }
	__asm { xor ecx, ecx }
	__asm { mov eax, esi }
	__asm { mov edx, 8 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { xor eax, eax }
	__asm { add ecx, 4 }
	__asm { setb al }
	__asm { neg eax }
	__asm { or eax, ecx }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ce6212 }
	__asm { push 0xce69d0 }
	__asm { push 0x421ea0 }
	__asm { push esi }
	__asm { lea edi, [eax + 4] }
	__asm { push 8 }
	__asm { push edi }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_00cf676b }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce6212: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor edi, edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00ce6230
extern "C" __declspec(naked) void asm_00ce6230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6dd9b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { jne L_00ce6263 }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce6263: }
	__asm { xor ecx, ecx }
	__asm { mov eax, esi }
	__asm { mov edx, 4 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { xor eax, eax }
	__asm { add ecx, 4 }
	__asm { setb al }
	__asm { neg eax }
	__asm { or eax, ecx }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ce62c2 }
	__asm { push 0xcc4df0 }
	__asm { push 0xcc4de0 }
	__asm { push esi }
	__asm { lea edi, [eax + 4] }
	__asm { push 4 }
	__asm { push edi }
	__asm { mov dword ptr [eax], esi }
	__asm { call fn_00cf676b }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce62c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor edi, edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1312c[];
extern "C" void fn_00c6c7a0();
// FUNCTION: ROBLOXSTUDIO 0x00ce62e0
extern "C" __declspec(naked) void asm_00ce62e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { call fn_00c6c7a0 }
	__asm { cmp byte ptr [ebp - 1], 4 }
	__asm { jne L_00ce6348 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, 2 }
	__asm { push 1 }
	__asm { mov word ptr [edi], ax }
	__asm { push 0x20 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00c6c7a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 0x10 }
	__asm { not eax }
	__asm { lea esi, [edi + 2] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { call fn_00c6c7a0 }
	__asm { movzx ecx, word ptr [esi] }
	__asm { push ecx }
	__asm { mov bl, al }
	__asm { call dword ptr [g_00e1312c] }
	__asm { mov word ptr [edi + 0x10], ax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ce6348: }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c68a80();
extern "C" void fn_00c68aa0();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00ce6360
extern "C" __declspec(naked) void asm_00ce6360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00c68a80 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { push 8 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6cf00 }
	__asm { mov ecx, esi }
	__asm { call fn_00c68a80 }
	__asm { cmp al, 4 }
	__asm { jne L_00ce63e2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { not eax }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push 0x20 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6cf00 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00c68aa0 }
	__asm { movzx eax, ax }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push 0x10 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6cf00 }
	__asm { L_00ce63e2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ce6f50
extern "C" __declspec(naked) void asm_00ce6f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx + 0x98] }
	__asm { add dword ptr [ecx + 0x98], eax }
	__asm { fld qword ptr [edx + 0xa8] }
	__asm { fadd qword ptr [ecx + 0xa8] }
	__asm { fstp qword ptr [ecx + 0xa8] }
	__asm { mov eax, dword ptr [edx + 0x9c] }
	__asm { add dword ptr [ecx + 0x9c], eax }
	__asm { fld qword ptr [edx + 0xb0] }
	__asm { fadd qword ptr [ecx + 0xb0] }
	__asm { fstp qword ptr [ecx + 0xb0] }
	__asm { mov eax, dword ptr [edx + 0xa0] }
	__asm { add dword ptr [ecx + 0xa0], eax }
	__asm { fld qword ptr [edx + 0xb8] }
	__asm { fadd qword ptr [ecx + 0xb8] }
	__asm { fstp qword ptr [ecx + 0xb8] }
	__asm { mov eax, dword ptr [edx + 0xa4] }
	__asm { add dword ptr [ecx + 0xa4], eax }
	__asm { fld qword ptr [edx + 0xc0] }
	__asm { fadd qword ptr [ecx + 0xc0] }
	__asm { fstp qword ptr [ecx + 0xc0] }
	__asm { mov eax, dword ptr [edx] }
	__asm { add dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { adc dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 0x38] }
	__asm { add dword ptr [ecx + 0x38], eax }
	__asm { mov eax, dword ptr [edx + 0x3c] }
	__asm { adc dword ptr [ecx + 0x3c], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { add dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { adc dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x40] }
	__asm { add dword ptr [ecx + 0x40], eax }
	__asm { mov eax, dword ptr [edx + 0x44] }
	__asm { adc dword ptr [ecx + 0x44], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { add dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { adc dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x48] }
	__asm { add dword ptr [ecx + 0x48], eax }
	__asm { mov eax, dword ptr [edx + 0x4c] }
	__asm { adc dword ptr [ecx + 0x4c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { add dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { adc dword ptr [ecx + 0x1c], eax }
	__asm { mov eax, dword ptr [edx + 0x50] }
	__asm { add dword ptr [ecx + 0x50], eax }
	__asm { mov eax, dword ptr [edx + 0x54] }
	__asm { adc dword ptr [ecx + 0x54], eax }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { add dword ptr [ecx + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0x24] }
	__asm { adc dword ptr [ecx + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x58] }
	__asm { add dword ptr [ecx + 0x58], eax }
	__asm { mov eax, dword ptr [edx + 0x5c] }
	__asm { adc dword ptr [ecx + 0x5c], eax }
	__asm { mov eax, dword ptr [edx + 0x28] }
	__asm { add dword ptr [ecx + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { adc dword ptr [ecx + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x60] }
	__asm { add dword ptr [ecx + 0x60], eax }
	__asm { mov eax, dword ptr [edx + 0x64] }
	__asm { adc dword ptr [ecx + 0x64], eax }
	__asm { mov eax, dword ptr [edx + 0x30] }
	__asm { add dword ptr [ecx + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x34] }
	__asm { adc dword ptr [ecx + 0x34], eax }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { add dword ptr [ecx + 0x68], eax }
	__asm { mov eax, dword ptr [edx + 0x6c] }
	__asm { adc dword ptr [ecx + 0x6c], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c6cca0();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00ce72f0
extern "C" __declspec(naked) void asm_00ce72f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e18b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x118 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x124] }
	__asm { call fn_00c6c2f0 }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x124] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0xd], 0x1d }
	__asm { call fn_00c6cf00 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [ebp - 0x124] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00c6cca0 }
	__asm { mov eax, dword ptr [ebp - 0x124] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov edx, dword ptr [esi] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x118] }
	__asm { mov eax, dword ptr [edx + 0x144] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { lea ecx, [ebp - 0x124] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012b1ef8[];
extern "C" char g_012b1efc[];
extern "C" char g_012b1f00[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00ce7610();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce73a0
extern "C" __declspec(naked) void asm_00ce73a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e1b1 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x574] }
	__asm { mov ecx, edi }
	__asm { call fn_00cf40a0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [esi + 0x58c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00ce7610 }
	__asm { mov esi, eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 0x14], esi }
	__asm { call fn_00cf40b0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ce7405 }
	__asm { mov ecx, esi }
	__asm { call fn_00c68890 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_00c687d0 }
	__asm { jmp L_00ce7407 }
	__asm { L_00ce7405: }
	__asm { xor esi, esi }
	__asm { L_00ce7407: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov byte ptr [esi + 0x34], 1 }
	__asm { shl eax, 3 }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov ecx, dword ptr [g_012b1ef8] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov ecx, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { mov cx, word ptr [g_012b1f00] }
	__asm { mov word ptr [esi + 0x20], cx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [esi + 0x35], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012afa44[];
extern "C" char g_012b1ef8[];
extern "C" char g_012b1efc[];
extern "C" char g_012b1f00[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00ce7610();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce7460
extern "C" __declspec(naked) void asm_00ce7460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x574] }
	__asm { call fn_00cf40a0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x58c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00ce7610 }
	__asm { mov ebx, eax }
	__asm { lea ecx, [esi + 0x574] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00cf40b0 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00ce74cb }
	__asm { mov ecx, ebx }
	__asm { call fn_00c68890 }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { call fn_00c687d0 }
	__asm { jmp L_00ce74cd }
	__asm { L_00ce74cb: }
	__asm { xor ebx, ebx }
	__asm { L_00ce74cd: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push esi }
	__asm { call dword ptr [g_012afa44] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov dword ptr [ebx + 0x28], esi }
	__asm { mov byte ptr [ebx + 0x34], 1 }
	__asm { lea eax, [esi*8] }
	__asm { mov dword ptr [ebx + 0x2c], eax }
	__asm { mov ecx, dword ptr [g_012b1ef8] }
	__asm { mov dword ptr [ebx + 0x18], ecx }
	__asm { mov ecx, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [ebx + 0x1c], ecx }
	__asm { mov cx, word ptr [g_012b1f00] }
	__asm { add esp, 0xc }
	__asm { mov word ptr [ebx + 0x20], cx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov byte ptr [ebx + 0x35], 0 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012afa44[];
extern "C" void fn_00cead50();
// FUNCTION: ROBLOXSTUDIO 0x00ce7540
extern "C" __declspec(naked) void asm_00ce7540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jle L_00ce75ba }
	__asm { mov esi, dword ptr [edi] }
	__asm { dec dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + edx*4] }
	__asm { jne L_00ce75b2 }
	__asm { dec dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ce7594 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0xc], esi }
	__asm { mov dword ptr [esi + 0x10], esi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce7594: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ecx + 0xc], esi }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 0x10], esi }
	__asm { L_00ce75b2: }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce75ba: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x14 }
	__asm { call dword ptr [g_012afa44] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_00ce75da }
	__asm { L_00ce75d2: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce75da: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], 1 }
	__asm { call fn_00cead50 }
	__asm { test al, al }
	__asm { je L_00ce75d2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { dec dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012afa44[];
extern "C" void fn_00ceae00();
// FUNCTION: ROBLOXSTUDIO 0x00ce7610
extern "C" __declspec(naked) void asm_00ce7610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jle L_00ce768a }
	__asm { mov esi, dword ptr [edi] }
	__asm { dec dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + edx*4] }
	__asm { jne L_00ce7682 }
	__asm { dec dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ce7664 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0xc], esi }
	__asm { mov dword ptr [esi + 0x10], esi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce7664: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ecx + 0xc], esi }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 0x10], esi }
	__asm { L_00ce7682: }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce768a: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x14 }
	__asm { call dword ptr [g_012afa44] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_00ce76aa }
	__asm { L_00ce76a2: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce76aa: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], 1 }
	__asm { call fn_00ceae00 }
	__asm { test al, al }
	__asm { je L_00ce76a2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { dec dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012afa44[];
extern "C" void fn_00ceaea0();
// FUNCTION: ROBLOXSTUDIO 0x00ce76e0
extern "C" __declspec(naked) void asm_00ce76e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jle L_00ce775a }
	__asm { mov esi, dword ptr [edi] }
	__asm { dec dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + edx*4] }
	__asm { jne L_00ce7752 }
	__asm { dec dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ce7734 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0xc], esi }
	__asm { mov dword ptr [esi + 0x10], esi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce7734: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ecx + 0xc], esi }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 0x10], esi }
	__asm { L_00ce7752: }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce775a: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x14 }
	__asm { call dword ptr [g_012afa44] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_00ce777a }
	__asm { L_00ce7772: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce777a: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], 1 }
	__asm { call fn_00ceaea0 }
	__asm { test al, al }
	__asm { je L_00ce7772 }
	__asm { mov eax, dword ptr [edi] }
	__asm { dec dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012afa44[];
extern "C" void fn_00ceaf50();
// FUNCTION: ROBLOXSTUDIO 0x00ce77b0
extern "C" __declspec(naked) void asm_00ce77b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jle L_00ce782a }
	__asm { mov esi, dword ptr [edi] }
	__asm { dec dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + edx*4] }
	__asm { jne L_00ce7822 }
	__asm { dec dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ce7804 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0xc], esi }
	__asm { mov dword ptr [esi + 0x10], esi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce7804: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ecx + 0xc], esi }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 0x10], esi }
	__asm { L_00ce7822: }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce782a: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x14 }
	__asm { call dword ptr [g_012afa44] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_00ce784a }
	__asm { L_00ce7842: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce784a: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], 1 }
	__asm { call fn_00ceaf50 }
	__asm { test al, al }
	__asm { je L_00ce7842 }
	__asm { mov eax, dword ptr [edi] }
	__asm { dec dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c68910();
extern "C" void fn_00ceef60();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
extern "C" void fn_00cf4e70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce7fa0
extern "C" __declspec(naked) void asm_00ce7fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea eax, [esi + 0x2f8] }
	__asm { mov ecx, eax }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_00cf40a0 }
	__asm { add esi, 0x2e8 }
	__asm { L_00ce7fc2: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp ecx, edx }
	__asm { ja L_00ce7fd0 }
	__asm { sub edx, ecx }
	__asm { jmp L_00ce7fd7 }
	__asm { L_00ce7fd0: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { sub eax, ecx }
	__asm { add edx, eax }
	__asm { L_00ce7fd7: }
	__asm { cmp edi, edx }
	__asm { jae L_00ce8081 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea edx, [ecx + edi] }
	__asm { cmp edx, eax }
	__asm { jb L_00ce7ff4 }
	__asm { sub ecx, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { add ecx, edi }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { jmp L_00ce7ff9 }
	__asm { L_00ce7ff4: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [eax + edx*4] }
	__asm { L_00ce7ff9: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00ce800b }
	__asm { inc edi }
	__asm { jmp L_00ce7fc2 }
	__asm { L_00ce800b: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea edx, [ecx + edi] }
	__asm { push ebx }
	__asm { cmp edx, eax }
	__asm { jb L_00ce8024 }
	__asm { sub ecx, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { add ecx, edi }
	__asm { lea ebx, [eax + ecx*4] }
	__asm { jmp L_00ce8029 }
	__asm { L_00ce8024: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ebx, [eax + edx*4] }
	__asm { L_00ce8029: }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { test ebx, ebx }
	__asm { je L_00ce8078 }
	__asm { mov eax, dword ptr [ebx + 0x148] }
	__asm { test eax, eax }
	__asm { je L_00ce806f }
	__asm { dec dword ptr [eax] }
	__asm { jne L_00ce806f }
	__asm { mov eax, dword ptr [ebx + 0x144] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { je L_00ce805c }
	__asm { mov ecx, eax }
	__asm { call fn_00cf4e70 }
	__asm { push dword ptr [ebp - 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce805c: }
	__asm { mov eax, dword ptr [ebx + 0x148] }
	__asm { test eax, eax }
	__asm { je L_00ce806f }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce806f: }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce8078: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00ceef60 }
	__asm { pop ebx }
	__asm { L_00ce8081: }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00ce7540();
extern "C" void fn_00cee3a0();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce80a0
extern "C" __declspec(naked) void asm_00ce80a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { lea ebx, [ecx + 0x310] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { call fn_00cf40a0 }
	__asm { push 0xa03 }
	__asm { push 0xf045f0 }
	__asm { mov ecx, ebx }
	__asm { call fn_00ce7540 }
	__asm { mov edi, eax }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00cf40b0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00ce810a }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00c68890 }
	__asm { jmp L_00ce810c }
	__asm { L_00ce810a: }
	__asm { xor edi, edi }
	__asm { L_00ce810c: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea ecx, [edi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { call fn_00c688b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov ax, word ptr [ebp + 0x10] }
	__asm { mov word ptr [edi + 0x18], ax }
	__asm { lea ecx, [ebx + 0x3c] }
	__asm { mov dword ptr [edi + 0x6c], 3 }
	__asm { mov dword ptr [ebp + 0x18], edi }
	__asm { call fn_00cf40a0 }
	__asm { push 0x30 }
	__asm { push 0xf04780 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { call fn_00cee3a0 }
	__asm { lea ecx, [ebx + 0x3c] }
	__asm { call fn_00cf40b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}
