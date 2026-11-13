// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00ce9f90();
// FUNCTION: ROBLOXSTUDIO 0x00ce9be0
extern "C" __declspec(naked) void asm_00ce9be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ebx, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [ebp + 0x10] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c688b0 }
	__asm { mov ecx, ebx }
	__asm { call fn_00ce9f90 }
	__asm { test eax, eax }
	__asm { jne L_00ce9c34 }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x28 }
	__asm { L_00ce9c34: }
	__asm { movzx eax, word ptr [eax + 0x11c0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00c68960();
extern "C" void fn_00cea0a0();
// FUNCTION: ROBLOXSTUDIO 0x00ce9c50
extern "C" __declspec(naked) void asm_00ce9c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00c68960 }
	__asm { test al, al }
	__asm { je L_00ce9ca3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0x14 }
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
	__asm { mov ecx, esi }
	__asm { call fn_00cea0a0 }
	__asm { test eax, eax }
	__asm { je L_00ce9ca3 }
	__asm { mov eax, dword ptr [eax + 0x11f0] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00ce9ca3: }
	__asm { mov eax, dword ptr [esi + 0x424] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00c68940();
extern "C" void fn_00cea010();
extern "C" void fn_00cea0a0();
// FUNCTION: ROBLOXSTUDIO 0x00ce9f90
extern "C" __declspec(naked) void asm_00ce9f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x12b1ef8 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00c68940 }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { test al, al }
	__asm { je L_00ce9fd2 }
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
	__asm { mov ecx, esi }
	__asm { call fn_00cea010 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x30 }
	__asm { L_00ce9fd2: }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cea0a0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_0131581c[];
extern "C" char g_01315820[];
extern "C" char g_01315824[];
extern "C" char g_01315828[];
extern "C" char g_0131582c[];
// FUNCTION: ROBLOXSTUDIO 0x00ceaa90
extern "C" __declspec(naked) void asm_00ceaa90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { js L_00ceaae0 }
	__asm { movzx eax, word ptr [ecx + 0xe] }
	__asm { cmp edx, eax }
	__asm { jge L_00ceaae0 }
	__asm { imul edx, edx, 0x1208 }
	__asm { add edx, dword ptr [ecx + 0x22c] }
	__asm { cmp byte ptr [edx], 0 }
	__asm { je L_00ceaae0 }
	__asm { cmp dword ptr [edx + 0x1200], 7 }
	__asm { jne L_00ceaae0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ceaae0: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_0131581c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_01315820] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [g_01315824] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [g_01315828] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [g_0131582c] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c68910();
extern "C" void fn_00cbd6b0();
extern "C" void fn_00cea0a0();
// FUNCTION: ROBLOXSTUDIO 0x00ceacb0
extern "C" __declspec(naked) void asm_00ceacb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00cead03 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0x14 }
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
	__asm { mov ecx, esi }
	__asm { call fn_00cea0a0 }
	__asm { test eax, eax }
	__asm { je L_00cead03 }
	__asm { lea ecx, [eax + 0xf8] }
	__asm { call fn_00cbd6b0 }
	__asm { L_00cead03: }
	__asm { mov eax, dword ptr [esi + 0x454] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00ceb910
extern "C" __declspec(naked) void asm_00ceb910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e320 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x24] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 0x80] }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { movzx esi, word ptr [ebp - 0x14] }
	__asm { jbe L_00ceb986 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ceb986: }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { jbe L_00ceb997 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ceb997: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov ax, si }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c68910();
// FUNCTION: ROBLOXSTUDIO 0x00ceefe0
extern "C" __declspec(naked) void asm_00ceefe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x234], esi }
	__asm { jbe L_00cef035 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { L_00ceeff5: }
	__asm { mov eax, dword ptr [edi + 0x230] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax + esi*4] }
	__asm { add ecx, 4 }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00cef01b }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x234] }
	__asm { jb L_00ceeff5 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cef01b: }
	__asm { mov eax, dword ptr [edi + 0x234] }
	__asm { mov ecx, dword ptr [edi + 0x230] }
	__asm { pop ebx }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { dec dword ptr [edi + 0x234] }
	__asm { L_00cef035: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c770();
// FUNCTION: ROBLOXSTUDIO 0x00cf34d0
extern "C" __declspec(naked) void asm_00cf34d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { push edi }
	__asm { mov esi, dword ptr [eax] }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test ebx, ebx }
	__asm { je L_00cf351d }
	__asm { L_00cf34e7: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00c6c770 }
	__asm { test al, al }
	__asm { jne L_00cf34f8 }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { jmp L_00cf34fb }
	__asm { L_00cf34f8: }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { L_00cf34fb: }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00cf351a }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jne L_00cf351a }
	__asm { cmp edi, dword ptr [ebp + 0x10] }
	__asm { jae L_00cf3514 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov al, byte ptr [esi] }
	__asm { mov byte ptr [edi + ecx], al }
	__asm { L_00cf3514: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { inc edi }
	__asm { mov esi, dword ptr [eax] }
	__asm { L_00cf351a: }
	__asm { dec ebx }
	__asm { jne L_00cf34e7 }
	__asm { L_00cf351d: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf36ee();
// FUNCTION: ROBLOXSTUDIO 0x00cf35c0
extern "C" __declspec(naked) void asm_00cf35c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e718 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { cmp dword ptr [edi], 0 }
	__asm { je fn_00cf36ee }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_00ce5d10();
// FUNCTION: ROBLOXSTUDIO 0x00cf5470
extern "C" __declspec(naked) void asm_00cf5470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { cmp al, 1 }
	__asm { je L_00cf5489 }
	__asm { cmp al, 2 }
	__asm { je L_00cf5489 }
	__asm { cmp al, 3 }
	__asm { je L_00cf5489 }
	__asm { mov eax, 0xfffffffc }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cf5489: }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [edi], al }
	__asm { test edx, edx }
	__asm { je L_00cf54ad }
	__asm { xor ecx, ecx }
	__asm { L_00cf5498: }
	__asm { mov al, byte ptr [ecx + edx] }
	__asm { mov byte ptr [edi + ecx + 1], al }
	__asm { inc ecx }
	__asm { cmp ecx, 0x10 }
	__asm { jl L_00cf5498 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cf54ad: }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { L_00cf54b0: }
	__asm { call fn_00ce5d10 }
	__asm { mov byte ptr [edi + esi + 1], al }
	__asm { inc esi }
	__asm { cmp esi, 0x10 }
	__asm { jl L_00cf54b0 }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10074[];
extern "C" char g_00e10078[];
extern "C" char g_00e10788[];
extern "C" char g_01320a0c[];
extern "C" char g_01320a10[];
extern "C" void fn_00cf6600();
extern "C" void fn_00cf6f90();
extern "C" void fn_00cf6f9c();
extern "C" void fn_00cf6fb0();
extern "C" void fn_00cf6ff5();
// FUNCTION: ROBLOXSTUDIO 0x00cf6564
extern "C" __declspec(naked) void asm_00cf6564()
{
	__asm { push 0x14 }
	__asm { push 0x1178cf0 }
	__asm { call fn_00cf6fb0 }
	__asm { push dword ptr [g_01320a10] }
	__asm { mov esi, dword ptr [g_00e10074] }
	__asm { call esi }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { cmp eax, -1 }
	__asm { jne L_00cf6592 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10788] }
	__asm { pop ecx }
	__asm { jmp L_00cf65f7 }
	__asm { L_00cf6592: }
	__asm { push 8 }
	__asm { call fn_00cf6f90 }
	__asm { pop ecx }
	__asm { and dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [g_01320a10] }
	__asm { call esi }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { push dword ptr [g_01320a0c] }
	__asm { call esi }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [g_00e10078] }
	__asm { call esi }
	__asm { push eax }
	__asm { call fn_00cf6f9c }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x24], edi }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call esi }
	__asm { mov dword ptr [g_01320a10], eax }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { call esi }
	__asm { mov dword ptr [g_01320a0c], eax }
	__asm { mov dword ptr [ebp - 4], 0xfffffffe }
	__asm { call fn_00cf6600 }
	__asm { mov eax, edi }
	__asm { L_00cf65f7: }
	__asm { call fn_00cf6ff5 }
	__asm { ret }
	__asm { mov edi, dword ptr [ebp - 0x24] }
}

