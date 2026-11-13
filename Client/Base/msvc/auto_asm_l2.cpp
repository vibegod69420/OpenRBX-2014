// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x0040e4d0
extern "C" __declspec(naked) void asm_0040e4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { ucomiss xmm0, dword ptr [edx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0040e507 }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { ucomiss xmm0, dword ptr [edx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0040e507 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { ucomiss xmm0, dword ptr [edx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0040e507 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0040e507: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004149b0();
// FUNCTION: ROBLOXSTUDIO 0x00414a90
extern "C" __declspec(naked) void asm_00414a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov esi, ecx }
	__asm { mov eax, 1 }
	__asm { mov dword ptr [esi], edx }
	__asm { lock xadd dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { test byte ptr [eax + 0x10], 1 }
	__asm { jne L_00414ab6 }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004149b0 }
	__asm { L_00414ab6: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f98[];
extern "C" char g_00e10fa0[];
extern "C" char g_01319814[];
// FUNCTION: ROBLOXSTUDIO 0x00419910
extern "C" __declspec(naked) void asm_00419910()
{
	__asm { mov eax, dword ptr [g_01319814] }
	__asm { cmp dword ptr [eax + 8], 1 }
	__asm { je L_00419962 }
	__asm { mov ecx, dword ptr [g_01319814] }
	__asm { push esi }
	__asm { push 8 }
	__asm { push 0x20 }
	__asm { push 0x41f280 }
	__asm { push 0x41f2d0 }
	__asm { call dword ptr [g_00e10f98] }
	__asm { mov edx, dword ptr [g_01319814] }
	__asm { mov esi, eax }
	__asm { add edx, 8 }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [edx], ecx }
	__asm { jne L_0041995b }
	__asm { mov ecx, dword ptr [g_01319814] }
	__asm { push 0x41f280 }
	__asm { call dword ptr [g_00e10fa0] }
	__asm { L_0041995b: }
	__asm { mov dword ptr [g_01319814], esi }
	__asm { pop esi }
	__asm { L_00419962: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00421660
extern "C" __declspec(naked) void asm_00421660()
{
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00421678 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00421678 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_00421678: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00421680
extern "C" __declspec(naked) void asm_00421680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00421691 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00421693 }
	__asm { L_00421691: }
	__asm { xor edx, edx }
	__asm { L_00421693: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004216ae }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_004216ae: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00425f10
extern "C" __declspec(naked) void asm_00425f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00425f31 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00425f31: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0042e860
extern "C" __declspec(naked) void asm_0042e860()
{
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub edx, 0x10 }
	__asm { or ecx, 0xffffffff }
	__asm { lea eax, [edx + 0xc] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { dec ecx }
	__asm { test ecx, ecx }
	__asm { jg L_0042e87c }
	__asm { mov ecx, dword ptr [edx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { L_0042e87c: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0042fe10
extern "C" __declspec(naked) void asm_0042fe10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x48] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0042fe32 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_0042fe32: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00432a00
extern "C" __declspec(naked) void asm_00432a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00432a22 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00432a22: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0043de20
extern "C" __declspec(naked) void asm_0043de20()
{
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0043de3d }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0043de3d: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1102c[];
extern "C" void fn_00414df0();
// FUNCTION: ROBLOXSTUDIO 0x0043ee10
extern "C" __declspec(naked) void asm_0043ee10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_00e1102c] }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call fn_00414df0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0044da50
extern "C" __declspec(naked) void asm_0044da50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0044da77 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0044da77 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0044da77: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00455350
extern "C" __declspec(naked) void asm_00455350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00455371 }
	__asm { add ecx, 8 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00455371: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004590d0
extern "C" __declspec(naked) void asm_004590d0()
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
	__asm { je L_004590f3 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_004590f3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0045ada0
extern "C" __declspec(naked) void asm_0045ada0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0045adc4 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_0045adc4: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045f0a0();
// FUNCTION: ROBLOXSTUDIO 0x0045f550
extern "C" __declspec(naked) void asm_0045f550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0045f0a0 }
	__asm { lea edi, [eax + 8] }
	__asm { test edi, edi }
	__asm { je L_0045f572 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, 0x50 }
	__asm { rep movsd }
	__asm { pop esi }
	__asm { L_0045f572: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00460c90
extern "C" __declspec(naked) void asm_00460c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00460cb2 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00460cb2: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00462ff0
extern "C" __declspec(naked) void asm_00462ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00463012 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00463012: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00467a90
extern "C" __declspec(naked) void asm_00467a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00467ab6 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00467ab6: }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00542360();
// FUNCTION: ROBLOXSTUDIO 0x0046eba0
extern "C" __declspec(naked) void asm_0046eba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_0046ebd3 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x28], 2 }
	__asm { jne L_0046ebd3 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { cvtsi2ss xmm0, dword ptr [esi + 0x20] }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push ecx }
	__asm { movss dword ptr [esp], xmm0 }
	__asm { call fn_00542360 }
	__asm { or word ptr [esi + 0xa], 4 }
	__asm { L_0046ebd3: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00470530
extern "C" __declspec(naked) void asm_00470530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x6c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00470552 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00470552: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0047a9a0
extern "C" __declspec(naked) void asm_0047a9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0047b780
extern "C" __declspec(naked) void asm_0047b780()
{
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0047b798 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0047b798 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_0047b798: }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_0131b3c4[];
extern "C" char g_0131b6f4[];
extern "C" void fn_0048c290();
// FUNCTION: ROBLOXSTUDIO 0x0047bd90
extern "C" __declspec(naked) void asm_0047bd90()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { or edx, 0xffffffff }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { add eax, 0x1c }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0047bdce }
	__asm { mov esi, dword ptr [g_0131b6f4] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec dword ptr [eax + 0x20] }
	__asm { jne L_0047bdc7 }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [g_0131b3c4] }
	__asm { call fn_0048c290 }
	__asm { L_0047bdc7: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { L_0047bdce: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00486d70
extern "C" __declspec(naked) void asm_00486d70()
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
	__asm { je L_00486d93 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00486d93: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00489520
extern "C" __declspec(naked) void asm_00489520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push dword ptr [edx + 0xc] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0048954c }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0048954c: }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00489660
extern "C" __declspec(naked) void asm_00489660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00489686 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00489686: }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_0131b3c4[];
extern "C" char g_0131b6f4[];
extern "C" void fn_0048c290();
// FUNCTION: ROBLOXSTUDIO 0x0048c350
extern "C" __declspec(naked) void asm_0048c350()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { or edx, 0xffffffff }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x1c }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0048c38b }
	__asm { mov esi, dword ptr [g_0131b6f4] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [edi] }
	__asm { dec dword ptr [eax + 0x20] }
	__asm { jne L_0048c384 }
	__asm { push dword ptr [edi] }
	__asm { mov ecx, dword ptr [g_0131b3c4] }
	__asm { call fn_0048c290 }
	__asm { L_0048c384: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { L_0048c38b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e1102c[];
extern "C" char g_00e11104[];
// FUNCTION: ROBLOXSTUDIO 0x0049a9d0
extern "C" __declspec(naked) void asm_0049a9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e11104] }
	__asm { mov dword ptr [esi], 0x1014320 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, dword ptr [g_00e1102c] }
	__asm { mov edx, 1 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov ecx, eax }
	__asm { mov eax, edx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [g_00e1102c] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004a2aa0
extern "C" __declspec(naked) void asm_004a2aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x24] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004a2ac2 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_004a2ac2: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004ae810
extern "C" __declspec(naked) void asm_004ae810()
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
	__asm { je L_004ae833 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_004ae833: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0044d750();
// FUNCTION: ROBLOXSTUDIO 0x004b1470
extern "C" __declspec(naked) void asm_004b1470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044d750 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004b14a4 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_004b14a4: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044d7e0();
// FUNCTION: ROBLOXSTUDIO 0x004b1530
extern "C" __declspec(naked) void asm_004b1530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044d7e0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_004b1564 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_004b1564: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004cdc00();
// FUNCTION: ROBLOXSTUDIO 0x004ccde0
extern "C" __declspec(naked) void asm_004ccde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004cdc00 }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_004cce07 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_004cce07: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004cdcb0();
// FUNCTION: ROBLOXSTUDIO 0x004cce10
extern "C" __declspec(naked) void asm_004cce10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004cdcb0 }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_004cce37 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_004cce37: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10fac[];
extern "C" char g_0131c764[];
extern "C" char g_0131c768[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00505110
extern "C" __declspec(naked) void asm_00505110()
{
	__asm { mov eax, dword ptr [g_0131c764] }
	__asm { test al, 1 }
	__asm { jne L_00505144 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c764], eax }
	__asm { mov eax, dword ptr [g_00e10fac] }
	__asm { mov dword ptr [g_0131c768], eax }
	__asm { add eax, 0x34 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { push 0xdde470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00505144: }
	__asm { mov eax, 0x131c768 }
	__asm { ret }
}

extern "C" void fn_0044d900();
// FUNCTION: ROBLOXSTUDIO 0x00513ed0
extern "C" __declspec(naked) void asm_00513ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044d900 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00513f04 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00513f04: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005171b0
extern "C" __declspec(naked) void asm_005171b0()
{
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_005171be }
	__asm { add eax, -0x1c }
	__asm { jmp L_005171c0 }
	__asm { L_005171be: }
	__asm { xor eax, eax }
	__asm { L_005171c0: }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_005171d8 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_005171d8: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0052f510();
// FUNCTION: ROBLOXSTUDIO 0x0052e170
extern "C" __declspec(naked) void asm_0052e170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0052f510 }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_0052e197 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0052e197: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0052fd30
extern "C" __declspec(naked) void asm_0052fd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [edx + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0052fd5b }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0052fd5b: }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0052fda0
extern "C" __declspec(naked) void asm_0052fda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0052fdc6 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0052fdc6: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00532790
extern "C" __declspec(naked) void asm_00532790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { comiss xmm0, dword ptr [eax] }
	__asm { ja L_005327a4 }
	__asm { mov eax, ecx }
	__asm { L_005327a4: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005327b0
extern "C" __declspec(naked) void asm_005327b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, dword ptr [ecx] }
	__asm { ja L_005327c4 }
	__asm { mov eax, ecx }
	__asm { L_005327c4: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00534440
extern "C" __declspec(naked) void asm_00534440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x4c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x50] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00534462 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00534462: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00539130
extern "C" __declspec(naked) void asm_00539130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x54] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x58] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00539152 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_00539152: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0056f890();
// FUNCTION: ROBLOXSTUDIO 0x0056f7c0
extern "C" __declspec(naked) void asm_0056f7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0056f890 }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_0056f7e7 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0056f7e7: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038214[];
// FUNCTION: ROBLOXSTUDIO 0x00572b50
extern "C" __declspec(naked) void asm_00572b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x94] }
	__asm { mov eax, dword ptr [ecx + 0x7c] }
	__asm { fild dword ptr [ecx + 0x7c] }
	__asm { test eax, eax }
	__asm { jns L_00572b6a }
	__asm { fadd dword ptr [g_01038214] }
	__asm { L_00572b6a: }
	__asm { mov eax, dword ptr [ecx + 0x80] }
	__asm { fild dword ptr [ecx + 0x80] }
	__asm { test eax, eax }
	__asm { jns L_00572b80 }
	__asm { fadd dword ptr [g_01038214] }
	__asm { L_00572b80: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fxch st(1) }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00584cb0();
