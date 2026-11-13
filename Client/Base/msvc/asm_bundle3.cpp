// Bundled inline-assembly functions (merged from the recursion output).

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00643840
extern "C" __declspec(naked) void asm_00643840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { je L_0064396d }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 1 }
	__asm { jbe L_00643861 }
	__asm { test al, 1 }
	__asm { je L_00643894 }
	__asm { L_00643861: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064387f }
	__asm { push 0x1a }
	__asm { push 0xe36690 }
	__asm { push 0xe36dc0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00643894 }
	__asm { L_0064387f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe36de8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00643894: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0064396d }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { cmp eax, 1 }
	__asm { jbe L_006438ad }
	__asm { test al, 1 }
	__asm { je L_006438e0 }
	__asm { L_006438ad: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006438cb }
	__asm { push 0x1b }
	__asm { push 0xe36690 }
	__asm { push 0xe36e64 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006438e0 }
	__asm { L_006438cb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe36e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006438e0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { je L_00643970 }
	__asm { test bl, 1 }
	__asm { je L_00643928 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00643913 }
	__asm { push 0x1c }
	__asm { push 0xe36690 }
	__asm { push 0xe36f0c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00643928 }
	__asm { L_00643913: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe36f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00643928: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { je L_00643973 }
	__asm { test al, 1 }
	__asm { je L_00643973 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00643956 }
	__asm { push 0x1d }
	__asm { push 0xe36690 }
	__asm { push 0xe36fd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00643970 }
	__asm { L_00643956: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe37008 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { jmp L_00643970 }
	__asm { L_0064396d: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { L_00643970: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_00643973: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov edx, esi }
	__asm { shr edx, 1 }
	__asm { shr ecx, 1 }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { je L_00643a28 }
	__asm { push edi }
	__asm { shl esi, 2 }
	__asm { lea edi, [edx + edx] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { L_00643998: }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { test edx, edx }
	__asm { je L_00643a10 }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { L_006439a2: }
	__asm { movzx esi, word ptr [eax + 2] }
	__asm { movzx edx, word ptr [eax] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [eax + 4] }
	__asm { movzx edi, word ptr [eax + ecx*2 - 4] }
	__asm { movzx ebx, word ptr [eax + ecx*2 - 2] }
	__asm { mov ecx, esi }
	__asm { xor ecx, edx }
	__asm { shr ecx, 1 }
	__asm { and ecx, 0x7f7f }
	__asm { or esi, edx }
	__asm { sub esi, ecx }
	__asm { mov ecx, ebx }
	__asm { xor ecx, edi }
	__asm { shr ecx, 1 }
	__asm { and ecx, 0x7f7f }
	__asm { or ebx, edi }
	__asm { sub ebx, ecx }
	__asm { movzx edx, bx }
	__asm { movzx esi, si }
	__asm { mov ecx, edx }
	__asm { xor ecx, esi }
	__asm { shr ecx, 1 }
	__asm { and ecx, 0x7f7f }
	__asm { or edx, esi }
	__asm { sub edx, ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add ecx, 2 }
	__asm { dec dword ptr [ebp - 8] }
	__asm { mov word ptr [ecx - 2], dx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { jne L_006439a2 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { L_00643a10: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, esi }
	__asm { add ebx, edi }
	__asm { dec ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { jne L_00643998 }
	__asm { pop edi }
	__asm { L_00643a28: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8550[];
extern "C" void fn_00422750();
// FUNCTION: ROBLOXSTUDIO 0x006442e0
extern "C" __declspec(naked) void asm_006442e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov dl, byte ptr [eax] }
	__asm { mov ah, dl }
	__asm { shr ah, 3 }
	__asm { and ah, 7 }
	__asm { cmp ah, 5 }
	__asm { je L_0064445d }
	__asm { test ah, ah }
	__asm { je L_0064445d }
	__asm { mov al, byte ptr [g_012f8550] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [ebx] }
	__asm { cmp cl, al }
	__asm { je L_00644322 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { jne L_00644322 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00644322: }
	__asm { mov cl, byte ptr [ebx + 1] }
	__asm { push edi }
	__asm { movzx edi, dl }
	__asm { shr edi, 6 }
	__asm { cmp ah, 1 }
	__asm { jne L_00644349 }
	__asm { cmp cl, al }
	__asm { je L_00644341 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { je L_00644452 }
	__asm { L_00644341: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00644349: }
	__asm { cmp cl, al }
	__asm { je L_0064435b }
	__asm { mov dl, cl }
	__asm { and dl, 0x38 }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { cmp dl, 0x28 }
	__asm { je L_0064435f }
	__asm { L_0064435b: }
	__asm { mov byte ptr [ebp + 0xb], 0 }
	__asm { L_0064435f: }
	__asm { push esi }
	__asm { cmp cl, al }
	__asm { je L_00644389 }
	__asm { movzx edx, cl }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { lea esi, [edx + edx*2] }
	__asm { mov edx, dword ptr [edi*4 + 0xe370c0] }
	__asm { mov edx, dword ptr [edx*4 + 0xe370a8] }
	__asm { lea edx, [edx + esi*2] }
	__asm { cmp dword ptr [edx*4 + 0x12f6d50], 5 }
	__asm { jne L_0064438d }
	__asm { L_00644389: }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { L_0064438d: }
	__asm { mov edx, dword ptr [edi*4 + 0xe370d0] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dl, byte ptr [ebx + 2] }
	__asm { cmp dl, al }
	__asm { je L_006443ac }
	__asm { mov bl, dl }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_006443ac }
	__asm { mov bh, 1 }
	__asm { jmp L_006443ae }
	__asm { L_006443ac: }
	__asm { xor bh, bh }
	__asm { L_006443ae: }
	__asm { cmp dl, al }
	__asm { je L_006443d3 }
	__asm { movzx esi, dl }
	__asm { mov byte ptr [ebp - 2], 1 }
	__asm { lea edi, [esi + esi*2] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [esi*4 + 0xe370a8] }
	__asm { lea esi, [esi + edi*2] }
	__asm { cmp dword ptr [esi*4 + 0x12f6d50], 5 }
	__asm { jne L_006443d7 }
	__asm { L_006443d3: }
	__asm { mov byte ptr [ebp - 2], 0 }
	__asm { L_006443d7: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ch, byte ptr [esi + 3] }
	__asm { cmp ch, al }
	__asm { je L_006443ef }
	__asm { mov bl, ch }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_006443ef }
	__asm { mov bl, 1 }
	__asm { jmp L_006443f1 }
	__asm { L_006443ef: }
	__asm { xor bl, bl }
	__asm { L_006443f1: }
	__asm { cmp ah, 3 }
	__asm { jne L_00644412 }
	__asm { cmp cl, al }
	__asm { je L_00644412 }
	__asm { cmp dl, al }
	__asm { je L_00644412 }
	__asm { cmp ch, al }
	__asm { je L_00644412 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00422750 }
	__asm { test al, al }
	__asm { je L_00644412 }
	__asm { mov dl, 1 }
	__asm { jmp L_00644414 }
	__asm { L_00644412: }
	__asm { xor dl, dl }
	__asm { L_00644414: }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00644424 }
	__asm { test bh, bh }
	__asm { je L_00644424 }
	__asm { mov cl, 1 }
	__asm { jmp L_00644426 }
	__asm { L_00644424: }
	__asm { xor cl, cl }
	__asm { L_00644426: }
	__asm { test al, al }
	__asm { jne L_0064442f }
	__asm { cmp byte ptr [ebp - 1], al }
	__asm { je L_00644438 }
	__asm { L_0064442f: }
	__asm { test bh, bh }
	__asm { jne L_0064443c }
	__asm { cmp byte ptr [ebp - 2], bh }
	__asm { jne L_0064443c }
	__asm { L_00644438: }
	__asm { xor al, al }
	__asm { jmp L_0064443e }
	__asm { L_0064443c: }
	__asm { mov al, 1 }
	__asm { L_0064443e: }
	__asm { test dl, dl }
	__asm { jne L_00644452 }
	__asm { test bl, bl }
	__asm { je L_0064444a }
	__asm { test al, al }
	__asm { jne L_00644452 }
	__asm { L_0064444a: }
	__asm { test cl, cl }
	__asm { je L_00644341 }
	__asm { L_00644452: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0064445d: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012dce54[];
extern "C" char g_012dce58[];
extern "C" char g_012dce5c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0064bd80
extern "C" __declspec(naked) void asm_0064bd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x40 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { je L_0064be36 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jl L_0064bdad }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jl L_0064bdad }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jge L_0064bde3 }
	__asm { L_0064bdad: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064bdce }
	__asm { push 0x770 }
	__asm { push 0xe373c0 }
	__asm { push 0xe38520 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0064bde3 }
	__asm { L_0064bdce: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe38740 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0064bde3: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { je L_0064be39 }
	__asm { cmp dword ptr [ecx], 0x20 }
	__asm { jge L_0064be00 }
	__asm { cmp dword ptr [ecx + 4], 0x10 }
	__asm { jge L_0064be00 }
	__asm { cmp dword ptr [ecx + 8], 0x20 }
	__asm { jl L_0064be39 }
	__asm { L_0064be00: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064be21 }
	__asm { push 0x771 }
	__asm { push 0xe373c0 }
	__asm { push 0xe385f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0064be36 }
	__asm { L_0064be21: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe387d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0064be36: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { L_0064be39: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { test ebx, ebx }
	__asm { jns L_0064be49 }
	__asm { neg ebx }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { jmp L_0064be62 }
	__asm { L_0064be49: }
	__asm { mov edx, dword ptr [g_012dce54] }
	__asm { cmp ebx, edx }
	__asm { jl L_0064be5b }
	__asm { sub ebx, edx }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { jmp L_0064be62 }
	__asm { L_0064be5b: }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { L_0064be62: }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { test edi, edi }
	__asm { jns L_0064be70 }
	__asm { neg edi }
	__asm { mov dword ptr [ebp + 0x14], edi }
	__asm { jmp L_0064be89 }
	__asm { L_0064be70: }
	__asm { mov edx, dword ptr [g_012dce58] }
	__asm { cmp edi, edx }
	__asm { jl L_0064be82 }
	__asm { sub edi, edx }
	__asm { inc edi }
	__asm { mov dword ptr [ebp + 0x14], edi }
	__asm { jmp L_0064be89 }
	__asm { L_0064be82: }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_0064be89: }
	__asm { mov ebx, dword ptr [eax + 8] }
	__asm { test ebx, ebx }
	__asm { jns L_0064be97 }
	__asm { neg ebx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { jmp L_0064beaf }
	__asm { L_0064be97: }
	__asm { mov eax, dword ptr [g_012dce5c] }
	__asm { cmp ebx, eax }
	__asm { jl L_0064bea8 }
	__asm { sub ebx, eax }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { jmp L_0064beaf }
	__asm { L_0064bea8: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_0064beaf: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ebx, dword ptr [ecx + 4] }
	__asm { sub ebx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { sub eax, dword ptr [esi] }
	__asm { sub ecx, dword ptr [esi + 8] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x40], ebx }
	__asm { mov dword ptr [ebp - 0x3c], ecx }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { test ebx, ebx }
	__asm { js L_0064c013 }
	__asm { L_0064bed5: }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { add ebx, edx }
	__asm { add edi, edx }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x38], edi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { test ecx, ecx }
	__asm { js L_0064c006 }
	__asm { L_0064bef2: }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { add edx, ebx }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { test eax, eax }
	__asm { js L_0064bff7 }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { shl eax, 4 }
	__asm { add eax, edi }
	__asm { lea eax, [edx + eax*2] }
	__asm { imul eax, eax, 0x26 }
	__asm { add eax, 0x2035f }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, edi }
	__asm { shl eax, 4 }
	__asm { add eax, edi }
	__asm { lea ecx, [edx + eax*2] }
	__asm { mov eax, ecx }
	__asm { imul ecx, ecx, 0x26 }
	__asm { imul eax, eax, 0x26 }
	__asm { add eax, 0x20845 }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, edi }
	__asm { shl eax, 5 }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { shl eax, 5 }
	__asm { add edx, 0x14 }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { lea eax, [edx + 0x2086b] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { shl eax, 4 }
	__asm { add eax, ebx }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { mov ebx, dword ptr [ebp - 0x20] }
	__asm { shl eax, 4 }
	__asm { add esi, 0x2086c }
	__asm { add eax, 0x1a4 }
	__asm { add esi, ecx }
	__asm { add eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x34], esi }
	__asm { lea eax, [edx + eax*4] }
	__asm { L_0064bf86: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [eax + 4] }
	__asm { mov edi, dword ptr [ecx] }
	__asm { movzx ecx, byte ptr [eax - 6] }
	__asm { sub edi, ebx }
	__asm { inc ebx }
	__asm { movzx esi, byte ptr [esi + edi] }
	__asm { imul esi, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { movzx edx, byte ptr [ecx + edi] }
	__asm { movzx ecx, byte ptr [eax - 5] }
	__asm { imul edx, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { add esi, edx }
	__asm { movzx edx, byte ptr [ecx + edi] }
	__asm { movzx ecx, byte ptr [eax - 4] }
	__asm { imul edx, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { add esi, 0x7f }
	__asm { movzx ecx, byte ptr [ecx + edi] }
	__asm { add edx, esi }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { sar edx, 7 }
	__asm { sub edx, ecx }
	__asm { movzx ecx, byte ptr [eax - 3] }
	__asm { add edx, ecx }
	__asm { mov ecx, edx }
	__asm { sar ecx, 0x1f }
	__asm { not cl }
	__asm { and cl, dl }
	__asm { mov edx, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [edx + edi], cl }
	__asm { cmp ebx, dword ptr [ebp - 0x10] }
	__asm { jle L_0064bf86 }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ebp - 0x38] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x3c] }
	__asm { L_0064bff7: }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ebx, ecx }
	__asm { jle L_0064bef2 }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { L_0064c006: }
	__asm { inc edx }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { cmp edx, dword ptr [ebp - 0x40] }
	__asm { jle L_0064bed5 }
	__asm { L_0064c013: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012dce54[];
extern "C" char g_012dce58[];
extern "C" char g_012dce5c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0064c020
extern "C" __declspec(naked) void asm_0064c020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x40 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { je L_0064c0d6 }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { jl L_0064c04d }
	__asm { cmp dword ptr [ebx + 4], 0 }
	__asm { jl L_0064c04d }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { jge L_0064c083 }
	__asm { L_0064c04d: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064c06e }
	__asm { push 0x770 }
	__asm { push 0xe373c0 }
	__asm { push 0xe38520 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0064c083 }
	__asm { L_0064c06e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe38740 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0064c083: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { je L_0064c0d9 }
	__asm { cmp dword ptr [ecx], 0x20 }
	__asm { jge L_0064c0a0 }
	__asm { cmp dword ptr [ecx + 4], 0x10 }
	__asm { jge L_0064c0a0 }
	__asm { cmp dword ptr [ecx + 8], 0x20 }
	__asm { jl L_0064c0d9 }
	__asm { L_0064c0a0: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064c0c1 }
	__asm { push 0x771 }
	__asm { push 0xe373c0 }
	__asm { push 0xe385f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0064c0d6 }
	__asm { L_0064c0c1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe387d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0064c0d6: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { L_0064c0d9: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { jns L_0064c0e9 }
	__asm { neg esi }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { jmp L_0064c102 }
	__asm { L_0064c0e9: }
	__asm { mov edx, dword ptr [g_012dce54] }
	__asm { cmp esi, edx }
	__asm { jl L_0064c0fb }
	__asm { sub esi, edx }
	__asm { inc esi }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { jmp L_0064c102 }
	__asm { L_0064c0fb: }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { L_0064c102: }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { test edi, edi }
	__asm { jns L_0064c110 }
	__asm { neg edi }
	__asm { mov dword ptr [ebp + 0x14], edi }
	__asm { jmp L_0064c129 }
	__asm { L_0064c110: }
	__asm { mov edx, dword ptr [g_012dce58] }
	__asm { cmp edi, edx }
	__asm { jl L_0064c122 }
	__asm { sub edi, edx }
	__asm { inc edi }
	__asm { mov dword ptr [ebp + 0x14], edi }
	__asm { jmp L_0064c129 }
	__asm { L_0064c122: }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_0064c129: }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { test esi, esi }
	__asm { jns L_0064c137 }
	__asm { neg esi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { jmp L_0064c14f }
	__asm { L_0064c137: }
	__asm { mov eax, dword ptr [g_012dce5c] }
	__asm { cmp esi, eax }
	__asm { jl L_0064c148 }
	__asm { sub esi, eax }
	__asm { inc esi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { jmp L_0064c14f }
	__asm { L_0064c148: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_0064c14f: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { sub esi, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { sub edx, dword ptr [ebx + 8] }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x40], esi }
	__asm { mov dword ptr [ebp - 0x3c], edx }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { test esi, esi }
	__asm { js L_0064c2b6 }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { L_0064c178: }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { sub edi, ebx }
	__asm { add ebx, esi }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x38], edi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { test edx, edx }
	__asm { js L_0064c2a6 }
	__asm { L_0064c192: }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { sub edx, ebx }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { test eax, eax }
	__asm { js L_0064c294 }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { shl eax, 4 }
	__asm { add eax, edi }
	__asm { lea eax, [edx + eax*2] }
	__asm { imul eax, eax, 0x26 }
	__asm { add eax, 0x20d77 }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, edi }
	__asm { shl eax, 4 }
	__asm { add eax, edi }
	__asm { lea ecx, [edx + eax*2] }
	__asm { mov eax, ecx }
	__asm { imul ecx, ecx, 0x26 }
	__asm { imul eax, eax, 0x26 }
	__asm { add eax, 0x20891 }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, edi }
	__asm { shl eax, 5 }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { shl eax, 5 }
	__asm { add edx, 0x14 }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { lea eax, [edx + 0x2086b] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { shl eax, 4 }
	__asm { add eax, ebx }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { mov ebx, dword ptr [ebp - 0x20] }
	__asm { shl eax, 4 }
	__asm { add esi, 0x2086a }
	__asm { add eax, 0x1a4 }
	__asm { add esi, ecx }
	__asm { add eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x34], esi }
	__asm { lea eax, [edx + eax*4] }
	__asm { L_0064c226: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [eax + 4] }
	__asm { mov edi, dword ptr [ecx] }
	__asm { movzx ecx, byte ptr [eax - 6] }
	__asm { add edi, ebx }
	__asm { inc ebx }
	__asm { movzx esi, byte ptr [esi + edi] }
	__asm { imul esi, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { movzx edx, byte ptr [ecx + edi] }
	__asm { movzx ecx, byte ptr [eax - 5] }
	__asm { imul edx, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { add esi, edx }
	__asm { movzx edx, byte ptr [ecx + edi] }
	__asm { movzx ecx, byte ptr [eax - 4] }
	__asm { imul edx, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { add esi, 0x7f }
	__asm { movzx ecx, byte ptr [ecx + edi] }
	__asm { add edx, esi }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { sar edx, 7 }
	__asm { sub edx, ecx }
	__asm { movzx ecx, byte ptr [eax - 3] }
	__asm { add edx, ecx }
	__asm { mov ecx, edx }
	__asm { sar ecx, 0x1f }
	__asm { not cl }
	__asm { and cl, dl }
	__asm { mov edx, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [edx + edi], cl }
	__asm { cmp ebx, dword ptr [ebp - 0x10] }
	__asm { jle L_0064c226 }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ebp - 0x38] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { L_0064c294: }
	__asm { mov edx, dword ptr [ebp - 0x3c] }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ebx, edx }
	__asm { jle L_0064c192 }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { L_0064c2a6: }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { cmp ebx, dword ptr [ebp - 0x40] }
	__asm { jle L_0064c178 }
	__asm { L_0064c2b6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012dce54[];
extern "C" char g_012dce58[];
extern "C" char g_012dce5c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0064c2c0
extern "C" __declspec(naked) void asm_0064c2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x40 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { je L_0064c378 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jl L_0064c2ed }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jl L_0064c2ed }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jge L_0064c323 }
	__asm { L_0064c2ed: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064c30e }
	__asm { push 0x770 }
	__asm { push 0xe373c0 }
	__asm { push 0xe38520 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0064c323 }
	__asm { L_0064c30e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe38740 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0064c323: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { je L_0064c37b }
	__asm { cmp dword ptr [edi], 0x20 }
	__asm { jge L_0064c340 }
	__asm { cmp dword ptr [edi + 4], 0x10 }
	__asm { jge L_0064c340 }
	__asm { cmp dword ptr [edi + 8], 0x20 }
	__asm { jl L_0064c37b }
	__asm { L_0064c340: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064c361 }
	__asm { push 0x771 }
	__asm { push 0xe373c0 }
	__asm { push 0xe385f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0064c37b }
	__asm { L_0064c361: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe387d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { jmp L_0064c37b }
	__asm { L_0064c378: }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { L_0064c37b: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [eax] }
	__asm { test edx, edx }
	__asm { jns L_0064c38b }
	__asm { neg edx }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { jmp L_0064c3a4 }
	__asm { L_0064c38b: }
	__asm { mov ecx, dword ptr [g_012dce54] }
	__asm { cmp edx, ecx }
	__asm { jl L_0064c39d }
	__asm { sub edx, ecx }
	__asm { inc edx }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { jmp L_0064c3a4 }
	__asm { L_0064c39d: }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { L_0064c3a4: }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { test edx, edx }
	__asm { jns L_0064c3b2 }
	__asm { neg edx }
	__asm { mov dword ptr [ebp + 0x14], edx }
	__asm { jmp L_0064c3cb }
	__asm { L_0064c3b2: }
	__asm { mov ecx, dword ptr [g_012dce58] }
	__asm { cmp edx, ecx }
	__asm { jl L_0064c3c4 }
	__asm { sub edx, ecx }
	__asm { inc edx }
	__asm { mov dword ptr [ebp + 0x14], edx }
	__asm { jmp L_0064c3cb }
	__asm { L_0064c3c4: }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_0064c3cb: }
	__asm { mov ebx, dword ptr [eax + 8] }
	__asm { test ebx, ebx }
	__asm { jns L_0064c3d9 }
	__asm { neg ebx }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { jmp L_0064c3f1 }
	__asm { L_0064c3d9: }
	__asm { mov eax, dword ptr [g_012dce5c] }
	__asm { cmp ebx, eax }
	__asm { jl L_0064c3ea }
	__asm { sub ebx, eax }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { jmp L_0064c3f1 }
	__asm { L_0064c3ea: }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { L_0064c3f1: }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { sub ebx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { sub eax, dword ptr [esi] }
	__asm { sub ecx, dword ptr [esi + 8] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x40], ebx }
	__asm { mov dword ptr [ebp - 0x3c], ecx }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { test ebx, ebx }
	__asm { js L_0064c55f }
	__asm { L_0064c417: }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { add ebx, edx }
	__asm { sub edi, edx }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x38], edi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { test ecx, ecx }
	__asm { js L_0064c54f }
	__asm { L_0064c434: }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { add edx, ebx }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { test eax, eax }
	__asm { js L_0064c540 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, edi }
	__asm { shl eax, 4 }
	__asm { add eax, edi }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { lea eax, [edx + eax*2] }
	__asm { imul eax, eax, 0x26 }
	__asm { add ecx, 0x20d77 }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, edi }
	__asm { shl eax, 4 }
	__asm { add eax, edi }
	__asm { add esi, 0x20845 }
	__asm { lea ecx, [edx + eax*2] }
	__asm { mov eax, ecx }
	__asm { imul ecx, ecx, 0x26 }
	__asm { imul eax, eax, 0x26 }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add eax, 0x2086a }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, edi }
	__asm { shl eax, 5 }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { shl eax, 5 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { add edx, 0x14 }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { lea eax, [edx + 0x2086b] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { shl eax, 4 }
	__asm { add eax, ebx }
	__asm { add eax, dword ptr [ebp - 8] }
	__asm { mov ebx, dword ptr [ebp - 0x20] }
	__asm { shl eax, 4 }
	__asm { add eax, 0x1a4 }
	__asm { add eax, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edx + eax*4] }
	__asm { L_0064c4d2: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { add edi, ebx }
	__asm { inc ebx }
	__asm { movzx esi, byte ptr [ecx + edi] }
	__asm { movzx ecx, byte ptr [eax - 2] }
	__asm { imul esi, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { lea eax, [eax + 4] }
	__asm { movzx edx, byte ptr [ecx + edi] }
	__asm { movzx ecx, byte ptr [eax - 5] }
	__asm { imul edx, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { add esi, edx }
	__asm { movzx edx, byte ptr [ecx + edi] }
	__asm { movzx ecx, byte ptr [eax - 4] }
	__asm { imul edx, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { add esi, 0x7f }
	__asm { movzx ecx, byte ptr [ecx + edi] }
	__asm { add edx, esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { sar edx, 7 }
	__asm { sub edx, ecx }
	__asm { movzx ecx, byte ptr [eax - 3] }
	__asm { add edx, ecx }
	__asm { mov ecx, edx }
	__asm { sar ecx, 0x1f }
	__asm { not cl }
	__asm { and cl, dl }
	__asm { mov edx, dword ptr [ebp - 0x34] }
	__asm { mov byte ptr [edx + edi], cl }
	__asm { cmp ebx, dword ptr [ebp - 0x10] }
	__asm { jle L_0064c4d2 }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ebp - 0x38] }
	__asm { mov ecx, dword ptr [ebp - 0x3c] }
	__asm { L_0064c540: }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ebx, ecx }
	__asm { jle L_0064c434 }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { L_0064c54f: }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { inc edx }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { cmp edx, dword ptr [ebp - 0x40] }
	__asm { jle L_0064c417 }
	__asm { L_0064c55f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012dce54[];
extern "C" char g_012dce58[];
extern "C" char g_012dce5c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0064c830
extern "C" __declspec(naked) void asm_0064c830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { je L_0064c8e6 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jl L_0064c860 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jl L_0064c860 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jge L_0064c896 }
	__asm { L_0064c860: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064c881 }
	__asm { push 0x770 }
	__asm { push 0xe373c0 }
	__asm { push 0xe38520 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0064c896 }
	__asm { L_0064c881: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe38740 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0064c896: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0064c8e6 }
	__asm { cmp dword ptr [edi], 0x20 }
	__asm { jge L_0064c8b0 }
	__asm { cmp dword ptr [edi + 4], 0x10 }
	__asm { jge L_0064c8b0 }
	__asm { cmp dword ptr [edi + 8], 0x20 }
	__asm { jl L_0064c8e6 }
	__asm { L_0064c8b0: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064c8d1 }
	__asm { push 0x771 }
	__asm { push 0xe373c0 }
	__asm { push 0xe385f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0064c8e6 }
	__asm { L_0064c8d1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe387d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0064c8e6: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [eax] }
	__asm { test edx, edx }
	__asm { jns L_0064c8f6 }
	__asm { neg edx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { jmp L_0064c90f }
	__asm { L_0064c8f6: }
	__asm { mov ecx, dword ptr [g_012dce54] }
	__asm { cmp edx, ecx }
	__asm { jl L_0064c908 }
	__asm { sub edx, ecx }
	__asm { inc edx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { jmp L_0064c90f }
	__asm { L_0064c908: }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { L_0064c90f: }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { test edx, edx }
	__asm { jns L_0064c91d }
	__asm { neg edx }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { jmp L_0064c936 }
	__asm { L_0064c91d: }
	__asm { mov ecx, dword ptr [g_012dce58] }
	__asm { cmp edx, ecx }
	__asm { jl L_0064c92f }
	__asm { sub edx, ecx }
	__asm { inc edx }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { jmp L_0064c936 }
	__asm { L_0064c92f: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_0064c936: }
	__asm { mov ebx, dword ptr [eax + 8] }
	__asm { test ebx, ebx }
	__asm { jns L_0064c944 }
	__asm { neg ebx }
	__asm { mov dword ptr [ebp + 0x14], ebx }
	__asm { jmp L_0064c95c }
	__asm { L_0064c944: }
	__asm { mov eax, dword ptr [g_012dce5c] }
	__asm { cmp ebx, eax }
	__asm { jl L_0064c955 }
	__asm { sub ebx, eax }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp + 0x14], ebx }
	__asm { jmp L_0064c95c }
	__asm { L_0064c955: }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_0064c95c: }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { sub ebx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { sub eax, dword ptr [esi] }
	__asm { sub ecx, dword ptr [esi + 8] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 0x3c], ebx }
	__asm { mov dword ptr [ebp - 0x38], ecx }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { test ebx, ebx }
	__asm { js L_0064caca }
	__asm { L_0064c982: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { add ebx, edx }
	__asm { add edi, edx }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x34], edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test ecx, ecx }
	__asm { js L_0064cabd }
	__asm { nop }
	__asm { L_0064c9a0: }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { add edx, ebx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { test eax, eax }
	__asm { js L_0064caae }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, edi }
	__asm { shl eax, 4 }
	__asm { add eax, edi }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { lea eax, [edx + eax*2] }
	__asm { imul eax, eax, 0x26 }
	__asm { add ecx, 0x2035f }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, edi }
	__asm { shl eax, 4 }
	__asm { add eax, edi }
	__asm { add esi, 0x20845 }
	__asm { lea ecx, [edx + eax*2] }
	__asm { mov eax, ecx }
	__asm { imul ecx, ecx, 0x26 }
	__asm { imul eax, eax, 0x26 }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add eax, 0x2086a }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, edi }
	__asm { shl eax, 5 }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { shl eax, 5 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { add edx, 0x14 }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { lea eax, [edx + 0x2086b] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { shl eax, 4 }
	__asm { add eax, ebx }
	__asm { add eax, dword ptr [ebp + 0x14] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { shl eax, 4 }
	__asm { add eax, 0x1a4 }
	__asm { add eax, dword ptr [ebp - 8] }
	__asm { lea eax, [edx + eax*4] }
	__asm { mov edi, edi }
	__asm { L_0064ca40: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add edi, ebx }
	__asm { inc ebx }
	__asm { movzx esi, byte ptr [ecx + edi] }
	__asm { movzx ecx, byte ptr [eax - 2] }
	__asm { imul esi, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { lea eax, [eax + 4] }
	__asm { movzx edx, byte ptr [ecx + edi] }
	__asm { movzx ecx, byte ptr [eax - 5] }
	__asm { imul edx, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { add esi, edx }
	__asm { movzx edx, byte ptr [ecx + edi] }
	__asm { movzx ecx, byte ptr [eax - 4] }
	__asm { imul edx, ecx }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { add esi, 0x7f }
	__asm { movzx ecx, byte ptr [ecx + edi] }
	__asm { add edx, esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { sar edx, 7 }
	__asm { sub edx, ecx }
	__asm { movzx ecx, byte ptr [eax - 3] }
	__asm { add edx, ecx }
	__asm { mov ecx, edx }
	__asm { sar ecx, 0x1f }
	__asm { not cl }
	__asm { and cl, dl }
	__asm { mov edx, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [edx + edi], cl }
	__asm { cmp ebx, dword ptr [ebp - 0xc] }
	__asm { jle L_0064ca40 }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov edi, dword ptr [ebp - 0x34] }
	__asm { mov ecx, dword ptr [ebp - 0x38] }
	__asm { L_0064caae: }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { cmp ebx, ecx }
	__asm { jle L_0064c9a0 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { L_0064cabd: }
	__asm { inc edx }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { cmp edx, dword ptr [ebp - 0x3c] }
	__asm { jle L_0064c982 }
	__asm { L_0064caca: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012dce58[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00647120();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0064f910
extern "C" __declspec(naked) void asm_0064f910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x44 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { test ebx, ebx }
	__asm { je L_0064fbe1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0064fbe0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { cmp dword ptr [edi], 0 }
	__asm { je L_0064fbdf }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jne L_0064f957 }
	__asm { cmp dword ptr [edx + 4], 0 }
	__asm { jl L_0064f957 }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { jmp L_0064f95c }
	__asm { L_0064f957: }
	__asm { xor al, al }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { L_0064f95c: }
	__asm { mov ecx, dword ptr [g_012dce58] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ecx - 1] }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { jne L_0064f979 }
	__asm { cmp dword ptr [edx + 4], ecx }
	__asm { jge L_0064f979 }
	__asm { mov al, 1 }
	__asm { jmp L_0064f97b }
	__asm { L_0064f979: }
	__asm { xor al, al }
	__asm { L_0064f97b: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ah, byte ptr [ebp - 1] }
	__asm { mov byte ptr [ebp - 2], al }
	__asm { je L_0064f9cf }
	__asm { cmp esi, edi }
	__asm { jne L_0064f9cf }
	__asm { test ah, ah }
	__asm { je L_0064f9cf }
	__asm { test al, al }
	__asm { je L_0064f9cf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064f9b7 }
	__asm { push 0x6f6 }
	__asm { push 0xe373c0 }
	__asm { push 0xe38380 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0064f9cc }
	__asm { L_0064f9b7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe383c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0064f9cc: }
	__asm { mov ah, byte ptr [ebp - 1] }
	__asm { L_0064f9cf: }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { L_0064f9d4: }
	__asm { mov al, byte ptr [ebp - 2] }
	__asm { movzx ecx, al }
	__asm { movzx eax, ah }
	__asm { test edx, edx }
	__asm { cmove ecx, eax }
	__asm { test cl, cl }
	__asm { je L_0064fbca }
	__asm { mov eax, edi }
	__asm { test edx, edx }
	__asm { cmove eax, esi }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { jne L_0064f9fa }
	__asm { xor eax, eax }
	__asm { jmp L_0064fa00 }
	__asm { L_0064f9fa: }
	__asm { mov eax, dword ptr [g_012dce58] }
	__asm { dec eax }
	__asm { L_0064fa00: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { je L_0064fa55 }
	__asm { mov eax, ebx }
	__asm { and eax, 0x80000001 }
	__asm { jns L_0064fa1a }
	__asm { dec eax }
	__asm { or eax, 0xfffffffe }
	__asm { inc eax }
	__asm { L_0064fa1a: }
	__asm { cmp eax, 1 }
	__asm { je L_0064fa55 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064fa40 }
	__asm { push 0x702 }
	__asm { push 0xe373c0 }
	__asm { push 0xe382f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0064fa55 }
	__asm { L_0064fa40: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe38468 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0064fa55: }
	__asm { mov eax, ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov edi, eax }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov esi, dword ptr [edx] }
	__asm { add ebx, 8 }
	__asm { sar edi, 1 }
	__asm { mov eax, ecx }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x2c], ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov edx, esi }
	__asm { sub edx, edi }
	__asm { cmp edx, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovl eax, ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebx + 8] }
	__asm { mov dword ptr [ebp - 0x38], edx }
	__asm { lea edx, [ecx + edi] }
	__asm { cmp dword ptr [eax], edx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { cmovl ecx, eax }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [esi + edi] }
	__asm { cmp dword ptr [ebx], eax }
	__asm { mov esi, dword ptr [ebp - 0x30] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { cmovl ecx, ebx }
	__asm { mov ebx, dword ptr [ebp - 0x2c] }
	__asm { xor edx, edx }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov edi, dword ptr [ecx] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { cmovl eax, ebx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { cmp ebx, dword ptr [ebp - 0x24] }
	__asm { jg L_0064fbc1 }
	__asm { mov ecx, ebx }
	__asm { sub ecx, esi }
	__asm { imul ecx, dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov edi, edi }
	__asm { L_0064faf0: }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, ecx }
	__asm { cmp esi, edi }
	__asm { jg L_0064fb54 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { sub eax, dword ptr [ebp - 0x38] }
	__asm { shl ecx, 4 }
	__asm { add ecx, dword ptr [ebp - 0xc] }
	__asm { add edi, 0x2086b }
	__asm { add eax, esi }
	__asm { lea ecx, [ebx + ecx*2] }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { imul ecx, ecx, 0x26 }
	__asm { add ecx, esi }
	__asm { sub ebx, esi }
	__asm { add edi, ecx }
	__asm { inc ebx }
	__asm { L_0064fb22: }
	__asm { movzx ecx, byte ptr [edi] }
	__asm { movzx esi, byte ptr [eax] }
	__asm { sub esi, ecx }
	__asm { mov edx, esi }
	__asm { sar edx, 0x1f }
	__asm { mov byte ptr [eax], cl }
	__asm { mov ecx, edx }
	__asm { xor ecx, esi }
	__asm { sub ecx, edx }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { or edx, ecx }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { lea edi, [edi + 1] }
	__asm { lea eax, [eax + 1] }
	__asm { dec ebx }
	__asm { jne L_0064fb22 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { L_0064fb54: }
	__asm { add ecx, dword ptr [ebp + 0x18] }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { cmp ebx, dword ptr [ebp - 0x24] }
	__asm { jle L_0064faf0 }
	__asm { cmp edx, 4 }
	__asm { jbe L_0064fbc1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp - 0x28] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp - 8], eax }
	__asm { setne al }
	__asm { sub ecx, dword ptr [ebx + 0x40] }
	__asm { sub esi, dword ptr [ebx + 0x48] }
	__asm { mov dword ptr [ebp - 0x44], ecx }
	__asm { mov dword ptr [ebp - 0x3c], esi }
	__asm { lea edx, [edx + eax*2] }
	__asm { dec edx }
	__asm { sub edx, dword ptr [ebx + 0x44] }
	__asm { mov dword ptr [ebp - 0x40], edx }
	__asm { cmp ecx, dword ptr [ebx + 0x34] }
	__asm { jae L_0064fbc1 }
	__asm { cmp edx, dword ptr [ebx + 0x38] }
	__asm { jae L_0064fbc1 }
	__asm { cmp esi, dword ptr [ebx + 0x3c] }
	__asm { jae L_0064fbc1 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00647120 }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { test eax, eax }
	__asm { je L_0064fbca }
	__asm { or dword ptr [eax], 2 }
	__asm { jmp L_0064fbca }
	__asm { L_0064fbc1: }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { L_0064fbca: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { cmp eax, 2 }
	__asm { mov edx, eax }
	__asm { mov ah, byte ptr [ebp - 1] }
	__asm { jl L_0064f9d4 }
	__asm { L_0064fbdf: }
	__asm { pop edi }
	__asm { L_0064fbe0: }
	__asm { pop esi }
	__asm { L_0064fbe1: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_012dce54[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00647120();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0064fef0
extern "C" __declspec(naked) void asm_0064fef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x44 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { test ebx, ebx }
	__asm { je L_006501dc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_006501db }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { cmp dword ptr [edi], 0 }
	__asm { je L_006501da }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_0064ff35 }
	__asm { cmp dword ptr [edx], 0 }
	__asm { jl L_0064ff35 }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { jmp L_0064ff3a }
	__asm { L_0064ff35: }
	__asm { xor al, al }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { L_0064ff3a: }
	__asm { mov ecx, dword ptr [g_012dce54] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ecx - 1] }
	__asm { cmp dword ptr [esi], eax }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { jne L_0064ff55 }
	__asm { cmp dword ptr [edx], ecx }
	__asm { jge L_0064ff55 }
	__asm { mov al, 1 }
	__asm { jmp L_0064ff57 }
	__asm { L_0064ff55: }
	__asm { xor al, al }
	__asm { L_0064ff57: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ah, byte ptr [ebp - 1] }
	__asm { mov byte ptr [ebp - 2], al }
	__asm { je L_0064ffab }
	__asm { cmp esi, edi }
	__asm { jne L_0064ffab }
	__asm { test ah, ah }
	__asm { je L_0064ffab }
	__asm { test al, al }
	__asm { je L_0064ffab }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0064ff93 }
	__asm { push 0x6f6 }
	__asm { push 0xe373c0 }
	__asm { push 0xe38380 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0064ffa8 }
	__asm { L_0064ff93: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe383c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0064ffa8: }
	__asm { mov ah, byte ptr [ebp - 1] }
	__asm { L_0064ffab: }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { L_0064ffb0: }
	__asm { mov al, byte ptr [ebp - 2] }
	__asm { movzx ecx, al }
	__asm { movzx eax, ah }
	__asm { test edx, edx }
	__asm { cmove ecx, eax }
	__asm { test cl, cl }
	__asm { je L_006501c5 }
	__asm { mov eax, edi }
	__asm { test edx, edx }
	__asm { cmove eax, esi }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { jne L_0064ffdb }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { jmp L_0064ffe4 }
	__asm { L_0064ffdb: }
	__asm { mov eax, dword ptr [g_012dce54] }
	__asm { dec eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { L_0064ffe4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00650036 }
	__asm { mov eax, ebx }
	__asm { and eax, 0x80000001 }
	__asm { jns L_0064fffb }
	__asm { dec eax }
	__asm { or eax, 0xfffffffe }
	__asm { inc eax }
	__asm { L_0064fffb: }
	__asm { cmp eax, 1 }
	__asm { je L_00650036 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00650021 }
	__asm { push 0x702 }
	__asm { push 0xe373c0 }
	__asm { push 0xe382f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00650036 }
	__asm { L_00650021: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe38468 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00650036: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov eax, ebx }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov edi, eax }
	__asm { sar edi, 1 }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { lea ebx, [eax + 4] }
	__asm { add eax, 8 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov dword ptr [ebp - 0x30], ebx }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { cmp ebx, dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { cmovl ecx, eax }
	__asm { add edx, edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp dword ptr [ebx + 4], edx }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { cmovl ecx, eax }
	__asm { lea edx, [esi + edi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp dword ptr [ebx + 8], edx }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov ebx, dword ptr [ebp - 0x30] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { cmovl ecx, eax }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { xor edx, edx }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { cmovl eax, ebx }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x34], ebx }
	__asm { cmp ebx, edi }
	__asm { jg L_006501bc }
	__asm { sub edi, dword ptr [ebp - 0x34] }
	__asm { mov eax, ebx }
	__asm { mov ecx, ebx }
	__asm { shl eax, 4 }
	__asm { add eax, ebx }
	__asm { mov ebx, dword ptr [ebp - 0x28] }
	__asm { sub ecx, esi }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { imul ecx, dword ptr [ebp + 0x18] }
	__asm { lea eax, [esi + eax*2] }
	__asm { imul eax, eax, 0x26 }
	__asm { add eax, dword ptr [ebp - 0x10] }
	__asm { add ebx, 0x2086b }
	__asm { add ebx, eax }
	__asm { inc edi }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { mov edi, edi }
	__asm { L_00650100: }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, ecx }
	__asm { cmp esi, dword ptr [ebp - 0x18] }
	__asm { jg L_00650149 }
	__asm { sub eax, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { sub edi, esi }
	__asm { add eax, esi }
	__asm { inc edi }
	__asm { L_00650117: }
	__asm { movzx ecx, byte ptr [ebx] }
	__asm { movzx esi, byte ptr [eax] }
	__asm { sub esi, ecx }
	__asm { mov edx, esi }
	__asm { sar edx, 0x1f }
	__asm { mov byte ptr [eax], cl }
	__asm { mov ecx, edx }
	__asm { xor ecx, esi }
	__asm { sub ecx, edx }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { or edx, ecx }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { lea ebx, [ebx + 0x26] }
	__asm { lea eax, [eax + 1] }
	__asm { dec edi }
	__asm { jne L_00650117 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { L_00650149: }
	__asm { add ecx, dword ptr [ebp + 0x18] }
	__asm { add ebx, 0x50c }
	__asm { dec edi }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { jne L_00650100 }
	__asm { cmp edx, 4 }
	__asm { jbe L_006501bc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp - 0x28] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp - 0xc], eax }
	__asm { setne al }
	__asm { sub edx, dword ptr [ebx + 0x44] }
	__asm { sub esi, dword ptr [ebx + 0x48] }
	__asm { mov dword ptr [ebp - 0x40], edx }
	__asm { mov dword ptr [ebp - 0x3c], esi }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { dec ecx }
	__asm { sub ecx, dword ptr [ebx + 0x40] }
	__asm { mov dword ptr [ebp - 0x44], ecx }
	__asm { cmp ecx, dword ptr [ebx + 0x34] }
	__asm { jae L_006501bc }
	__asm { cmp edx, dword ptr [ebx + 0x38] }
	__asm { jae L_006501bc }
	__asm { cmp esi, dword ptr [ebx + 0x3c] }
	__asm { jae L_006501bc }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00647120 }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { test eax, eax }
	__asm { je L_006501c5 }
	__asm { or dword ptr [eax], 2 }
	__asm { jmp L_006501c5 }
	__asm { L_006501bc: }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { L_006501c5: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { cmp eax, 2 }
	__asm { mov edx, eax }
	__asm { mov ah, byte ptr [ebp - 1] }
	__asm { jl L_0064ffb0 }
	__asm { L_006501da: }
	__asm { pop edi }
	__asm { L_006501db: }
	__asm { pop esi }
	__asm { L_006501dc: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_012dce5c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00650380
extern "C" __declspec(naked) void asm_00650380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { test ebx, ebx }
	__asm { je L_00650507 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00650507 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00650506 }
	__asm { mov edx, dword ptr [g_012dce5c] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, ecx }
	__asm { js L_006503c9 }
	__asm { cmp ecx, edx }
	__asm { jl L_00650505 }
	__asm { test ecx, ecx }
	__asm { L_006503c9: }
	__asm { cmovs eax, esi }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { or eax, 0xffffffff }
	__asm { test ecx, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { cmovs edx, eax }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { test cl, cl }
	__asm { je L_0065042f }
	__asm { mov eax, ebx }
	__asm { and eax, 0x80000001 }
	__asm { jns L_006503f2 }
	__asm { dec eax }
	__asm { or eax, 0xfffffffe }
	__asm { inc eax }
	__asm { L_006503f2: }
	__asm { cmp eax, 1 }
	__asm { je L_0065042f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0065041e }
	__asm { push 0x6cc }
	__asm { push 0xe373c0 }
	__asm { push 0xe382f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0065042f }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0065041e: }
	__asm { movzx eax, cl }
	__asm { push 0xe38310 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0065042f: }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov edi, dword ptr [edi] }
	__asm { mov esi, eax }
	__asm { sar esi, 1 }
	__asm { mov ecx, edx }
	__asm { sub ecx, esi }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov eax, edi }
	__asm { sub eax, esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { cmp esi, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { cmovl eax, ecx }
	__asm { add edx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [esi + 4], edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea ebx, [ecx + 4] }
	__asm { lea eax, [esi + 4] }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { cmovl ecx, eax }
	__asm { mov dword ptr [ebp + 0x1c], edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add eax, edi }
	__asm { cmp dword ptr [esi], eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { cmovl ecx, esi }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { lea eax, [ebp - 8] }
	__asm { cmovl eax, ebx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { cmp edx, ecx }
	__asm { jg L_00650505 }
	__asm { sub ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, edx }
	__asm { shl eax, 4 }
	__asm { add eax, edx }
	__asm { mov ebx, edx }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { sub ebx, esi }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { imul ebx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edx + eax*2] }
	__asm { imul eax, eax, 0x26 }
	__asm { add esi, 0x2086b }
	__asm { add esi, eax }
	__asm { inc ecx }
	__asm { mov dword ptr [ebp + 0x1c], ecx }
	__asm { L_006504d7: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add edx, ebx }
	__asm { cmp eax, edi }
	__asm { jg L_006504f6 }
	__asm { sub edx, dword ptr [ebp - 4] }
	__asm { L_006504e8: }
	__asm { mov cl, byte ptr [edx + eax] }
	__asm { mov byte ptr [esi + eax], cl }
	__asm { inc eax }
	__asm { cmp eax, edi }
	__asm { jle L_006504e8 }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { L_006504f6: }
	__asm { add ebx, dword ptr [ebp + 0x14] }
	__asm { add esi, 0x50c }
	__asm { dec ecx }
	__asm { mov dword ptr [ebp + 0x1c], ecx }
	__asm { jne L_006504d7 }
	__asm { L_00650505: }
	__asm { pop edi }
	__asm { L_00650506: }
	__asm { pop esi }
	__asm { L_00650507: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e36278[];
extern "C" char g_01038120[];
extern "C" char g_01038168[];
extern "C" void fn_00654c60();
extern "C" void fn_006deac0();
// FUNCTION: ROBLOXSTUDIO 0x00654ea0
extern "C" __declspec(naked) void asm_00654ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10a19 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp esi, eax }
	__asm { je L_00654fed }
	__asm { push ebx }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { cmp eax, esi }
	__asm { jge L_00654ef9 }
	__asm { lea ebx, [eax + eax*4] }
	__asm { shl ebx, 2 }
	__asm { sub esi, eax }
	__asm { L_00654ee3: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { add ecx, ebx }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { add ebx, 0x14 }
	__asm { dec esi }
	__asm { jne L_00654ee3 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00654ef9: }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { cmp ebx, ecx }
	__asm { jle L_00654f71 }
	__asm { test ecx, ecx }
	__asm { jne L_00654f10 }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { push esi }
	__asm { jmp L_00654f94 }
	__asm { L_00654f10: }
	__asm { cmp ebx, 0xa }
	__asm { jge L_00654f1f }
	__asm { mov dword ptr [edi + 8], 0xa }
	__asm { push esi }
	__asm { jmp L_00654f94 }
	__asm { L_00654f1f: }
	__asm { movss xmm1, dword ptr [g_01038168] }
	__asm { mov eax, ecx }
	__asm { lea eax, [eax + eax*4] }
	__asm { shl eax, 2 }
	__asm { cmp eax, 0x61a80 }
	__asm { jle L_00654f40 }
	__asm { movss xmm1, dword ptr [g_00e36278] }
	__asm { jmp L_00654f4f }
	__asm { L_00654f40: }
	__asm { cmp eax, 0xfa00 }
	__asm { jle L_00654f4f }
	__asm { movss xmm1, dword ptr [g_01038120] }
	__asm { L_00654f4f: }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { mov edx, 0xa }
	__asm { mulss xmm0, xmm1 }
	__asm { push esi }
	__asm { cvttss2si eax, xmm0 }
	__asm { sub eax, ecx }
	__asm { add eax, ebx }
	__asm { mov ecx, eax }
	__asm { cmp eax, edx }
	__asm { cmovl ecx, edx }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00654f94 }
	__asm { L_00654f71: }
	__asm { mov eax, 0x55555556 }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp ebx, eax }
	__asm { jg L_00654f9b }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00654f9b }
	__asm { cmp ebx, 0xa }
	__asm { jle L_00654f9b }
	__asm { cmp ebx, esi }
	__asm { cmovge ebx, esi }
	__asm { push ebx }
	__asm { L_00654f94: }
	__asm { mov ecx, edi }
	__asm { call fn_00654c60 }
	__asm { L_00654f9b: }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jge L_00654fec }
	__asm { L_00654fa3: }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [esi + esi*4] }
	__asm { lea ebx, [eax + ecx*4] }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00654fdc }
	__asm { mov dword ptr [ebx], 0xe370e4 }
	__asm { call fn_006deac0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebx + 8], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { L_00654fdc: }
	__asm { inc esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jl L_00654fa3 }
	__asm { L_00654fec: }
	__asm { pop ebx }
	__asm { L_00654fed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00655190();
extern "C" void fn_006b9740();
extern "C" void fn_009f3d00();
// FUNCTION: ROBLOXSTUDIO 0x00655000
extern "C" __declspec(naked) void asm_00655000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test cl, cl }
	__asm { je L_006550c9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { ucomiss xmm0, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00655094 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { ucomiss xmm0, dword ptr [esi + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00655094 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { ucomiss xmm0, dword ptr [esi + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00655094 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { ucomiss xmm0, dword ptr [esi + 0xc] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00655094 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { ucomiss xmm0, dword ptr [esi + 0x10] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00655094 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { ucomiss xmm0, dword ptr [esi + 0x14] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_006550c9 }
	__asm { L_00655094: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006550b8 }
	__asm { push 0x61 }
	__asm { push 0xe37178 }
	__asm { push 0xe371c8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006550c9 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006550b8: }
	__asm { movzx eax, cl }
	__asm { push 0xe371e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006550c9: }
	__asm { push esi }
	__asm { call fn_009f3d00 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00655112 }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_009f3d00 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00655112 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov eax, edx }
	__asm { mov dword ptr [edx + 0x14], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00655112: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00655150 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0065513f }
	__asm { push 0x63 }
	__asm { push 0xe37178 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00655150 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0065513f: }
	__asm { movzx eax, al }
	__asm { push 0xe37268 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00655150: }
	__asm { call fn_00655190 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { mov eax, edx }
	__asm { mov dword ptr [edx + 0x14], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00619890();
extern "C" void fn_00655990();
extern "C" void fn_006813a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x006552f0
extern "C" __declspec(naked) void asm_006552f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10a8c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe38b5c }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_00655990 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 0x198] }
	__asm { call fn_006813a0 }
	__asm { mov edi, dword ptr [esi + 0x70] }
	__asm { test edi, edi }
	__asm { je L_00655362 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00cf6698 }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00cf6698 }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00cf6698 }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6698 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00655362: }
	__asm { mov edi, dword ptr [esi + 0x6c] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00655394 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00655394 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00655394 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00655394: }
	__asm { mov edi, dword ptr [esi + 0x64] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_006553c2 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006553c2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006553c2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006553c2: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00619890 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_00656780();
extern "C" void fn_00656860();
extern "C" void fn_00657110();
extern "C" void fn_00681240();
extern "C" void fn_006812d0();
extern "C" void fn_006b9740();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x006553f0
extern "C" __declspec(naked) void asm_006553f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd10aa6 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { je L_006554a6 }
	__asm { cmp dword ptr [esi + 0x60], 0 }
	__asm { jne L_00655429 }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { je L_0065545f }
	__asm { L_00655429: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0065544a }
	__asm { push 0xf5 }
	__asm { push 0xe38b98 }
	__asm { push 0xe38f14 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0065545f }
	__asm { L_0065544a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe38f30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0065545f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006554a6 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_006554a6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00655491 }
	__asm { push 0xf6 }
	__asm { push 0xe38b98 }
	__asm { push 0xe38fa4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006554a6 }
	__asm { L_00655491: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe38fb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006554a6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, 1 }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { test ebx, ebx }
	__asm { je L_006554c0 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006554c0: }
	__asm { mov dword ptr [esi + 0x60], edi }
	__asm { mov edi, dword ptr [esi + 0x64] }
	__asm { mov dword ptr [esi + 0x64], ebx }
	__asm { or ebx, 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_006554f9 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006554f9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006554f4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006554f4: }
	__asm { mov edx, 1 }
	__asm { L_006554f9: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_0065550d }
	__asm { lea eax, [ecx + 4] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_0065550d: }
	__asm { mov dword ptr [esi + 0x68], edi }
	__asm { mov edi, dword ptr [esi + 0x6c] }
	__asm { mov dword ptr [esi + 0x6c], ecx }
	__asm { test edi, edi }
	__asm { je L_0065553d }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065553d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0065553d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065553d: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { add ecx, 0x58 }
	__asm { mov dword ptr [ebp - 0x1c], 0x655d40 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00656860 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00657110 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0065558d }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0065558d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00655604 }
	__asm { mov dword ptr [ebp - 0x1c], 0x655eb0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_007b49a0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x18] }
	__asm { call fn_00656780 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00657110 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006555e6 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_006555e6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { cmp dword ptr [eax + 0x7c], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { push esi }
	__asm { jne L_006555ff }
	__asm { call fn_006812d0 }
	__asm { jmp L_00655604 }
	__asm { L_006555ff: }
	__asm { call fn_00681240 }
	__asm { L_00655604: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00655f20();
extern "C" void fn_00656c10();
extern "C" void fn_00656c90();
extern "C" void fn_00656dc0();
extern "C" void fn_006b9740();
extern "C" void fn_006dec80();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00656390
extern "C" __declspec(naked) void asm_00656390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_00656c10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_006563e4 }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { je L_006563e4 }
	__asm { movss xmm0, dword ptr [eax + 0x7c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_00656dc0 }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006563e4: }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_00656c90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00656427 }
	__asm { test edi, edi }
	__asm { je L_00656427 }
	__asm { fld dword ptr [edi + 0x80] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { fld dword ptr [edi + 0x7c] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00655f20 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00656427: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00656465 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00656454 }
	__asm { push 0x4a }
	__asm { push 0xe38b98 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00656465 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00656454: }
	__asm { movzx eax, al }
	__asm { push 0xe38be0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00656465: }
	__asm { call fn_006dec80 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { call fn_006dec80 }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [g_010385f0] }
	__asm { xorps xmm3, xmm1 }
	__asm { xorps xmm2, xmm1 }
	__asm { xorps xmm0, xmm1 }
	__asm { pop edi }
	__asm { movss dword ptr [esi + 0xc], xmm0 }
	__asm { movss dword ptr [esi + 0x10], xmm3 }
	__asm { movss dword ptr [esi + 0x14], xmm2 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00656550
extern "C" __declspec(naked) void asm_00656550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { je L_006565dd }
	__asm { test ebx, ebx }
	__asm { jne L_0065659c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00656587 }
	__asm { push 0x62 }
	__asm { push 0xe38b98 }
	__asm { push 0xe38ca0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0065659c }
	__asm { L_00656587: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe38cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0065659c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006565dd }
	__asm { test bl, 1 }
	__asm { jne L_006565dd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006565c8 }
	__asm { push 0x63 }
	__asm { push 0xe38b98 }
	__asm { push 0xe38d14 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006565dd }
	__asm { L_006565c8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe38d28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006565dd: }
	__asm { mov esi, ebx }
	__asm { imul esi, ebx }
	__asm { push esi }
	__asm { call fn_00cf64a0 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_00cf6804 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x10 }
	__asm { test edi, edi }
	__asm { je L_0065669b }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { cmp ebx, edi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { cmovae eax, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { test cl, cl }
	__asm { je L_00656658 }
	__asm { test al, 1 }
	__asm { jne L_00656658 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00656644 }
	__asm { push 0x6e }
	__asm { push 0xe38b98 }
	__asm { push 0xe38d90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00656655 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00656644: }
	__asm { movzx eax, cl }
	__asm { push 0xe38da8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00656655: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { L_00656658: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, ebx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, edi }
	__asm { sub ecx, eax }
	__asm { sub edx, eax }
	__asm { shr ecx, 1 }
	__asm { shr edx, 1 }
	__asm { test eax, eax }
	__asm { je L_0065669b }
	__asm { lea esi, [ebx + 1] }
	__asm { inc edi }
	__asm { imul esi, edx }
	__asm { add esi, dword ptr [ebp - 8] }
	__asm { imul edi, ecx }
	__asm { add edi, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00656683: }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { add edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 0xc }
	__asm { add esi, ebx }
	__asm { dec dword ptr [ebp - 4] }
	__asm { jne L_00656683 }
	__asm { L_0065669b: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push eax }
	__asm { mov dword ptr [ecx], edx }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006572f0
extern "C" __declspec(naked) void asm_006572f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10ba1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 1 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 2 }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { test eax, eax }
	__asm { je L_00657360 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00657360: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test al, al }
	__asm { je L_006573d8 }
	__asm { cmp dword ptr [edx], 0 }
	__asm { jne L_006573d8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006573c7 }
	__asm { push 0x12 }
	__asm { push 0xe39140 }
	__asm { push 0xe39188 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006573d8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006573c7: }
	__asm { movzx eax, al }
	__asm { push 0xe39190 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006573d8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00657f90();
extern "C" void fn_00658980();
// FUNCTION: ROBLOXSTUDIO 0x00657450
extern "C" __declspec(naked) void asm_00657450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd10bbb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, 0x66666667 }
	__asm { push ebx }
	__asm { lea ebx, [ecx + 0x28] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { push edi }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { or edi, 0xffffffff }
	__asm { cmp edx, eax }
	__asm { jb L_006574fb }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 1] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00658980 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { test esi, esi }
	__asm { je L_006574f8 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006574f8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006574f8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006574f8: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_006574fb: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { test eax, eax }
	__asm { je L_00657519 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00657519: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { lea ecx, [edx + edx*4] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { call fn_00657f90 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00657576 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00657576 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00657576 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00657576: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00658830();
// FUNCTION: ROBLOXSTUDIO 0x00657600
extern "C" __declspec(naked) void asm_00657600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { js L_0065767b }
	__asm { lea eax, [ecx + 0x34] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { sub ecx, ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov ecx, edx }
	__asm { push esi }
	__asm { shr ecx, 0x1f }
	__asm { xor esi, esi }
	__asm { add ecx, edx }
	__asm { je L_00657640 }
	__asm { mov eax, ebx }
	__asm { L_00657634: }
	__asm { cmp dword ptr [eax], edi }
	__asm { je L_00657682 }
	__asm { inc esi }
	__asm { add eax, 0x14 }
	__asm { cmp esi, ecx }
	__asm { jb L_00657634 }
	__asm { L_00657640: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_00658830 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_0065767b: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00657682: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + esi*4] }
	__asm { fld dword ptr [eax] }
	__asm { pop esi }
	__asm { fstp dword ptr [ebx + ecx*4 + 4] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ebx + ecx*4 + 8] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ebx + ecx*4 + 0xc] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ebx + ecx*4 + 0x10] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00657950
extern "C" __declspec(naked) void asm_00657950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, eax }
	__asm { je L_006579ee }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea ebx, [eax + 8] }
	__asm { sub eax, esi }
	__asm { add eax, -4 }
	__asm { push edi }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { L_00657972: }
	__asm { mov edx, dword ptr [ebx - 0x18] }
	__asm { mov edi, dword ptr [eax + esi - 0x10] }
	__asm { lea ebx, [ebx - 0x14] }
	__asm { sub esi, 0x14 }
	__asm { test edx, edx }
	__asm { je L_00657992 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { L_00657992: }
	__asm { mov dword ptr [esi], edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { test edi, edi }
	__asm { je L_006579c7 }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006579c4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006579c4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006579c4: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { L_006579c7: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add eax, 4 }
	__asm { add eax, esi }
	__asm { cmp eax, ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { jne L_00657972 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006579ee: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00657a00
extern "C" __declspec(naked) void asm_00657a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_00657a79 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { add edi, 4 }
	__asm { L_00657a14: }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { test edx, edx }
	__asm { je L_00657a29 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00657a29: }
	__asm { mov dword ptr [edi - 4], esi }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [edi], edx }
	__asm { test esi, esi }
	__asm { je L_00657a5a }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00657a5a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00657a5a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00657a5a: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { add edi, 0x14 }
	__asm { lea eax, [edi - 4] }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00657a14 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00657a79: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00657a80
extern "C" __declspec(naked) void asm_00657a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, ecx }
	__asm { je L_00657b18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea ebx, [eax + 8] }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { nop }
	__asm { L_00657aa0: }
	__asm { mov edx, dword ptr [ebx - 4] }
	__asm { mov edi, dword ptr [eax + esi] }
	__asm { test edx, edx }
	__asm { je L_00657ab9 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_00657ab9: }
	__asm { mov dword ptr [esi], edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { test edi, edi }
	__asm { je L_00657aee }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00657aeb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00657aeb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00657aeb: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_00657aee: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esi, 0x14 }
	__asm { add eax, esi }
	__asm { add ebx, 0x14 }
	__asm { cmp eax, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { jne L_00657aa0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00657b18: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00657b70
extern "C" __declspec(naked) void asm_00657b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp eax, ecx }
	__asm { je L_00657bcd }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { L_00657b82: }
	__asm { mov edi, eax }
	__asm { test edx, edx }
	__asm { je L_00657bba }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [edx], esi }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { test esi, esi }
	__asm { je L_00657ba8 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00657ba8: }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov dword ptr [edx + 8], esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], esi }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], esi }
	__asm { L_00657bba: }
	__asm { add eax, 0x14 }
	__asm { add edx, 0x14 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, ecx }
	__asm { jne L_00657b82 }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00657bcd: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00657be0
extern "C" __declspec(naked) void asm_00657be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00657c29 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { L_00657bf2: }
	__asm { test eax, eax }
	__asm { je L_00657c22 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00657c10 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00657c10: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { L_00657c22: }
	__asm { add eax, 0x14 }
	__asm { dec esi }
	__asm { jne L_00657bf2 }
	__asm { pop edi }
	__asm { L_00657c29: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00657c90
extern "C" __declspec(naked) void asm_00657c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edi }
	__asm { je L_00657ce2 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00657ca2: }
	__asm { test esi, esi }
	__asm { je L_00657cd2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00657cc0 }
	__asm { add eax, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_00657cc0: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], edx }
	__asm { L_00657cd2: }
	__asm { add ecx, 0x14 }
	__asm { add esi, 0x14 }
	__asm { cmp ecx, edi }
	__asm { jne L_00657ca2 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00657ce2: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00657d80();
extern "C" void fn_00657e30();
// FUNCTION: ROBLOXSTUDIO 0x00657ee0
extern "C" __declspec(naked) void asm_00657ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10c26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
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
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { test eax, eax }
	__asm { je L_00657f4d }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00657f4d: }
	__asm { lea eax, [edi + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00657e30 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x34] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00657d80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00657f90
extern "C" __declspec(naked) void asm_00657f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00657fb0 }
	__asm { lea eax, [ecx + 4] }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_00657fb0: }
	__asm { mov dword ptr [edi], esi }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test esi, esi }
	__asm { je L_00657fe2 }
	__asm { lea ecx, [esi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00657fe2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00657fe2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00657fe2: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" char g_00e10268[];
extern "C" void fn_004033d0();
extern "C" void fn_0061c850();
extern "C" void fn_0061e300();
extern "C" void fn_00657950();
extern "C" void fn_00657a00();
extern "C" void fn_00657be0();
extern "C" void fn_00657c30();
extern "C" void fn_00657c90();
extern "C" void fn_00658000();
extern "C" void fn_00658760();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00658050
extern "C" __declspec(naked) void asm_00658050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10c40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov edx, esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sub edx, eax }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { push edi }
	__asm { sar edx, 3 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { mov dword ptr [ebp - 0x2c], edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { test edi, edi }
	__asm { je L_006583cd }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { sub ecx, dword ptr [ebx + 4] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { mov eax, 0x66666667 }
	__asm { jae L_0065824a }
	__asm { sub ecx, dword ptr [ebp - 0x24] }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0xccccccc }
	__asm { sub eax, ecx }
	__asm { cmp eax, edi }
	__asm { jae L_006580ed }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006580ed: }
	__asm { lea eax, [ecx + edi] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00658000 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { call fn_00658760 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push 0 }
	__asm { add eax, edx }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [eax + eax*4] }
	__asm { push edi }
	__asm { lea eax, [esi + eax*4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00657be0 }
	__asm { add esp, 0x18 }
	__asm { lea eax, [ebp + 0x17] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], 1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00657c90 }
	__asm { add esp, 0x18 }
	__asm { lea eax, [ebp + 0x17] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], 2 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { add eax, edi }
	__asm { lea eax, [eax + eax*4] }
	__asm { lea eax, [esi + eax*4] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00657c90 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add edi, eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006581d3 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp + 0x13] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_0061c850 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_006581d3: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [eax + eax*4] }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [edi + edi*4] }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { jmp L_006583cd }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { cmp eax, 1 }
	__asm { jle L_0065821a }
	__asm { lea eax, [edi + edi*4] }
	__asm { mov ecx, ebx }
	__asm { lea eax, [esi + eax*4] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0061e300 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { L_0065821a: }
	__asm { test eax, eax }
	__asm { jle L_00658238 }
	__asm { lea eax, [edi + edi*4] }
	__asm { mov ecx, ebx }
	__asm { lea edx, [esi + eax*4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add eax, edi }
	__asm { lea eax, [eax + eax*4] }
	__asm { lea eax, [esi + eax*4] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_0061e300 }
	__asm { L_00658238: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0065824a: }
	__asm { sub ecx, esi }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { cmp eax, edi }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { jae L_0065834a }
	__asm { test eax, eax }
	__asm { je L_00658281 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { L_00658281: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [edi + edi*4] }
	__asm { shl eax, 2 }
	__asm { push 0 }
	__asm { lea ecx, [ebp + 0x17] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { push esi }
	__asm { call fn_00657c90 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub edi, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x17] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00657be0 }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { add dword ptr [ebx + 4], ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { add esp, 0x30 }
	__asm { sub eax, ecx }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00657a00 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { jmp L_006583cd }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { lea edx, [eax + eax*4] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { shl edx, 2 }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { call fn_0061e300 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0065834a: }
	__asm { test eax, eax }
	__asm { je L_0065835a }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065835a: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { lea ebx, [eax + eax*4] }
	__asm { lea eax, [ebp + 0x13] }
	__asm { push eax }
	__asm { push edi }
	__asm { shl ebx, 2 }
	__asm { mov esi, edi }
	__asm { sub esi, ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { call fn_00657c90 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { call fn_00657950 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebx + eax] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00657a00 }
	__asm { add esp, 0x34 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { L_006583cd: }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { pop edi }
	__asm { lea ecx, [eax + eax*4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { pop esi }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10c50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_00658445 }
	__asm { cmp edi, 0xccccccc }
	__asm { ja L_0065843f }
	__asm { lea eax, [edi + edi*4] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00658445 }
	__asm { L_0065843f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00658445: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00657c30 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00658492 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00658492: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*4] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*4] }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" void fn_0065f4b0();
extern "C" void fn_0065fa40();
// FUNCTION: ROBLOXSTUDIO 0x00658b10
extern "C" __declspec(naked) void asm_00658b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10ce1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0065f4b0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x2784] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0065fa40 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00658ba1 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00658ba1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00658ba1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00658ba1: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00658bd2 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00658bd2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00658bd2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00658bd2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00660110();
extern "C" void fn_0092da00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00658bf0
extern "C" __declspec(naked) void asm_00658bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10d04 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { lea edi, [ecx + 0x2134] }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov dword ptr [ebp - 0x30], 0x20 }
	__asm { L_00658c23: }
	__asm { mov esi, dword ptr [edi - 0x28] }
	__asm { cmp esi, dword ptr [edi - 0x18] }
	__asm { lea eax, [edi - 0x18] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { cmovb ecx, eax }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { sub ecx, dword ptr [eax] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { add ecx, 8 }
	__asm { cmp ecx, esi }
	__asm { lea edx, [ebp - 0x34] }
	__asm { cmovae eax, edx }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { lea ecx, [edi - 0x30] }
	__asm { mov dword ptr [ebp - 0x34], esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { add eax, ecx }
	__asm { je L_00658c66 }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { jmp L_00658c6d }
	__asm { L_00658c66: }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { L_00658c6d: }
	__asm { mov edx, dword ptr [edi] }
	__asm { lea eax, [edi - 0x14] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00658c7e }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_00658c80 }
	__asm { L_00658c7e: }
	__asm { mov esi, eax }
	__asm { L_00658c80: }
	__asm { mov ecx, dword ptr [edi - 4] }
	__asm { add ecx, esi }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00658c8c }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00658c8c: }
	__asm { xor edi, edi }
	__asm { cmp eax, ecx }
	__asm { je L_00658cb0 }
	__asm { L_00658c92: }
	__asm { mov esi, edi }
	__asm { mov edx, edi }
	__asm { shr edx, 2 }
	__asm { shl esi, 6 }
	__asm { add esi, edx }
	__asm { movsx edx, byte ptr [eax] }
	__asm { add edx, 0x9e3779b9 }
	__asm { add edx, esi }
	__asm { inc eax }
	__asm { xor edi, edx }
	__asm { cmp eax, ecx }
	__asm { jne L_00658c92 }
	__asm { L_00658cb0: }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0092da00 }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { jbe L_00658d7d }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { L_00658cd5: }
	__asm { lea edx, [edi - 0x30] }
	__asm { test esi, esi }
	__asm { jne L_00658d14 }
	__asm { cmp dword ptr [edx + 8], esi }
	__asm { je L_00658d05 }
	__asm { mov ecx, dword ptr [edi - 0x2c] }
	__asm { mov eax, dword ptr [edi - 0x1c] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00658cf9 }
	__asm { add eax, -0x20 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea esi, [ebp - 0x28] }
	__asm { jmp L_00658d0f }
	__asm { L_00658cf9: }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { lea esi, [ebp - 0x28] }
	__asm { jmp L_00658d0f }
	__asm { L_00658d05: }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { lea esi, [ebp - 0x38] }
	__asm { L_00658d0f: }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { L_00658d14: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00658d5d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp eax, 1 }
	__asm { jne L_00658d5a }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { test eax, eax }
	__asm { je L_00658d36 }
	__asm { lea ecx, [eax + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00658d36 }
	__asm { add ecx, -0x20 }
	__asm { jmp L_00658d38 }
	__asm { L_00658d36: }
	__asm { xor ecx, ecx }
	__asm { L_00658d38: }
	__asm { mov esi, dword ptr [ecx + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00658d4d }
	__asm { add esi, -0x20 }
	__asm { push esi }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00660110 }
	__asm { jmp L_00658d6b }
	__asm { L_00658d4d: }
	__asm { xor esi, esi }
	__asm { push esi }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00660110 }
	__asm { jmp L_00658d6b }
	__asm { L_00658d5a: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { L_00658d5d: }
	__asm { mov esi, dword ptr [esi + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00658d69 }
	__asm { add esi, -0x20 }
	__asm { jmp L_00658d6b }
	__asm { L_00658d69: }
	__asm { xor esi, esi }
	__asm { L_00658d6b: }
	__asm { dec dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { jne L_00658cd5 }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp - 0x2c] }
	__asm { L_00658d7d: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { test esi, esi }
	__asm { jne L_00658dab }
	__asm { push esi }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov dword ptr [ebp - 0x54], 0xf }
	__asm { mov dword ptr [ebp - 0x58], esi }
	__asm { mov byte ptr [ebp - 0x68], 0 }
	__asm { call fn_004038a0 }
	__asm { lea esi, [ebp - 0x68] }
	__asm { or ebx, 1 }
	__asm { jmp L_00658dd0 }
	__asm { L_00658dab: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 0x3c], 0xf }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov byte ptr [ebp - 0x50], 0 }
	__asm { call fn_00403540 }
	__asm { lea esi, [ebp - 0x50] }
	__asm { or ebx, 2 }
	__asm { L_00658dd0: }
	__asm { add edi, 0x1c }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp edi, esi }
	__asm { je L_00658e3c }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00658dea }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00658dea: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_00658e15 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00658e1f }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00658e1f }
	__asm { L_00658e15: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00658e1f: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00658e3c: }
	__asm { test bl, 2 }
	__asm { je L_00658e6a }
	__asm { and ebx, 0xfffffffd }
	__asm { cmp dword ptr [ebp - 0x3c], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { jb L_00658e58 }
	__asm { push dword ptr [ebp - 0x50] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00658e58: }
	__asm { mov dword ptr [ebp - 0x3c], 0xf }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov byte ptr [ebp - 0x50], 0 }
	__asm { L_00658e6a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_00658e9f }
	__asm { and ebx, 0xfffffffe }
	__asm { cmp dword ptr [ebp - 0x54], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { jb L_00658e8d }
	__asm { push dword ptr [ebp - 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00658e8d: }
	__asm { mov dword ptr [ebp - 0x54], 0xf }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov byte ptr [ebp - 0x68], 0 }
	__asm { L_00658e9f: }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { add edi, 0x34 }
	__asm { dec dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { jne L_00658c23 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038034[];
extern "C" char g_010380e4[];
extern "C" void fn_00770ba0();
extern "C" void fn_00770c10();
extern "C" void fn_00891b30();
// FUNCTION: ROBLOXSTUDIO 0x006594a0
extern "C" __declspec(naked) void asm_006594a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_006594c5 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_006594c5 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00770ba0 }
	__asm { mov byte ptr [ebp + 0x13], 1 }
	__asm { test al, al }
	__asm { jne L_006594c9 }
	__asm { L_006594c5: }
	__asm { mov byte ptr [ebp + 0x13], 0 }
	__asm { L_006594c9: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { xor ebx, ebx }
	__asm { cmp byte ptr [ebp + 8], bl }
	__asm { mov byte ptr [eax], 0 }
	__asm { setne bl }
	__asm { test esi, esi }
	__asm { je L_006594f5 }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jne L_006594f5 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00770c10 }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { je L_006594f5 }
	__asm { or ebx, 0x80 }
	__asm { L_006594f5: }
	__asm { cmp byte ptr [ebp + 0x13], 0 }
	__asm { je L_00659514 }
	__asm { or ebx, 0x60 }
	__asm { cmp edi, dword ptr [esi + 0x18] }
	__asm { jne L_0065950c }
	__asm { cmp dword ptr [esi + 0x70], 0 }
	__asm { je L_0065950c }
	__asm { mov byte ptr [eax], 1 }
	__asm { L_0065950c: }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jne L_00659514 }
	__asm { mov byte ptr [eax], 1 }
	__asm { L_00659514: }
	__asm { mov ecx, edi }
	__asm { call fn_00891b30 }
	__asm { mov ecx, edi }
	__asm { lea esi, [eax + 0x44] }
	__asm { call fn_00891b30 }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm0, dword ptr [eax + 0x3c] }
	__asm { mulss xmm0, dword ptr [esi] }
	__asm { subss xmm1, xmm0 }
	__asm { comiss xmm1, dword ptr [g_01038034] }
	__asm { jbe L_00659550 }
	__asm { pop edi }
	__asm { or ebx, 2 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00659550: }
	__asm { cmp byte ptr [ebp + 0x13], 0 }
	__asm { je L_00659559 }
	__asm { or ebx, 4 }
	__asm { L_00659559: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, 3 }
	__asm { ret }
}

extern "C" void fn_004030b0();
extern "C" void fn_0061e030();
extern "C" void fn_00657450();
extern "C" void fn_00657870();
extern "C" void fn_00657890();
extern "C" void fn_00657ee0();
extern "C" void fn_006595f0();
extern "C" void fn_0065e490();
extern "C" void fn_0068fb30();
extern "C" void fn_0092da00();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0065aa40
extern "C" __declspec(naked) void asm_0065aa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10fcf }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x68 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov eax, esi }
	__asm { and eax, 0x1f }
	__asm { imul eax, eax, 0x34 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ebx, [edi + 0x2104] }
	__asm { add ebx, eax }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { inc eax }
	__asm { add eax, ebx }
	__asm { je L_0065aa88 }
	__asm { inc eax }
	__asm { jmp L_0065aa8a }
	__asm { L_0065aa88: }
	__asm { xor eax, eax }
	__asm { L_0065aa8a: }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_0092da00 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_0065aade }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 0x1c] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0065aac9 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_0065aac9: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0065aade: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006595f0 }
	__asm { cmp dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jne L_0065ab2e }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0065acd1 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jmp L_0065acb7 }
	__asm { L_0065ab2e: }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0065ab4c }
	__asm { mov ecx, eax }
	__asm { call fn_00657870 }
	__asm { jmp L_0065ab4e }
	__asm { L_0065ab4c: }
	__asm { xor eax, eax }
	__asm { L_0065ab4e: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0065e490 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { xor edx, edx }
	__asm { cmp byte ptr [eax + 2], dl }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov ecx, 3 }
	__asm { cmovne ecx, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 6 }
	__asm { xor ebx, ebx }
	__asm { test eax, eax }
	__asm { je L_0065abf7 }
	__asm { shr esi, 3 }
	__asm { and esi, 1 }
	__asm { xor edi, edi }
	__asm { L_0065ab97: }
	__asm { lea eax, [edi + ecx] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x74] }
	__asm { call fn_00657ee0 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x74] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x34], 1 }
	__asm { mov dword ptr [ebp - 0x30], esi }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { call fn_00657450 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { lea eax, [ebp - 0x74] }
	__asm { push eax }
	__asm { call fn_00657890 }
	__asm { lea ecx, [ebp - 0x74] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0061e030 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { inc ebx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 6 }
	__asm { lea edi, [edi + 0x40] }
	__asm { cmp ebx, eax }
	__asm { jb L_0065ab97 }
	__asm { L_0065abf7: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_0068fb30 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { lea edx, [eax + 0x18] }
	__asm { test esi, esi }
	__asm { je L_0065ac1b }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065ac1b: }
	__asm { mov dword ptr [edx], edi }
	__asm { mov edi, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { or esi, 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0065ac4e }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065ac4e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065ac4e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065ac4e: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0065aca3 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065aca3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065aca3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065aca3: }
	__asm { mov edi, dword ptr [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0065acd1 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065acb7: }
	__asm { jne L_0065acd1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0065acd1 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0065acd1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e39bdc[];
extern "C" void fn_00659d20();
extern "C" void fn_00891b30();
// FUNCTION: ROBLOXSTUDIO 0x0065acf0
extern "C" __declspec(naked) void asm_0065acf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10ff2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp esi, 0x110 }
	__asm { je L_0065ad2e }
	__asm { cmp esi, 0x100 }
	__asm { jne L_0065ade9 }
	__asm { L_0065ad2e: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00891b30 }
	__asm { movss xmm0, dword ptr [eax + 0x40] }
	__asm { comiss xmm0, dword ptr [g_00e39bdc] }
	__asm { jbe L_0065ade9 }
	__asm { push 1 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00659d20 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0065ad76 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065ad76: }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x18], 0x3f800000 }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test ebx, ebx }
	__asm { je L_0065add4 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0065add4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0065add4 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0065add4: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0065ade9: }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00659d20 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0065ae18 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065ae18: }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { lea eax, [esi + esi] }
	__asm { not eax }
	__asm { and eax, 4 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov dword ptr [ebx + 0x14], 0x3f800000 }
	__asm { mov dword ptr [ebx + 0x18], 0x3f800000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_0065ae7a }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0065ae7a }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0065ae7a }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0065ae7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004033d0();
