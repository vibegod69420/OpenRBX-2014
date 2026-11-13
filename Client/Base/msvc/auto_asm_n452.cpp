// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006beaa0();
// FUNCTION: ROBLOXSTUDIO 0x006c0240
extern "C" __declspec(naked) void asm_006c0240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_006c0281 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_006c0281 }
	__asm { sub edi, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { sar edx, 1 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_006c0277 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006beaa0 }
	__asm { L_006c0277: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { lea edi, [eax + ecx*4] }
	__asm { jmp L_006c028f }
	__asm { L_006c0281: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_006c028f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006beaa0 }
	__asm { L_006c028f: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_006c02be }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006c02b0 }
	__asm { mov ecx, 1 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006c02b0: }
	__asm { movzx eax, byte ptr [edi + 8] }
	__asm { mov byte ptr [edx + 8], al }
	__asm { movzx eax, byte ptr [edi + 9] }
	__asm { mov byte ptr [edx + 9], al }
	__asm { L_006c02be: }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012de652[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012de7c8[];
extern "C" void fn_0057dce0();
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_006bca40();
extern "C" void fn_006bdab0();
extern "C" void fn_006bf0e0();
extern "C" void fn_006bf460();
extern "C" void fn_006bf4b0();
extern "C" void fn_00afaed0();
// FUNCTION: ROBLOXSTUDIO 0x006c02d0
extern "C" __declspec(naked) void asm_006c02d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd169c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea edi, [esi + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_006c0363 }
	__asm { lea ecx, [esi + 0x24] }
	__asm { push ebx }
	__asm { mov esi, dword ptr [ecx] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006bf4b0 }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_006c0360 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c034b }
	__asm { push 0x16d }
	__asm { push 0xe43cec }
	__asm { push 0xe44108 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c0360 }
	__asm { L_006c034b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe44130 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c0360: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { L_006c0363: }
	__asm { mov al, byte ptr [g_012de652] }
	__asm { test al, al }
	__asm { je L_006c037f }
	__asm { push dword ptr [ebx] }
	__asm { movzx eax, al }
	__asm { push 0xe441a0 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006c037f: }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x24] }
	__asm { call fn_00afaed0 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [esi + 0x24] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006bf0e0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { lea ecx, [eax + 0x10] }
	__asm { test edx, edx }
	__asm { je L_006c0458 }
	__asm { cmp edx, ecx }
	__asm { je L_006c0458 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_006c0409 }
	__asm { cmp byte ptr [g_012de7c8], 0 }
	__asm { je L_006c0409 }
	__asm { cmp byte ptr [eax + 0x8c], 0 }
	__asm { je L_006c0409 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c03f8 }
	__asm { push 0x174 }
	__asm { push 0xe43cec }
	__asm { push 0xe43e70 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c0409 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006c03f8: }
	__asm { movzx eax, cl }
	__asm { push 0xe441c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c0409: }
	__asm { mov al, byte ptr [g_012de652] }
	__asm { test al, al }
	__asm { je L_006c0425 }
	__asm { push dword ptr [ebx] }
	__asm { movzx eax, al }
	__asm { push 0xe44260 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006c0425: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { test ecx, ecx }
	__asm { je L_006c0430 }
	__asm { add ecx, 0x10 }
	__asm { jmp L_006c0432 }
	__asm { L_006c0430: }
	__asm { xor ecx, ecx }
	__asm { L_006c0432: }
	__asm { mov edx, dword ptr [ecx] }
	__asm { test edx, edx }
	__asm { je L_006c0440 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_006c0440: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { dec dword ptr [eax + 0x2c] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { jmp L_006c05aa }
	__asm { L_006c0458: }
	__asm { mov edx, dword ptr [eax + 0x18] }
	__asm { lea ecx, [eax + 0x18] }
	__asm { test edx, edx }
	__asm { je L_006c0511 }
	__asm { cmp edx, ecx }
	__asm { je L_006c0511 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_006c04c2 }
	__asm { cmp byte ptr [g_012de7c8], 0 }
	__asm { je L_006c04c2 }
	__asm { cmp byte ptr [eax + 0x8c], 0 }
	__asm { je L_006c04c2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c04b1 }
	__asm { push 0x17d }
	__asm { push 0xe43cec }
	__asm { push 0xe43e70 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c04c2 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006c04b1: }
	__asm { movzx eax, cl }
	__asm { push 0xe44290 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c04c2: }
	__asm { mov al, byte ptr [g_012de652] }
	__asm { test al, al }
	__asm { je L_006c04de }
	__asm { push dword ptr [ebx] }
	__asm { movzx eax, al }
	__asm { push 0xe44328 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006c04de: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { test ecx, ecx }
	__asm { je L_006c04e9 }
	__asm { add ecx, 0x18 }
	__asm { jmp L_006c04eb }
	__asm { L_006c04e9: }
	__asm { xor ecx, ecx }
	__asm { L_006c04eb: }
	__asm { mov edx, dword ptr [ecx] }
	__asm { test edx, edx }
	__asm { je L_006c04f9 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_006c04f9: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { dec dword ptr [eax + 0x44] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { jmp L_006c05aa }
	__asm { L_006c0511: }
	__asm { cmp byte ptr [g_012de7c8], 0 }
	__asm { je L_006c05b8 }
	__asm { cmp byte ptr [eax + 0x8c], 0 }
	__asm { je L_006c05b8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006c0585 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push ebx }
	__asm { mov esi, dword ptr [eax + 0x3c] }
	__asm { push esi }
	__asm { push dword ptr [eax + 0x38] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006bdab0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_006c0585 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c0570 }
	__asm { push 0x188 }
	__asm { push 0xe43cec }
	__asm { push 0xe44358 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c0585 }
	__asm { L_006c0570: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe443c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c0585: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push ebx }
	__asm { push dword ptr [eax + 0x3c] }
	__asm { lea esi, [eax + 0x38] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [esi] }
	__asm { push eax }
	__asm { call fn_006bdab0 }
	__asm { add esp, 0x10 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006bf460 }
	__asm { L_006c05aa: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_006c0623 }
	__asm { call fn_006bca40 }
	__asm { jmp L_006c0623 }
	__asm { L_006c05b8: }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { je L_006c061a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_006c0609 }
	__asm { cmp dword ptr [eax + 0xd4], 0 }
	__asm { je L_006c0609 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c05f8 }
	__asm { push 0x192 }
	__asm { push 0xe43cec }
	__asm { push 0xe44478 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c0609 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006c05f8: }
	__asm { movzx eax, cl }
	__asm { push 0xe44488 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c0609: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { add ecx, 0xd4 }
	__asm { call fn_0057dce0 }
	__asm { L_006c061a: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov byte ptr [eax + 0x94], 1 }
	__asm { L_006c0623: }
	__asm { push edi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006c065e }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006c065e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006c065e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c065e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10528[];
extern "C" char g_00e131bc[];
extern "C" void fn_00410540();
extern "C" void fn_006b9b20();
extern "C" void fn_006bc960();
extern "C" void fn_006bca70();
extern "C" void fn_006bd580();
extern "C" void fn_006c02d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006c0680
extern "C" __declspec(naked) void asm_006c0680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd169fb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006c07ed }
	__asm { push 0x12de7d8 }
	__asm { call dword ptr [g_00e131bc] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006c06cc }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_006c06ce }
	__asm { L_006c06cc: }
	__asm { xor eax, eax }
	__asm { L_006c06ce: }
	__asm { mov bl, byte ptr [ebp + 0x10] }
	__asm { cmp esi, eax }
	__asm { setne al }
	__asm { and bl, al }
	__asm { je L_006c0706 }
	__asm { push 4 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_006c06fe }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_006bc960 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jmp L_006c0708 }
	__asm { L_006c06fe: }
	__asm { xor eax, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jmp L_006c0708 }
	__asm { L_006c0706: }
	__asm { xor eax, eax }
	__asm { L_006c0708: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_006bd580 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_006c0738 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006c0738: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006c02d0 }
	__asm { test bl, bl }
	__asm { je L_006c07be }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006c07a8 }
	__asm { xor esi, esi }
	__asm { L_006c0751: }
	__asm { test eax, eax }
	__asm { je L_006c0780 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { add esp, 4 }
	__asm { push 0x64 }
	__asm { call fn_006bca70 }
	__asm { test al, al }
	__asm { jne L_006c07be }
	__asm { inc esi }
	__asm { cmp esi, 0xbb8 }
	__asm { jge L_006c07b9 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { jmp L_006c0751 }
	__asm { L_006c0780: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x24], 0xe19198 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00410540 }
	__asm { L_006c07a8: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push 0x493e0 }
	__asm { call fn_006bca70 }
	__asm { test al, al }
	__asm { jne L_006c07be }
	__asm { L_006c07b9: }
	__asm { call fn_006b9b20 }
	__asm { L_006c07be: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006c07ed }
	__asm { mov ecx, edi }
	__asm { lea eax, [esi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c07ed }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov edx, edi }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c07ed }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c07ed: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006c081b }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c081b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006c081b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c081b: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006c0842 }
	__asm { test al, 1 }
	__asm { jne L_006c0842 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006c0842 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006c0842: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012de7c8[];
extern "C" void fn_006b9740();
extern "C" void fn_006c0ca0();
// FUNCTION: ROBLOXSTUDIO 0x006c0860
extern "C" __declspec(naked) void asm_006c0860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16e30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { lea ecx, [eax + 0x10] }
	__asm { test edx, edx }
	__asm { je L_006c0938 }
	__asm { cmp edx, ecx }
	__asm { je L_006c0938 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_006c0905 }
	__asm { cmp byte ptr [g_012de7c8], 0 }
	__asm { je L_006c0905 }
	__asm { cmp byte ptr [eax + 0x8c], 0 }
	__asm { je L_006c0905 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c08f1 }
	__asm { push 0x115 }
	__asm { push 0xe43cec }
	__asm { push 0xe43e70 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c0902 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006c08f1: }
	__asm { movzx eax, cl }
	__asm { push 0xe43eb8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c0902: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_006c0905: }
	__asm { test eax, eax }
	__asm { je L_006c090e }
	__asm { lea ecx, [eax + 0x10] }
	__asm { jmp L_006c0910 }
	__asm { L_006c090e: }
	__asm { xor ecx, ecx }
	__asm { L_006c0910: }
	__asm { mov edx, dword ptr [ecx] }
	__asm { test edx, edx }
	__asm { je L_006c091e }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_006c091e: }
	__asm { dec dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006c0ca0 }
	__asm { L_006c0938: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006c0973 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006c0973 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006c0973 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c0973: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