// FUNCTION: ROBLOXSTUDIO 0x00584c60
extern "C" __declspec(naked) void asm_00584c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00584cb0 }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_00584c87 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00584c87: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00590320
extern "C" __declspec(naked) void asm_00590320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add edx, 5 }
	__asm { add edx, edx }
	__asm { movq xmm0, qword ptr [ecx + edx*8] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movq xmm0, qword ptr [ecx + edx*8 + 8] }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005afff0();
// FUNCTION: ROBLOXSTUDIO 0x00595350
extern "C" __declspec(naked) void asm_00595350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movaps xmm0, xmmword ptr [eax] }
	__asm { movaps xmmword ptr [ecx + 0x10], xmm0 }
	__asm { call fn_005afff0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00595c60
extern "C" __declspec(naked) void asm_00595c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { call eax }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { mulss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005961f0
extern "C" __declspec(naked) void asm_005961f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movq xmm0, qword ptr [ecx + 0x40] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movq xmm0, qword ptr [ecx + 0x48] }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { movq xmm0, qword ptr [ecx + 0x50] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movq xmm0, qword ptr [ecx + 0x58] }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0059ab10
extern "C" __declspec(naked) void asm_0059ab10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { movq qword ptr [ecx + 0x40], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { movq qword ptr [ecx + 0x48], xmm0 }
	__asm { call dword ptr [eax + 0x44] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0059b4b0
extern "C" __declspec(naked) void asm_0059b4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shl edx, 6 }
	__asm { add edx, dword ptr [ecx + 0xc4] }
	__asm { movq xmm0, qword ptr [edx] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movq xmm0, qword ptr [edx + 8] }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { movq xmm0, qword ptr [edx + 0x10] }
	__asm { movq qword ptr [eax + 0x10], xmm0 }
	__asm { movq xmm0, qword ptr [edx + 0x18] }
	__asm { movq qword ptr [eax + 0x18], xmm0 }
	__asm { movq xmm0, qword ptr [edx + 0x20] }
	__asm { movq qword ptr [eax + 0x20], xmm0 }
	__asm { movq xmm0, qword ptr [edx + 0x28] }
	__asm { movq qword ptr [eax + 0x28], xmm0 }
	__asm { movq xmm0, qword ptr [edx + 0x30] }
	__asm { movq qword ptr [eax + 0x30], xmm0 }
	__asm { movq xmm0, qword ptr [edx + 0x38] }
	__asm { movq qword ptr [eax + 0x38], xmm0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0059cdb0
extern "C" __declspec(naked) void asm_0059cdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { movss dword ptr [esp], xmm0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x005a6160
extern "C" __declspec(naked) void asm_005a6160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { movq qword ptr [ecx + 0x10], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movq qword ptr [ecx + 0x18], xmm0 }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { movq qword ptr [ecx + 0x20], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { movq qword ptr [ecx + 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [ecx + 0x30], xmm0 }
	__asm { mov byte ptr [ecx + 0x34], 1 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x005aa650
extern "C" __declspec(naked) void asm_005aa650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { inc dword ptr [ecx + 0x110] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { movq qword ptr [ecx + 0x10], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { movq qword ptr [ecx + 0x18], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 0x10] }
	__asm { movq qword ptr [ecx + 0x20], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 0x18] }
	__asm { movq qword ptr [ecx + 0x28], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 0x20] }
	__asm { movq qword ptr [ecx + 0x30], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 0x28] }
	__asm { movq qword ptr [ecx + 0x38], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 0x30] }
	__asm { movq qword ptr [ecx + 0x40], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 0x38] }
	__asm { movq qword ptr [ecx + 0x48], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005ac570
extern "C" __declspec(naked) void asm_005ac570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add edx, 9 }
	__asm { add edx, edx }
	__asm { movq xmm0, qword ptr [ecx + edx*8] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movq xmm0, qword ptr [ecx + edx*8 + 8] }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x005b2450
extern "C" __declspec(naked) void asm_005b2450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x30] }
	__asm { movss xmm1, dword ptr [ebp + 0x10] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_005b2497 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ecx + 0x34], 1 }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { movq qword ptr [ecx + 0x10], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movq qword ptr [ecx + 0x18], xmm0 }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { movq qword ptr [ecx + 0x20], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { movq qword ptr [ecx + 0x28], xmm0 }
	__asm { movss dword ptr [ecx + 0x30], xmm1 }
	__asm { L_005b2497: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_005b84c0();
// FUNCTION: ROBLOXSTUDIO 0x005b87b0
extern "C" __declspec(naked) void asm_005b87b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x30] }
	__asm { movq xmm0, qword ptr [eax] }
	__asm { movq qword ptr [edx + 0x10], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 8] }
	__asm { movq qword ptr [edx + 0x18], xmm0 }
	__asm { call fn_005b84c0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005dcb40
extern "C" __declspec(naked) void asm_005dcb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ecx + 4] }
	__asm { mulss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { movss xmm3, dword ptr [ecx] }
	__asm { subss xmm1, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm3, dword ptr [eax + 4] }
	__asm { movss dword ptr [edx], xmm1 }
	__asm { movaps xmm1, xmm4 }
	__asm { mulss xmm1, dword ptr [ecx + 8] }
	__asm { mulss xmm4, dword ptr [ecx + 4] }
	__asm { subss xmm1, xmm0 }
	__asm { mov eax, edx }
	__asm { subss xmm3, xmm4 }
	__asm { movss dword ptr [edx + 4], xmm1 }
	__asm { movss dword ptr [edx + 8], xmm3 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
extern "C" char g_010380e4[];
extern "C" char g_010381e8[];
// FUNCTION: ROBLOXSTUDIO 0x005e04b0
extern "C" __declspec(naked) void asm_005e04b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { comiss xmm0, dword ptr [g_010380e4] }
	__asm { xorps xmm1, xmm1 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0x3f800000 }
	__asm { jbe L_005e04da }
	__asm { lea eax, [ebp - 4] }
	__asm { jmp L_005e04e5 }
	__asm { L_005e04da: }
	__asm { comiss xmm1, xmm0 }
	__asm { lea eax, [ebp + 8] }
	__asm { jbe L_005e04e5 }
	__asm { lea eax, [ebp - 8] }
	__asm { L_005e04e5: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm0, dword ptr [g_010381e8] }
	__asm { addss xmm0, dword ptr [g_010380b8] }
	__asm { cvttss2si eax, xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005eaf80
extern "C" __declspec(naked) void asm_005eaf80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_005eaf9f }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_005eaf9f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005eaf9f: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00611bd0
extern "C" __declspec(naked) void asm_00611bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea edx, [ebp - 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { fld dword ptr [eax] }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { movss dword ptr [ecx + 0xc], xmm0 }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00611ed0
extern "C" __declspec(naked) void asm_00611ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea edx, [ecx + 0x2c] }
	__asm { push edi }
	__asm { mov ecx, 9 }
	__asm { mov esi, eax }
	__asm { mov edi, edx }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00618e30
extern "C" __declspec(naked) void asm_00618e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { mov ecx, 9 }
	__asm { mov edi, edx }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00618fb0
extern "C" __declspec(naked) void asm_00618fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe32e04 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00618fd4 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00618fd4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00618fd4: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00618fe3 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00618fe3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00619340();
// FUNCTION: ROBLOXSTUDIO 0x006193f0
extern "C" __declspec(naked) void asm_006193f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movss xmm1, dword ptr [ecx + 4] }
	__asm { fldz }
	__asm { movss xmm2, dword ptr [ecx] }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm2, xmm2 }
	__asm { mulss xmm1, xmm1 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm2, xmm1 }
	__asm { sub esp, 0x10 }
	__asm { fstp qword ptr [esp + 8] }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00619340 }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006576b0();