extern "C" void fn_00421eb0();
extern "C" void fn_0063ee40();
extern "C" void fn_0063eec0();
extern "C" void fn_00640970();
extern "C" void fn_0065aa40();
extern "C" void fn_0065acf0();
extern "C" void fn_0065c820();
extern "C" void fn_0065d390();
extern "C" void fn_0065e420();
extern "C" void fn_0065f700();
extern "C" void fn_00699370();
extern "C" void fn_006993d0();
extern "C" void fn_006a04c0();
extern "C" void fn_007cd560();
extern "C" void fn_00891b30();
extern "C" void fn_00adee70();
// FUNCTION: ROBLOXSTUDIO 0x0065ae90
extern "C" __declspec(naked) void asm_0065ae90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11067 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x8c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test edi, edi }
	__asm { je L_0065afd6 }
	__asm { test bl, 0x20 }
	__asm { je L_0065afd6 }
	__asm { lea eax, [esi + 0x2784] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { push ecx }
	__asm { push dword ptr [esi] }
	__asm { lea eax, [ebp - 0x98] }
	__asm { push eax }
	__asm { call fn_0065c820 }
	__asm { add esp, 0x18 }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_0065e420 }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00adee70 }
	__asm { mov eax, dword ptr [ebp - 0x44] }
	__asm { test eax, eax }
	__asm { mov ecx, 0x12de598 }
	__asm { cmovne ecx, eax }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { je L_0065afc7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a0] }
	__asm { call fn_00699370 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0065aa40 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { jne L_0065af55 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { L_0065af55: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x1a0] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006993d0 }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004033d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { push 3 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0065f700 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004033d0 }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adee70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0065afc7: }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adee70 }
	__asm { L_0065afd6: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00640970 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_0065b00e }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_0063eec0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0065b03a }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { je L_0065b03a }
	__asm { cmp dword ptr [eax + 0xc8], 5 }
	__asm { je L_0065b054 }
	__asm { L_0065b00b: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { L_0065b00e: }
	__asm { test bl, bl }
	__asm { js L_0065b309 }
	__asm { test edi, edi }
	__asm { je L_0065b02b }
	__asm { push edi }
	__asm { call fn_0065d390 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0065b309 }
	__asm { L_0065b02b: }
	__asm { mov ecx, esi }
	__asm { call fn_00891b30 }
	__asm { push dword ptr [eax + 0x34] }
	__asm { jmp L_0065b30e }
	__asm { L_0065b03a: }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_0063ee40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0065b00b }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { je L_0065b00b }
	__asm { L_0065b054: }
	__asm { test eax, eax }
	__asm { je L_0065b00b }
	__asm { cmp dword ptr [eax + 0xa0], 0 }
	__asm { lea ecx, [eax + 0x90] }
	__asm { mov dword ptr [ebp - 0x48], ecx }
	__asm { jne L_0065b07e }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { lea ebx, [edi + 2] }
	__asm { jmp L_0065b09d }
	__asm { L_0065b07e: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 2 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a4] }
	__asm { call fn_006a04c0 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov ebx, 4 }
	__asm { L_0065b09d: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { test eax, eax }
	__asm { je L_0065b0bb }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065b0bb: }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { test bl, 4 }
	__asm { je L_0065b0ff }
	__asm { mov edx, dword ptr [ebp - 0x58] }
	__asm { and ebx, 0xfffffffb }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test edx, edx }
	__asm { je L_0065b0ff }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b0ff }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, esi }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065b0ff }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065b0ff: }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test bl, 2 }
	__asm { je L_0065b136 }
	__asm { and ebx, 0xfffffffd }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edi, edi }
	__asm { je L_0065b136 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b136 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065b136 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065b136: }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { test eax, eax }
	__asm { mov ecx, 0x12de598 }
	__asm { cmovne ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { je L_0065b1af }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call fn_0065aa40 }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { or ebx, 8 }
	__asm { mov dword ptr [ebp - 0x40], ecx }
	__asm { mov dword ptr [ebp - 0x3c], edi }
	__asm { test edi, edi }
	__asm { je L_0065b17d }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065b17d: }
	__asm { mov dword ptr [ebp - 0x38], 1 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x28], 0x3f800000 }
	__asm { lea edx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 7 }
	__asm { or ebx, 0x10 }
	__asm { jmp L_0065b1cd }
	__asm { L_0065b1af: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 0x110 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x78] }
	__asm { push eax }
	__asm { call fn_0065acf0 }
	__asm { mov edi, dword ptr [ebp - 0x3c] }
	__asm { mov edx, eax }
	__asm { or ebx, 0x20 }
	__asm { L_0065b1cd: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0065b1f6 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { inc ecx }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { L_0065b1f6: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { fld dword ptr [edx + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { or ebx, 1 }
	__asm { fld dword ptr [edx + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [edx + 0x14] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fld dword ptr [edx + 0x18] }
	__asm { fstp dword ptr [ecx + 0x18] }
	__asm { test bl, 0x20 }
	__asm { je L_0065b251 }
	__asm { mov edx, dword ptr [ebp - 0x74] }
	__asm { and ebx, 0xffffffdf }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { test edx, edx }
	__asm { je L_0065b251 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b251 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, esi }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065b251 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065b251: }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { test bl, 0x10 }
	__asm { je L_0065b28b }
	__asm { and ebx, 0xffffffef }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edi, edi }
	__asm { je L_0065b28b }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b28b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065b28b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065b28b: }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { test bl, 8 }
	__asm { je L_0065b2c2 }
	__asm { mov edi, dword ptr [ebp - 0x50] }
	__asm { test edi, edi }
	__asm { je L_0065b2c2 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b2c2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065b2c2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065b2c2: }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0065b2f3 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b2f3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0065b2f3 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0065b2f3: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0065b309: }
	__asm { push 0x110 }
	__asm { L_0065b30e: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0065acf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0065aa40();
extern "C" void fn_006a04c0();
// FUNCTION: ROBLOXSTUDIO 0x0065b340
extern "C" __declspec(naked) void asm_0065b340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd110f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { sub ecx, -0x80 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { jne L_0065b391 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov ebx, 1 }
	__asm { jmp L_0065b3aa }
	__asm { L_0065b391: }
	__asm { mov eax, dword ptr [edx] }
	__asm { push 4 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a4] }
	__asm { call fn_006a04c0 }
	__asm { mov ebx, 2 }
	__asm { L_0065b3aa: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test edi, edi }
	__asm { je L_0065b3c8 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065b3c8: }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test bl, 2 }
	__asm { je L_0065b408 }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { and ebx, 0xfffffffd }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edi, edi }
	__asm { je L_0065b408 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b408 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065b408 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065b408: }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test bl, 1 }
	__asm { je L_0065b442 }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { and ebx, 0xfffffffe }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edi, edi }
	__asm { je L_0065b442 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b442 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065b442 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065b442: }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { test eax, eax }
	__asm { mov ecx, 0x12de598 }
	__asm { cmovne ecx, eax }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { je L_0065b4b7 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_0065aa40 }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { or ebx, 4 }
	__asm { mov dword ptr [ebp - 0x50], ecx }
	__asm { mov dword ptr [ebp - 0x4c], edi }
	__asm { test edi, edi }
	__asm { je L_0065b488 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065b488: }
	__asm { mov dword ptr [ebp - 0x48], 1 }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x38], 0x3f800000 }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { or ebx, 8 }
	__asm { jmp L_0065b4f2 }
	__asm { L_0065b4b7: }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { xor edx, edx }
	__asm { or ebx, 0x10 }
	__asm { mov dword ptr [ebp - 0x4c], edx }
	__asm { mov edi, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { mov dword ptr [ebp - 0x50], ecx }
	__asm { mov dword ptr [ebp - 0x48], edx }
	__asm { mov dword ptr [ebp - 0x44], edx }
	__asm { mov dword ptr [ebp - 0x40], edx }
	__asm { mov dword ptr [ebp - 0x3c], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x38], 0x3f800000 }
	__asm { or ebx, 0x20 }
	__asm { L_0065b4f2: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x50] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { test edx, edx }
	__asm { mov edx, dword ptr [ebp - 0x4c] }
	__asm { je L_0065b52d }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add eax, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { mov eax, edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov edx, dword ptr [ebp - 0x4c] }
	__asm { L_0065b52d: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fld dword ptr [eax + 0x18] }
	__asm { fstp dword ptr [ecx + 0x18] }
	__asm { or ebx, 0x40 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test bl, 0x20 }
	__asm { je L_0065b588 }
	__asm { and ebx, 0xffffffdf }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edx, edx }
	__asm { je L_0065b588 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b588 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov edx, esi }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065b588 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065b588: }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { test bl, 0x10 }
	__asm { je L_0065b5c6 }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { and ebx, 0xffffffef }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edx, edx }
	__asm { je L_0065b5c6 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b5c6 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov edx, esi }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065b5c6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065b5c6: }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { test bl, 8 }
	__asm { je L_0065b600 }
	__asm { and ebx, 0xfffffff7 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edi, edi }
	__asm { je L_0065b600 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b600 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065b600 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065b600: }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test bl, 4 }
	__asm { je L_0065b63d }
	__asm { mov edi, dword ptr [ebp - 0x30] }
	__asm { and ebx, 0xfffffffb }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test edi, edi }
	__asm { je L_0065b63d }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b63d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065b63d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065b63d: }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0065b66b }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065b66b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], esi }
	__asm { dec esi }
	__asm { jne L_0065b66b }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0065b66b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e39bf8[];