extern "C" void fn_00cf670d();
extern "C" void fn_00cf6fb0();
extern "C" void fn_00cf6ff5();
// FUNCTION: ROBLOXSTUDIO 0x00cf669e
extern "C" __declspec(naked) void asm_00cf669e()
{
	__asm { push 0xc }
	__asm { push 0x1178d10 }
	__asm { call fn_00cf6fb0 }
	__asm { and dword ptr [ebp - 0x1c], 0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov eax, ebx }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { imul eax, edi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esi, eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { and dword ptr [ebp - 4], 0 }
	__asm { L_00cf66c5: }
	__asm { dec edi }
	__asm { mov dword ptr [ebp + 0x10], edi }
	__asm { js L_00cf66d7 }
	__asm { sub esi, ebx }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [ebp + 0x14] }
	__asm { jmp L_00cf66c5 }
	__asm { L_00cf66d7: }
	__asm { xor eax, eax }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 4], 0xfffffffe }
	__asm { call L_00cf66fd }
	__asm { call fn_00cf6ff5 }
	__asm { ret 0x10 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { L_00cf66fd: }
	__asm { test eax, eax }
	__asm { jne L_00cf670c }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00cf670d }
	__asm { L_00cf670c: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf7200
extern "C" __declspec(naked) void asm_00cf7200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { add ecx, eax }
	__asm { push esi }
	__asm { movzx eax, word ptr [ecx + 0x14] }
	__asm { movzx ebx, word ptr [ecx + 6] }
	__asm { add eax, 0x18 }
	__asm { xor edx, edx }
	__asm { add eax, ecx }
	__asm { push edi }
	__asm { test ebx, ebx }
	__asm { je L_00cf723c }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_00cf7224: }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { cmp edi, esi }
	__asm { jb L_00cf7234 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, esi }
	__asm { cmp edi, ecx }
	__asm { jb L_00cf723e }
	__asm { L_00cf7234: }
	__asm { inc edx }
	__asm { add eax, 0x28 }
	__asm { cmp edx, ebx }
	__asm { jb L_00cf7224 }
	__asm { L_00cf723c: }
	__asm { xor eax, eax }
	__asm { L_00cf723e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf792e
extern "C" __declspec(naked) void asm_00cf792e()
{
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp edi, dword ptr [ebp + 8] }
	__asm { jae L_00cf7955 }
	__asm { mov esi, ebx }
	__asm { sub esi, eax }
	__asm { L_00cf7940: }
	__asm { mov cl, byte ptr [esi + eax] }
	__asm { mov dl, byte ptr [eax] }
	__asm { cmp cl, dl }
	__asm { jl L_00cf7962 }
	__asm { jg L_00cf795d }
	__asm { inc edi }
	__asm { inc eax }
	__asm { cmp edi, dword ptr [ebp + 8] }
	__asm { jb L_00cf7940 }
	__asm { cmp edi, dword ptr [ebp + 8] }
	__asm { L_00cf7955: }
	__asm { jne L_00cf7967 }
	__asm { cmp byte ptr [edi + ebx], 0 }
	__asm { je L_00cf7967 }
	__asm { L_00cf795d: }
	__asm { xor eax, eax }
	__asm { inc eax }
	__asm { jmp L_00cf7969 }
	__asm { L_00cf7962: }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_00cf7969 }
	__asm { L_00cf7967: }
	__asm { xor eax, eax }
	__asm { L_00cf7969: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf7a6e
extern "C" __declspec(naked) void asm_00cf7a6e()
{
	__asm { L_00cf7a6e: }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { and dword ptr [ebp + 8], 0 }
	__asm { mov dword ptr [esi + 0x20], edi }
	__asm { cmp word ptr [eax + 0xa], 0 }
	__asm { jbe L_00cf7ad2 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { push ebx }
	__asm { L_00cf7a8f: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { shl ebx, 2 }
	__asm { mov ecx, dword ptr [ecx + ebx] }
	__asm { push edi }
	__asm { call L_00cf7a6e }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [ecx + ebx] }
	__asm { mov dx, word ptr [eax + 8] }
	__asm { mov ebx, dword ptr [eax + 0x18] }
	__asm { movzx ebx, word ptr [ebx + 8] }
	__asm { neg dx }
	__asm { sbb edx, edx }
	__asm { and edx, 3 }
	__asm { inc edx }
	__asm { imul edx, ebx }
	__asm { imul edx, dword ptr [eax + 0x2c] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { movzx eax, word ptr [eax + 0xa] }
	__asm { inc dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { lea edi, [edi + edx*4] }
	__asm { jb L_00cf7a8f }
	__asm { pop ebx }
	__asm { L_00cf7ad2: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e94[];
extern "C" char g_00e10e98[];
extern "C" char g_00e10ea0[];
// FUNCTION: ROBLOXSTUDIO 0x00cfb8a0
extern "C" __declspec(naked) void asm_00cfb8a0()
{
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { push 4 }
	__asm { lea eax, [edi*4 + 0x10] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0x14], 4 }
	__asm { mov dword ptr [esp + 0x18], 4 }
	__asm { call dword ptr [g_00e10e94] }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { jne L_00cfb8db }
	__asm { call dword ptr [g_00e10ea0] }
	__asm { L_00cfb8db: }
	__asm { mov dword ptr [esi], ebx }
	__asm { mov dword ptr [ebx], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { or dword ptr [eax + 0xc], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { and dword ptr [eax + 0xc], 0xfffffffd }
	__asm { lea eax, [edi*4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x10 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10e98] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret 4 }
}

extern "C" void fn_00cf67fe();
extern "C" void fn_00cffe00();
// FUNCTION: ROBLOXSTUDIO 0x00cfdd50
extern "C" __declspec(naked) void asm_00cfdd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x1c] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00cffe00 }
	__asm { mov edi, dword ptr [esi + 0x14] }
	__asm { add esp, 4 }
	__asm { cmp edi, dword ptr [ebx + 0x10] }
	__asm { cmova edi, dword ptr [ebx + 0x10] }
	__asm { test edi, edi }
	__asm { je L_00cfdd99 }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { call fn_00cf67fe }
	__asm { add dword ptr [ebx + 0xc], edi }
	__asm { add dword ptr [esi + 0x10], edi }
	__asm { add dword ptr [ebx + 0x14], edi }
	__asm { sub dword ptr [ebx + 0x10], edi }
	__asm { add esp, 0xc }
	__asm { sub dword ptr [esi + 0x14], edi }
	__asm { jne L_00cfdd99 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00cfdd99: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cff670
extern "C" __declspec(naked) void asm_00cff670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00cff6b5 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00cff6b5 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_00cff6b5 }
	__asm { mov eax, dword ptr [eax + 0x34] }
	__asm { test eax, eax }
	__asm { je L_00cff699 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call ecx }
	__asm { add esp, 8 }
	__asm { L_00cff699: }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cff6b5: }
	__asm { mov eax, 0xfffffffe }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cff8a0
extern "C" __declspec(naked) void asm_00cff8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00cff93b }
	__asm { mov ecx, dword ptr [eax + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00cff93b }
	__asm { mov dword ptr [ecx + 0x1c], 0 }
	__asm { mov dword ptr [eax + 0x14], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0x18], 0 }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { test edx, edx }
	__asm { je L_00cff8e2 }
	__asm { and edx, 1 }
	__asm { mov dword ptr [eax + 0x30], edx }
	__asm { L_00cff8e2: }
	__asm { lea eax, [ecx + 0x530] }
	__asm { mov dword ptr [ecx + 0x6c], eax }
	__asm { mov dword ptr [ecx + 0x50], eax }
	__asm { mov dword ptr [ecx + 0x4c], eax }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x14], 0x8000 }
	__asm { mov dword ptr [ecx + 0x20], 0 }
	__asm { mov dword ptr [ecx + 0x38], 0 }
	__asm { mov dword ptr [ecx + 0x3c], 0 }
	__asm { mov dword ptr [ecx + 0x1bc0], 1 }
	__asm { mov dword ptr [ecx + 0x1bc4], 0xffffffff }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cff93b: }
	__asm { mov eax, 0xfffffffe }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00d008c0();
// FUNCTION: ROBLOXSTUDIO 0x00d00070
extern "C" __declspec(naked) void asm_00d00070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 0x16bc] }
	__asm { cmp ecx, 0xd }
	__asm { jle L_00d000d3 }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov ax, si }
	__asm { shl ax, cl }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { or word ptr [edi + 0x16b8], ax }
	__asm { movzx eax, byte ptr [edi + 0x16b8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [edi + 0x14] }
	__asm { movzx eax, byte ptr [edi + 0x16b9] }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov eax, dword ptr [edi + 0x16bc] }
	__asm { inc dword ptr [edi + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, al }
	__asm { shr si, cl }
	__asm { add eax, -0xd }
	__asm { mov word ptr [edi + 0x16b8], si }
	__asm { pop esi }
	__asm { jmp L_00d000e4 }
	__asm { L_00d000d3: }
	__asm { mov ax, word ptr [ebp + 0x14] }
	__asm { shl ax, cl }
	__asm { or word ptr [edi + 0x16b8], ax }
	__asm { lea eax, [ecx + 3] }
	__asm { L_00d000e4: }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x16bc], eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00d008c0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00d00100