// FUNCTION: ROBLOXSTUDIO 0x0061aa50
extern "C" __declspec(naked) void asm_0061aa50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 0x1a8] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { movss dword ptr [eax + 0xc], xmm0 }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0061aa92 }
	__asm { push eax }
	__asm { push 0xe33958 }
	__asm { call fn_006576b0 }
	__asm { L_0061aa92: }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x0063df50
extern "C" __declspec(naked) void asm_0063df50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ecx], xmm0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x1c], 0 }
	__asm { mov dword ptr [ecx + 0x20], 0 }
	__asm { mov dword ptr [ecx + 0x24], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx + 0x28], 0 }
	__asm { mov dword ptr [ecx + 0x2c], 0 }
	__asm { mov dword ptr [ecx + 0x30], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0063eb70
extern "C" __declspec(naked) void asm_0063eb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { ucomiss xmm0, dword ptr [edx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0063eba7 }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { ucomiss xmm0, dword ptr [edx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0063eba7 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { ucomiss xmm0, dword ptr [edx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0063eba7 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0063eba7: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e362a4[];
extern "C" char g_00e388a8[];
extern "C" char g_01038190[];
// FUNCTION: ROBLOXSTUDIO 0x00646bf0
extern "C" __declspec(naked) void asm_00646bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cvtsi2ss xmm1, dword ptr [ecx + 0x40] }
	__asm { cvtsi2ss xmm2, dword ptr [ecx + 0x44] }
	__asm { cvtsi2ss xmm3, dword ptr [ecx + 0x48] }
	__asm { mulss xmm1, dword ptr [g_00e388a8] }
	__asm { mulss xmm2, dword ptr [g_00e362a4] }
	__asm { mulss xmm3, dword ptr [g_00e388a8] }
	__asm { movss xmm0, dword ptr [g_01038190] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { movss dword ptr [eax + 4], xmm2 }
	__asm { movss dword ptr [eax + 8], xmm3 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e362a4[];
extern "C" char g_00e388a8[];
extern "C" char g_01038190[];
// FUNCTION: ROBLOXSTUDIO 0x00646c6f
extern "C" __declspec(naked) void asm_00646c6f()
{
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { sub eax, dword ptr [esi + 8] }
	__asm { movss xmm0, dword ptr [g_01038190] }
	__asm { cvtsi2ss xmm3, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mulss xmm3, dword ptr [g_00e388a8] }
	__asm { cvtsi2ss xmm1, edx }
	__asm { cvtsi2ss xmm2, ecx }
	__asm { mulss xmm1, dword ptr [g_00e388a8] }
	__asm { mulss xmm2, dword ptr [g_00e362a4] }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { movss dword ptr [eax + 4], xmm2 }
	__asm { movss dword ptr [eax + 8], xmm3 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