extern "C" char g_011d8dfc[];
extern "C" char g_012dd2bc[];
extern "C" char g_012dd2c4[];
extern "C" void fn_0065bae0();
// FUNCTION: ROBLOXSTUDIO 0x0065bb20
extern "C" __declspec(naked) void asm_0065bb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ecx + 0x10], eax }
	__asm { je L_0065bbfa }
	__asm { cmp dword ptr [ecx + 8], eax }
	__asm { je L_0065bbfa }
	__asm { cmp dword ptr [ecx + 0x14], eax }
	__asm { je L_0065bbfa }
	__asm { cmp dword ptr [ecx + 0xc], eax }
	__asm { je L_0065bbfa }
	__asm { cmp dword ptr [ecx + 0x18], eax }
	__asm { je L_0065bbfa }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_0065bae0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { js L_0065bbd6 }
	__asm { movss xmm4, dword ptr [g_012dd2c4] }
	__asm { movss xmm3, dword ptr [g_011d8dfc] }
	__asm { mulss xmm4, dword ptr [g_00e39bf8] }
	__asm { mulss xmm3, dword ptr [g_00e39bf8] }
	__asm { shl eax, 4 }
	__asm { add eax, 0x11d8e00 }
	__asm { movss xmm5, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { addss xmm5, dword ptr [g_012dd2c4] }
	__asm { addss xmm2, dword ptr [g_011d8dfc] }
	__asm { addss xmm1, xmm4 }
	__asm { addss xmm0, xmm3 }
	__asm { mov byte ptr [eax], 1 }
	__asm { movss dword ptr [eax + 4], xmm5 }
	__asm { movss dword ptr [eax + 8], xmm2 }
	__asm { movss dword ptr [eax + 0xc], xmm1 }
	__asm { movss dword ptr [eax + 0x10], xmm0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0065bbd6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0065bbfa: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [g_012dd2bc] }
	__asm { mov byte ptr [eax], 1 }
	__asm { movss dword ptr [eax + 0xc], xmm0 }
	__asm { mov dword ptr [eax + 0x10], 0x3f800000 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d8df8[];
extern "C" void fn_0065bd40();
extern "C" void fn_0065f3e0();
extern "C" void fn_0065f750();
extern "C" void fn_0065f910();
extern "C" void fn_00698d00();
extern "C" void fn_006992f0();
extern "C" void fn_00adee70();
// FUNCTION: ROBLOXSTUDIO 0x0065c490
extern "C" __declspec(naked) void asm_0065c490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1122d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cvttss2si esi, dword ptr [g_011d8df8] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0065f750 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0065bd40 }
	__asm { movsx eax, si }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mov ecx, dword ptr [esi + 0x1a0] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { mov dword ptr [ebp - 0x1c], 0x44000000 }
	__asm { call fn_00698d00 }
	__asm { mov ecx, dword ptr [esi + 0x1a0] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006992f0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0065f3e0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0065c560 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065c560: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00adee70 }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0065c5c2 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065c5c2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065c5c2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065c5c2: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0065c5f0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065c5f0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0065c5f0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0065c5f0: }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0065f910 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0065c490();