extern "C" __declspec(naked) void asm_00d00100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x16bc] }
	__asm { cmp eax, 0x10 }
	__asm { jne L_00d0014a }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { movzx eax, byte ptr [esi + 0x16b8] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { movzx eax, byte ptr [esi + 0x16b9] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x16bc], eax }
	__asm { mov word ptr [esi + 0x16b8], ax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d0014a: }
	__asm { cmp eax, 8 }
	__asm { jl L_00d00176 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov al, byte ptr [esi + 0x16b8] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { movzx eax, byte ptr [esi + 0x16b9] }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { add dword ptr [esi + 0x16bc], -8 }
	__asm { mov word ptr [esi + 0x16b8], ax }
	__asm { L_00d00176: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00d00940
extern "C" __declspec(naked) void asm_00d00940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, 0xf3ffc07f }
	__asm { xor edx, edx }
	__asm { lea ecx, [esi + 0x94] }
	__asm { L_00d00954: }
	__asm { test al, 1 }
	__asm { je L_00d0095e }
	__asm { cmp word ptr [ecx], 0 }
	__asm { jne L_00d009a4 }
	__asm { L_00d0095e: }
	__asm { inc edx }
	__asm { add ecx, 4 }
	__asm { shr eax, 1 }
	__asm { cmp edx, 0x1f }
	__asm { jle L_00d00954 }
	__asm { cmp word ptr [esi + 0xb8], 0 }
	__asm { jne L_00d009a9 }
	__asm { cmp word ptr [esi + 0xbc], 0 }
	__asm { jne L_00d009a9 }
	__asm { cmp word ptr [esi + 0xc8], 0 }
	__asm { jne L_00d009a9 }
	__asm { mov ecx, 0x20 }
	__asm { lea eax, [esi + 0x114] }
	__asm { L_00d00992: }
	__asm { cmp word ptr [eax], 0 }
	__asm { jne L_00d009a9 }
	__asm { inc ecx }
	__asm { add eax, 4 }
	__asm { cmp ecx, 0x100 }
	__asm { jl L_00d00992 }
	__asm { L_00d009a4: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d009a9: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00d00cb0
extern "C" __declspec(naked) void asm_00d00cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, 0x11e }
	__asm { lea eax, [ecx + 0x94] }
	__asm { push esi }
	__asm { L_00d00cc2: }
	__asm { xor esi, esi }
	__asm { mov word ptr [eax], si }
	__asm { lea eax, [eax + 4] }
	__asm { dec edx }
	__asm { jne L_00d00cc2 }
	__asm { lea eax, [ecx + 0x988] }
	__asm { mov edx, 0x1e }
	__asm { L_00d00cd8: }
	__asm { xor esi, esi }
	__asm { mov word ptr [eax], si }
	__asm { lea eax, [eax + 4] }
	__asm { dec edx }
	__asm { jne L_00d00cd8 }
	__asm { lea eax, [ecx + 0xa7c] }
	__asm { mov edx, 0x13 }
	__asm { mov edi, edi }
	__asm { L_00d00cf0: }
	__asm { xor esi, esi }
	__asm { mov word ptr [eax], si }
	__asm { lea eax, [eax + 4] }
	__asm { dec edx }
	__asm { jne L_00d00cf0 }
	__asm { mov eax, 1 }
	__asm { mov dword ptr [ecx + 0x16ac], esi }
	__asm { mov dword ptr [ecx + 0x16a8], esi }
	__asm { mov dword ptr [ecx + 0x16b0], esi }
	__asm { mov dword ptr [ecx + 0x16a0], esi }
	__asm { mov word ptr [ecx + 0x494], ax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00d02210
extern "C" __declspec(naked) void asm_00d02210()
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
	__asm { mov dword ptr [esi], 0xf10de4 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x18], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00d02275 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00d02275: }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [esi], 0xf10df0 }
	__asm { mov dword ptr [esi + 0x18], 0xf10dfc }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cfbcf0();
// FUNCTION: ROBLOXSTUDIO 0x00d02510
extern "C" __declspec(naked) void asm_00d02510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_00d02551 }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { je L_00d02536 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, ebx }
	__asm { jmp L_00d02539 }
	__asm { L_00d02536: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_00d02539: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { sub eax, ecx }
	__asm { test eax, eax }
	__asm { je L_00d02551 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cfbcf0 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_00d02551: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
extern "C" void fn_00a2ba10();
extern "C" void fn_00d01ed0();
// FUNCTION: ROBLOXSTUDIO 0x00d025b0
extern "C" __declspec(naked) void asm_00d025b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e860 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, -4 }
	__asm { je L_00d02616 }
	__asm { test esi, esi }
	__asm { js L_00d025dd }
	__asm { cmp esi, 1 }
	__asm { jle L_00d02643 }
	__asm { L_00d025dd: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 0xe4a920 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov dword ptr [ebp - 0x10], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov dword ptr [ebp - 0x38], 0xf10de4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00d01ed0 }
	__asm { L_00d02616: }
	__asm { push 1 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp + 8], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x20], 0xe1815c }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045fe60 }
	__asm { L_00d02643: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00d01f20();
// FUNCTION: ROBLOXSTUDIO 0x00d02660
extern "C" __declspec(naked) void asm_00d02660()
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
	__asm { push 0x38 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00d026c8 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x34] }
	__asm { push eax }
	__asm { call fn_00d01f20 }
	__asm { test eax, eax }
	__asm { je L_00d026c8 }
	__asm { mov ecx, dword ptr [eax + 0x2c] }
	__asm { add eax, 0x2c }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d026c8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cfd340();
extern "C" void fn_00cff6c0();
extern "C" void fn_00d025b0();
// FUNCTION: ROBLOXSTUDIO 0x00d026e0
extern "C" __declspec(naked) void asm_00d026e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [edx + 0x15] }
	__asm { mov byte ptr [ecx + 4], al }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x20], 0 }
	__asm { mov dword ptr [ecx + 0x24], 0 }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { cmp byte ptr [edx + 0x14], 0 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { je L_00d0270d }
	__asm { neg eax }
	__asm { L_00d0270d: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { push 0x38 }
	__asm { push 0xe48230 }
	__asm { je L_00d02739 }
	__asm { push dword ptr [edx + 0x10] }
	__asm { push dword ptr [edx + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edx + 4] }
	__asm { push dword ptr [edx] }
	__asm { push ecx }
	__asm { call fn_00cfd340 }
	__asm { push eax }
	__asm { call fn_00d025b0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00d02739: }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00cff6c0 }
	__asm { push eax }
	__asm { call fn_00d025b0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d028e0
extern "C" __declspec(naked) void asm_00d028e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { cmp eax, 1 }
	__asm { jne L_00d02918 }
	__asm { mov esi, dword ptr [edx + 0xc] }
	__asm { movzx eax, byte ptr [ebp + 8] }
	__asm { lea ecx, [esi*8] }
	__asm { shl eax, cl }
	__asm { add dword ptr [edx], eax }
	__asm { cmp esi, 3 }
	__asm { jne L_00d02944 }
	__asm { mov dword ptr [edx + 8], 2 }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00d02918: }
	__asm { cmp eax, 2 }
	__asm { jne L_00d0294a }
	__asm { mov esi, dword ptr [edx + 0xc] }
	__asm { movzx eax, byte ptr [ebp + 8] }
	__asm { lea ecx, [esi*8] }
	__asm { shl eax, cl }
	__asm { add dword ptr [edx + 4], eax }
	__asm { cmp esi, 3 }
	__asm { jne L_00d02944 }
	__asm { mov dword ptr [edx + 8], esi }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00d02944: }
	__asm { lea eax, [esi + 1] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00d0294a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00d04b60();
extern "C" void fn_00d04c10();
extern "C" void fn_00d04d00();
// FUNCTION: ROBLOXSTUDIO 0x00d04da0
extern "C" __declspec(naked) void asm_00d04da0()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub eax, 0 }
	__asm { je L_00d04de8 }
	__asm { dec eax }
	__asm { je L_00d04dce }
	__asm { dec eax }
	__asm { je L_00d04db4 }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_00d04db4: }
	__asm { fld dword ptr [esp + 0x10] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push ecx }
	__asm { call fn_00d04d00 }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_00d04dce: }
	__asm { fld dword ptr [esp + 0x10] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push ecx }
	__asm { call fn_00d04b60 }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_00d04de8: }
	__asm { fld dword ptr [esp + 0x10] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push ecx }
	__asm { call fn_00d04c10 }
	__asm { add esp, 0x10 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00d09a10
extern "C" __declspec(naked) void asm_00d09a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, 0x20 }
	__asm { nop }
	__asm { L_00d09a20: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_00d09a3f }
	__asm { add ecx, 4 }
	__asm { add edx, 4 }
	__asm { sub esi, 4 }
	__asm { jae L_00d09a20 }
	__asm { xor ecx, ecx }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { sets al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00d09a3f: }
	__asm { cmp al, byte ptr [edx] }
	__asm { jne L_00d09a69 }
	__asm { mov al, byte ptr [ecx + 1] }
	__asm { cmp al, byte ptr [edx + 1] }
	__asm { jne L_00d09a69 }
	__asm { mov al, byte ptr [ecx + 2] }
	__asm { cmp al, byte ptr [edx + 2] }
	__asm { jne L_00d09a69 }
	__asm { mov al, byte ptr [ecx + 3] }
	__asm { cmp al, byte ptr [edx + 3] }
	__asm { jne L_00d09a69 }
	__asm { xor ecx, ecx }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { sets al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00d09a69: }
	__asm { sbb ecx, ecx }
	__asm { or ecx, 1 }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { sets al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d09f60
extern "C" __declspec(naked) void asm_00d09f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp edx, eax }
	__asm { jne L_00d09f86 }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jne L_00d09f86 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00d09f86: }
	__asm { cmp edx, esi }
	__asm { je L_00d09fb5 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { mov ecx, edx }
	__asm { cmp esi, ebx }
	__asm { je L_00d09fb1 }
	__asm { L_00d09f94: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { add esi, 0xc }
	__asm { add ecx, 0xc }
	__asm { cmp esi, ebx }
	__asm { jne L_00d09f94 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00d09fb1: }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { pop ebx }
	__asm { L_00d09fb5: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00607110();
// FUNCTION: ROBLOXSTUDIO 0x00d0a290
extern "C" __declspec(naked) void asm_00d0a290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_00d0a2ce }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_00d0a2ce }
	__asm { sub edi, ecx }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00d0a2b7 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00607110 }
	__asm { L_00d0a2b7: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00d0a2e7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov al, byte ptr [edi + eax] }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00d0a2ce: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00d0a2dc }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00607110 }
	__asm { L_00d0a2dc: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00d0a2e7 }
	__asm { mov al, byte ptr [edi] }
	__asm { mov byte ptr [ecx], al }
	__asm { L_00d0a2e7: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1014c[];
extern "C" char g_00e10168[];
extern "C" char g_00e13084[];
extern "C" char g_00e1308c[];
extern "C" void fn_00d0d0e0();
// FUNCTION: ROBLOXSTUDIO 0x00d0d020
extern "C" __declspec(naked) void asm_00d0d020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push 0xf12470 }
	__asm { call dword ptr [g_00e1308c] }
	__asm { push 0 }
	__asm { call dword ptr [g_00e1014c] }
	__asm { push eax }
	__asm { call fn_00d0d0e0 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push 0x1c }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov esi, edx }
	__asm { call dword ptr [g_00e10168] }
	__asm { test eax, eax }
	__asm { je L_00d0d072 }
	__asm { cmp dword ptr [ebp - 0x10], esi }
	__asm { jb L_00d0d068 }
	__asm { cmp dword ptr [ebp - 8], 0x20 }
	__asm { jne L_00d0d068 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d0d068: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d0d072: }
	__asm { call dword ptr [g_00e13084] }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00d0ce30();