extern "C" void fn_0065f3e0();
extern "C" void fn_0065fa40();
extern "C" void fn_006992f0();
extern "C" void fn_00adee70();
extern "C" void fn_00c59e20();
// FUNCTION: ROBLOXSTUDIO 0x0065c610
extern "C" __declspec(naked) void asm_0065c610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11268 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_0065c706 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea esi, [edi + 4] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a0] }
	__asm { call fn_006992f0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0065f3e0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0065c692 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065c692: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00adee70 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0065c6f3 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0065c6f3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0065c6f3 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0065c6f3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0065c706: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_0065c490 }
	__asm { mov edx, eax }
	__asm { add esp, 0x14 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { mov ebx, 1 }
	__asm { test ecx, ecx }
	__asm { je L_0065c73b }
	__asm { add ecx, 4 }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { L_0065c73b: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00adee70 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00c59e20 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0065fa40 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_0065c7b9 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0065c7b9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0065c7b9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065c7b9: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0065c7d3 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { inc ebx }
	__asm { L_0065c7d3: }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adee70 }
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

extern "C" void fn_00403040();
extern "C" void fn_0065b8a0();
extern "C" void fn_0065bb20();
extern "C" void fn_0065c490();
extern "C" void fn_0065c610();
extern "C" void fn_0065e420();
extern "C" void fn_0065f2c0();
extern "C" void fn_0065f510();
extern "C" void fn_0065f630();
extern "C" void fn_007709e0();
extern "C" void fn_009fd060();
extern "C" void fn_009fd250();
extern "C" void fn_00adee70();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x0065c820
extern "C" __declspec(naked) void asm_0065c820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11368 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x118 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { push 0x30 }
	__asm { lea eax, [ebp - 0xe4] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00cf6804 }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { test byte ptr [ebp + 0x18], 0x40 }
	__asm { je L_0065c871 }
	__asm { lea eax, [ebp - 0xe4] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0065b8a0 }
	__asm { add esp, 8 }
	__asm { L_0065c871: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0xe4] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x88] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0065bb20 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mov cl, byte ptr [eax] }
	__asm { movss dword ptr [ebp - 0xa0], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0x9c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { movss dword ptr [ebp - 0x98], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { add esp, 0x10 }
	__asm { mov byte ptr [ebp - 0xa4], cl }
	__asm { movss dword ptr [ebp - 0x94], xmm0 }
	__asm { test cl, cl }
	__asm { jne L_0065c9d8 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xb4] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0065f630 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x124] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { call fn_0065f510 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { add esp, 0x18 }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_0065e420 }
	__asm { lea ecx, [ebp - 0x124] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00adee70 }
	__asm { lea ecx, [ebp - 0xb4] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00adee70 }
	__asm { mov esi, dword ptr [ebp - 0x30] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0065c997 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065c997 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065c997 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065c997: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0065c9c5 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065c9c5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0065c9c5 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0065c9c5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0065c9d8: }
	__asm { cmp esi, dword ptr [edi + 0x18] }
	__asm { je L_0065c9fc }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { je L_0065c9fc }
	__asm { cmp esi, dword ptr [edi + 0x14] }
	__asm { je L_0065c9fc }
	__asm { cmp esi, dword ptr [edi + 8] }
	__asm { je L_0065c9fc }
	__asm { cmp esi, dword ptr [edi + 0xc] }
	__asm { je L_0065c9fc }
	__asm { mov esi, dword ptr [edi + 0x8c] }
	__asm { mov dword ptr [ebp + 0x18], esi }
	__asm { jmp L_0065ca09 }
	__asm { L_0065c9fc: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_007709e0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { L_0065ca09: }
	__asm { mov ecx, dword ptr [edi + 0x8c] }
	__asm { cmp esi, ecx }
	__asm { je L_0065cabb }
	__asm { test esi, esi }
	__asm { je L_0065cbe4 }
	__asm { test ecx, ecx }
	__asm { je L_0065cbe4 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_009fd060 }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x10], 2 }
	__asm { call fn_009fd060 }
	__asm { push esi }
	__asm { mov ebx, 6 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00403040 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0065cbe1 }
	__asm { mov ecx, dword ptr [edi + 0x8c] }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { call fn_009fd250 }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 0x90] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov dword ptr [ebp - 0x10], 0xe }
	__asm { call fn_009fd250 }
	__asm { push esi }
	__asm { mov ebx, 0x1e }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 7 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00403040 }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0065cbe4 }
	__asm { L_0065cabb: }
	__asm { mov byte ptr [ebp + 0x1b], 1 }
	__asm { L_0065cabf: }
	__asm { test bl, 0x10 }
	__asm { je L_0065caf3 }
	__asm { and ebx, 0xffffffef }
	__asm { cmp dword ptr [ebp - 0x7c], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jb L_0065cade }
	__asm { push dword ptr [ebp - 0x90] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065cade: }
	__asm { mov dword ptr [ebp - 0x7c], 0xf }
	__asm { mov dword ptr [ebp - 0x80], 0 }
	__asm { mov byte ptr [ebp - 0x90], 0 }
	__asm { L_0065caf3: }
	__asm { test bl, 8 }
	__asm { je L_0065cb21 }
	__asm { and ebx, 0xfffffff7 }
	__asm { cmp dword ptr [ebp - 0x50], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jb L_0065cb0f }
	__asm { push dword ptr [ebp - 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065cb0f: }
	__asm { mov dword ptr [ebp - 0x50], 0xf }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov byte ptr [ebp - 0x64], 0 }
	__asm { L_0065cb21: }
	__asm { test bl, 4 }
	__asm { je L_0065cb4f }
	__asm { and ebx, 0xfffffffb }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jb L_0065cb3d }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065cb3d: }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { L_0065cb4f: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 2 }
	__asm { je L_0065cb72 }
	__asm { and ebx, 0xfffffffd }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jb L_0065cb72 }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065cb72: }
	__asm { cmp byte ptr [ebp + 0x1b], 0 }
	__asm { lea eax, [ebp - 0xe4] }
	__asm { je L_0065cbed }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x84] }
	__asm { push eax }
	__asm { call fn_0065c610 }
	__asm { add esp, 0x18 }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x3c], ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { or ebx, 0x20 }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_0065cbb8 }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065cbb8: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { or ebx, 0x40 }
	__asm { jmp L_0065cc4e }
	__asm { L_0065cbe1: }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { L_0065cbe4: }
	__asm { mov byte ptr [ebp + 0x1b], 0 }
	__asm { jmp L_0065cabf }
	__asm { L_0065cbed: }
	__asm { push esi }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_0065c490 }
	__asm { add esp, 0x14 }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { or ebx, 0x80 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_0065cc24 }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065cc24: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { or ebx, 0x100 }
	__asm { L_0065cc4e: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x74], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { test eax, eax }
	__asm { je L_0065cc68 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_0065cc68: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x6c], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { test ebx, 0x100 }
	__asm { je L_0065cca2 }
	__asm { and ebx, 0xfffffeff }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00adee70 }
	__asm { L_0065cca2: }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { test bl, bl }
	__asm { jns L_0065ccbb }
	__asm { and ebx, 0xffffff7f }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00adee70 }
	__asm { L_0065ccbb: }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { test bl, 0x40 }
	__asm { je L_0065ccd2 }
	__asm { and ebx, 0xffffffbf }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00adee70 }
	__asm { L_0065ccd2: }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { test bl, 0x20 }
	__asm { je L_0065ccec }
	__asm { and ebx, 0xffffffdf }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00adee70 }
	__asm { L_0065ccec: }
	__asm { lea eax, [ebp - 0xa0] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x74] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x104] }
	__asm { push eax }
	__asm { call fn_0065f2c0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_0065e420 }
	__asm { or ebx, 1 }
	__asm { lea ecx, [ebp - 0x104] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_00adee70 }
	__asm { lea ecx, [ebp - 0x74] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adee70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00451670();
extern "C" void fn_00657450();
extern "C" void fn_00660230();
extern "C" void fn_006a04c0();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0065d440
extern "C" __declspec(naked) void asm_0065d440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd113de }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x7c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 0x1a4] }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x27 }
	__asm { push 0xe3989c }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x2c], 2 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x74], 0xf }
	__asm { mov dword ptr [ebp - 0x78], 0 }
	__asm { mov byte ptr [ebp - 0x88], 0 }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { lea eax, [ebp - 0x88] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x88] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006a04c0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push 3 }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0065d526 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d526 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d526 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065d526: }
	__asm { cmp dword ptr [ebp - 0x74], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0065d541 }
	__asm { push dword ptr [ebp - 0x88] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065d541: }
	__asm { push 0x26 }
	__asm { push 0xe398c4 }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { mov dword ptr [ebp - 0x2c], 2 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x74], 0xf }
	__asm { mov dword ptr [ebp - 0x78], 0 }
	__asm { mov byte ptr [ebp - 0x88], 0 }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { lea eax, [ebp - 0x88] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push 5 }
	__asm { lea eax, [ebp - 0x88] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call fn_006a04c0 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push 4 }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_0065d5f8 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d5f8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d5f8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065d5f8: }
	__asm { cmp dword ptr [ebp - 0x74], 0x10 }
	__asm { jb L_0065d60c }
	__asm { push dword ptr [ebp - 0x88] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065d60c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov eax, dword ptr [eax + 0x1ac] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1ec] }
	__asm { call fn_00660230 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push 5 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { mov dword ptr [ebp - 0x2c], 1 }
	__asm { mov dword ptr [ebp - 0x28], 1 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0065d680 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d680 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d680 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065d680: }
	__asm { mov dword ptr [ebp - 0x2c], 1 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push 6 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 7 }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0065d6ed }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d6ed }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d6ed }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065d6ed: }
	__asm { push 0x11d8e50 }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push 0xe398ec }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x38], 1 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { call fn_00451670 }
	__asm { add esp, 0xc }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 4], 8 }
	__asm { mov dword ptr [ebp - 0x58], 0xf }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { mov byte ptr [ebp - 0x6c], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push 5 }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { call fn_006a04c0 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push 7 }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { test edi, edi }
	__asm { je L_0065d7ac }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d7ac }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0065d7ac }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065d7ac: }
	__asm { cmp dword ptr [ebp - 0x58], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_0065d7c0 }
	__asm { push dword ptr [ebp - 0x6c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065d7c0: }
	__asm { cmp dword ptr [ebp - 0x3c], 0x10 }
	__asm { mov dword ptr [ebp - 0x58], 0xf }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { mov byte ptr [ebp - 0x6c], 0 }
	__asm { jb L_0065d7e3 }
	__asm { push dword ptr [ebp - 0x50] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065d7e3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00657450();
extern "C" void fn_00660230();
extern "C" void fn_006a7490();
// FUNCTION: ROBLOXSTUDIO 0x0065d800
extern "C" __declspec(naked) void asm_0065d800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11400 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 0x1a4] }
	__asm { push esi }
	__asm { push edi }
	__asm { add eax, 0x24 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x28], 1 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { call fn_006a7490 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 3 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0065d898 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d898 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d898 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065d898: }
	__asm { mov dword ptr [ebp - 0x28], 1 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 4 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0065d905 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d905 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d905 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065d905: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax + 0x1ac] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1ec] }
	__asm { call fn_00660230 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push 5 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x34], 1 }
	__asm { mov dword ptr [ebp - 0x30], 1 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0065d978 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065d978 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0065d978 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065d978: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0042d740();
extern "C" void fn_0042e6e0();
extern "C" void fn_0043ee70();
extern "C" void fn_00451670();
extern "C" void fn_00657450();
extern "C" void fn_00660470();
extern "C" void fn_006a04c0();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0065df80
extern "C" __declspec(naked) void asm_0065df80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11510 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [eax + 0x1a4] }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push 0xe39918 }
	__asm { push eax }
	__asm { call fn_00451670 }
	__asm { push 0x10189d0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x84] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x50], 0x10 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jb L_0065dfea }
	__asm { push dword ptr [ebp - 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065dfea: }
	__asm { lea eax, [ebp - 0x84] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x50], 0xf }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov byte ptr [ebp - 0x64], 0 }
	__asm { call fn_00660470 }
	__asm { push 0xe39930 }
	__asm { lea eax, [ebp - 0x84] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x9c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x34], 1 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { call fn_0042d740 }
	__asm { push 0x11d8e50 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0042e6e0 }
	__asm { add esp, 0x1c }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_006a04c0 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push 3 }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_00657450 }
	__asm { mov esi, dword ptr [ebp - 0x68] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test esi, esi }
	__asm { je L_0065e0e1 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0065e0e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0065e0e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065e0e0: }
	__asm { pop edi }
	__asm { L_0065e0e1: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_0065e0f3 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065e0f3: }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jb L_0065e116 }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065e116: }
	__asm { cmp dword ptr [ebp - 0x88], 0x10 }
	__asm { mov dword ptr [ebp - 0x38], 0xf }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov byte ptr [ebp - 0x4c], 0 }
	__asm { jb L_0065e13f }
	__asm { push dword ptr [ebp - 0x9c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065e13f: }
	__asm { cmp dword ptr [ebp - 0x70], 0x10 }
	__asm { jb L_0065e153 }
	__asm { push dword ptr [ebp - 0x84] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065e153: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00657450();
extern "C" void fn_006a7490();
// FUNCTION: ROBLOXSTUDIO 0x0065e170
extern "C" __declspec(naked) void asm_0065e170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1154a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { test ebx, ebx }
	__asm { je L_0065e254 }
	__asm { cmp dword ptr [ebx + 0x50], 0 }
	__asm { lea eax, [ebx + 0x50] }
	__asm { je L_0065e254 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x28], 1 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { call fn_006a7490 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0065e212 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065e212 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065e212 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065e212: }
	__asm { lea eax, [ebx + 0x58] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_006a7490 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 2 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 1 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { jmp L_0065e383 }
	__asm { L_0065e254: }
	__asm { mov dword ptr [ebp - 0x3c], 1 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_006a7490 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_0065e2d4 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065e2d4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065e2d4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065e2d4: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0065e306 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065e306 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065e306 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065e306: }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call fn_006a7490 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push 2 }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00657450 }
	__asm { mov edi, dword ptr [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_0065e380 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065e380 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0065e380 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065e380: }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { L_0065e383: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0065e3b1 }
	__asm { mov ecx, esi }
	__asm { lea eax, [edi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0065e3b1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0065e3b1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065e3b1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0065e420
extern "C" __declspec(naked) void asm_0065e420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0065e443 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065e443: }
	__asm { fld dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { fstp dword ptr [edx + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { fld dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { fstp dword ptr [edx + 0x14] }
	__asm { fld dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { fstp dword ptr [edx + 0x18] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { fld dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { fstp dword ptr [edx + 0x1c] }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403160();
extern "C" void fn_0065e530();
// FUNCTION: ROBLOXSTUDIO 0x0065e490
extern "C" __declspec(naked) void asm_0065e490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0065e530 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_0065e507 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0065e506 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0065e506 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065e506: }
	__asm { pop ebx }
	__asm { L_0065e507: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0065e6e0();
extern "C" void fn_0065e7f0();
extern "C" void fn_0065ec90();
extern "C" void fn_0065ed30();
// FUNCTION: ROBLOXSTUDIO 0x0065eb50
extern "C" __declspec(naked) void asm_0065eb50()
{
	__asm { L_0065eb50: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x2aaaaaab }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0065ec28 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { nop }
	__asm { L_0065eb80: }
	__asm { test esi, esi }
	__asm { jle L_0065ec43 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_0065ed30 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { sar ecx, 1 }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sar edx, 1 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { add esp, 0x10 }
	__asm { shr eax, 0x1f }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { jge L_0065ebfc }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { call L_0065eb50 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { jmp L_0065ec08 }
	__asm { L_0065ebfc: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call L_0065eb50 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_0065ec08: }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x20 }
	__asm { jg L_0065eb80 }
	__asm { L_0065ec28: }
	__asm { cmp eax, 1 }
	__asm { jle L_0065ec3c }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_0065e6e0 }
	__asm { add esp, 0x10 }
	__asm { L_0065ec3c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0065ec43: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0065ec28 }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_0065ec72 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_0065e7f0 }
	__asm { add esp, 0x14 }
	__asm { L_0065ec72: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_0065ec90 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0065f110
extern "C" __declspec(naked) void asm_0065f110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3df48 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [esi + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0065f162 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0065f162 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0065f162 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065f162: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0065f172 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065f172: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00adee70();
// FUNCTION: ROBLOXSTUDIO 0x0065f2c0
extern "C" __declspec(naked) void asm_0065f2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd115a9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { mov esi, 1 }
	__asm { test ecx, ecx }
	__asm { je L_0065f307 }
	__asm { lea eax, [ecx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { L_0065f307: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov edx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { test edx, edx }
	__asm { je L_0065f326 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov edx, dword ptr [ebp - 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { L_0065f326: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [edi], eax }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss dword ptr [ebp - 0x1c], xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0065f37e }
	__asm { lea eax, [ecx + 4] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { inc esi }
	__asm { movss xmm3, dword ptr [ebp - 0x14] }
	__asm { movss xmm2, dword ptr [ebp - 0x18] }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { mov edx, dword ptr [ebp - 0x24] }
	__asm { L_0065f37e: }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [edi + 0xc], edx }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { movss dword ptr [edi + 0x10], xmm0 }
	__asm { movss dword ptr [edi + 0x14], xmm1 }
	__asm { movss dword ptr [edi + 0x18], xmm2 }
	__asm { movss dword ptr [edi + 0x1c], xmm3 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00adee70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00adee70();
// FUNCTION: ROBLOXSTUDIO 0x0065f3e0
extern "C" __declspec(naked) void asm_0065f3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd115d9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov esi, 1 }
	__asm { test edx, edx }
	__asm { je L_0065f427 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { L_0065f427: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0065f448 }
	__asm { lea eax, [ecx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { L_0065f448: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { test edx, edx }
	__asm { je L_0065f462 }
	__asm { lea eax, [edx + 4] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { inc esi }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { L_0065f462: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [edi + 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00adee70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00adee70();
// FUNCTION: ROBLOXSTUDIO 0x0065f510
extern "C" __declspec(naked) void asm_0065f510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd115a9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x30], edi }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { mov edx, 1 }
	__asm { test ecx, ecx }
	__asm { je L_0065f55b }
	__asm { lea eax, [ecx + 4] }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { mov edi, dword ptr [ebp - 0x30] }
	__asm { L_0065f55b: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi], edi }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss dword ptr [ebp - 0x1c], xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0065f5d2 }
	__asm { lea eax, [ecx + 4] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { movss xmm3, dword ptr [ebp - 0x14] }
	__asm { movss xmm2, dword ptr [ebp - 0x18] }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov ebx, dword ptr [ebp - 0x28] }
	__asm { jmp L_0065f5d5 }
	__asm { L_0065f5d2: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_0065f5d5: }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { movss dword ptr [esi + 0x10], xmm0 }
	__asm { movss dword ptr [esi + 0x14], xmm1 }
	__asm { movss dword ptr [esi + 0x18], xmm2 }
	__asm { movss dword ptr [esi + 0x1c], xmm3 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00adee70 }
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

extern "C" void fn_00adee70();
// FUNCTION: ROBLOXSTUDIO 0x0065f630
extern "C" __declspec(naked) void asm_0065f630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd115d9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x20], esi }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov edx, 1 }
	__asm { test ecx, ecx }
	__asm { je L_0065f67b }
	__asm { lea eax, [ecx + 4] }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { L_0065f67b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0065f6b5 }
	__asm { lea eax, [ecx + 4] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { jmp L_0065f6b8 }
	__asm { L_0065f6b5: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_0065f6b8: }
	__asm { mov dword ptr [edi + 8], ebx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00adee70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0065f700
extern "C" __declspec(naked) void asm_0065f700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0065f723 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0065f723: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x10] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0x18] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x0065fa40
extern "C" __declspec(naked) void asm_0065fa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 8], edx }
	__asm { test esi, esi }
	__asm { je L_0065fa9f }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0065fa96 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0065fa96 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0065fa96: }
	__asm { pop ebx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0065fa9f: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10600[];
extern "C" void fn_00403540();
extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
extern "C" void fn_006602d0();
extern "C" void fn_007cb440();
extern "C" void fn_008e9950();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0065fcb0
extern "C" __declspec(naked) void asm_0065fcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11638 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x74 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_008e9950 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x80] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x6c], 0xf }
	__asm { mov dword ptr [ebp - 0x70], 0 }
	__asm { mov byte ptr [ebp - 0x80], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { lea eax, [ebp - 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 0x50], 0xf }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov byte ptr [ebp - 0x64], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0x48], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { movss dword ptr [ebp - 0x44], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { mov dword ptr [ebp - 0x3c], 1 }
	__asm { lea eax, [ebp - 0x80] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_006602d0 }
	__asm { cmp dword ptr [ebp - 0x50], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0065fd80 }
	__asm { push dword ptr [ebp - 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065fd80: }
	__asm { cmp dword ptr [ebp - 0x6c], 0x10 }
	__asm { mov dword ptr [ebp - 0x50], 0xf }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov byte ptr [ebp - 0x64], 0 }
	__asm { jb L_0065fda3 }
	__asm { push dword ptr [ebp - 0x80] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065fda3: }
	__asm { push 3 }
	__asm { push 0xe394e4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040f730 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0040f890 }
	__asm { push 1 }
	__asm { push 0xe394e0 }
	__asm { mov ecx, edi }
	__asm { call fn_0040f730 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push 0x1012c70 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10600] }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [ebp - 0x38], 0 }
	__asm { jne L_0065fdec }
	__asm { xor ecx, ecx }
	__asm { jmp L_0065fdfb }
	__asm { L_0065fdec: }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { lea edx, [ecx + 1] }
	__asm { L_0065fdf2: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0065fdf2 }
	__asm { sub ecx, edx }
	__asm { L_0065fdfb: }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040f730 }
	__asm { push 1 }
	__asm { push 0x10131b4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040f730 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10600[];
extern "C" void fn_00403540();
extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
extern "C" void fn_006602d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0065fe30
extern "C" __declspec(naked) void asm_0065fe30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11668 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x84 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { mov dword ptr [ebp - 0x5c], 0xf }
	__asm { mov dword ptr [ebp - 0x60], 0 }
	__asm { mov byte ptr [ebp - 0x70], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0xf }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [ebp - 0x54], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x70] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x18], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x14], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006602d0 }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { jb L_0065ff12 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065ff12: }
	__asm { cmp dword ptr [ebp - 0x40], 0x10 }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { jb L_0065ff35 }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065ff35: }
	__asm { cmp dword ptr [ebp - 0x5c], 0x10 }
	__asm { mov dword ptr [ebp - 0x40], 0xf }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [ebp - 0x54], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0065ff5f }
	__asm { push dword ptr [ebp - 0x70] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0065ff5f: }
	__asm { push 3 }
	__asm { push 0xe394dc }
	__asm { mov ecx, esi }
	__asm { call fn_0040f730 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_0040f890 }
	__asm { push 1 }
	__asm { push 0xe394e0 }
	__asm { mov ecx, esi }
	__asm { call fn_0040f730 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0040f890 }
	__asm { push 1 }
	__asm { push 0xe394e0 }
	__asm { mov ecx, esi }
	__asm { call fn_0040f730 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x90] }
	__asm { push 0x1012c70 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10600] }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [ebp - 0x90], 0 }
	__asm { jne L_0065ffc6 }
	__asm { xor ecx, ecx }
	__asm { jmp L_0065ffd9 }
	__asm { L_0065ffc6: }
	__asm { lea ecx, [ebp - 0x90] }
	__asm { lea edx, [ecx + 1] }
	__asm { nop }
	__asm { L_0065ffd0: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0065ffd0 }
	__asm { sub ecx, edx }
	__asm { L_0065ffd9: }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x90] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040f730 }
	__asm { push 1 }
	__asm { push 0x10131b4 }
	__asm { mov ecx, esi }
	__asm { call fn_0040f730 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00660110
extern "C" __declspec(naked) void asm_00660110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor edx, edx }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { div dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { add esi, 0x20 }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { L_00660148: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, esi }
	__asm { je L_00660152 }
	__asm { mov edi, eax }
	__asm { jmp L_00660148 }
	__asm { L_00660152: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_0066015d }
	__asm { add esi, -0x20 }
	__asm { jmp L_0066015f }
	__asm { L_0066015d: }
	__asm { xor esi, esi }
	__asm { L_0066015f: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ebx, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0066019b }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066019b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0066019b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066019b: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006601b2 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006601b2: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { dec dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_006601ef }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { cmp ecx, edx }
	__asm { je L_006601fe }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [eax + edx*4], edi }
	__asm { L_006601ef: }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + ecx*4], edi }
	__asm { jne L_006601fe }
	__asm { mov dword ptr [eax + ecx*4], 0 }
	__asm { L_006601fe: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { test eax, eax }
	__asm { je L_0066020d }
	__asm { add eax, 0x20 }
	__asm { jmp L_0066020f }
	__asm { L_0066020d: }
	__asm { xor eax, eax }
	__asm { L_0066020f: }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_00660152 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f8550[];
extern "C" void fn_00422750();
// FUNCTION: ROBLOXSTUDIO 0x006604e0
extern "C" __declspec(naked) void asm_006604e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov dl, byte ptr [eax] }
	__asm { mov ah, dl }
	__asm { shr ah, 3 }
	__asm { and ah, 7 }
	__asm { cmp ah, 5 }
	__asm { je L_0066065d }
	__asm { test ah, ah }
	__asm { je L_0066065d }
	__asm { mov al, byte ptr [g_012f8550] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [ebx] }
	__asm { cmp cl, al }
	__asm { je L_00660522 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { jne L_00660522 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00660522: }
	__asm { mov cl, byte ptr [ebx + 1] }
	__asm { push edi }
	__asm { movzx edi, dl }
	__asm { shr edi, 6 }
	__asm { cmp ah, 1 }
	__asm { jne L_00660549 }
	__asm { cmp cl, al }
	__asm { je L_00660541 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { je L_00660652 }
	__asm { L_00660541: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00660549: }
	__asm { cmp cl, al }
	__asm { je L_0066055b }
	__asm { mov dl, cl }
	__asm { and dl, 0x38 }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { cmp dl, 0x28 }
	__asm { je L_0066055f }
	__asm { L_0066055b: }
	__asm { mov byte ptr [ebp + 0xb], 0 }
	__asm { L_0066055f: }
	__asm { push esi }
	__asm { cmp cl, al }
	__asm { je L_00660589 }
	__asm { movzx edx, cl }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { lea esi, [edx + edx*2] }
	__asm { mov edx, dword ptr [edi*4 + 0xe39c2c] }
	__asm { mov edx, dword ptr [edx*4 + 0xe39c14] }
	__asm { lea edx, [edx + esi*2] }
	__asm { cmp dword ptr [edx*4 + 0x12f6d50], 5 }
	__asm { jne L_0066058d }
	__asm { L_00660589: }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { L_0066058d: }
	__asm { mov edx, dword ptr [edi*4 + 0xe39c3c] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dl, byte ptr [ebx + 2] }
	__asm { cmp dl, al }
	__asm { je L_006605ac }
	__asm { mov bl, dl }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_006605ac }
	__asm { mov bh, 1 }
	__asm { jmp L_006605ae }
	__asm { L_006605ac: }
	__asm { xor bh, bh }
	__asm { L_006605ae: }
	__asm { cmp dl, al }
	__asm { je L_006605d3 }
	__asm { movzx esi, dl }
	__asm { mov byte ptr [ebp - 2], 1 }
	__asm { lea edi, [esi + esi*2] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [esi*4 + 0xe39c14] }
	__asm { lea esi, [esi + edi*2] }
	__asm { cmp dword ptr [esi*4 + 0x12f6d50], 5 }
	__asm { jne L_006605d7 }
	__asm { L_006605d3: }
	__asm { mov byte ptr [ebp - 2], 0 }
	__asm { L_006605d7: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ch, byte ptr [esi + 3] }
	__asm { cmp ch, al }
	__asm { je L_006605ef }
	__asm { mov bl, ch }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_006605ef }
	__asm { mov bl, 1 }
	__asm { jmp L_006605f1 }
	__asm { L_006605ef: }
	__asm { xor bl, bl }
	__asm { L_006605f1: }
	__asm { cmp ah, 3 }
	__asm { jne L_00660612 }
	__asm { cmp cl, al }
	__asm { je L_00660612 }
	__asm { cmp dl, al }
	__asm { je L_00660612 }
	__asm { cmp ch, al }
	__asm { je L_00660612 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00422750 }
	__asm { test al, al }
	__asm { je L_00660612 }
	__asm { mov dl, 1 }
	__asm { jmp L_00660614 }
	__asm { L_00660612: }
	__asm { xor dl, dl }
	__asm { L_00660614: }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00660624 }
	__asm { test bh, bh }
	__asm { je L_00660624 }
	__asm { mov cl, 1 }
	__asm { jmp L_00660626 }
	__asm { L_00660624: }
	__asm { xor cl, cl }
	__asm { L_00660626: }
	__asm { test al, al }
	__asm { jne L_0066062f }
	__asm { cmp byte ptr [ebp - 1], al }
	__asm { je L_00660638 }
	__asm { L_0066062f: }
	__asm { test bh, bh }
	__asm { jne L_0066063c }
	__asm { cmp byte ptr [ebp - 2], bh }
	__asm { jne L_0066063c }
	__asm { L_00660638: }
	__asm { xor al, al }
	__asm { jmp L_0066063e }
	__asm { L_0066063c: }
	__asm { mov al, 1 }
	__asm { L_0066063e: }
	__asm { test dl, dl }
	__asm { jne L_00660652 }
	__asm { test bl, bl }
	__asm { je L_0066064a }
	__asm { test al, al }
	__asm { jne L_00660652 }
	__asm { L_0066064a: }
	__asm { test cl, cl }
	__asm { je L_00660541 }
	__asm { L_00660652: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0066065d: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fbcf0[];
extern "C" void fn_00403110();
extern "C" void fn_004226b0();
extern "C" void fn_00619bb0();
extern "C" void fn_00657110();
extern "C" void fn_00662b80();
extern "C" void fn_006638c0();
extern "C" void fn_006639a0();
extern "C" void fn_006b8aae();
extern "C" void fn_006b9740();
extern "C" void fn_00a09230();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00660670
extern "C" __declspec(naked) void asm_00660670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd116e2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], 0xe336a0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { call fn_00619bb0 }
	__asm { mov dword ptr [edi + 0x30], 0xffffffff }
	__asm { mov dword ptr [edi + 0x34], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x38], 0xe39c90 }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { mov dword ptr [edi], 0xe39c98 }
	__asm { mov dword ptr [edi + 0x38], 0xe39cd0 }
	__asm { mov word ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x60], eax }
	__asm { mov word ptr [edi + 0x64], ax }
	__asm { push eax }
	__asm { mov byte ptr [edi + 0x68], al }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_0066075e }
	__asm { sub eax, 4 }
	__asm { L_0066075e: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x6c], eax }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0x4033d0 }
	__asm { push 0x421ea0 }
	__asm { push 2 }
	__asm { push 8 }
	__asm { lea eax, [edi + 0x88] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf676b }
	__asm { mov dword ptr [edi + 0x98], 0 }
	__asm { mov dword ptr [edi + 0x9c], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { je L_0066081a }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x88] }
	__asm { cmp eax, 0xa }
	__asm { je L_0066081a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00660805 }
	__asm { push 0x570 }
	__asm { push 0xe39cd8 }
	__asm { push 0xe39f3c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0066081a }
	__asm { L_00660805: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe39f68 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0066081a: }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { test edx, edx }
	__asm { je L_0066082f }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0066082f: }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 8], edx }
	__asm { test esi, esi }
	__asm { je L_00660865 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00660862 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00660862 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00660862: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { L_00660865: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_006608b3 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp dword ptr [eax + 0xe4], 0 }
	__asm { je L_006608b3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006608a2 }
	__asm { push 0x573 }
	__asm { push 0xe39cd8 }
	__asm { push 0xe39fec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006608b3 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006608a2: }
	__asm { movzx eax, cl }
	__asm { push 0xe3a010 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006608b3: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax + 0xe4], edi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add eax, 0x140 }
	__asm { mov dword ptr [edi + 0x44], eax }
	__asm { mov cl, byte ptr [g_012fbcf0] }
	__asm { test cl, cl }
	__asm { je L_006608e5 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { movzx eax, cl }
	__asm { push 0xe3a08c }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_006608e5: }
	__asm { mov ecx, dword ptr [edi + 0x44] }
	__asm { lea eax, [edi + 0x38] }
	__asm { push eax }
	__asm { call fn_00a09230 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], 0x661010 }
	__asm { mov ecx, dword ptr [eax + 0x198] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { add ecx, 0x50 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { call fn_006639a0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_00657110 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test eax, eax }
	__asm { je L_0066093f }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0066093f: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { add ecx, 0x5c }
	__asm { mov dword ptr [ebp - 0x24], 0x661010 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { call fn_006638c0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_00657110 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test eax, eax }
	__asm { je L_00660986 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00660986: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov al, byte ptr [eax + 1] }
	__asm { mov byte ptr [edi + 0x40], al }
	__asm { call fn_00662b80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012fbcf0[];
extern "C" void fn_00619c90();
extern "C" void fn_00665360();
extern "C" void fn_00666550();
extern "C" void fn_00681860();
extern "C" void fn_006b8aae();
extern "C" void fn_007700e0();
extern "C" void fn_00a09320();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x006609c0
extern "C" __declspec(naked) void asm_006609c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1173e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x38] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe39c98 }
	__asm { mov dword ptr [edi], 0xe39cd0 }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { call fn_007700e0 }
	__asm { mov al, byte ptr [g_012fbcf0] }
	__asm { test al, al }
	__asm { je L_00660a1b }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x44] }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push 0xe3a0b8 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00660a1b: }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a09320 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [eax + 0x198] }
	__asm { call fn_00681860 }
	__asm { mov edi, dword ptr [esi + 0x9c] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_00660a68 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00660a68 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00660a68 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00660a68: }
	__asm { push 0x4033d0 }
	__asm { push 2 }
	__asm { push 8 }
	__asm { lea eax, [esi + 0x88] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf669e }
	__asm { mov edi, dword ptr [esi + 0x84] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_00660ab2 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00660ab2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00660ab2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00660ab2: }
	__asm { mov ecx, dword ptr [esi + 0x7c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00660aee }
	__asm { cmp dword ptr [esi + 0x70], 0 }
	__asm { je L_00660ad5 }
	__asm { mov eax, dword ptr [esi + 0x6c] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x68] }
	__asm { call fn_00666550 }
	__asm { L_00660ad5: }
	__asm { push dword ptr [esi + 0x7c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { L_00660aee: }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_00665360 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00619c90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_011d8f9c[];
extern "C" char g_011d8f9e[];
extern "C" char g_011d8fa0[];
extern "C" void fn_00661be0();
extern "C" void fn_00661e50();
extern "C" void fn_00664040();
extern "C" void fn_006653d0();
extern "C" void fn_00665460();
extern "C" void fn_00673ff0();
extern "C" void fn_00674050();
// FUNCTION: ROBLOXSTUDIO 0x006617a0
extern "C" __declspec(naked) void asm_006617a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1178e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { push ebx }
	__asm { add ecx, 0x68 }
	__asm { call fn_00665460 }
	__asm { lea edi, [eax + 8] }
	__asm { movzx eax, word ptr [ebx + 4] }
	__asm { shl ax, 5 }
	__asm { movzx ecx, ax }
	__asm { movzx eax, word ptr [ebx + 2] }
	__asm { shl ax, 4 }
	__asm { movzx edx, ax }
	__asm { movzx eax, word ptr [ebx] }
	__asm { shl ax, 5 }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { mov eax, dword ptr [g_011d8fa0] }
	__asm { add eax, ecx }
	__asm { movzx esi, ax }
	__asm { movzx eax, word ptr [g_011d8f9e] }
	__asm { add ax, dx }
	__asm { movzx edx, ax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { add eax, dword ptr [g_011d8f9c] }
	__asm { mov word ptr [ebp - 0x14], si }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x44] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov word ptr [ebp - 0x16], dx }
	__asm { call fn_00664040 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_0066186f }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00661852 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push eax }
	__asm { call fn_00674050 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00661852 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00661852: }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00661be0 }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { test eax, eax }
	__asm { je L_0066186f }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push eax }
	__asm { call fn_00673ff0 }
	__asm { L_0066186f: }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { je L_006618b2 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00661892 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push eax }
	__asm { call fn_00674050 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00661892 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00661892: }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00661e50 }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov byte ptr [edi + 9], 0 }
	__asm { test eax, eax }
	__asm { je L_006618b2 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push eax }
	__asm { call fn_00673ff0 }
	__asm { L_006618b2: }
	__asm { cmp dword ptr [edi + 0x14], 0 }
	__asm { jne L_0066194f }
	__asm { cmp dword ptr [edi + 0x18], 0 }
	__asm { jne L_0066194f }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov word ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006653d0 }
	__asm { mov esi, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00661964 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00661964 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00661964 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0066194f: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { add ecx, dword ptr [edi] }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul ecx }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { shr edx, 3 }
	__asm { mov dword ptr [eax + 0x40], edx }
	__asm { L_00661964: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_013067ec[];
extern "C" char g_013067ee[];
extern "C" char g_013067f0[];
extern "C" void fn_00619900();
extern "C" void fn_00663590();
extern "C" void fn_00665460();
extern "C" void fn_00673ed0();
extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
extern "C" void fn_006f67e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00661980
extern "C" __declspec(naked) void asm_00661980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd117a3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x78 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x68] }
	__asm { call fn_00665460 }
	__asm { cmp dword ptr [eax + 0x14], 0 }
	__asm { lea ebx, [eax + 8] }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { jne L_00661bbd }
	__asm { push 0x9c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006619e3 }
	__asm { push 2 }
	__asm { push dword ptr [esi + 0x3c] }
	__asm { mov ecx, eax }
	__asm { call fn_00673ed0 }
	__asm { jmp L_006619e5 }
	__asm { L_006619e3: }
	__asm { xor eax, eax }
	__asm { L_006619e5: }
	__asm { push edi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00663590 }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [ebx + 0xc], edx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { test esi, esi }
	__asm { je L_00661a39 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00661a39 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00661a39 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00661a39: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movzx ecx, byte ptr [g_013067ec] }
	__asm { movsx ebx, word ptr [eax] }
	__asm { movsx esi, word ptr [eax + 2] }
	__asm { movsx edi, word ptr [eax + 4] }
	__asm { shl ebx, cl }
	__asm { movzx ecx, byte ptr [g_013067ee] }
	__asm { shl esi, cl }
	__asm { movzx ecx, byte ptr [g_013067f0] }
	__asm { shl edi, cl }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { call fn_006f67e0 }
	__asm { mov dx, word ptr [eax] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add dx, word ptr [ecx] }
	__asm { mov cx, word ptr [eax + 2] }
	__asm { add cx, word ptr [esi + 2] }
	__asm { mov ax, word ptr [eax + 4] }
	__asm { add ax, word ptr [esi + 4] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { movsx ecx, cx }
	__asm { cvtsi2ss xmm0, ebx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { movzx ecx, byte ptr [g_013067ec] }
	__asm { movsx edx, dx }
	__asm { shl edx, cl }
	__asm { movzx ecx, byte ptr [g_013067ee] }
	__asm { shl dword ptr [ebp + 8], cl }
	__asm { movzx ecx, byte ptr [g_013067f0] }
	__asm { movss dword ptr [ebp - 0x30], xmm0 }
	__asm { cvtsi2ss xmm0, esi }
	__asm { cwde }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { cvtsi2ss xmm0, edi }
	__asm { shl eax, cl }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006d6760 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov ecx, 9 }
	__asm { lea edi, [eax + 0x6c] }
	__asm { lea esi, [ebp - 0x84] }
	__asm { rep movsd }
	__asm { movss xmm0, dword ptr [ebp - 0x60] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movss dword ptr [eax + 0x90], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x5c] }
	__asm { movss dword ptr [eax + 0x94], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x58] }
	__asm { movss dword ptr [eax + 0x98], xmm0 }
	__asm { cvtsi2ss xmm0, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { cvtsi2ss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { cvtsi2ss xmm0, ebx }
	__asm { movss dword ptr [ebp - 0x30], xmm0 }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { mov eax, dword ptr [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call fn_00619900 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00661bbd: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00661980();
extern "C" void fn_00662120();
extern "C" void fn_006624b0();
extern "C" void fn_00662600();
extern "C" void fn_00666e70();
extern "C" void fn_006670f0();
extern "C" void fn_006673b0();
// FUNCTION: ROBLOXSTUDIO 0x00661be0
extern "C" __declspec(naked) void asm_00661be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd117c5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { call fn_006624b0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul dword ptr [edx + 0x2c] }
	__asm { mov eax, edx }
	__asm { shr eax, 2 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { lea eax, [ebx + 0x48] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { call fn_00666e70 }
	__asm { mov esi, dword ptr [ebp - 0x2c] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], esi }
	__asm { test esi, esi }
	__asm { jne L_00661c54 }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00661c54: }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { cmp byte ptr [ebx + 0x40], 0 }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [esi*4] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { je L_00661d32 }
	__asm { push 0x18 }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x38] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { test edi, edi }
	__asm { je L_00661cd9 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00661cd9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00661cd9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00661cd9: }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00661d08 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00661d08 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00661d08 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00661d08: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov dword ptr [ebp - 0x34], ecx }
	__asm { lea eax, [ebx + 0x48] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { call fn_006670f0 }
	__asm { jmp L_00661dd6 }
	__asm { L_00661d32: }
	__asm { push 0x20 }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x38] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { test edi, edi }
	__asm { je L_00661d82 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00661d82 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00661d82 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00661d82: }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00661db1 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00661db1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00661db1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00661db1: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov dword ptr [ebp - 0x34], ecx }
	__asm { lea eax, [ebx + 0x48] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { call fn_006673b0 }
	__asm { L_00661dd6: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_00662600 }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00661980 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00662120 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00661e34 }
	__asm { lea ecx, [edi + 4] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { jne L_00661e34 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00661e34 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00661e34: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00661980();
extern "C" void fn_00662120();
extern "C" void fn_006624b0();
extern "C" void fn_00667670();
extern "C" void fn_00667800();
extern "C" void fn_006679d0();
extern "C" void fn_006ae290();
// FUNCTION: ROBLOXSTUDIO 0x00661e50
extern "C" __declspec(naked) void asm_00661e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd117ef }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { call fn_006624b0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul dword ptr [edx + 0x2c] }
	__asm { mov eax, edx }
	__asm { shr eax, 2 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { lea eax, [ebx + 0x48] }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { call fn_00667670 }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], esi }
	__asm { test esi, esi }
	__asm { jne L_00661ec4 }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00661ec4: }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { cmp byte ptr [ebx + 0x40], 0 }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [esi*4] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { je L_00661fa2 }
	__asm { push 8 }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x38] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { test edi, edi }
	__asm { je L_00661f49 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00661f49 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00661f49 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00661f49: }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00661f78 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00661f78 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00661f78 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00661f78: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 0x3c], ecx }
	__asm { lea eax, [ebx + 0x48] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { call fn_006679d0 }
	__asm { jmp L_00662046 }
	__asm { L_00661fa2: }
	__asm { push 0x20 }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x38] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { test edi, edi }
	__asm { je L_00661ff2 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00661ff2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00661ff2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00661ff2: }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00662021 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00662021 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00662021 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00662021: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 0x3c], ecx }
	__asm { lea eax, [ebx + 0x48] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { call fn_00667800 }
	__asm { L_00662046: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { mov ecx, dword ptr [eax + 0x1d0] }
	__asm { call fn_006ae290 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { test eax, eax }
	__asm { je L_00662077 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00662077: }
	__asm { push 1 }
	__asm { push 5 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00661980 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00662120 }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { mov ebx, eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_006620cb }
	__asm { lea ecx, [edi + 4] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { jne L_006620cb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006620cb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006620cb: }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_006620fc }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006620fc }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006620fc }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006620fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005eb5a0();
extern "C" void fn_005ebd40();
extern "C" void fn_00662260();
extern "C" void fn_00673bb0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00662120
extern "C" __declspec(naked) void asm_00662120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11825 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [edx] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [eax + 0x2c] }
	__asm { mov eax, dword ptr [ecx + 0x3c] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { shr edi, 2 }
	__asm { call fn_00662260 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_005eb5a0 }
	__asm { push 0x34 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006621cf }
	__asm { lea ecx, [edi*4] }
	__asm { push ecx }
	__asm { lea eax, [edi + edi*2] }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_005ebd40 }
	__asm { push 0xff }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00673bb0 }
	__asm { mov ebx, eax }
	__asm { jmp L_006621d1 }
	__asm { L_006621cf: }
	__asm { xor ebx, ebx }
	__asm { L_006621d1: }
	__asm { or edi, 0xffffffff }
	__asm { test byte ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_0066220c }
	__asm { mov esi, dword ptr [ebp - 0x30] }
	__asm { test esi, esi }
	__asm { je L_0066220c }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066220c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0066220c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066220c: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0066223d }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066223d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0066223d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066223d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10268[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005eba40();
extern "C" void fn_006b9740();
extern "C" void fn_00bc5e20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00662260
extern "C" __declspec(naked) void asm_00662260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1183f }
	__asm { push eax }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 0x90] }
	__asm { test al, al }
	__asm { jne L_00662292 }
	__asm { lea esi, [edi + 0x88] }
	__asm { L_00662292: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00662495 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { cmp byte ptr [edi + 0x40], 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push 0 }
	__asm { je L_00662356 }
	__asm { push 6 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { test al, al }
	__asm { je L_006622ed }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_00bc5e20 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 6 }
	__asm { push 4 }
	__asm { jmp L_0066238d }
	__asm { L_006622ed: }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_00bc5e20 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 6 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_00bc5e20 }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push 5 }
	__asm { push 8 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_00bc5e20 }
	__asm { push 1 }
	__asm { push 3 }
	__asm { push 6 }
	__asm { push 0x10 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_00bc5e20 }
	__asm { push 2 }
	__asm { push 3 }
	__asm { push 6 }
	__asm { push 0x14 }
	__asm { jmp L_0066238d }
	__asm { L_00662356: }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_00bc5e20 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { push 0xc }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_00bc5e20 }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push 1 }
	__asm { push 0x18 }
	__asm { L_0066238d: }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_00bc5e20 }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea edx, [ebp - 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x14] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test edi, edi }
	__asm { je L_006623ff }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006623ff }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006623ff }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006623ff: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0066242d }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066242d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0066242d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066242d: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { pop ebx }
	__asm { test al, al }
	__asm { je L_00662474 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00662474 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00662463 }
	__asm { push 0x6fc }
	__asm { push 0xe39cd8 }
	__asm { push 0xe3a1c0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00662474 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00662463: }
	__asm { movzx eax, al }
	__asm { push 0xe3a1d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00662474: }
	__asm { cmp dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00662495 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00662495: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00662f30();
extern "C" void fn_00662fd0();
// FUNCTION: ROBLOXSTUDIO 0x006624b0
extern "C" __declspec(naked) void asm_006624b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd11859 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x80], 0 }
	__asm { lea ebx, [esi + 0x80] }
	__asm { jne L_006625ee }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { cmp byte ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { je L_0066255c }
	__asm { push 0x10000 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00662f30 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { test edi, edi }
	__asm { je L_00662557 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00662557 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00662557 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00662557: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { jmp L_006625bf }
	__asm { L_0066255c: }
	__asm { push 0x4000 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00662fd0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { test edi, edi }
	__asm { je L_006625bc }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006625bc }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006625bc }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006625bc: }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { L_006625bf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_006625ed }
	__asm { mov ecx, esi }
	__asm { lea eax, [edi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006625ed }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006625ed }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006625ed: }
	__asm { pop edi }
	__asm { L_006625ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0061e030();
extern "C" void fn_006572f0();
extern "C" void fn_00657870();
extern "C" void fn_00657890();
extern "C" void fn_0065e490();
extern "C" void fn_00663080();
extern "C" void fn_0068cd50();
extern "C" void fn_0068cf90();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00662600
extern "C" __declspec(naked) void asm_00662600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd118df }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x8c }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { cmp dword ptr [eax + 0x98], 0 }
	__asm { lea ebx, [eax + 0x98] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { jne L_00662a99 }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00662658 }
	__asm { mov ecx, eax }
	__asm { call fn_00657870 }
	__asm { jmp L_0066265a }
	__asm { L_00662658: }
	__asm { xor eax, eax }
	__asm { L_0066265a: }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0065e490 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { test edi, edi }
	__asm { je L_006626b8 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006626b8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006626b8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006626b8: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_006626ea }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006626ea }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006626ea }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006626ea: }
	__asm { mov edi, dword ptr [ebp - 0x4c] }
	__asm { push 0x16 }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { push 0xe3a238 }
	__asm { mov ecx, dword ptr [eax + 0x1a4] }
	__asm { mov eax, dword ptr [eax + 0x1cc] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x34], 0xf }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov byte ptr [ebp - 0x48], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xf }
	__asm { push 0xe3a250 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0068cd50 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_0066277a }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066277a: }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { jb L_006627a1 }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006627a1: }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0xf }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov byte ptr [ebp - 0x48], 0 }
	__asm { je L_00662800 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { call fn_006572f0 }
	__asm { lea eax, [ebp - 0x98] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00663080 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x98] }
	__asm { push eax }
	__asm { call fn_00657890 }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_0061e030 }
	__asm { L_00662800: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00662832 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00662832 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00662832 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00662832: }
	__asm { push 0xf }
	__asm { push 0xe3a260 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xf }
	__asm { push 0xe3a250 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 8 }
	__asm { mov dword ptr [ebp - 0x34], 0xf }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov byte ptr [ebp - 0x48], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a8] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call fn_0068cd50 }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { jb L_006628ad }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006628ad: }
	__asm { mov dword ptr [ebp - 0x34], 0xf }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov byte ptr [ebp - 0x48], 0 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { jb L_006628d4 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006628d4: }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { je L_00662933 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { call fn_006572f0 }
	__asm { lea eax, [ebp - 0x98] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00663080 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x98] }
	__asm { push eax }
	__asm { call fn_00657890 }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { call fn_0061e030 }
	__asm { L_00662933: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00662965 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00662965 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00662965 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00662965: }
	__asm { push 0xd }
	__asm { push 0xe3a270 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0xd }
	__asm { push 0xe3a280 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 0xe }
	__asm { mov dword ptr [ebp - 0x34], 0xf }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov byte ptr [ebp - 0x48], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a8] }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { call fn_0068cf90 }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { jb L_006629e0 }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006629e0: }
	__asm { mov dword ptr [ebp - 0x34], 0xf }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov byte ptr [ebp - 0x48], 0 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0x12 }
	__asm { jb L_00662a07 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00662a07: }
	__asm { cmp dword ptr [ebp - 0x58], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { je L_00662a66 }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { call fn_006572f0 }
	__asm { lea eax, [ebp - 0x98] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0x13 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00663080 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x98] }
	__asm { push eax }
	__asm { call fn_00657890 }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { mov byte ptr [ebp - 4], 0x12 }
	__asm { call fn_0061e030 }
	__asm { L_00662a66: }
	__asm { mov edi, dword ptr [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00662a97 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00662a97 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00662a97 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00662a97: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00662a99: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x006644c0
extern "C" __declspec(naked) void asm_006644c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { movzx eax, byte ptr [ebp + 0x20] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [eax + eax*2] }
	__asm { push esi }
	__asm { lea eax, [ecx + eax*2] }
	__asm { shl eax, 4 }
	__asm { add eax, 0x12dd3f8 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { shl ecx, 4 }
	__asm { add ecx, 0x12dda08 }
	__asm { push edi }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + edx*2] }
	__asm { mov byte ptr [ebp + 0x23], 1 }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { movzx eax, word ptr [ebx] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [ebx + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, byte ptr [ebp - 0xa] }
	__asm { mov byte ptr [ebp + 0x20], al }
	__asm { movzx eax, byte ptr [ebp - 8] }
	__asm { mov byte ptr [ebp + 0x21], al }
	__asm { movzx eax, byte ptr [ebp - 6] }
	__asm { mov byte ptr [ebp + 0x22], al }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp + 0x23], 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebx + edx*4] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { lea eax, [esi + esi*2] }
	__asm { lea ecx, [edx + eax*2] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { movzx eax, word ptr [edx] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [edx + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [edx + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, byte ptr [ebp - 0xa] }
	__asm { mov byte ptr [ebp + 0x20], al }
	__asm { movzx eax, byte ptr [ebp - 8] }
	__asm { mov byte ptr [ebp + 0x21], al }
	__asm { movzx eax, byte ptr [ebp - 6] }
	__asm { mov byte ptr [ebp + 0x22], al }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp + 0x23], 1 }
	__asm { mov eax, dword ptr [edx + esi*4] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov eax, dword ptr [ebx + esi*4] }
	__asm { mov dword ptr [ecx + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x2c], eax }
	__asm { lea eax, [edi + edi*2] }
	__asm { lea ecx, [esi + eax*2] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { movzx eax, word ptr [esi] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [esi + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, byte ptr [ebp - 0xa] }
	__asm { mov byte ptr [ebp + 0x20], al }
	__asm { movzx eax, byte ptr [ebp - 8] }
	__asm { mov byte ptr [ebp + 0x21], al }
	__asm { movzx eax, byte ptr [ebp - 6] }
	__asm { mov byte ptr [ebp + 0x22], al }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x30], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp + 0x23], 1 }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov dword ptr [ecx + 0x34], eax }
	__asm { mov eax, dword ptr [edx + edi*4] }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { mov eax, dword ptr [ebx + edi*4] }
	__asm { mov dword ptr [ecx + 0x3c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [edi + 0x44], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { movzx eax, word ptr [esi] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [esi + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [esi + 4] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, byte ptr [ebp - 0xa] }
	__asm { mov byte ptr [ebp + 0x20], al }
	__asm { movzx eax, byte ptr [ebp - 8] }
	__asm { mov byte ptr [ebp + 0x21], al }
	__asm { movzx eax, byte ptr [ebp - 6] }
	__asm { mov byte ptr [ebp + 0x22], al }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edi + 0x48], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x4c], eax }
	__asm { mov eax, dword ptr [edx + ecx*4] }
	__asm { mov dword ptr [edi + 0x50], eax }
	__asm { mov eax, dword ptr [ebx + ecx*4] }
	__asm { mov dword ptr [edi + 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { mov dword ptr [edi + 0x58], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x5c], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00666470();
// FUNCTION: ROBLOXSTUDIO 0x006646e0
extern "C" __declspec(naked) void asm_006646e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + 0x18] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { shl eax, 4 }
	__asm { add eax, 0x12dda08 }
	__asm { push edi }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { lea eax, [edx + edx*2] }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { movzx eax, word ptr [ebx] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [ebx + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [ebx + 4] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov ecx, ebx }
	__asm { lea eax, [eax + edx*4] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_00666470 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [esi + esi*2] }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { movzx eax, word ptr [edx] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [edx + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [edx + 4] }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { lea eax, [eax + esi*4] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_00666470 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { lea eax, [edi + edi*2] }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { movzx eax, word ptr [edx] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [edx + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [edx + 4] }
	__asm { lea ecx, [ebx + 0x40] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { lea eax, [esi + edi*4] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_00666470 }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edi + edi*2] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { movzx eax, word ptr [edx] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [edx + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [edx + 4] }
	__asm { lea ecx, [ebx + 0x60] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { lea eax, [esi + edi*4] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_00666470 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00666470();
// FUNCTION: ROBLOXSTUDIO 0x00664830
extern "C" __declspec(naked) void asm_00664830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + 0x18] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { shl eax, 4 }
	__asm { add eax, 0x12dda08 }
	__asm { push edi }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { lea eax, [edx + edx*2] }
	__asm { and edx, 3 }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { movzx eax, word ptr [ebx] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [ebx + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [ebx + 4] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov ecx, ebx }
	__asm { lea eax, [eax + edx*4] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_00666470 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [esi + esi*2] }
	__asm { and esi, 3 }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { movzx eax, word ptr [edx] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [edx + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [edx + 4] }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { lea eax, [eax + esi*4] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_00666470 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { lea eax, [edi + edi*2] }
	__asm { and edi, 3 }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { movzx eax, word ptr [edx] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [edx + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [edx + 4] }
	__asm { lea ecx, [ebx + 0x40] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { lea eax, [esi + edi*4] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_00666470 }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edi + edi*2] }
	__asm { and edi, 3 }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { movzx eax, word ptr [ecx] }
	__asm { add ax, word ptr [edx] }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [edx + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [edx + 4] }
	__asm { lea ecx, [ebx + 0x60] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { lea eax, [esi + edi*4] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_00666470 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00664980
extern "C" __declspec(naked) void asm_00664980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { shl eax, 4 }
	__asm { add eax, 0x12dda08 }
	__asm { push ebx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [eax + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [eax + eax*2] }
	__asm { mov byte ptr [ebp + 0x17], 1 }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { movzx eax, word ptr [edi] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [edi + 2] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { movzx eax, byte ptr [ebp - 6] }
	__asm { mov byte ptr [ebp + 0x14], al }
	__asm { movzx eax, byte ptr [ebp - 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x15], al }
	__asm { movzx eax, byte ptr [ebp - 2] }
	__asm { mov byte ptr [ebp + 0x16], al }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea eax, [edx + edx*2] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { mov byte ptr [ebp + 0xf], 1 }
	__asm { movzx eax, word ptr [ecx] }
	__asm { add ax, word ptr [edx] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [edx + 2] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [edx + 4] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { movzx eax, byte ptr [ebp - 6] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { movzx eax, byte ptr [ebp - 4] }
	__asm { mov byte ptr [ebp + 0xd], al }
	__asm { movzx eax, byte ptr [ebp - 2] }
	__asm { mov byte ptr [ebp + 0xe], al }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { lea eax, [esi + esi*2] }
	__asm { mov esi, ecx }
	__asm { mov byte ptr [ebp + 0x13], 1 }
	__asm { lea ecx, [esi + eax*2] }
	__asm { movzx eax, word ptr [edx] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [edx + 2] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [edx + 4] }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { movzx eax, byte ptr [ebp - 6] }
	__asm { mov byte ptr [ebp + 0x10], al }
	__asm { movzx eax, byte ptr [ebp - 4] }
	__asm { mov byte ptr [ebp + 0x11], al }
	__asm { movzx eax, byte ptr [ebp - 2] }
	__asm { mov byte ptr [ebp + 0x12], al }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { lea eax, [ebx + ebx*2] }
	__asm { mov byte ptr [ebp + 0x13], 1 }
	__asm { lea ecx, [esi + eax*2] }
	__asm { movzx eax, word ptr [edx] }
	__asm { add ax, word ptr [ecx] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, word ptr [edx + 2] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { add ax, word ptr [edx + 4] }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { movzx eax, byte ptr [ebp - 6] }
	__asm { mov byte ptr [ebp + 0x10], al }
	__asm { movzx eax, byte ptr [ebp - 4] }
	__asm { mov byte ptr [ebp + 0x11], al }
	__asm { movzx eax, byte ptr [ebp - 2] }
	__asm { mov byte ptr [ebp + 0x12], al }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006f67e0();
// FUNCTION: ROBLOXSTUDIO 0x00664f40
extern "C" __declspec(naked) void asm_00664f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov bx, word ptr [eax + 0xa] }
	__asm { sub bx, word ptr [eax + 4] }
	__asm { push esi }
	__asm { mov si, word ptr [eax + 0xe] }
	__asm { sub si, word ptr [eax + 8] }
	__asm { push edi }
	__asm { mov di, word ptr [eax + 0xc] }
	__asm { sub di, word ptr [eax + 6] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { call fn_006f67e0 }
	__asm { movzx ecx, word ptr [eax + 4] }
	__asm { add cx, si }
	__asm { movzx edx, cx }
	__asm { movzx ecx, word ptr [eax + 2] }
	__asm { movzx eax, word ptr [eax] }
	__asm { add ax, bx }
	__asm { mov ebx, dword ptr [ebp - 0xc] }
	__asm { add cx, di }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov word ptr [ebx + 4], ax }
	__asm { mov word ptr [ebx + 8], dx }
	__asm { movzx ecx, cx }
	__asm { mov word ptr [ebx + 6], cx }
	__asm { mov dword ptr [ebx + 0x14], 0 }
	__asm { mov dword ptr [ebx + 0x18], 0 }
	__asm { mov byte ptr [ebx + 0x1c], 0 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebx + 0x1e], eax }
	__asm { mov word ptr [ebx + 0x22], ax }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov eax, dword ptr [edi + 0xa] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dx, word ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov ax, word ptr [edi + 0xe] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov word ptr [ebp - 4], dx }
	__asm { mov word ptr [ebp - 0x20], dx }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { je L_00665137 }
	__asm { cmp word ptr [ebx + 8], 1 }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { jle L_0066505d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp - 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov si, word ptr [ebp - 0x1c] }
	__asm { sub dx, word ptr [eax + 0x1c] }
	__asm { sub si, word ptr [eax + 0x18] }
	__asm { mov edi, ecx }
	__asm { sub cx, word ptr [eax + 0x18] }
	__asm { shr edi, 0x10 }
	__asm { mov word ptr [ebp - 6], cx }
	__asm { mov cx, di }
	__asm { sub cx, word ptr [eax + 0x1a] }
	__asm { sub di, word ptr [eax + 0x1a] }
	__asm { movsx ecx, cx }
	__asm { inc ebx }
	__asm { sub bx, word ptr [eax + 0x1c] }
	__asm { movsx eax, di }
	__asm { sub ecx, eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + ecx*8] }
	__asm { shl ecx, 2 }
	__asm { movsx eax, dx }
	__asm { mov dx, word ptr [ebp - 4] }
	__asm { sub ecx, eax }
	__asm { movsx eax, bx }
	__asm { mov ebx, dword ptr [ebp - 0xc] }
	__asm { add ecx, eax }
	__asm { movsx eax, si }
	__asm { lea ecx, [ecx + ecx*8] }
	__asm { shl ecx, 2 }
	__asm { sub ecx, eax }
	__asm { mov ax, word ptr [ebp - 6] }
	__asm { cwde }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0066505d: }
	__asm { cmp word ptr [ebx + 6], 1 }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { jle L_006650d5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov bx, word ptr [ebp - 0x24] }
	__asm { sub bx, word ptr [eax + 0x18] }
	__asm { sub dx, word ptr [eax + 0x1c] }
	__asm { mov di, word ptr [ebp - 2] }
	__asm { sub di, word ptr [eax + 0x1c] }
	__asm { mov esi, ecx }
	__asm { shr esi, 0x10 }
	__asm { mov word ptr [ebp - 6], bx }
	__asm { mov bx, word ptr [ebp - 0x1c] }
	__asm { sub bx, word ptr [eax + 0x18] }
	__asm { lea ecx, [esi + 1] }
	__asm { sub cx, word ptr [eax + 0x1a] }
	__asm { sub si, word ptr [eax + 0x1a] }
	__asm { movsx ecx, cx }
	__asm { movsx eax, si }
	__asm { sub ecx, eax }
	__asm { mov ax, di }
	__asm { lea ecx, [ecx + ecx*8] }
	__asm { cwde }
	__asm { shl ecx, 2 }
	__asm { sub ecx, eax }
	__asm { movsx eax, dx }
	__asm { add ecx, eax }
	__asm { movsx eax, bx }
	__asm { mov ebx, dword ptr [ebp - 0xc] }
	__asm { lea ecx, [ecx + ecx*8] }
	__asm { shl ecx, 2 }
	__asm { sub ecx, eax }
	__asm { mov ax, word ptr [ebp - 6] }
	__asm { cwde }
	__asm { add ecx, eax }
	__asm { mov word ptr [ebp - 2], di }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x10], ecx }
	__asm { L_006650d5: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebx + 0x1e], eax }
	__asm { mov ax, word ptr [ebp - 4] }
	__asm { mov word ptr [ebx + 0x22], ax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov ax, word ptr [ebx + 0x20] }
	__asm { sub ax, word ptr [ecx + 0x1a] }
	__asm { mov si, word ptr [ebx + 0x1e] }
	__asm { sub si, word ptr [ecx + 0x18] }
	__asm { mov dx, word ptr [ebx + 0x22] }
	__asm { sub dx, word ptr [ecx + 0x1c] }
	__asm { cwde }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, dx }
	__asm { lea eax, [eax + ecx*4] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, si }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { mov dword ptr [ebx + 0x24], ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebx + 0x28], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { shr eax, 0x10 }
	__asm { cmp word ptr [ebx + 0x20], ax }
	__asm { pop esi }
	__asm { setg al }
	__asm { mov byte ptr [ebx + 0x1c], al }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00665137: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 0x1c], 1 }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006653d0
extern "C" __declspec(naked) void asm_006653d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { movzx eax, byte ptr [ebx + 8] }
	__asm { mov byte ptr [esi + 8], al }
	__asm { movzx eax, byte ptr [ebx + 9] }
	__asm { mov byte ptr [esi + 9], al }
	__asm { mov edx, dword ptr [ebx + 0x10] }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00665409 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00665409: }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], edx }
	__asm { test edi, edi }
	__asm { je L_0066543c }
	__asm { lea ecx, [edi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0066543c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066543c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066543c: }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00663a80();
extern "C" void fn_00663e70();
extern "C" void fn_006659a0();
extern "C" void fn_00992e30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00665460
extern "C" __declspec(naked) void asm_00665460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd11a48 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movsx esi, word ptr [ebx + 4] }
	__asm { movsx eax, word ptr [ebx + 2] }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { movsx eax, word ptr [ebx] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_006654a3 }
	__asm { inc eax }
	__asm { jmp L_006654a5 }
	__asm { L_006654a3: }
	__asm { xor eax, eax }
	__asm { L_006654a5: }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00663e70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_0066557b }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_006654c6 }
	__asm { inc eax }
	__asm { jmp L_006654c8 }
	__asm { L_006654c6: }
	__asm { xor eax, eax }
	__asm { L_006654c8: }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov word ptr [ebp - 0x18], 0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov ax, word ptr [ebx + 4] }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0x12dd3b5 }
	__asm { call fn_00663a80 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00992e30 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006659a0 }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_00665579 }
	__asm { cmp byte ptr [ebp - 0x17], 0 }
	__asm { je L_00665570 }
	__asm { mov esi, dword ptr [ebx + 0x18] }
	__asm { test esi, esi }
	__asm { je L_0066556d }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0066556d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0066556d }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0066556d: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00665570: }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00665579: }
	__asm { mov eax, esi }
	__asm { L_0066557b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_011d9088[];
extern "C" char g_011d908a[];
extern "C" char g_011d908c[];
extern "C" char g_011d9198[];
extern "C" char g_011d919a[];
extern "C" char g_011d919c[];
extern "C" char g_011d9400[];
extern "C" char g_012f8550[];
extern "C" void fn_006665d0();
extern "C" void fn_00667d50();
// FUNCTION: ROBLOXSTUDIO 0x00665a30
extern "C" __declspec(naked) void asm_00665a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ax, word ptr [ebx + 0x1e] }
	__asm { and ax, 0x1f }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { shl ax, 2 }
	__asm { add ax, word ptr [g_011d9088] }
	__asm { push edi }
	__asm { lea edi, [ebx + 0x1e] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov word ptr [ebp - 0x24], ax }
	__asm { mov ax, word ptr [edi + 2] }
	__asm { and ax, 0xf }
	__asm { shl ax, 2 }
	__asm { add ax, word ptr [g_011d908a] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov word ptr [ebp - 0x22], ax }
	__asm { mov ax, word ptr [edi + 4] }
	__asm { and ax, 0x1f }
	__asm { shl ax, 2 }
	__asm { add ax, word ptr [g_011d908c] }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { mov word ptr [ebp - 0x20], ax }
	__asm { cmp esi, 4 }
	__asm { je L_00665aa7 }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { cmp esi, 5 }
	__asm { jne L_00665aab }
	__asm { L_00665aa7: }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { L_00665aab: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test al, 1 }
	__asm { je L_00665b2f }
	__asm { push 1 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_006665d0 }
	__asm { cmp byte ptr [ebp - 1], 0 }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { jne L_00665adb }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { mov eax, dword ptr [g_011d9400] }
	__asm { mov byte ptr [ebp - 0x10], 1 }
	__asm { mov al, byte ptr [eax + ecx] }
	__asm { cmp al, byte ptr [g_012f8550] }
	__asm { je L_00665adf }
	__asm { L_00665adb: }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { L_00665adf: }
	__asm { mov edx, dword ptr [ebx + 0x28] }
	__asm { mov al, byte ptr [edx] }
	__asm { and al, 0x38 }
	__asm { cmp al, 0x28 }
	__asm { jne L_00665af1 }
	__asm { mov eax, 0x11 }
	__asm { jmp L_00665b10 }
	__asm { L_00665af1: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 0x24] }
	__asm { mov eax, dword ptr [eax] }
	__asm { shr ecx, 1 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { movzx eax, byte ptr [eax + ecx] }
	__asm { mov cl, byte ptr [ebx + 0x24] }
	__asm { and cl, 1 }
	__asm { shl cl, 2 }
	__asm { shr eax, cl }
	__asm { and eax, 0xf }
	__asm { inc eax }
	__asm { L_00665b10: }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push esi }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { push eax }
	__asm { movzx eax, byte ptr [edx] }
	__asm { push eax }
	__asm { call fn_00667d50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { L_00665b2f: }
	__asm { test al, 2 }
	__asm { je L_00665c7f }
	__asm { push 2 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_006665d0 }
	__asm { cmp byte ptr [ebp - 1], 0 }
	__asm { lea edi, [esi + esi*2] }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { jne L_00665ba1 }
	__asm { mov ax, word ptr [edi*2 + 0x11d9182] }
	__asm { add ax, word ptr [g_011d919a] }
	__asm { mov dx, word ptr [edi*2 + 0x11d9184] }
	__asm { add dx, word ptr [g_011d919c] }
	__asm { mov si, word ptr [edi*2 + 0x11d9180] }
	__asm { add si, word ptr [g_011d9198] }
	__asm { cwde }
	__asm { mov byte ptr [ebp + 0x10], 1 }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, dx }
	__asm { lea eax, [eax + ecx*4] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { movsx eax, si }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { cmp al, byte ptr [g_012f8550] }
	__asm { je L_00665ba5 }
	__asm { L_00665ba1: }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { L_00665ba5: }
	__asm { movzx esi, word ptr [edi*2 + 0x11d9180] }
	__asm { movzx edi, word ptr [edi*2 + 0x11d9182] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { lea edx, [esi*4] }
	__asm { movzx ebx, word ptr [eax*2 + 0x11d9184] }
	__asm { add word ptr [ebp - 4], dx }
	__asm { mov dx, word ptr [ebp - 4] }
	__asm { lea ecx, [edi*4] }
	__asm { mov word ptr [ebp - 0x24], dx }
	__asm { mov dx, word ptr [ebp - 6] }
	__asm { add dx, cx }
	__asm { mov cx, word ptr [ebp - 8] }
	__asm { lea eax, [ebx*4] }
	__asm { add cx, ax }
	__asm { mov word ptr [ebp - 0x20], cx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov word ptr [ebp - 0x22], dx }
	__asm { movzx eax, word ptr [ecx] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { add ax, si }
	__asm { mov esi, dword ptr [edx*4 + 0x11d93f0] }
	__asm { mov word ptr [ebp - 0x1c], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, di }
	__asm { mov word ptr [ebp - 0x1a], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ax, bx }
	__asm { mov edi, dword ptr [ecx + 0x28] }
	__asm { mov ebx, dword ptr [ecx + 0x24] }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { mov al, byte ptr [edi + esi] }
	__asm { and al, 0x38 }
	__asm { add ebx, esi }
	__asm { cmp al, 0x28 }
	__asm { jne L_00665c3f }
	__asm { mov eax, 0x11 }
	__asm { jmp L_00665c5c }
	__asm { L_00665c3f: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { shr ecx, 1 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { movzx eax, byte ptr [eax + ecx] }
	__asm { mov cl, bl }
	__asm { and cl, 1 }
	__asm { shl cl, 2 }
	__asm { shr eax, cl }
	__asm { and eax, 0xf }
	__asm { inc eax }
	__asm { L_00665c5c: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push dword ptr [edx*4 + 0xe39bfc] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [esi + edi] }
	__asm { push eax }
	__asm { call fn_00667d50 }
	__asm { L_00665c7f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_011d9088[];
extern "C" char g_011d908a[];
extern "C" char g_011d908c[];
extern "C" char g_011d9198[];
extern "C" char g_011d919a[];
extern "C" char g_011d919c[];
extern "C" char g_011d9400[];
extern "C" char g_012f8550[];
extern "C" void fn_006665d0();
extern "C" void fn_00667e70();
// FUNCTION: ROBLOXSTUDIO 0x00665c90
extern "C" __declspec(naked) void asm_00665c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ax, word ptr [ebx + 0x1e] }
	__asm { and ax, 0x1f }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { shl ax, 2 }
	__asm { add ax, word ptr [g_011d9088] }
	__asm { push edi }
	__asm { lea edi, [ebx + 0x1e] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov word ptr [ebp - 0x24], ax }
	__asm { mov ax, word ptr [edi + 2] }
	__asm { and ax, 0xf }
	__asm { shl ax, 2 }
	__asm { add ax, word ptr [g_011d908a] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov word ptr [ebp - 0x22], ax }
	__asm { mov ax, word ptr [edi + 4] }
	__asm { and ax, 0x1f }
	__asm { shl ax, 2 }
	__asm { add ax, word ptr [g_011d908c] }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { mov word ptr [ebp - 0x20], ax }
	__asm { cmp esi, 4 }
	__asm { je L_00665d07 }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { cmp esi, 5 }
	__asm { jne L_00665d0b }
	__asm { L_00665d07: }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { L_00665d0b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test al, 1 }
	__asm { je L_00665d8f }
	__asm { push 1 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_006665d0 }
	__asm { cmp byte ptr [ebp - 1], 0 }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { jne L_00665d3b }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { mov eax, dword ptr [g_011d9400] }
	__asm { mov byte ptr [ebp - 0x10], 1 }
	__asm { mov al, byte ptr [eax + ecx] }
	__asm { cmp al, byte ptr [g_012f8550] }
	__asm { je L_00665d3f }
	__asm { L_00665d3b: }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { L_00665d3f: }
	__asm { mov edx, dword ptr [ebx + 0x28] }
	__asm { mov al, byte ptr [edx] }
	__asm { and al, 0x38 }
	__asm { cmp al, 0x28 }
	__asm { jne L_00665d51 }
	__asm { mov eax, 0x11 }
	__asm { jmp L_00665d70 }
	__asm { L_00665d51: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 0x24] }
	__asm { mov eax, dword ptr [eax] }
	__asm { shr ecx, 1 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { movzx eax, byte ptr [eax + ecx] }
	__asm { mov cl, byte ptr [ebx + 0x24] }
	__asm { and cl, 1 }
	__asm { shl cl, 2 }
	__asm { shr eax, cl }
	__asm { and eax, 0xf }
	__asm { inc eax }
	__asm { L_00665d70: }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push esi }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { push eax }
	__asm { movzx eax, byte ptr [edx] }
	__asm { push eax }
	__asm { call fn_00667e70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { L_00665d8f: }
	__asm { test al, 2 }
	__asm { je L_00665edf }
	__asm { push 2 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_006665d0 }
	__asm { cmp byte ptr [ebp - 1], 0 }
	__asm { lea edi, [esi + esi*2] }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { jne L_00665e01 }
	__asm { mov ax, word ptr [edi*2 + 0x11d9182] }
	__asm { add ax, word ptr [g_011d919a] }
	__asm { mov dx, word ptr [edi*2 + 0x11d9184] }
	__asm { add dx, word ptr [g_011d919c] }
	__asm { mov si, word ptr [edi*2 + 0x11d9180] }
	__asm { add si, word ptr [g_011d9198] }
	__asm { cwde }
	__asm { mov byte ptr [ebp + 0x10], 1 }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, dx }
	__asm { lea eax, [eax + ecx*4] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { movsx eax, si }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { cmp al, byte ptr [g_012f8550] }
	__asm { je L_00665e05 }
	__asm { L_00665e01: }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { L_00665e05: }
	__asm { movzx esi, word ptr [edi*2 + 0x11d9180] }
	__asm { movzx edi, word ptr [edi*2 + 0x11d9182] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { lea edx, [esi*4] }
	__asm { movzx ebx, word ptr [eax*2 + 0x11d9184] }
	__asm { add word ptr [ebp - 4], dx }
	__asm { mov dx, word ptr [ebp - 4] }
	__asm { lea ecx, [edi*4] }
	__asm { mov word ptr [ebp - 0x24], dx }
	__asm { mov dx, word ptr [ebp - 6] }
	__asm { add dx, cx }
	__asm { mov cx, word ptr [ebp - 8] }
	__asm { lea eax, [ebx*4] }
	__asm { add cx, ax }
	__asm { mov word ptr [ebp - 0x20], cx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov word ptr [ebp - 0x22], dx }
	__asm { movzx eax, word ptr [ecx] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { add ax, si }
	__asm { mov esi, dword ptr [edx*4 + 0x11d93f0] }
	__asm { mov word ptr [ebp - 0x1c], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { add ax, di }
	__asm { mov word ptr [ebp - 0x1a], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ax, bx }
	__asm { mov edi, dword ptr [ecx + 0x28] }
	__asm { mov ebx, dword ptr [ecx + 0x24] }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { mov al, byte ptr [edi + esi] }
	__asm { and al, 0x38 }
	__asm { add ebx, esi }
	__asm { cmp al, 0x28 }
	__asm { jne L_00665e9f }
	__asm { mov eax, 0x11 }
	__asm { jmp L_00665ebc }
	__asm { L_00665e9f: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { shr ecx, 1 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { movzx eax, byte ptr [eax + ecx] }
	__asm { mov cl, bl }
	__asm { and cl, 1 }
	__asm { shl cl, 2 }
	__asm { shr eax, cl }
	__asm { and eax, 0xf }
	__asm { inc eax }
	__asm { L_00665ebc: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push dword ptr [edx*4 + 0xe39bfc] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [esi + edi] }
	__asm { push eax }
	__asm { call fn_00667e70 }
	__asm { L_00665edf: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00666300
extern "C" __declspec(naked) void asm_00666300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { jne L_00666352 }
	__asm { push 0x2c }
	__asm { mov word ptr [ebx + 8], si }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0066632a }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0066632a: }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, 0xb }
	__asm { lea esi, [ebp - 0x2c] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 8], 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00666352: }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_00666389 }
	__asm { mov esi, dword ptr [esi + 0x18] }
	__asm { test esi, esi }
	__asm { je L_00666385 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00666385 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00666385 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00666385: }
	__asm { mov byte ptr [ebx + 9], 0 }
	__asm { L_00666389: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e3ad6c[];
extern "C" void fn_006dd620();
extern "C" void fn_006e0620();
// FUNCTION: ROBLOXSTUDIO 0x00666470
extern "C" __declspec(naked) void asm_00666470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_006dd620 }
	__asm { fld dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [edi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [edi + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, 0x81020409 }
	__asm { fstp dword ptr [edi + 8] }
	__asm { movzx ecx, byte ptr [esi] }
	__asm { sub ecx, 0x7f }
	__asm { fld dword ptr [g_00e3ad6c] }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { movzx ecx, byte ptr [esi + 1] }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cvtsi2ss xmm2, eax }
	__asm { sub ecx, 0x7f }
	__asm { mov eax, 0x81020409 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 6 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { cvtsi2ss xmm1, ecx }
	__asm { movzx ecx, byte ptr [esi + 2] }
	__asm { sub ecx, 0x7f }
	__asm { mov eax, 0x81020409 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sar edx, 6 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cvtsi2ss xmm0, eax }
	__asm { movss dword ptr [edi + 0xc], xmm2 }
	__asm { movss dword ptr [edi + 0x14], xmm0 }
	__asm { movss dword ptr [edi + 0x10], xmm1 }
	__asm { movsx eax, word ptr [ecx] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { movsx eax, word ptr [ecx + 2] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { cvtsi2ss xmm0, eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { lea ecx, [ebp - 8] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_006e0620 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [edi + 0x18] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [edi + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00666550
extern "C" __declspec(naked) void asm_00666550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00666566: }
	__asm { mov edi, dword ptr [ebx] }
	__asm { test edi, edi }
	__asm { je L_00666571 }
	__asm { add edi, -0x24 }
	__asm { jmp L_00666573 }
	__asm { L_00666571: }
	__asm { xor edi, edi }
	__asm { L_00666573: }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { test esi, esi }
	__asm { je L_006665a5 }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006665a5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006665a5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006665a5: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { dec dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { inc eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebx], ecx }
	__asm { jne L_00666566 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006665d0
extern "C" __declspec(naked) void asm_006665d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { cmp edx, 1 }
	__asm { mov ebx, 6 }
	__asm { mov eax, ecx }
	__asm { cmove eax, ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmove ebx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax*4 + 0x11d93f0] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { lea ebx, [eax + edi] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov byte ptr [ebp - 1], 0xf }
	__asm { mov al, byte ptr [eax + edi] }
	__asm { and al, 0x38 }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { cmp al, 0x28 }
	__asm { jne L_00666621 }
	__asm { mov dword ptr [ebp - 8], 0x11 }
	__asm { jmp L_00666644 }
	__asm { L_00666621: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { shr ecx, 1 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { movzx eax, byte ptr [eax + ecx] }
	__asm { mov cl, bl }
	__asm { and cl, 1 }
	__asm { shl cl, 2 }
	__asm { shr eax, cl }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { and eax, 0xf }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { L_00666644: }
	__asm { cmp edx, 1 }
	__asm { je L_00666653 }
	__asm { mov ecx, dword ptr [ecx*4 + 0xe39bfc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { L_00666653: }
	__asm { lea eax, [ecx*4] }
	__asm { mov ebx, 1 }
	__asm { mov dword ptr [ebp - 0xc], ebx }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea esi, [eax*4 + 0xe3a290] }
	__asm { mov edi, edi }
	__asm { L_00666670: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax*4 + 0x11d93f0] }
	__asm { add edi, eax }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov al, byte ptr [eax + edi] }
	__asm { and al, 0x38 }
	__asm { cmp al, 0x28 }
	__asm { jne L_0066669f }
	__asm { mov eax, 0x11 }
	__asm { jmp L_006666c3 }
	__asm { L_0066669f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { shr ecx, 1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { movzx eax, byte ptr [eax + ecx] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add ecx, edi }
	__asm { and cl, 1 }
	__asm { shl cl, 2 }
	__asm { shr eax, cl }
	__asm { and eax, 0xf }
	__asm { inc eax }
	__asm { L_006666c3: }
	__asm { cmp eax, dword ptr [ebp - 8] }
	__asm { jne L_00666750 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov al, byte ptr [edi + eax] }
	__asm { movzx eax, al }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea ecx, [ecx + eax*2] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax*4 + 0x11d93f0] }
	__asm { mov edi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ecx*4 + 0x12f6d50] }
	__asm { shl ecx, 2 }
	__asm { mov al, byte ptr [eax + edi] }
	__asm { mov edi, dword ptr [ecx + 0xe39c4c] }
	__asm { cmp edi, 1 }
	__asm { je L_00666737 }
	__asm { movzx eax, al }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax + 0xe39bfc] }
	__asm { lea eax, [eax + ecx*2] }
	__asm { mov eax, dword ptr [eax*4 + 0x12f6d50] }
	__asm { cmp edi, dword ptr [eax*4 + 0xe39c4c] }
	__asm { setne al }
	__asm { jmp L_0066673e }
	__asm { L_00666737: }
	__asm { mov al, byte ptr [ecx + edx + 0x12dd9f8] }
	__asm { L_0066673e: }
	__asm { mov cl, byte ptr [ebp - 1] }
	__asm { test al, al }
	__asm { je L_00666753 }
	__asm { mov al, bl }
	__asm { not al }
	__asm { and cl, al }
	__asm { mov byte ptr [ebp - 1], cl }
	__asm { jmp L_00666753 }
	__asm { L_00666750: }
	__asm { mov cl, byte ptr [ebp - 1] }
	__asm { L_00666753: }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { add ebx, ebx }
	__asm { inc edx }
	__asm { add esi, 4 }
	__asm { mov dword ptr [ebp - 0xc], ebx }
	__asm { cmp edx, 4 }
	__asm { jl L_00666670 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, cl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006663f0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00666af0
extern "C" __declspec(naked) void asm_00666af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { je L_00666d83 }
	__asm { push edi }
	__asm { call fn_006663f0 }
	__asm { test al, al }
	__asm { jne L_00666b4e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00666b39 }
	__asm { push 0x5f }
	__asm { push 0xe3a3c0 }
	__asm { push 0xe3a864 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00666b4e }
	__asm { L_00666b39: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3a880 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00666b4e: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00666d83 }
	__asm { movzx eax, word ptr [edi] }
	__asm { add ax, word ptr [ebx] }
	__asm { mov ecx, esi }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ebx + 2] }
	__asm { add ax, word ptr [edi + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ebx + 4] }
	__asm { add ax, word ptr [edi + 4] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_006663f0 }
	__asm { test al, al }
	__asm { jne L_00666bbf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00666baa }
	__asm { push 0x60 }
	__asm { push 0xe3a3c0 }
	__asm { push 0xe3a8e8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00666bbf }
	__asm { L_00666baa: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3a920 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00666bbf: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00666d83 }
	__asm { movzx eax, word ptr [edi] }
	__asm { add ax, word ptr [ebx + 6] }
	__asm { mov ecx, esi }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ebx + 8] }
	__asm { add ax, word ptr [edi + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ebx + 0xa] }
	__asm { add ax, word ptr [edi + 4] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_006663f0 }
	__asm { test al, al }
	__asm { jne L_00666c31 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00666c1c }
	__asm { push 0x61 }
	__asm { push 0xe3a3c0 }
	__asm { push 0xe3a9ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00666c31 }
	__asm { L_00666c1c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3a9e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00666c31: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00666d83 }
	__asm { movzx eax, word ptr [edi] }
	__asm { add ax, word ptr [ebx + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ebx + 0xe] }
	__asm { add ax, word ptr [edi + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ebx + 0x10] }
	__asm { add ax, word ptr [edi + 4] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_006663f0 }
	__asm { test al, al }
	__asm { jne L_00666ca3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00666c8e }
	__asm { push 0x62 }
	__asm { push 0xe3a3c0 }
	__asm { push 0xe3aa74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00666ca3 }
	__asm { L_00666c8e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3aab0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00666ca3: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00666d83 }
	__asm { movzx eax, word ptr [ebx + 0x12] }
	__asm { add ax, word ptr [edi] }
	__asm { mov ecx, esi }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ebx + 0x14] }
	__asm { add ax, word ptr [edi + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ebx + 0x16] }
	__asm { add ax, word ptr [edi + 4] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_006663f0 }
	__asm { test al, al }
	__asm { jne L_00666d15 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00666d00 }
	__asm { push 0x63 }
	__asm { push 0xe3a3c0 }
	__asm { push 0xe3ab40 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00666d15 }
	__asm { L_00666d00: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3ab80 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00666d15: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00666d83 }
	__asm { movzx eax, word ptr [edi] }
	__asm { add ax, word ptr [ebx + 0x18] }
	__asm { mov ecx, esi }
	__asm { mov word ptr [ebp - 0xa], ax }
	__asm { movzx eax, word ptr [ebx + 0x1a] }
	__asm { add ax, word ptr [edi + 2] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [ebx + 0x1c] }
	__asm { add ax, word ptr [edi + 4] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { call fn_006663f0 }
	__asm { test al, al }
	__asm { jne L_00666d83 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00666d6e }
	__asm { push 0x64 }
	__asm { push 0xe3a3c0 }
	__asm { push 0xe3ac10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00666d83 }
	__asm { L_00666d6e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3ac50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00666d83: }
	__asm { mov ax, word ptr [edi + 2] }
	__asm { mov si, word ptr [edi] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dx, word ptr [edi + 4] }
	__asm { sub ax, word ptr [ecx + 0x1a] }
	__asm { sub si, word ptr [ecx + 0x18] }
	__asm { cwde }
	__asm { mov edi, ecx }
	__asm { lea ecx, [eax + eax*8] }
	__asm { sub dx, word ptr [edi + 0x1c] }
	__asm { movsx eax, dx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, si }
	__asm { lea esi, [eax + ecx*4] }
	__asm { movsx eax, word ptr [ebx + 2] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, word ptr [ebx + 4] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, word ptr [ebx] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { add eax, dword ptr [edi] }
	__asm { mov al, byte ptr [eax + esi] }
	__asm { mov byte ptr [edx], al }
	__asm { movsx eax, word ptr [ebx + 8] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, word ptr [ebx + 0xa] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, word ptr [ebx + 6] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { add eax, dword ptr [edi] }
	__asm { mov al, byte ptr [eax + esi] }
	__asm { mov byte ptr [edx + 1], al }
	__asm { movsx eax, word ptr [ebx + 0xe] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, word ptr [ebx + 0x10] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, word ptr [ebx + 0xc] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { add eax, dword ptr [edi] }
	__asm { mov al, byte ptr [eax + esi] }
	__asm { mov byte ptr [edx + 2], al }
	__asm { movsx eax, word ptr [ebx + 0x14] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, word ptr [ebx + 0x16] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, word ptr [ebx + 0x12] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { add eax, dword ptr [edi] }
	__asm { mov al, byte ptr [eax + esi] }
	__asm { mov byte ptr [edx + 3], al }
	__asm { movsx eax, word ptr [ebx + 0x1a] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, word ptr [ebx + 0x1c] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { movsx eax, word ptr [ebx + 0x18] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { add eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov al, byte ptr [eax + esi] }
	__asm { pop esi }
	__asm { mov byte ptr [edx + 4], al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_011d9088[];
extern "C" char g_011d908a[];
extern "C" char g_011d908c[];
extern "C" void fn_006644c0();
extern "C" void fn_00666190();
extern "C" void fn_00666240();
extern "C" void fn_00666780();
// FUNCTION: ROBLOXSTUDIO 0x00668080
extern "C" __declspec(naked) void asm_00668080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x60 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ebx, dword ptr [esi + 0x24] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov dl, al }
	__asm { and dl, 0x38 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { cmp dl, 0x28 }
	__asm { jne L_006680a8 }
	__asm { mov edi, 0x11 }
	__asm { jmp L_006680c5 }
	__asm { L_006680a8: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, ebx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { shr edx, 1 }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { movzx edi, byte ptr [ecx + edx] }
	__asm { mov cl, bl }
	__asm { and cl, 1 }
	__asm { shl cl, 2 }
	__asm { shr edi, cl }
	__asm { and edi, 0xf }
	__asm { inc edi }
	__asm { L_006680c5: }
	__asm { movzx ebx, al }
	__asm { mov eax, ebx }
	__asm { shr eax, 3 }
	__asm { and eax, 7 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { movzx eax, word ptr [esi + 0x1e] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [g_011d9088] }
	__asm { and ecx, 0x1f }
	__asm { shr ebx, 6 }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov word ptr [ebp - 0x20], ax }
	__asm { movzx eax, word ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { and eax, 0xf }
	__asm { shl eax, 2 }
	__asm { add ax, word ptr [g_011d908a] }
	__asm { push esi }
	__asm { mov word ptr [ebp - 0x1e], ax }
	__asm { movzx eax, word ptr [esi + 0x22] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [g_011d908c] }
	__asm { and ecx, 0x1f }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov word ptr [ebp - 0x1c], ax }
	__asm { call fn_00666780 }
	__asm { movzx eax, al }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dh, byte ptr [ebp - 4] }
	__asm { lea eax, [eax + eax*8] }
	__asm { mov cl, bl }
	__asm { lea esi, [eax*4 + 0x11d8fb0] }
	__asm { mov dl, bl }
	__asm { mov al, byte ptr [esi] }
	__asm { add cl, al }
	__asm { and al, 4 }
	__asm { and cl, 3 }
	__asm { or cl, al }
	__asm { mov al, byte ptr [esi + 1] }
	__asm { add dl, al }
	__asm { and al, 4 }
	__asm { and dl, 3 }
	__asm { or dl, al }
	__asm { mov al, byte ptr [esi + 2] }
	__asm { add bl, al }
	__asm { and al, 4 }
	__asm { and bl, 3 }
	__asm { or bl, al }
	__asm { mov al, byte ptr [esi + 3] }
	__asm { add dh, al }
	__asm { and al, 4 }
	__asm { and dh, 3 }
	__asm { or dh, al }
	__asm { movzx eax, cl }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ecx*2 + 0x11d9150] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { movzx eax, word ptr [ecx*2 + 0x11d9154] }
	__asm { mov word ptr [ebp - 0x5c], ax }
	__asm { movzx eax, dl }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ecx*2 + 0x11d9150] }
	__asm { mov dword ptr [ebp - 0x5a], eax }
	__asm { movzx eax, word ptr [ecx*2 + 0x11d9154] }
	__asm { mov word ptr [ebp - 0x56], ax }
	__asm { movzx eax, bl }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ecx*2 + 0x11d9150] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { movzx eax, word ptr [ecx*2 + 0x11d9154] }
	__asm { mov word ptr [ebp - 0x50], ax }
	__asm { movzx eax, dh }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ecx*2 + 0x11d9150] }
	__asm { mov dword ptr [ebp - 0x4e], eax }
	__asm { movzx eax, word ptr [ecx*2 + 0x11d9154] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov word ptr [ebp - 0x4a], ax }
	__asm { mov eax, dword ptr [esi + ecx*4 + 4] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { mov eax, dword ptr [esi + ecx*4 + 0x14] }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp eax, 2 }
	__asm { je L_006682d6 }
	__asm { cmp eax, 3 }
	__asm { je L_006682c3 }
	__asm { cmp eax, 1 }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { mov dword ptr [ebp - 0xc], 5 }
	__asm { lea ebx, [eax*4 + 0x11d9298] }
	__asm { je L_00668226 }
	__asm { lea ebx, [eax*4 + 0x11d92e8] }
	__asm { L_00668226: }
	__asm { movzx ecx, word ptr [ebx + 4] }
	__asm { imul cx, word ptr [ebp + 8] }
	__asm { movzx eax, word ptr [ebx + 2] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { imul ax, si }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx] }
	__asm { imul ax, dx }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx + 8] }
	__asm { mov word ptr [ebp - 4], cx }
	__asm { imul ax, si }
	__asm { movzx ecx, word ptr [ebx + 0xa] }
	__asm { imul cx, word ptr [ebp + 8] }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx + 6] }
	__asm { imul ax, dx }
	__asm { add cx, ax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea esi, [edi*4 + 0x12dd3b4] }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { mov word ptr [ebp - 2], cx }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { push eax }
	__asm { call fn_00666190 }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00666190 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { jmp L_0066837f }
	__asm { L_006682c3: }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { mov dword ptr [ebp - 0xc], 2 }
	__asm { lea ebx, [eax*4 + 0x11d9388] }
	__asm { jmp L_006682e7 }
	__asm { L_006682d6: }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { lea ebx, [eax*4 + 0x11d9338] }
	__asm { L_006682e7: }
	__asm { movzx ecx, word ptr [ebx + 4] }
	__asm { imul cx, word ptr [ebp + 8] }
	__asm { movzx eax, word ptr [ebx + 2] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { imul ax, si }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx] }
	__asm { imul ax, dx }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx + 8] }
	__asm { mov word ptr [ebp - 4], cx }
	__asm { imul ax, si }
	__asm { movzx ecx, word ptr [ebx + 0xa] }
	__asm { imul cx, word ptr [ebp + 8] }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx + 6] }
	__asm { imul ax, dx }
	__asm { add cx, ax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea esi, [edi*4 + 0x12dd3b4] }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { mov word ptr [ebp - 2], cx }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { push eax }
	__asm { call fn_00666240 }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00666240 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { L_0066837f: }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebx] }
	__asm { call fn_006644c0 }
	__asm { add esp, 0x1c }
	__asm { add dword ptr [ebx], 0x60 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_011d9088[];
extern "C" char g_011d908a[];
extern "C" char g_011d908c[];
extern "C" void fn_006646e0();
extern "C" void fn_00666190();
extern "C" void fn_00666240();
extern "C" void fn_00666780();
// FUNCTION: ROBLOXSTUDIO 0x006683b0
extern "C" __declspec(naked) void asm_006683b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x60 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov ebx, dword ptr [ecx + 0x24] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov dl, al }
	__asm { and dl, 0x38 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dl, 0x28 }
	__asm { jne L_006683da }
	__asm { mov edi, 0x11 }
	__asm { jmp L_006683f7 }
	__asm { L_006683da: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov edx, ebx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { shr edx, 1 }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { movzx edi, byte ptr [ecx + edx] }
	__asm { mov cl, bl }
	__asm { and cl, 1 }
	__asm { shl cl, 2 }
	__asm { shr edi, cl }
	__asm { and edi, 0xf }
	__asm { inc edi }
	__asm { L_006683f7: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { movzx ebx, al }
	__asm { mov eax, ebx }
	__asm { shr eax, 3 }
	__asm { and eax, 7 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { movzx eax, word ptr [edx + 0x1e] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_011d9088] }
	__asm { and ecx, 0x1f }
	__asm { shr ebx, 6 }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov word ptr [ebp - 0x20], ax }
	__asm { movzx eax, word ptr [edx + 0x20] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { and eax, 0xf }
	__asm { shl eax, 2 }
	__asm { add ax, word ptr [g_011d908a] }
	__asm { push edx }
	__asm { mov word ptr [ebp - 0x1e], ax }
	__asm { movzx eax, word ptr [edx + 0x22] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [g_011d908c] }
	__asm { and ecx, 0x1f }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov ecx, esi }
	__asm { mov word ptr [ebp - 0x1c], ax }
	__asm { call fn_00666780 }
	__asm { movzx eax, al }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dh, byte ptr [ebp - 4] }
	__asm { lea eax, [eax + eax*8] }
	__asm { mov cl, bl }
	__asm { lea esi, [eax*4 + 0x11d8fb0] }
	__asm { mov dl, bl }
	__asm { mov al, byte ptr [esi] }
	__asm { add cl, al }
	__asm { and al, 4 }
	__asm { and cl, 3 }
	__asm { or cl, al }
	__asm { mov al, byte ptr [esi + 1] }
	__asm { add dl, al }
	__asm { and al, 4 }
	__asm { and dl, 3 }
	__asm { or dl, al }
	__asm { mov al, byte ptr [esi + 2] }
	__asm { add bl, al }
	__asm { and al, 4 }
	__asm { and bl, 3 }
	__asm { or bl, al }
	__asm { mov al, byte ptr [esi + 3] }
	__asm { add dh, al }
	__asm { and al, 4 }
	__asm { and dh, 3 }
	__asm { or dh, al }
	__asm { movzx eax, cl }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ecx*2 + 0x11d9150] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { movzx eax, word ptr [ecx*2 + 0x11d9154] }
	__asm { mov word ptr [ebp - 0x5c], ax }
	__asm { movzx eax, dl }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ecx*2 + 0x11d9150] }
	__asm { mov dword ptr [ebp - 0x5a], eax }
	__asm { movzx eax, word ptr [ecx*2 + 0x11d9154] }
	__asm { mov word ptr [ebp - 0x56], ax }
	__asm { movzx eax, bl }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ecx*2 + 0x11d9150] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { movzx eax, word ptr [ecx*2 + 0x11d9154] }
	__asm { mov word ptr [ebp - 0x50], ax }
	__asm { movzx eax, dh }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ecx*2 + 0x11d9150] }
	__asm { mov dword ptr [ebp - 0x4e], eax }
	__asm { movzx eax, word ptr [ecx*2 + 0x11d9154] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov word ptr [ebp - 0x4a], ax }
	__asm { mov eax, dword ptr [esi + ecx*4 + 4] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { mov eax, dword ptr [esi + ecx*4 + 0x14] }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { cmp eax, 2 }
	__asm { je L_006685f4 }
	__asm { cmp eax, 3 }
	__asm { je L_006685e1 }
	__asm { cmp eax, 1 }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { mov dword ptr [ebp - 8], 5 }
	__asm { lea ebx, [eax*4 + 0x11d9298] }
	__asm { je L_0066855a }
	__asm { lea ebx, [eax*4 + 0x11d92e8] }
	__asm { L_0066855a: }
	__asm { movzx ecx, word ptr [ebx + 4] }
	__asm { imul cx, word ptr [ebp + 8] }
	__asm { movzx eax, word ptr [ebx + 2] }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { imul ax, dx }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx] }
	__asm { imul ax, si }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx + 8] }
	__asm { mov word ptr [ebp - 4], cx }
	__asm { imul ax, dx }
	__asm { movzx ecx, word ptr [ebx + 0xa] }
	__asm { imul cx, word ptr [ebp + 8] }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [ebx + 6] }
	__asm { imul ax, si }
	__asm { add cx, ax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea esi, [edi*4 + 0x12dd3b4] }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { mov word ptr [ebp - 2], cx }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { push eax }
	__asm { call fn_00666190 }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00666190 }
	__asm { jmp L_00668676 }
	__asm { L_006685e1: }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { mov dword ptr [ebp - 8], 2 }
	__asm { lea edx, [eax*4 + 0x11d9388] }
	__asm { jmp L_00668605 }
	__asm { L_006685f4: }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { lea edx, [eax*4 + 0x11d9338] }
	__asm { L_00668605: }
	__asm { movzx ecx, word ptr [edx + 4] }
	__asm { imul cx, word ptr [ebp + 8] }
	__asm { movzx eax, word ptr [edx + 2] }
	__asm { mov ebx, dword ptr [ebp - 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { imul ax, bx }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [edx] }
	__asm { imul ax, si }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [edx + 8] }
	__asm { mov word ptr [ebp - 0x10], cx }
	__asm { imul ax, bx }
	__asm { movzx ecx, word ptr [edx + 0xa] }
	__asm { imul cx, word ptr [ebp + 8] }
	__asm { add cx, ax }
	__asm { movzx eax, word ptr [edx + 6] }
	__asm { imul ax, si }
	__asm { add cx, ax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [edi*4 + 0x12dd3b4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov word ptr [ebp - 0xe], cx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { push eax }
	__asm { call fn_00666240 }
	__asm { L_00668676: }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebx] }
	__asm { call fn_006646e0 }
	__asm { add esp, 0x1c }
	__asm { sub dword ptr [ebx], -0x80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f8550[];
extern "C" void fn_00422750();
// FUNCTION: ROBLOXSTUDIO 0x006686b0
extern "C" __declspec(naked) void asm_006686b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov dl, byte ptr [eax] }
	__asm { mov ah, dl }
	__asm { shr ah, 3 }
	__asm { and ah, 7 }
	__asm { cmp ah, 5 }
	__asm { je L_0066882d }
	__asm { test ah, ah }
	__asm { je L_0066882d }
	__asm { mov al, byte ptr [g_012f8550] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [ebx] }
	__asm { cmp cl, al }
	__asm { je L_006686f2 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { jne L_006686f2 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006686f2: }
	__asm { mov cl, byte ptr [ebx + 1] }
	__asm { push edi }
	__asm { movzx edi, dl }
	__asm { shr edi, 6 }
	__asm { cmp ah, 1 }
	__asm { jne L_00668719 }
	__asm { cmp cl, al }
	__asm { je L_00668711 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { je L_00668822 }
	__asm { L_00668711: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00668719: }
	__asm { cmp cl, al }
	__asm { je L_0066872b }
	__asm { mov dl, cl }
	__asm { and dl, 0x38 }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { cmp dl, 0x28 }
	__asm { je L_0066872f }
	__asm { L_0066872b: }
	__asm { mov byte ptr [ebp + 0xb], 0 }
	__asm { L_0066872f: }
	__asm { push esi }
	__asm { cmp cl, al }
	__asm { je L_00668759 }
	__asm { movzx edx, cl }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { lea esi, [edx + edx*2] }
	__asm { mov edx, dword ptr [edi*4 + 0xe3ad88] }
	__asm { mov edx, dword ptr [edx*4 + 0xe3ad70] }
	__asm { lea edx, [edx + esi*2] }
	__asm { cmp dword ptr [edx*4 + 0x12f6d50], 5 }
	__asm { jne L_0066875d }
	__asm { L_00668759: }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { L_0066875d: }
	__asm { mov edx, dword ptr [edi*4 + 0xe3ad98] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dl, byte ptr [ebx + 2] }
	__asm { cmp dl, al }
	__asm { je L_0066877c }
	__asm { mov bl, dl }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_0066877c }
	__asm { mov bh, 1 }
	__asm { jmp L_0066877e }
	__asm { L_0066877c: }
	__asm { xor bh, bh }
	__asm { L_0066877e: }
	__asm { cmp dl, al }
	__asm { je L_006687a3 }
	__asm { movzx esi, dl }
	__asm { mov byte ptr [ebp - 2], 1 }
	__asm { lea edi, [esi + esi*2] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [esi*4 + 0xe3ad70] }
	__asm { lea esi, [esi + edi*2] }
	__asm { cmp dword ptr [esi*4 + 0x12f6d50], 5 }
	__asm { jne L_006687a7 }
	__asm { L_006687a3: }
	__asm { mov byte ptr [ebp - 2], 0 }
	__asm { L_006687a7: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ch, byte ptr [esi + 3] }
	__asm { cmp ch, al }
	__asm { je L_006687bf }
	__asm { mov bl, ch }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_006687bf }
	__asm { mov bl, 1 }
	__asm { jmp L_006687c1 }
	__asm { L_006687bf: }
	__asm { xor bl, bl }
	__asm { L_006687c1: }
	__asm { cmp ah, 3 }
	__asm { jne L_006687e2 }
	__asm { cmp cl, al }
	__asm { je L_006687e2 }
	__asm { cmp dl, al }
	__asm { je L_006687e2 }
	__asm { cmp ch, al }
	__asm { je L_006687e2 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00422750 }
	__asm { test al, al }
	__asm { je L_006687e2 }
	__asm { mov dl, 1 }
	__asm { jmp L_006687e4 }
	__asm { L_006687e2: }
	__asm { xor dl, dl }
	__asm { L_006687e4: }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_006687f4 }
	__asm { test bh, bh }
	__asm { je L_006687f4 }
	__asm { mov cl, 1 }
	__asm { jmp L_006687f6 }
	__asm { L_006687f4: }
	__asm { xor cl, cl }
	__asm { L_006687f6: }
	__asm { test al, al }
	__asm { jne L_006687ff }
	__asm { cmp byte ptr [ebp - 1], al }
	__asm { je L_00668808 }
	__asm { L_006687ff: }
	__asm { test bh, bh }
	__asm { jne L_0066880c }
	__asm { cmp byte ptr [ebp - 2], bh }
	__asm { jne L_0066880c }
	__asm { L_00668808: }
	__asm { xor al, al }
	__asm { jmp L_0066880e }
	__asm { L_0066880c: }
	__asm { mov al, 1 }
	__asm { L_0066880e: }
	__asm { test dl, dl }
	__asm { jne L_00668822 }
	__asm { test bl, bl }
	__asm { je L_0066881a }
	__asm { test al, al }
	__asm { jne L_00668822 }
	__asm { L_0066881a: }
	__asm { test cl, cl }
	__asm { je L_00668711 }
	__asm { L_00668822: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0066882d: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00668840();
extern "C" void fn_00668bb0();
extern "C" void fn_00668c70();
extern "C" void fn_0066d040();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00668930
extern "C" __declspec(naked) void asm_00668930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11aa3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { cmp dword ptr [ebp + 0x10], esi }
	__asm { je L_0066895c }
	__asm { xor bl, bl }
	__asm { jmp L_006689cb }
	__asm { L_0066895c: }
	__asm { push 0x78 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00668988 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_0066d040 }
	__asm { mov dword ptr [esi], 0xe3adcc }
	__asm { jmp L_0066898a }
	__asm { L_00668988: }
	__asm { xor esi, esi }
	__asm { L_0066898a: }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00668840 }
	__asm { mov eax, dword ptr [esi + 0x74] }
	__asm { mov ecx, dword ptr [eax + 0xba0] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub eax, 0 }
	__asm { je L_006689b5 }
	__asm { dec eax }
	__asm { jne L_006689bd }
	__asm { mov ecx, esi }
	__asm { call fn_00668bb0 }
	__asm { jmp L_006689bd }
	__asm { L_006689b5: }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00668c70 }
	__asm { L_006689bd: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { mov bl, al }
	__asm { L_006689cb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006689de }
	__asm { mov edx, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx] }
	__asm { L_006689de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00668840 }
	__asm { mov eax, dword ptr [esi + 0x74] }
	__asm { mov ecx, dword ptr [eax + 0xba0] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub eax, 0 }
	__asm { je L_00668a27 }
	__asm { dec eax }
	__asm { jne L_00668a2f }
	__asm { mov ecx, esi }
	__asm { call fn_00668bb0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00668a27: }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00668c70 }
	__asm { L_00668a2f: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e105c0[];
extern "C" char g_00e105cc[];
extern "C" char g_00e10608[];
extern "C" void fn_0042e3d0();
extern "C" void fn_0066c2f0();
extern "C" void fn_006b98c0();
extern "C" void fn_007cb0e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0066a410
extern "C" __declspec(naked) void asm_0066a410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11c5a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0xd], 1 }
	__asm { cmp dword ptr [esi + 0x10], ebx }
	__asm { jbe L_0066a4bc }
	__asm { push edi }
	__asm { L_0066a461: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0066a46b }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0066a46d }
	__asm { L_0066a46b: }
	__asm { mov eax, esi }
	__asm { L_0066a46d: }
	__asm { mov al, byte ptr [eax + ebx] }
	__asm { cmp al, 0x20 }
	__asm { jne L_0066a47a }
	__asm { mov byte ptr [ebp - 0xd], 1 }
	__asm { jmp L_0066a4b2 }
	__asm { L_0066a47a: }
	__asm { movsx edi, al }
	__asm { push edi }
	__asm { call dword ptr [g_00e105c0] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0066a4b2 }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { push edi }
	__asm { je L_0066a49a }
	__asm { call dword ptr [g_00e105cc] }
	__asm { jmp L_0066a4a0 }
	__asm { L_0066a49a: }
	__asm { call dword ptr [g_00e10608] }
	__asm { L_0066a4a0: }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push eax }
	__asm { push 1 }
	__asm { call fn_0042e3d0 }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { L_0066a4b2: }
	__asm { inc ebx }
	__asm { cmp ebx, dword ptr [esi + 0x10] }
	__asm { jb L_0066a461 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { L_0066a4bc: }
	__asm { lea esi, [eax + 0x1c] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cb0e0 }
	__asm { inc dword ptr [eax + 0x18] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cb0e0 }
	__asm { push dword ptr [eax + 0x18] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push 0xe3ae8c }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0066c2f0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { jb L_0066a50f }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066a50f: }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [ebp - 0x34], 0xf }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov byte ptr [ebp - 0x48], 0 }
	__asm { jb L_0066a532 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066a532: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0066c980();
extern "C" void fn_0066ce60();
extern "C" void fn_0066dbb0();
extern "C" void fn_0066ddb0();
extern "C" void fn_0069d580();
extern "C" void fn_009b72b0();
extern "C" void fn_00a091a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0066c680
extern "C" __declspec(naked) void asm_0066c680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd11e99 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov ecx, edi }
	__asm { call fn_0066ddb0 }
	__asm { movzx edx, byte ptr [esi] }
	__asm { lea ecx, [esi + 1] }
	__asm { mov ebx, eax }
	__asm { add ecx, edx }
	__asm { je L_0066c6b9 }
	__asm { inc ecx }
	__asm { jmp L_0066c6bb }
	__asm { L_0066c6b9: }
	__asm { xor ecx, ecx }
	__asm { L_0066c6bb: }
	__asm { push ecx }
	__asm { push edi }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0066c980 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0066c6ec }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0066c6ec: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_0066c6f6 }
	__asm { inc eax }
	__asm { jmp L_0066c6f8 }
	__asm { L_0066c6f6: }
	__asm { xor eax, eax }
	__asm { L_0066c6f8: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0066dbb0 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_0066c732 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [eax] }
	__asm { call fn_0066ce60 }
	__asm { L_0066c732: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x13], 1 }
	__asm { call fn_009b72b0 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a091a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov byte ptr [edi + 4], 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0066c78a }
	__asm { cmp byte ptr [ebp - 0x13], 0 }
	__asm { je L_0066c781 }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_0069d580 }
	__asm { add esp, 8 }
	__asm { L_0066c781: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066c78a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1027c[];
extern "C" char g_00e102c8[];
extern "C" char g_00e102d4[];
extern "C" char g_00e102d8[];
extern "C" char g_00e10318[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10328[];
extern "C" void fn_00412c00();
extern "C" void fn_00424610();
extern "C" void fn_00426140();
extern "C" void fn_0066ca50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0066c7a0
extern "C" __declspec(naked) void asm_0066c7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd11eed }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xd8 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { mov dword ptr [ebp - 0xe0], 0x1004fbc }
	__asm { mov dword ptr [ebp - 0xd0], 0x1004fb4 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xc8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xe0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e10328] }
	__asm { mov eax, dword ptr [ebp - 0xe0] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xe0], 0xe18340 }
	__asm { mov eax, dword ptr [ebp - 0xe0] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ebp + ecx - 0xe4], eax }
	__asm { lea ecx, [ebp - 0xc8] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xc8], 0xe1827c }
	__asm { mov dword ptr [ebp - 0x90], 0 }
	__asm { mov dword ptr [ebp - 0x8c], 0 }
	__asm { mov eax, dword ptr [ebp - 0xd0] }
	__asm { lea ecx, [ebp - 0xd0] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call dword ptr [g_00e1027c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { call fn_0066ca50 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xe0] }
	__asm { call fn_00424610 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_0066c8df }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0066c8c6 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066c8c6: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_0066c8df: }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_0066c8f2 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066c8f2: }
	__asm { mov eax, dword ptr [ebp - 0xe0] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp + eax - 0xe0], 0xe18340 }
	__asm { mov eax, dword ptr [ebp - 0xe0] }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ebp + ecx - 0xe4], eax }
	__asm { lea ecx, [ebp - 0xc8] }
	__asm { mov dword ptr [ebp - 0xc8], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebp - 0xc8] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { call dword ptr [g_00e102d8] }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0066ce60
extern "C" __declspec(naked) void asm_0066ce60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { test eax, eax }
	__asm { je L_0066cea7 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0066cea7: }
	__asm { fld dword ptr [edi + 0x24] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0x24] }
	__asm { fld dword ptr [edi + 0x28] }
	__asm { pop edi }
	__asm { fstp dword ptr [esi + 0x28] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0066cec0
extern "C" __declspec(naked) void asm_0066cec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd42238 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi + 0x20], edi }
	__asm { test edi, edi }
	__asm { je L_0066cf28 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov edi, dword ptr [ebp + 0x1c] }
	__asm { L_0066cf28: }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [esi + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { movss dword ptr [esi + 0x28], xmm0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0066cf6d }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0066cf6d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0066cf6d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066cf6d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0066d340
extern "C" __declspec(naked) void asm_0066d340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edi, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0066d396 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0066d395 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0066d395 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066d395: }
	__asm { pop ebx }
	__asm { L_0066d396: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0066d3a6 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066d3a6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0066d590
extern "C" __declspec(naked) void asm_0066d590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea edx, [ecx + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { lea esi, [ebx + 4] }
	__asm { mov ecx, 9 }
	__asm { mov edi, edx }
	__asm { rep movsd }
	__asm { fld dword ptr [ebx + 0x28] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [ebx + 0x2c] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [ebx + 0x30] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { fld dword ptr [ebx + 0x34] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { fstp dword ptr [ecx + 0x34] }
	__asm { fld dword ptr [ebx + 0x38] }
	__asm { fstp dword ptr [ecx + 0x38] }
	__asm { fld dword ptr [ebx + 0x3c] }
	__asm { fstp dword ptr [ecx + 0x3c] }
	__asm { fld dword ptr [ebx + 0x40] }
	__asm { fstp dword ptr [ecx + 0x40] }
	__asm { mov al, byte ptr [ebx + 0x44] }
	__asm { mov byte ptr [ecx + 0x44], al }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0066db20
extern "C" __declspec(naked) void asm_0066db20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0066db72 }
	__asm { push 0x24 }
	__asm { mov word ptr [ebx + 8], si }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0066db49 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0066db49: }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, 9 }
	__asm { lea esi, [ebp - 0x24] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 8], 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0066db72: }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_0066db9f }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_0066db89 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0066db89: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov byte ptr [ebx + 9], 0 }
	__asm { L_0066db9f: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_0069d580();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0066dbb0
extern "C" __declspec(naked) void asm_0066dbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { test eax, eax }
	__asm { jne L_0066dc02 }
	__asm { push 0x34 }
	__asm { mov word ptr [ebx + 8], ax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0066dbd8 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0066dbd8: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, 0xd }
	__asm { lea esi, [ebp - 0x34] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 8], 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0066dc02: }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_0066dc17 }
	__asm { push eax }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0069d580 }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebx + 9], 0 }
	__asm { L_0066dc17: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0066deb0();
// FUNCTION: ROBLOXSTUDIO 0x0066ddb0
extern "C" __declspec(naked) void asm_0066ddb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xorps xmm1, xmm1 }
	__asm { movzx esi, byte ptr [edi + 0x18] }
	__asm { movzx edx, byte ptr [edi + 0x19] }
	__asm { movzx ecx, byte ptr [edi + 0x1a] }
	__asm { sub esi, 0x61c88647 }
	__asm { mov eax, esi }
	__asm { shl eax, 6 }
	__asm { add edx, eax }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add eax, 0x9e3779b9 }
	__asm { add eax, edx }
	__asm { xor esi, eax }
	__asm { mov eax, esi }
	__asm { shl eax, 6 }
	__asm { add ecx, eax }
	__asm { mov edx, dword ptr [edi + 0x1c] }
	__asm { add ecx, 0x9e3779b9 }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add eax, ecx }
	__asm { movzx ecx, byte ptr [edi + 0x1b] }
	__asm { xor esi, eax }
	__asm { movss xmm0, dword ptr [edi + 0x24] }
	__asm { mov eax, esi }
	__asm { shl eax, 6 }
	__asm { add ecx, eax }
	__asm { add ecx, 0x9e3779b9 }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add eax, ecx }
	__asm { xor esi, eax }
	__asm { mov ecx, esi }
	__asm { shl ecx, 6 }
	__asm { add ecx, dword ptr [edi + 0x1c] }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { shr edx, 3 }
	__asm { add eax, 0x9e3779b9 }
	__asm { add ecx, edx }
	__asm { add eax, ecx }
	__asm { xor esi, eax }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0066de42 }
	__asm { xor eax, eax }
	__asm { jmp L_0066de58 }
	__asm { L_0066de42: }
	__asm { lea eax, [ebp - 4] }
	__asm { push 4 }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_0066deb0 }
	__asm { xorps xmm1, xmm1 }
	__asm { add esp, 8 }
	__asm { L_0066de58: }
	__asm { movss xmm0, dword ptr [edi + 0x28] }
	__asm { mov edx, esi }
	__asm { mov ecx, esi }
	__asm { shl edx, 6 }
	__asm { shr ecx, 2 }
	__asm { add eax, edx }
	__asm { add ecx, 0x9e3779b9 }
	__asm { add eax, ecx }
	__asm { xor esi, eax }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0066de80 }
	__asm { xor eax, eax }
	__asm { jmp L_0066de93 }
	__asm { L_0066de80: }
	__asm { lea eax, [ebp - 4] }
	__asm { push 4 }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_0066deb0 }
	__asm { add esp, 8 }
	__asm { L_0066de93: }
	__asm { mov edx, esi }
	__asm { mov ecx, esi }
	__asm { shl edx, 6 }
	__asm { shr ecx, 2 }
	__asm { add eax, edx }
	__asm { add ecx, 0x9e3779b9 }
	__asm { add eax, ecx }
	__asm { pop edi }
	__asm { xor eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0066cc70();
extern "C" void fn_0066cdb0();
extern "C" void fn_0066d990();
// FUNCTION: ROBLOXSTUDIO 0x0066df90
extern "C" __declspec(naked) void asm_0066df90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12068 }
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
	__asm { jae L_0066e049 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, ebx }
	__asm { ja L_0066e049 }
	__asm { sub ebx, eax }
	__asm { mov eax, 0x4ec4ec4f }
	__asm { imul ebx }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0066dfe7 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0066d990 }
	__asm { L_0066dfe7: }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { imul edi, edi, 0x34 }
	__asm { add edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0066e0ae }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_0066cdb0 }
	__asm { lea eax, [edi + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0066cc70 }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { jmp L_0066e0ae }
	__asm { L_0066e049: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0066e057 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0066d990 }
	__asm { L_0066e057: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test edi, edi }
	__asm { je L_0066e0ae }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0066cdb0 }
	__asm { lea eax, [ebx + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_0066cc70 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x30] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { L_0066e0ae: }
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

extern "C" void fn_0066e620();
extern "C" void fn_00673f40();
extern "C" void fn_006813a0();
// FUNCTION: ROBLOXSTUDIO 0x0066e250
extern "C" __declspec(naked) void asm_0066e250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd120ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebx], 0xe3b08c }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call fn_0066e620 }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax + 0x198] }
	__asm { call fn_006813a0 }
	__asm { mov edi, dword ptr [ebx + 0x104] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test edi, edi }
	__asm { je L_0066e2c7 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066e2c7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0066e2c7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066e2c7: }
	__asm { mov edi, dword ptr [ebx + 0xfc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_0066e2f9 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066e2f9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0066e2f9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066e2f9: }
	__asm { mov edi, dword ptr [ebx + 0xa8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0066e32b }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066e32b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0066e32b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066e32b: }
	__asm { mov edi, dword ptr [ebx + 0xa0] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0066e35c }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066e35c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0066e35c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066e35c: }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00673f40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_00657110();