// FUNCTION: ROBLOXSTUDIO 0x00d0d080
extern "C" __declspec(naked) void asm_00d0d080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x24 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00d0d0c9 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_00d0ce30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d0d0c9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00d0da10
extern "C" __declspec(naked) void asm_00d0da10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edx, ecx }
	__asm { and ecx, 0x1f }
	__asm { mov edi, 1 }
	__asm { shr edx, 5 }
	__asm { shl edi, cl }
	__asm { cmp byte ptr [eax + 0xc], 0 }
	__asm { jne L_00d0da54 }
	__asm { cmp edx, dword ptr [eax] }
	__asm { jb L_00d0da54 }
	__asm { cmp edx, dword ptr [eax + 4] }
	__asm { ja L_00d0da54 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { sub ecx, dword ptr [eax] }
	__asm { add ecx, edx }
	__asm { and ecx, dword ptr [eax + 0x24] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { and eax, edi }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00d0da54: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131cca4[];
extern "C" void fn_00404300();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d97d80
extern "C" __declspec(naked) void asm_00d97d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd700be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x409050 }
	__asm { push 0x131a2d8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cca4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d97dd4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cca4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00404300 }
	__asm { push 0xddc000 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d97dd4: }
	__asm { push 0xddb980 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cca4[];
extern "C" void fn_00404300();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d97df0
extern "C" __declspec(naked) void asm_00d97df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd700be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x409050 }
	__asm { push 0x131a2d8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cca4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d97e44 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cca4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00404300 }
	__asm { push 0xddc000 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d97e44: }
	__asm { push 0xddb970 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cd30[];
extern "C" void fn_004044f0();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d97e60
extern "C" __declspec(naked) void asm_00d97e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd701fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x4090b0 }
	__asm { push 0x131a2d0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cd30] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d97eb4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cd30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004044f0 }
	__asm { push 0xddbff0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d97eb4: }
	__asm { push 0xddb9a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cd30[];
extern "C" void fn_004044f0();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d97ed0
extern "C" __declspec(naked) void asm_00d97ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd701fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x4090b0 }
	__asm { push 0x131a2d0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cd30] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d97f24 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cd30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004044f0 }
	__asm { push 0xddbff0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d97f24: }
	__asm { push 0xddb990 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cdc0[];
extern "C" void fn_00404850();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d97f40
extern "C" __declspec(naked) void asm_00d97f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd703ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x409110 }
	__asm { push 0x131a2c8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cdc0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d97f94 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cdc0], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00404850 }
	__asm { push 0xddbfe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d97f94: }
	__asm { push 0xddb9c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cdc0[];
extern "C" void fn_00404850();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d97fb0
extern "C" __declspec(naked) void asm_00d97fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd703ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x409110 }
	__asm { push 0x131a2c8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cdc0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d98004 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cdc0], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00404850 }
	__asm { push 0xddbfe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d98004: }
	__asm { push 0xddb9b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131ce50[];
extern "C" void fn_004046b0();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d98020
extern "C" __declspec(naked) void asm_00d98020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd703ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x409170 }
	__asm { push 0x131a2c0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ce50] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d98074 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ce50], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004046b0 }
	__asm { push 0xddbfd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d98074: }
	__asm { push 0xddb9e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131ce50[];
extern "C" void fn_004046b0();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d98090
extern "C" __declspec(naked) void asm_00d98090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd703ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x409170 }
	__asm { push 0x131a2c0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131ce50] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d980e4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ce50], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004046b0 }
	__asm { push 0xddbfd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d980e4: }
	__asm { push 0xddb9d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cee0[];
extern "C" void fn_004049f0();
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d98100
extern "C" __declspec(naked) void asm_00d98100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7042e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x4091d0 }
	__asm { push 0x131a2b8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cee0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d98154 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cee0], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004049f0 }
	__asm { push 0xddbfc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d98154: }
	__asm { push 0xddba00 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e6dc[];
extern "C" void fn_004115f0();
extern "C" void fn_0048f8d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d99ff0
extern "C" __declspec(naked) void asm_00d99ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b90e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x4936d0 }
	__asm { push 0x131c29c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e6dc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a044 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e6dc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048f8d0 }
	__asm { push 0xddd410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a044: }
	__asm { push 0xddd040 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e6dc[];
extern "C" void fn_004115f0();
extern "C" void fn_0048f8d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a060
extern "C" __declspec(naked) void asm_00d9a060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b90e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x4936d0 }
	__asm { push 0x131c29c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e6dc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a0b4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e6dc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048f8d0 }
	__asm { push 0xddd410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a0b4: }
	__asm { push 0xddd030 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c270[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fa50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a0d0
extern "C" __declspec(naked) void asm_00d9a0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b92e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x493730 }
	__asm { push 0x131c294 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c270] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a124 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c270], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fa50 }
	__asm { push 0xddd400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a124: }
	__asm { push 0xddd060 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c270[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fa50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a140
extern "C" __declspec(naked) void asm_00d9a140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b92e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x493730 }
	__asm { push 0x131c294 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c270] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a194 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c270], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fa50 }
	__asm { push 0xddd400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a194: }
	__asm { push 0xddd050 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e768[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fbe0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a1b0
extern "C" __declspec(naked) void asm_00d9a1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b87e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x493790 }
	__asm { push 0x131c28c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e768] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a204 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e768], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fbe0 }
	__asm { push 0xddd3f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a204: }
	__asm { push 0xddd080 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e768[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fbe0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a220
extern "C" __declspec(naked) void asm_00d9a220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b87e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x493790 }
	__asm { push 0x131c28c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e768] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a274 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e768], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fbe0 }
	__asm { push 0xddd3f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a274: }
	__asm { push 0xddd070 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e7f8[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fd60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a290
extern "C" __declspec(naked) void asm_00d9a290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b85e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x4937f0 }
	__asm { push 0x131c284 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e7f8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a2e4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e7f8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fd60 }
	__asm { push 0xddd3e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a2e4: }
	__asm { push 0xddd0a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e7f8[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fd60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a300
extern "C" __declspec(naked) void asm_00d9a300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b85e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x4937f0 }
	__asm { push 0x131c284 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e7f8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a354 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e7f8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fd60 }
	__asm { push 0xddd3e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a354: }
	__asm { push 0xddd090 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e888[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fee0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a370
extern "C" __declspec(naked) void asm_00d9a370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b89e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x493850 }
	__asm { push 0x131c27c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e888] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a3c4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e888], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fee0 }
	__asm { push 0xddd3d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a3c4: }
	__asm { push 0xddd0c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e888[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fee0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a3e0
extern "C" __declspec(naked) void asm_00d9a3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b89e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x493850 }
	__asm { push 0x131c27c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e888] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a434 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e888], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fee0 }
	__asm { push 0xddd3d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a434: }
	__asm { push 0xddd0b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e918[];
extern "C" void fn_004115f0();
extern "C" void fn_00490100();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a450
extern "C" __declspec(naked) void asm_00d9a450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b8be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x4938b0 }
	__asm { push 0x131c274 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e918] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a4a4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e918], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00490100 }
	__asm { push 0xddd3c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a4a4: }
	__asm { push 0xddd0e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e918[];
extern "C" void fn_004115f0();
extern "C" void fn_00490100();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a4c0
extern "C" __declspec(naked) void asm_00d9a4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b8be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x4938b0 }
	__asm { push 0x131c274 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e918] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00d9a514 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e918], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00490100 }
	__asm { push 0xddd3c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00d9a514: }
	__asm { push 0xddd0d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5e80[];
extern "C" void fn_004115f0();
extern "C" void fn_00b018c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7140
extern "C" __declspec(naked) void asm_00da7140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820ac0 }
	__asm { push 0x12f3020 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5e80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7199 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5e80], eax }
	__asm { mov ecx, 0x12f5df8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b018c0 }
	__asm { push 0xde8020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7199: }
	__asm { push 0xde66d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3330[];
extern "C" void fn_004115f0();
extern "C" void fn_00aeeaf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da71c0
extern "C" __declspec(naked) void asm_00da71c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd233ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820b20 }
	__asm { push 0x12f2db8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3330] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7219 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3330], eax }
	__asm { mov ecx, 0x12f32a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeeaf0 }
	__asm { push 0xde8030 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7219: }
	__asm { push 0xde66e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f40b0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a55ed0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7240
extern "C" __declspec(naked) void asm_00da7240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd231ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820b80 }
	__asm { push 0x12f2e78 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f40b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7299 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f40b0], eax }
	__asm { mov ecx, 0x12f4028 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a55ed0 }
	__asm { push 0xde8040 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7299: }
	__asm { push 0xde66f0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3450[];
extern "C" void fn_004115f0();
extern "C" void fn_00927c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da72c0
extern "C" __declspec(naked) void asm_00da72c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820be0 }
	__asm { push 0x12f2dc8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3450] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7319 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3450], eax }
	__asm { mov ecx, 0x12f33c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00927c20 }
	__asm { push 0xde8050 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7319: }
	__asm { push 0xde6700 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f53d0[];
extern "C" void fn_004115f0();
extern "C" void fn_009fcd30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7340
extern "C" __declspec(naked) void asm_00da7340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820c40 }
	__asm { push 0x12f2f88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f53d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7399 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f53d0], eax }
	__asm { mov ecx, 0x12f5348 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009fcd30 }
	__asm { push 0xde8060 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7399: }
	__asm { push 0xde6710 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f33c0[];
extern "C" void fn_004115f0();
extern "C" void fn_009b3e70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da73c0
extern "C" __declspec(naked) void asm_00da73c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3efee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820ca0 }
	__asm { push 0x12f2dc0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f33c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7419 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f33c0], eax }
	__asm { mov ecx, 0x12f3338 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009b3e70 }
	__asm { push 0xde8070 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7419: }
	__asm { push 0xde6720 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3960[];
extern "C" void fn_004115f0();
extern "C" void fn_007b92b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7440
extern "C" __declspec(naked) void asm_00da7440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24dde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820d00 }
	__asm { push 0x12f2e10 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3960] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7499 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3960], eax }
	__asm { mov ecx, 0x12f38d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b92b0 }
	__asm { push 0xde8080 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7499: }
	__asm { push 0xde6730 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f56a0[];
extern "C" void fn_004115f0();
extern "C" void fn_008ba710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da74c0
extern "C" __declspec(naked) void asm_00da74c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24dfe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820d60 }
	__asm { push 0x12f2fb0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f56a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7519 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f56a0], eax }
	__asm { mov ecx, 0x12f5618 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba710 }
	__asm { push 0xde8090 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7519: }
	__asm { push 0xde6740 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3578[];
extern "C" void fn_004115f0();
extern "C" void fn_007b93e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7540
extern "C" __declspec(naked) void asm_00da7540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd233ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x7bcd00 }
	__asm { push 0x12e34e4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e3578] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7599 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3578], eax }
	__asm { mov ecx, 0x12e34f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b93e0 }
	__asm { push 0xde4660 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7599: }
	__asm { push 0xde6750 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e34b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007b9510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da75c0
extern "C" __declspec(naked) void asm_00da75c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2023e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x7bcd60 }
	__asm { push 0x12e3420 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e34b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7619 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e34b0], eax }
	__asm { mov ecx, 0x12e3428 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b9510 }
	__asm { push 0xde4670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7619: }
	__asm { push 0xde6760 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a90[];
extern "C" void fn_004115f0();
extern "C" void fn_0089fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7640
extern "C" __declspec(naked) void asm_00da7640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820dc0 }
	__asm { push 0x12f2fe8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a90] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7699 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a90], eax }
	__asm { mov ecx, 0x12f5a08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089fe30 }
	__asm { push 0xde80a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7699: }
	__asm { push 0xde6770 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a00[];
extern "C" void fn_004115f0();
extern "C" void fn_0089ff90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da76c0
extern "C" __declspec(naked) void asm_00da76c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2340e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820e20 }
	__asm { push 0x12f2fe0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5a00] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7719 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a00], eax }
	__asm { mov ecx, 0x12f5978 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089ff90 }
	__asm { push 0xde80b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7719: }
	__asm { push 0xde6780 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5b20[];
extern "C" void fn_004115f0();
extern "C" void fn_008a01a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7740
extern "C" __declspec(naked) void asm_00da7740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cb1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820e80 }
	__asm { push 0x12f2ff0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5b20] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7799 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5b20], eax }
	__asm { mov ecx, 0x12f5a98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a01a0 }
	__asm { push 0xde80c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7799: }
	__asm { push 0xde6790 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5190[];
extern "C" void fn_004115f0();
extern "C" void fn_00af8960();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da77c0
extern "C" __declspec(naked) void asm_00da77c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2342e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820ee0 }
	__asm { push 0x12f2f68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5190] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7819 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5190], eax }
	__asm { mov ecx, 0x12f5108 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8960 }
	__asm { push 0xde80d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7819: }
	__asm { push 0xde67a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5220[];
extern "C" void fn_004115f0();
extern "C" void fn_00a5e4b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7840
extern "C" __declspec(naked) void asm_00da7840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820f40 }
	__asm { push 0x12f2f70 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5220] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7899 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5220], eax }
	__asm { mov ecx, 0x12f5198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5e4b0 }
	__asm { push 0xde80e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7899: }
	__asm { push 0xde67b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3a80[];
extern "C" void fn_004115f0();
extern "C" void fn_00986cf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da78c0
extern "C" __declspec(naked) void asm_00da78c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2344e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x820fa0 }
	__asm { push 0x12f2e20 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3a80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7919 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3a80], eax }
	__asm { mov ecx, 0x12f39f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00986cf0 }
	__asm { push 0xde80f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7919: }
	__asm { push 0xde67c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5580[];
extern "C" void fn_004115f0();
extern "C" void fn_008ba850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7940
extern "C" __declspec(naked) void asm_00da7940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821000 }
	__asm { push 0x12f2fa0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5580] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7999 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5580], eax }
	__asm { mov ecx, 0x12f54f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba850 }
	__asm { push 0xde8100 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7999: }
	__asm { push 0xde67d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5fa0[];
extern "C" void fn_004115f0();
extern "C" void fn_00909880();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da79c0
extern "C" __declspec(naked) void asm_00da79c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd33a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821060 }
	__asm { push 0x12f3030 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5fa0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7a19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5fa0], eax }
	__asm { mov ecx, 0x12f5f18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00909880 }
	__asm { push 0xde8110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7a19: }
	__asm { push 0xde67e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f42f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00843a30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7a40
extern "C" __declspec(naked) void asm_00da7a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd270fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8210c0 }
	__asm { push 0x12f2e98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f42f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7a99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f42f0], eax }
	__asm { mov ecx, 0x12f4268 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843a30 }
	__asm { push 0xde8120 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7a99: }
	__asm { push 0xde67f0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f52b0[];
extern "C" void fn_004115f0();
extern "C" void fn_00ab5990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7ac0
extern "C" __declspec(naked) void asm_00da7ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd231ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821120 }
	__asm { push 0x12f2f78 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f52b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7b19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f52b0], eax }
	__asm { mov ecx, 0x12f5228 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5990 }
	__asm { push 0xde8130 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7b19: }
	__asm { push 0xde6800 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f58e0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a6e1c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7b40
extern "C" __declspec(naked) void asm_00da7b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821180 }
	__asm { push 0x12f2fd0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f58e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7b99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f58e0], eax }
	__asm { mov ecx, 0x12f5858 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a6e1c0 }
	__asm { push 0xde8140 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7b99: }
	__asm { push 0xde6810 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5970[];
extern "C" void fn_004115f0();
extern "C" void fn_00a6e300();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7bc0
extern "C" __declspec(naked) void asm_00da7bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2320e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8211e0 }
	__asm { push 0x12f2fd8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5970] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7c19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5970], eax }
	__asm { mov ecx, 0x12f58e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a6e300 }
	__asm { push 0xde8150 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7c19: }
	__asm { push 0xde6820 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3c30[];
extern "C" void fn_004115f0();
extern "C" void fn_008fd8d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7c40
extern "C" __declspec(naked) void asm_00da7c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2346e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821240 }
	__asm { push 0x12f2e38 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3c30] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7c99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3c30], eax }
	__asm { mov ecx, 0x12f3ba8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fd8d0 }
	__asm { push 0xde8160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7c99: }
	__asm { push 0xde6830 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3ba0[];
extern "C" void fn_004115f0();
extern "C" void fn_008fda40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7cc0
extern "C" __declspec(naked) void asm_00da7cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2348e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8212a0 }
	__asm { push 0x12f2e30 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3ba0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7d19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3ba0], eax }
	__asm { mov ecx, 0x12f3b18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fda40 }
	__asm { push 0xde8170 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7d19: }
	__asm { push 0xde6840 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5cd0[];
extern "C" void fn_004115f0();
extern "C" void fn_008a6a00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7d40
extern "C" __declspec(naked) void asm_00da7d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821300 }
	__asm { push 0x12f3008 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5cd0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7d99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5cd0], eax }
	__asm { mov ecx, 0x12f5c48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a6a00 }
	__asm { push 0xde8180 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7d99: }
	__asm { push 0xde6850 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f38d0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a0dfd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7dc0
extern "C" __declspec(naked) void asm_00da7dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821360 }
	__asm { push 0x12f2e08 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f38d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7e19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f38d0], eax }
	__asm { mov ecx, 0x12f3848 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0dfd0 }
	__asm { push 0xde8190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7e19: }
	__asm { push 0xde6860 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3840[];
extern "C" void fn_004115f0();
extern "C" void fn_00a0e130();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7e40
extern "C" __declspec(naked) void asm_00da7e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8213c0 }
	__asm { push 0x12f2e00 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3840] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7e99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3840], eax }
	__asm { mov ecx, 0x12f37b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0e130 }
	__asm { push 0xde81a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7e99: }
	__asm { push 0xde6870 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4da0[];
extern "C" void fn_004115f0();
extern "C" void fn_0088c8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7ec0
extern "C" __declspec(naked) void asm_00da7ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821420 }
	__asm { push 0x12f2f30 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4da0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7f19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4da0], eax }
	__asm { mov ecx, 0x12f4d18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088c8a0 }
	__asm { push 0xde81b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7f19: }
	__asm { push 0xde6880 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4a40[];
extern "C" void fn_004115f0();
extern "C" void fn_009bb3b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7f40
extern "C" __declspec(naked) void asm_00da7f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821480 }
	__asm { push 0x12f2f00 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4a40] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da7f99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4a40], eax }
	__asm { mov ecx, 0x12f49b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bb3b0 }
	__asm { push 0xde81c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da7f99: }
	__asm { push 0xde6890 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f49b0[];
extern "C" void fn_004115f0();
extern "C" void fn_009bb500();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da7fc0
extern "C" __declspec(naked) void asm_00da7fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2322e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8214e0 }
	__asm { push 0x12f2ef8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f49b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8019 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f49b0], eax }
	__asm { mov ecx, 0x12f4928 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bb500 }
	__asm { push 0xde81d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8019: }
	__asm { push 0xde68a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4410[];
extern "C" void fn_004115f0();
extern "C" void fn_00843b60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8040
extern "C" __declspec(naked) void asm_00da8040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2850e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821540 }
	__asm { push 0x12f2ea8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4410] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8099 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4410], eax }
	__asm { mov ecx, 0x12f4388 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843b60 }
	__asm { push 0xde81e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8099: }
	__asm { push 0xde68b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f44a0[];
extern "C" void fn_004115f0();
extern "C" void fn_00843c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da80c0
extern "C" __declspec(naked) void asm_00da80c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2852e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8215a0 }
	__asm { push 0x12f2eb0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f44a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8119 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f44a0], eax }
	__asm { mov ecx, 0x12f4418 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843c90 }
	__asm { push 0xde81f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8119: }
	__asm { push 0xde68c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4380[];
extern "C" void fn_004115f0();
extern "C" void fn_00843e20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8140
extern "C" __declspec(naked) void asm_00da8140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2854e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821600 }
	__asm { push 0x12f2ea0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4380] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8199 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4380], eax }
	__asm { mov ecx, 0x12f42f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843e20 }
	__asm { push 0xde8200 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8199: }
	__asm { push 0xde68d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5f10[];
extern "C" void fn_004115f0();
extern "C" void fn_00937350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da81c0
extern "C" __declspec(naked) void asm_00da81c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24aae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821660 }
	__asm { push 0x12f3028 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5f10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8219 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5f10], eax }
	__asm { mov ecx, 0x12f5e88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00937350 }
	__asm { push 0xde8210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8219: }
	__asm { push 0xde68e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3cc0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a8cae0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8240
extern "C" __declspec(naked) void asm_00da8240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8216c0 }
	__asm { push 0x12f2e40 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3cc0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8299 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3cc0], eax }
	__asm { mov ecx, 0x12f3c38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cae0 }
	__asm { push 0xde8220 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8299: }
	__asm { push 0xde68f0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5340[];
extern "C" void fn_004115f0();
extern "C" void fn_00ab5ad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da82c0
extern "C" __declspec(naked) void asm_00da82c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2324e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821720 }
	__asm { push 0x12f2f80 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5340] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8319 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5340], eax }
	__asm { mov ecx, 0x12f52b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5ad0 }
	__asm { push 0xde8230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8319: }
	__asm { push 0xde6900 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8340
extern "C" __declspec(naked) void asm_00da8340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ace }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8399 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8399: }
	__asm { push 0xde6910 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3e70[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef650();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da83c0
extern "C" __declspec(naked) void asm_00da83c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2326e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8217e0 }
	__asm { push 0x12f2e58 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3e70] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8419 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3e70], eax }
	__asm { mov ecx, 0x12f3de8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef650 }
	__asm { push 0xde8250 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8419: }
	__asm { push 0xde6920 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f60c0[];
extern "C" void fn_004115f0();
extern "C" void fn_00b07e10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8440
extern "C" __declspec(naked) void asm_00da8440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24aee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821840 }
	__asm { push 0x12f3040 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f60c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8499 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f60c0], eax }
	__asm { mov ecx, 0x12f6038 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b07e10 }
	__asm { push 0xde8260 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8499: }
	__asm { push 0xde6930 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3f00[];
extern "C" void fn_004115f0();
extern "C" void fn_00af1670();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da84c0
extern "C" __declspec(naked) void asm_00da84c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2350e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8218a0 }
	__asm { push 0x12f2e60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3f00] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8519 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3f00], eax }
	__asm { mov ecx, 0x12f3e78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af1670 }
	__asm { push 0xde8270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8519: }
	__asm { push 0xde6940 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3b10[];
extern "C" void fn_004115f0();
extern "C" void fn_009a3560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8540
extern "C" __declspec(naked) void asm_00da8540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821900 }
	__asm { push 0x12f2e28 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3b10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8599 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3b10], eax }
	__asm { mov ecx, 0x12f3a88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009a3560 }
	__asm { push 0xde8280 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8599: }
	__asm { push 0xde6950 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3d50[];
extern "C" void fn_004115f0();
extern "C" void fn_00a8cc20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da85c0
extern "C" __declspec(naked) void asm_00da85c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2328e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821960 }
	__asm { push 0x12f2e48 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3d50] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8619 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3d50], eax }
	__asm { mov ecx, 0x12f3cc8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cc20 }
	__asm { push 0xde8290 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8619: }
	__asm { push 0xde6960 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f45c0[];
extern "C" void fn_004115f0();
extern "C" void fn_00aeec50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8640
extern "C" __declspec(naked) void asm_00da8640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8219c0 }
	__asm { push 0x12f2ec0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f45c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8699 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f45c0], eax }
	__asm { mov ecx, 0x12f4538 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeec50 }
	__asm { push 0xde82a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8699: }
	__asm { push 0xde6970 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4c80[];
extern "C" void fn_004115f0();
extern "C" void fn_008aa2f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da86c0
extern "C" __declspec(naked) void asm_00da86c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2352e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821a20 }
	__asm { push 0x12f2f20 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4c80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8719 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4c80], eax }
	__asm { mov ecx, 0x12f4bf8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008aa2f0 }
	__asm { push 0xde82b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8719: }
	__asm { push 0xde6980 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6150[];
extern "C" void fn_004115f0();
extern "C" void fn_00a676e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8740
extern "C" __declspec(naked) void asm_00da8740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821a80 }
	__asm { push 0x12f3048 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6150] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8799 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6150], eax }
	__asm { mov ecx, 0x12f60c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a676e0 }
	__asm { push 0xde82c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8799: }
	__asm { push 0xde6990 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4f50[];
extern "C" void fn_004115f0();
extern "C" void fn_00973200();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da87c0
extern "C" __declspec(naked) void asm_00da87c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2354e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821ae0 }
	__asm { push 0x12f2f48 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4f50] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8819 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4f50], eax }
	__asm { mov ecx, 0x12f4ec8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00973200 }
	__asm { push 0xde82d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8819: }
	__asm { push 0xde69a0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4b60[];
extern "C" void fn_004115f0();
extern "C" void fn_00aa4b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8840
extern "C" __declspec(naked) void asm_00da8840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2356e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821b40 }
	__asm { push 0x12f2f10 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4b60] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8899 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4b60], eax }
	__asm { mov ecx, 0x12f4ad8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aa4b40 }
	__asm { push 0xde82e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8899: }
	__asm { push 0xde69b0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f41d0[];
extern "C" void fn_004115f0();
extern "C" void fn_009d1120();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da88c0
extern "C" __declspec(naked) void asm_00da88c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ebe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821ba0 }
	__asm { push 0x12f2e88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f41d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8919 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f41d0], eax }
	__asm { mov ecx, 0x12f4148 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d1120 }
	__asm { push 0xde82f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8919: }
	__asm { push 0xde69c0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4020[];
extern "C" void fn_004115f0();
extern "C" void fn_007d6150();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8940
extern "C" __declspec(naked) void asm_00da8940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd232ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821c00 }
	__asm { push 0x12f2e70 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4020] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8999 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4020], eax }
	__asm { mov ecx, 0x12f3f98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d6150 }
	__asm { push 0xde8300 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8999: }
	__asm { push 0xde69d0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4890[];
extern "C" void fn_004115f0();
extern "C" void fn_00aeed90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da89c0
extern "C" __declspec(naked) void asm_00da89c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd232ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821c60 }
	__asm { push 0x12f2ee8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4890] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8a19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4890], eax }
	__asm { mov ecx, 0x12f4808 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeed90 }
	__asm { push 0xde8310 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8a19: }
	__asm { push 0xde69e0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4920[];
extern "C" void fn_004115f0();
extern "C" void fn_00aeeef0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8a40
extern "C" __declspec(naked) void asm_00da8a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ede }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821cc0 }
	__asm { push 0x12f2ef0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4920] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8a99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4920], eax }
	__asm { mov ecx, 0x12f4898 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeeef0 }
	__asm { push 0xde8320 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8a99: }
	__asm { push 0xde69f0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4fe0[];
extern "C" void fn_004115f0();
extern "C" void fn_0088ca10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8ac0
extern "C" __declspec(naked) void asm_00da8ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2358e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821d20 }
	__asm { push 0x12f2f50 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4fe0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8b19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4fe0], eax }
	__asm { mov ecx, 0x12f4f58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088ca10 }
	__asm { push 0xde8330 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8b19: }
	__asm { push 0xde6a00 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4ec0[];
extern "C" void fn_004115f0();
extern "C" void fn_00973340();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8b40
extern "C" __declspec(naked) void asm_00da8b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821d80 }
	__asm { push 0x12f2f40 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4ec0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8b99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4ec0], eax }
	__asm { mov ecx, 0x12f4e38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00973340 }
	__asm { push 0xde8340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8b99: }
	__asm { push 0xde6a10 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4650[];
extern "C" void fn_004115f0();
extern "C" void fn_0091ebb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8bc0
extern "C" __declspec(naked) void asm_00da8bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd232ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821de0 }
	__asm { push 0x12f2ec8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4650] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8c19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4650], eax }
	__asm { mov ecx, 0x12f45c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0091ebb0 }
	__asm { push 0xde8350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8c19: }
	__asm { push 0xde6a20 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3180[];
extern "C" void fn_004115f0();
extern "C" void fn_008fdb80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8c40
extern "C" __declspec(naked) void asm_00da8c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2330e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821e40 }
	__asm { push 0x12f2da0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3180] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8c99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3180], eax }
	__asm { mov ecx, 0x12f30f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdb80 }
	__asm { push 0xde8360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8c99: }
	__asm { push 0xde6a30 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4770[];
extern "C" void fn_004115f0();
extern "C" void fn_00af3210();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8cc0
extern "C" __declspec(naked) void asm_00da8cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821ea0 }
	__asm { push 0x12f2ed8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4770] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8d19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4770], eax }
	__asm { mov ecx, 0x12f46e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af3210 }
	__asm { push 0xde8370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8d19: }
	__asm { push 0xde6a40 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f61e0[];
extern "C" void fn_004115f0();
extern "C" void fn_00ab5c00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8d40
extern "C" __declspec(naked) void asm_00da8d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821f00 }
	__asm { push 0x12f3050 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f61e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8d99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f61e0], eax }
	__asm { mov ecx, 0x12f6158 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5c00 }
	__asm { push 0xde8380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8d99: }
	__asm { push 0xde6a50 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5610[];
extern "C" void fn_004115f0();
extern "C" void fn_008ba9b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8dc0
extern "C" __declspec(naked) void asm_00da8dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821f60 }
	__asm { push 0x12f2fa8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5610] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8e19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5610], eax }
	__asm { mov ecx, 0x12f5588 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba9b0 }
	__asm { push 0xde8390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8e19: }
	__asm { push 0xde6a60 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f30f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a74a50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8e40
extern "C" __declspec(naked) void asm_00da8e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24efe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x821fc0 }
	__asm { push 0x12f2d98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f30f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8e99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f30f0], eax }
	__asm { mov ecx, 0x12f3068 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a74a50 }
	__asm { push 0xde83a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8e99: }
	__asm { push 0xde6a70 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131cf74[];
extern "C" void fn_004115f0();
extern "C" void fn_0078aaf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8ec0
extern "C" __declspec(naked) void asm_00da8ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd22a0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x40c550 }
	__asm { push 0x131a29c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131cf74] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8f19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131cf74], eax }
	__asm { mov ecx, 0x131cf78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0078aaf0 }
	__asm { push 0xddc020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8f19: }
	__asm { push 0xde6a80 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5070[];
extern "C" void fn_004115f0();
extern "C" void fn_008fdcc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8f40
extern "C" __declspec(naked) void asm_00da8f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2332e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822020 }
	__asm { push 0x12f2f58 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5070] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da8f99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5070], eax }
	__asm { mov ecx, 0x12f4fe8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdcc0 }
	__asm { push 0xde83b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da8f99: }
	__asm { push 0xde6a90 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4530[];
extern "C" void fn_004115f0();
extern "C" void fn_00843ff0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da8fc0
extern "C" __declspec(naked) void asm_00da8fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2360e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822080 }
	__asm { push 0x12f2eb8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4530] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9019 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4530], eax }
	__asm { mov ecx, 0x12f44a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843ff0 }
	__asm { push 0xde83c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9019: }
	__asm { push 0xde6aa0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f34e0[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef060();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9040
extern "C" __declspec(naked) void asm_00da9040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8220e0 }
	__asm { push 0x12f2dd0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f34e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9099 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f34e0], eax }
	__asm { mov ecx, 0x12f3458 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef060 }
	__asm { push 0xde83d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9099: }
	__asm { push 0xde6ab0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3210[];
extern "C" void fn_004115f0();
extern "C" void fn_008fde00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da90c0
extern "C" __declspec(naked) void asm_00da90c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822140 }
	__asm { push 0x12f2da8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3210] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9119 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3210], eax }
	__asm { mov ecx, 0x12f3188 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fde00 }
	__asm { push 0xde83e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9119: }
	__asm { push 0xde6ac0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4bf0[];
extern "C" void fn_004115f0();
extern "C" void fn_00af4490();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9140
extern "C" __declspec(naked) void asm_00da9140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2362e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8221a0 }
	__asm { push 0x12f2f18 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4bf0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9199 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4bf0], eax }
	__asm { mov ecx, 0x12f4b68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4490 }
	__asm { push 0xde83f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9199: }
	__asm { push 0xde6ad0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5100[];
extern "C" void fn_004115f0();
extern "C" void fn_00af8ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da91c0
extern "C" __declspec(naked) void asm_00da91c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822200 }
	__asm { push 0x12f2f60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5100] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9219 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5100], eax }
	__asm { mov ecx, 0x12f5078 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8ab0 }
	__asm { push 0xde8400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9219: }
	__asm { push 0xde6ae0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4260[];
extern "C" void fn_004115f0();
extern "C" void fn_009d1260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9240
extern "C" __declspec(naked) void asm_00da9240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2334e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822260 }
	__asm { push 0x12f2e90 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4260] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9299 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4260], eax }
	__asm { mov ecx, 0x12f41d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d1260 }
	__asm { push 0xde8410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9299: }
	__asm { push 0xde6af0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4140[];
extern "C" void fn_004115f0();
extern "C" void fn_009d14c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da92c0
extern "C" __declspec(naked) void asm_00da92c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4132e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8222c0 }
	__asm { push 0x12f2e80 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4140] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9319 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4140], eax }
	__asm { mov ecx, 0x12f40b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d14c0 }
	__asm { push 0xde8420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9319: }
	__asm { push 0xde6b00 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f46e0[];
extern "C" void fn_004115f0();
extern "C" void fn_00af1d80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9340
extern "C" __declspec(naked) void asm_00da9340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2364e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822320 }
	__asm { push 0x12f2ed0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f46e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9399 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f46e0], eax }
	__asm { mov ecx, 0x12f4658 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af1d80 }
	__asm { push 0xde8430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9399: }
	__asm { push 0xde6b10 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f57c0[];
extern "C" void fn_004115f0();
extern "C" void fn_00981740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da93c0
extern "C" __declspec(naked) void asm_00da93c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822380 }
	__asm { push 0x12f2fc0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f57c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9419 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f57c0], eax }
	__asm { mov ecx, 0x12f5738 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00981740 }
	__asm { push 0xde8440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9419: }
	__asm { push 0xde6b20 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5850[];
extern "C" void fn_004115f0();
extern "C" void fn_00867ac0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9440
extern "C" __declspec(naked) void asm_00da9440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2366e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8223e0 }
	__asm { push 0x12f2fc8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5850] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9499 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5850], eax }
	__asm { mov ecx, 0x12f57c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867ac0 }
	__asm { push 0xde8450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9499: }
	__asm { push 0xde6b30 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3f90[];
extern "C" void fn_004115f0();
extern "C" void fn_00af17a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da94c0
extern "C" __declspec(naked) void asm_00da94c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2336e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822440 }
	__asm { push 0x12f2e68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3f90] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9519 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3f90], eax }
	__asm { mov ecx, 0x12f3f08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af17a0 }
	__asm { push 0xde8460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9519: }
	__asm { push 0xde6b40 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9540
extern "C" __declspec(naked) void asm_00da9540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9599 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9599: }
	__asm { push 0xde6b50 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4e30[];
extern "C" void fn_004115f0();
extern "C" void fn_009734a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da95c0
extern "C" __declspec(naked) void asm_00da95c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822500 }
	__asm { push 0x12f2f38 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4e30] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9619 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4e30], eax }
	__asm { mov ecx, 0x12f4da8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009734a0 }
	__asm { push 0xde8480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9619: }
	__asm { push 0xde6b60 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6030[];
extern "C" void fn_004115f0();
extern "C" void fn_008ed280();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9640
extern "C" __declspec(naked) void asm_00da9640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822560 }
	__asm { push 0x12f3038 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6030] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9699 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6030], eax }
	__asm { mov ecx, 0x12f5fa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ed280 }
	__asm { push 0xde8490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9699: }
	__asm { push 0xde6b70 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f32a0[];
extern "C" void fn_004115f0();
extern "C" void fn_008fdf40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da96c0
extern "C" __declspec(naked) void asm_00da96c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8225c0 }
	__asm { push 0x12f2db0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f32a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9719 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f32a0], eax }
	__asm { mov ecx, 0x12f3218 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdf40 }
	__asm { push 0xde84a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9719: }
	__asm { push 0xde6b80 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3de0[];
extern "C" void fn_004115f0();
extern "C" void fn_00a8cd60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9740
extern "C" __declspec(naked) void asm_00da9740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2368e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822620 }
	__asm { push 0x12f2e50 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3de0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9799 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3de0], eax }
	__asm { mov ecx, 0x12f3d58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cd60 }
	__asm { push 0xde84b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9799: }
	__asm { push 0xde6b90 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5730[];
extern "C" void fn_004115f0();
extern "C" void fn_008bab60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da97c0
extern "C" __declspec(naked) void asm_00da97c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822680 }
	__asm { push 0x12f2fb8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5730] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9819 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5730], eax }
	__asm { mov ecx, 0x12f56a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008bab60 }
	__asm { push 0xde84c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9819: }
	__asm { push 0xde6ba0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3690[];
extern "C" void fn_004115f0();
extern "C" void fn_00867c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9840
extern "C" __declspec(naked) void asm_00da9840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8226e0 }
	__asm { push 0x12f2de8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3690] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9899 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3690], eax }
	__asm { mov ecx, 0x12f3608 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867c20 }
	__asm { push 0xde84d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9899: }
	__asm { push 0xde6bb0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3570[];
extern "C" void fn_004115f0();
extern "C" void fn_00867d60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da98c0
extern "C" __declspec(naked) void asm_00da98c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29b5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822740 }
	__asm { push 0x12f2dd8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3570] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9919 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3570], eax }
	__asm { mov ecx, 0x12f34e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867d60 }
	__asm { push 0xde84e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9919: }
	__asm { push 0xde6bc0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3600[];
extern "C" void fn_004115f0();
extern "C" void fn_00867ee0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9940
extern "C" __declspec(naked) void asm_00da9940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8227a0 }
	__asm { push 0x12f2de0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3600] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9999 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3600], eax }
	__asm { mov ecx, 0x12f3578 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867ee0 }
	__asm { push 0xde84f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9999: }
	__asm { push 0xde6bd0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f54f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00907c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da99c0
extern "C" __declspec(naked) void asm_00da99c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822800 }
	__asm { push 0x12f2f98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f54f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9a19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f54f0], eax }
	__asm { mov ecx, 0x12f5468 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00907c90 }
	__asm { push 0xde8500 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9a19: }
	__asm { push 0xde6be0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5df0[];
extern "C" void fn_004115f0();
extern "C" void fn_009cc610();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9a40
extern "C" __declspec(naked) void asm_00da9a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd22a2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822860 }
	__asm { push 0x12f3018 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5df0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9a99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5df0], eax }
	__asm { mov ecx, 0x12f5d68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009cc610 }
	__asm { push 0xde8510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9a99: }
	__asm { push 0xde6bf0 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5d60[];
extern "C" void fn_004115f0();
extern "C" void fn_009cc760();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9ac0
extern "C" __declspec(naked) void asm_00da9ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8228c0 }
	__asm { push 0x12f3010 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5d60] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9b19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5d60], eax }
	__asm { mov ecx, 0x12f5cd8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009cc760 }
	__asm { push 0xde8520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9b19: }
	__asm { push 0xde6c00 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5460[];
extern "C" void fn_004115f0();
extern "C" void fn_00907df0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9b40
extern "C" __declspec(naked) void asm_00da9b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822920 }
	__asm { push 0x12f2f90 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5460] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9b99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5460], eax }
	__asm { mov ecx, 0x12f53d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00907df0 }
	__asm { push 0xde8530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9b99: }
	__asm { push 0xde6c10 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4ad0[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef1a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da9bc0
extern "C" __declspec(naked) void asm_00da9bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2338e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x822980 }
	__asm { push 0x12f2f08 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4ad0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00da9c19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4ad0], eax }
	__asm { mov ecx, 0x12f4a48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef1a0 }
	__asm { push 0xde8540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00da9c19: }
	__asm { push 0xde6c20 }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