extern "C" void fn_00670860();
extern "C" void fn_00670940();
extern "C" void fn_00681240();
extern "C" void fn_006812d0();
extern "C" void fn_006b9740();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x0066e380
extern "C" __declspec(naked) void asm_0066e380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd12108 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { je L_0066e436 }
	__asm { cmp dword ptr [esi + 0x9c], 0 }
	__asm { jne L_0066e3bf }
	__asm { cmp dword ptr [esi + 0xa4], 0 }
	__asm { je L_0066e3f2 }
	__asm { L_0066e3bf: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0066e3dd }
	__asm { push 0x7b }
	__asm { push 0xe3b0f0 }
	__asm { push 0xe3b13c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0066e3f2 }
	__asm { L_0066e3dd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3b160 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0066e3f2: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0066e436 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_0066e436 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0066e421 }
	__asm { push 0x7c }
	__asm { push 0xe3b0f0 }
	__asm { push 0x1018974 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0066e436 }
	__asm { L_0066e421: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3b1e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0066e436: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, 1 }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { test ebx, ebx }
	__asm { je L_0066e450 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0066e450: }
	__asm { mov dword ptr [esi + 0x9c], edi }
	__asm { mov edi, dword ptr [esi + 0xa0] }
	__asm { mov dword ptr [esi + 0xa0], ebx }
	__asm { or ebx, 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0066e492 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066e492 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0066e48d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066e48d: }
	__asm { mov edx, 1 }
	__asm { L_0066e492: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_0066e4a6 }
	__asm { lea eax, [ecx + 4] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_0066e4a6: }
	__asm { mov dword ptr [esi + 0xa4], edi }
	__asm { mov edi, dword ptr [esi + 0xa8] }
	__asm { mov dword ptr [esi + 0xa8], ecx }
	__asm { test edi, edi }
	__asm { je L_0066e4df }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066e4df }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0066e4df }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066e4df: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { add ecx, 0x58 }
	__asm { mov dword ptr [ebp - 0x1c], 0x66e8f0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00670940 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00657110 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0066e52f }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0066e52f: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_0066e5a6 }
	__asm { mov dword ptr [ebp - 0x1c], 0x66ea70 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_007b49a0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x18] }
	__asm { call fn_00670860 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00657110 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0066e588 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0066e588: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { cmp dword ptr [eax + 0x7c], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { push esi }
	__asm { jne L_0066e5a1 }
	__asm { call fn_006812d0 }
	__asm { jmp L_0066e5a6 }
	__asm { L_0066e5a1: }
	__asm { call fn_00681240 }
	__asm { L_0066e5a6: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007700e0();
// FUNCTION: ROBLOXSTUDIO 0x0066e620
extern "C" __declspec(naked) void asm_0066e620()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_007700e0 }
	__asm { mov dword ptr [edi + 0x9c], 0 }
	__asm { mov esi, dword ptr [edi + 0xa0] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [edi + 0xa0], 0 }
	__asm { test esi, esi }
	__asm { je L_0066e66f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066e66f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0066e66f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066e66f: }
	__asm { mov dword ptr [edi + 0xa4], 0 }
	__asm { mov esi, dword ptr [edi + 0xa8] }
	__asm { mov dword ptr [edi + 0xa8], 0 }
	__asm { test esi, esi }
	__asm { je L_0066e6b3 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066e6b3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0066e6b3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_0066e6b3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00619900();
extern "C" void fn_00672360();
extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
extern "C" void fn_006d9d40();
extern "C" void fn_006da0e0();
extern "C" void fn_007cd560();
extern "C" void fn_0088fc80();
extern "C" void fn_009f7170();
// FUNCTION: ROBLOXSTUDIO 0x0066e6c0
extern "C" __declspec(naked) void asm_0066e6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x94 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 0x9c] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0066e6ea }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { call fn_0088fc80 }
	__asm { jmp L_0066e6f5 }
	__asm { L_0066e6ea: }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { call fn_006da0e0 }
	__asm { L_0066e6f5: }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov edi, dword ptr [ebx + 0xa4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test edi, edi }
	__asm { je L_0066e778 }
	__asm { add edi, 0x1c }
	__asm { je L_0066e778 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00672360 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0066e778 }
	__asm { add edi, -0x1c }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { je L_0066e778 }
	__asm { call fn_006d6760 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, 9 }
	__asm { lea edi, [ebp - 0x34] }
	__asm { rep movsd }
	__asm { movss xmm0, dword ptr [eax + 0x8c] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x90] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x94] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { L_0066e778: }
	__asm { cmp byte ptr [ebx + 0xf4], 0 }
	__asm { jne L_0066e798 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { lea ecx, [ebx + 0xac] }
	__asm { push eax }
	__asm { call fn_006d9d40 }
	__asm { test al, al }
	__asm { jne L_0066e830 }
	__asm { L_0066e798: }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { lea edx, [ebx + 0xac] }
	__asm { mov ecx, 9 }
	__asm { lea esi, [ebp - 0x34] }
	__asm { mov edi, edx }
	__asm { rep movsd }
	__asm { movss dword ptr [edx + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [edx + 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [edx + 0x2c], xmm0 }
	__asm { mov eax, dword ptr [ebx + 0xf8] }
	__asm { test eax, eax }
	__asm { je L_0066e7f0 }
	__asm { mov ecx, 9 }
	__asm { mov esi, edx }
	__asm { lea edi, [eax + 0x28] }
	__asm { rep movsd }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [eax + 0x4c] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [eax + 0x50] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [eax + 0x54] }
	__asm { L_0066e7f0: }
	__asm { mov eax, dword ptr [ebx + 0x100] }
	__asm { test eax, eax }
	__asm { je L_0066e818 }
	__asm { mov ecx, 9 }
	__asm { mov esi, edx }
	__asm { lea edi, [eax + 0x28] }
	__asm { rep movsd }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [eax + 0x4c] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [eax + 0x50] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [eax + 0x54] }
	__asm { L_0066e818: }
	__asm { push edx }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xdc] }
	__asm { call fn_009f7170 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00619900 }
	__asm { L_0066e830: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004199f0();
extern "C" void fn_00421eb0();
extern "C" void fn_0066e380();
extern "C" void fn_0076fb00();
extern "C" void fn_007701e0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0066e930
extern "C" __declspec(naked) void asm_0066e930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12122 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0xa8] }
	__asm { mov esi, dword ptr [ebx + 0xa4] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { test edi, edi }
	__asm { je L_0066e972 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0066e972: }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0076fb00 }
	__asm { add esp, 4 }
	__asm { mov ecx, ebx }
	__asm { test al, al }
	__asm { jne L_0066e9cf }
	__asm { call fn_007701e0 }
	__asm { L_0066e98d: }
	__asm { or ebx, 0xffffffff }
	__asm { L_0066e990: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0066e9be }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066e9be }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0066e9be }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0066e9be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0066e9cf: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_0066e9fc }
	__asm { add eax, 0x1c }
	__asm { je L_0066e9fc }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0066e9fc }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { jmp L_0066e9fe }
	__asm { L_0066e9fc: }
	__asm { xor eax, eax }
	__asm { L_0066e9fe: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0066e380 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0066e98d }
	__asm { or ebx, 0xffffffff }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0066e990 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0066e990 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_0066e990 }
}

extern "C" void fn_00403160();
extern "C" void fn_00670670();
// FUNCTION: ROBLOXSTUDIO 0x006705d0
extern "C" __declspec(naked) void asm_006705d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00670670 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00670647 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00670646 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00670646 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00670646: }
	__asm { pop ebx }
	__asm { L_00670647: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)
