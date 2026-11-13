// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10268[];
extern "C" void fn_0060de00();
extern "C" void fn_00687ae0();
// FUNCTION: ROBLOXSTUDIO 0x00979ce0
extern "C" __declspec(naked) void asm_00979ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_00979d19 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_00979d19 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [edi] }
	__asm { call fn_0060de00 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00979d19: }
	__asm { cmp eax, edx }
	__asm { je L_00979d4c }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_00687ae0 }
	__asm { add esp, 0x10 }
	__asm { push dword ptr [edi + 4] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0060de00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00979d4c: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410bb0();
extern "C" void fn_004ae840();
extern "C" void fn_006b9740();
extern "C" void fn_00975ca0();
// FUNCTION: ROBLOXSTUDIO 0x00979fb0
extern "C" __declspec(naked) void asm_00979fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_0097a01a }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_0097a01a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0097a009 }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097a01a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_0097a009: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097a01a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0097a026 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_0097a028 }
	__asm { L_0097a026: }
	__asm { xor edi, edi }
	__asm { L_0097a028: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_004ae840 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_00975ca0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410bb0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_00975dc0();
// FUNCTION: ROBLOXSTUDIO 0x0097a060
extern "C" __declspec(naked) void asm_0097a060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_0097a0ca }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_0097a0ca }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0097a0b9 }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097a0ca }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_0097a0b9: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097a0ca: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0097a0d6 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_0097a0d8 }
	__asm { L_0097a0d6: }
	__asm { xor edi, edi }
	__asm { L_0097a0d8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_00975dc0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410bb0();
extern "C" void fn_004ae840();
extern "C" void fn_006b9740();
extern "C" void fn_00975ee0();
extern "C" void fn_009cc200();
// FUNCTION: ROBLOXSTUDIO 0x0097a110
extern "C" __declspec(naked) void asm_0097a110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_0097a17a }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_0097a17a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0097a169 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097a17a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_0097a169: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097a17a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0097a186 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_0097a188 }
	__asm { L_0097a186: }
	__asm { xor edi, edi }
	__asm { L_0097a188: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { add eax, 0x48 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_009cc200 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_004ae840 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_00975ee0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410bb0();
extern "C" void fn_00412300();
extern "C" void fn_006b9740();
extern "C" void fn_007e0af0();
extern "C" void fn_00976010();
// FUNCTION: ROBLOXSTUDIO 0x0097a1e0
extern "C" __declspec(naked) void asm_0097a1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_0097a24a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_0097a24a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0097a239 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097a24a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_0097a239: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097a24a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0097a256 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_0097a258 }
	__asm { L_0097a256: }
	__asm { xor ebx, ebx }
	__asm { L_0097a258: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_007e0af0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, ebx }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_00976010 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004107f0();
extern "C" void fn_00410bb0();
extern "C" void fn_004ae840();
extern "C" void fn_006b9740();
extern "C" void fn_009761b0();
extern "C" void fn_009cc200();
// FUNCTION: ROBLOXSTUDIO 0x0097a2b0
extern "C" __declspec(naked) void asm_0097a2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_0097a31a }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 5 }
	__asm { je L_0097a31a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0097a309 }
	__asm { push 0x1ad }
	__asm { push 0xe52268 }
	__asm { push 0xe88258 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097a31a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_0097a309: }
	__asm { movzx eax, bl }
	__asm { push 0xe88270 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097a31a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0097a326 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_0097a328 }
	__asm { L_0097a326: }
	__asm { xor edi, edi }
	__asm { L_0097a328: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x114 }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { add eax, 0xd0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_009cc200 }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_004107f0 }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_004107f0 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_004ae840 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_009761b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410bb0();
extern "C" void fn_0044d240();
extern "C" void fn_004ae840();
extern "C" void fn_006b9740();
extern "C" void fn_009762f0();
extern "C" void fn_009cc200();
// FUNCTION: ROBLOXSTUDIO 0x0097a3a0
extern "C" __declspec(naked) void asm_0097a3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_0097a40a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 5 }
	__asm { je L_0097a40a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0097a3f9 }
	__asm { push 0x1ad }
	__asm { push 0xe52268 }
	__asm { push 0xe88258 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097a40a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_0097a3f9: }
	__asm { movzx eax, bl }
	__asm { push 0xe88270 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097a40a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0097a416 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_0097a418 }
	__asm { L_0097a416: }
	__asm { xor ebx, ebx }
	__asm { L_0097a418: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x114 }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { add eax, 0xd0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_009cc200 }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { sub esp, 8 }
	__asm { add eax, 0x8c }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { call fn_0044d240 }
	__asm { fld dword ptr [eax] }
	__asm { push ecx }
	__asm { fstp dword ptr [esi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x48 }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { call fn_0044d240 }
	__asm { fld dword ptr [eax] }
	__asm { push ecx }
	__asm { fstp dword ptr [esi] }
	__asm { push esp }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { call fn_004ae840 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, ebx }
	__asm { call fn_009762f0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00976870();
// FUNCTION: ROBLOXSTUDIO 0x0097df90
extern "C" __declspec(naked) void asm_0097df90()
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
	__asm { jae L_0097e001 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, ebx }
	__asm { ja L_0097e001 }
	__asm { sub ebx, eax }
	__asm { mov eax, 0x92492493 }
	__asm { imul ebx }
	__asm { add edx, ebx }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0097dfe1 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00976870 }
	__asm { L_0097dfe1: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi*8] }
	__asm { sub ecx, edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { lea ebx, [eax + ecx*4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_0097e01f }
	__asm { L_0097e001: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0097e00f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00976870 }
	__asm { L_0097e00f: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { L_0097e01f: }
	__asm { test edi, edi }
	__asm { je L_0097e046 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { L_0097e046: }
	__asm { add dword ptr [esi + 4], 0x1c }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0097f210();
extern "C" void fn_0097f630();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0097f3d0
extern "C" __declspec(naked) void asm_0097f3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
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
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0097f432 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0097f630 }
	__asm { mov dword ptr [esi], 0xe886ac }
	__asm { mov dword ptr [esi + 4], 0xe8870c }
	__asm { mov dword ptr [esi + 0x1c], 0xe88740 }
	__asm { jmp L_0097f434 }
	__asm { L_0097f432: }
	__asm { xor esi, esi }
	__asm { L_0097f434: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0097f210 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0097f465 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0097f465 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_0097f465: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097f2a0();
extern "C" void fn_0097f630();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0097f480
extern "C" __declspec(naked) void asm_0097f480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
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
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0097f4e2 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0097f630 }
	__asm { mov dword ptr [esi], 0xe88754 }
	__asm { mov dword ptr [esi + 4], 0xe887b4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe887e8 }
	__asm { jmp L_0097f4e4 }
	__asm { L_0097f4e2: }
	__asm { xor esi, esi }
	__asm { L_0097f4e4: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0097f2a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0097f515 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0097f515 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_0097f515: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0052d5c0();
extern "C" void fn_007cd560();
extern "C" void fn_00890c90();
extern "C" void fn_009925a0();
extern "C" void fn_00a24380();
extern "C" void fn_00a255e0();
// FUNCTION: ROBLOXSTUDIO 0x0097f810
extern "C" __declspec(naked) void asm_0097f810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00890c90 }
	__asm { mov ecx, esi }
	__asm { call fn_00a24380 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00a255e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xec] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { test ecx, ecx }
	__asm { je L_0097f895 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0097f857 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0097f859 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0097f859 }
	__asm { L_0097f857: }
	__asm { mov eax, ecx }
	__asm { L_0097f859: }
	__asm { test eax, eax }
	__asm { je L_0097f895 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0097f895 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0097f895 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0097f895 }
	__asm { call fn_0052d5c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
	__asm { L_0097f895: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0052d5c0();
extern "C" void fn_007cd560();
extern "C" void fn_00890c90();
extern "C" void fn_009925a0();
extern "C" void fn_00a24380();
extern "C" void fn_00a255e0();
// FUNCTION: ROBLOXSTUDIO 0x0097f900
extern "C" __declspec(naked) void asm_0097f900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00890c90 }
	__asm { mov ecx, esi }
	__asm { call fn_00a24380 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00a255e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xec] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { test ecx, ecx }
	__asm { je L_0097f985 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0097f947 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0097f949 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0097f949 }
	__asm { L_0097f947: }
	__asm { mov eax, ecx }
	__asm { L_0097f949: }
	__asm { test eax, eax }
	__asm { je L_0097f985 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0097f985 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0097f985 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0097f985 }
	__asm { call fn_0052d5c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
	__asm { L_0097f985: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0052d5c0();
extern "C" void fn_007cd560();
extern "C" void fn_00890c90();
extern "C" void fn_009925a0();
extern "C" void fn_00a24380();
extern "C" void fn_00a255e0();
// FUNCTION: ROBLOXSTUDIO 0x0097fa60
extern "C" __declspec(naked) void asm_0097fa60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00890c90 }
	__asm { mov ecx, esi }
	__asm { call fn_00a24380 }
	__asm { push 0xa }
	__asm { mov ecx, esi }
	__asm { call fn_00a255e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xec] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { test ecx, ecx }
	__asm { je L_0097fae5 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0097faa7 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0097faa9 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0097faa9 }
	__asm { L_0097faa7: }
	__asm { mov eax, ecx }
	__asm { L_0097faa9: }
	__asm { test eax, eax }
	__asm { je L_0097fae5 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0097fae5 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0097fae5 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0097fae5 }
	__asm { call fn_0052d5c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
	__asm { L_0097fae5: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0052d5c0();
extern "C" void fn_007cd560();
extern "C" void fn_00890c90();
extern "C" void fn_009925a0();
extern "C" void fn_00a24380();
extern "C" void fn_00a255e0();
// FUNCTION: ROBLOXSTUDIO 0x0097fb00
extern "C" __declspec(naked) void asm_0097fb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00890c90 }
	__asm { mov ecx, esi }
	__asm { call fn_00a24380 }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_00a255e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xec] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { test ecx, ecx }
	__asm { je L_0097fb85 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0097fb47 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0097fb49 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0097fb49 }
	__asm { L_0097fb47: }
	__asm { mov eax, ecx }
	__asm { L_0097fb49: }
	__asm { test eax, eax }
	__asm { je L_0097fb85 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0097fb85 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0097fb85 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0097fb85 }
	__asm { call fn_0052d5c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
	__asm { L_0097fb85: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0052d5c0();
extern "C" void fn_007cd560();
extern "C" void fn_00890c90();
extern "C" void fn_009925a0();
extern "C" void fn_00a24380();
extern "C" void fn_00a255e0();
// FUNCTION: ROBLOXSTUDIO 0x0097fba0
extern "C" __declspec(naked) void asm_0097fba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00890c90 }
	__asm { mov ecx, esi }
	__asm { call fn_00a24380 }
	__asm { push 5 }
	__asm { mov ecx, esi }
	__asm { call fn_00a255e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xec] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { test ecx, ecx }
	__asm { je L_0097fc25 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0097fbe7 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0097fbe9 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0097fbe9 }
	__asm { L_0097fbe7: }
	__asm { mov eax, ecx }
	__asm { L_0097fbe9: }
	__asm { test eax, eax }
	__asm { je L_0097fc25 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0097fc25 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0097fc25 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0097fc25 }
	__asm { call fn_0052d5c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
	__asm { L_0097fc25: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0052d5c0();
extern "C" void fn_007cd560();
extern "C" void fn_00890c90();
extern "C" void fn_009925a0();
extern "C" void fn_00a24380();
extern "C" void fn_00a255e0();
// FUNCTION: ROBLOXSTUDIO 0x0097fc40
extern "C" __declspec(naked) void asm_0097fc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00890c90 }
	__asm { mov ecx, esi }
	__asm { call fn_00a24380 }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call fn_00a255e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xec] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { test ecx, ecx }
	__asm { je L_0097fcc5 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0097fc87 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0097fc89 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0097fc89 }
	__asm { L_0097fc87: }
	__asm { mov eax, ecx }
	__asm { L_0097fc89: }
	__asm { test eax, eax }
	__asm { je L_0097fcc5 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0097fcc5 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0097fcc5 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0097fcc5 }
	__asm { call fn_0052d5c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
	__asm { L_0097fcc5: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 8 }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_009925a0 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f2a4[];
extern "C" void fn_0052e920();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008841a0();
extern "C" void fn_009809b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00980330
extern "C" __declspec(naked) void asm_00980330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bc16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009809b0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131f2a4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009803ef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f2a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe88944 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052e920 }
	__asm { push eax }
	__asm { mov ecx, 0x131f2a8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009803ef: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131f2a8 }
	__asm { call fn_008841a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe88a24 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0098046d }
	__asm { push 0x12d2000 }
	__asm { mov ecx, 0x12d2000 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0098046d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00980458 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098046d }
	__asm { L_00980458: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098046d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f2a4[];
extern "C" void fn_0040bb80();
extern "C" void fn_0052e920();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00980a10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00980480
extern "C" __declspec(naked) void asm_00980480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bc46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00980a10 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131f2a4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0098053f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f2a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe88944 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052e920 }
	__asm { push eax }
	__asm { mov ecx, 0x131f2a8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0098053f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131f2a8 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe88a60 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009805bd }
	__asm { push 0x12d2000 }
	__asm { mov ecx, 0x12d2000 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009805bd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009805a8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009805bd }
	__asm { L_009805a8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009805bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012dcdfc[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040bb80();
extern "C" void fn_0052e690();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00980a70();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009805d0
extern "C" __declspec(naked) void asm_009805d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bc76 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00980a70 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012dcdfc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0098068f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dcdfc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003768 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052e690 }
	__asm { push eax }
	__asm { mov ecx, 0x12dccd0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfe90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0098068f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12dccd0 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe88c3c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0098070d }
	__asm { push 0x1231064 }
	__asm { mov ecx, 0x1231064 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0098070d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009806f8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098070d }
	__asm { L_009806f8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098070d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_0040c5b0();
extern "C" void fn_007cb440();
extern "C" void fn_007d58d0();
extern "C" void fn_00826b00();
extern "C" void fn_00883db0();
extern "C" void fn_00980830();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00980720
extern "C" __declspec(naked) void asm_00980720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd54168 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_0098075e }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00980811 }
	__asm { L_0098075e: }
	__asm { push esi }
	__asm { lea esi, [edi + 4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040c5b0 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00883db0 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { pop esi }
	__asm { jb L_009807ce }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009807ce: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_009807f8 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009807f8: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_007d58d0 }
	__asm { mov dword ptr [edi], eax }
	__asm { L_00980811: }
	__asm { mov ecx, edi }
	__asm { call fn_00980830 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88944[];
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_007cb440();
extern "C" void fn_00980ad0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00980c50
extern "C" __declspec(naked) void asm_00980c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bce6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00980ad0 }
	__asm { lea esi, [edi + 0x80] }
	__asm { mov dword ptr [edi], 0xe88a9c }
	__asm { mov dword ptr [edi + 4], 0xe88b14 }
	__asm { mov dword ptr [edi + 0x18], 0xe88b1c }
	__asm { mov dword ptr [edi + 0x1c], 0xe88b28 }
	__asm { mov dword ptr [edi + 0x64], 0xe88b38 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [edi + 0x9c], 0 }
	__asm { mov dword ptr [edi + 0xa0], 0x41a00000 }
	__asm { mov dword ptr [edi + 0xa4], 0 }
	__asm { cmp byte ptr [g_00e88944], cl }
	__asm { mov eax, 5 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe88944 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00980d38 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00980d38: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4dc0[];
extern "C" char g_012eeea4[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00869c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00981610
extern "C" __declspec(naked) void asm_00981610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bd96 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00869c20 }
	__asm { mov dword ptr [esi], 0xe88dc4 }
	__asm { mov dword ptr [esi + 4], 0xe88e7c }
	__asm { mov dword ptr [esi + 0x18], 0xe88e84 }
	__asm { mov dword ptr [esi + 0x1c], 0xe88e90 }
	__asm { mov dword ptr [esi + 0x64], 0xe88ea0 }
	__asm { mov dword ptr [esi + 0x68], 0xe88ea8 }
	__asm { mov eax, dword ptr [g_012eeea4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009816b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eeea4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1009844 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12eed78 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7830 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009816b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12eed78 }
	__asm { inc dword ptr [g_012e4dc0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00981740
extern "C" __declspec(naked) void asm_00981740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f110c }
	__asm { mov edi, ecx }
	__asm { push 0xe89044 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59df0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe56808 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe89050 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe8905c }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe8906c }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe89078 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe89084 }
	__asm { push 5 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe8908c }
	__asm { push 6 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_006c54a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_007b6490();
extern "C" void fn_00878a70();
extern "C" void fn_00982170();
extern "C" void fn_009821a0();
extern "C" void fn_00982410();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00982270
extern "C" __declspec(naked) void asm_00982270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bee6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009821a0 }
	__asm { mov dword ptr [esi], 0xe89384 }
	__asm { mov dword ptr [esi + 4], 0xe8943c }
	__asm { mov dword ptr [esi + 0x18], 0xe89444 }
	__asm { mov dword ptr [esi + 0x1c], 0xe89450 }
	__asm { mov dword ptr [esi + 0x64], 0xe89460 }
	__asm { mov dword ptr [esi + 0x68], 0xe89468 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x310], 0 }
	__asm { mov dword ptr [esi + 0x330], 0 }
	__asm { mov dword ptr [esi + 0x334], 0 }
	__asm { mov dword ptr [esi + 0x338], 0 }
	__asm { mov dword ptr [esi + 0x33c], 0 }
	__asm { mov dword ptr [esi + 0x340], 0 }
	__asm { mov dword ptr [esi + 0x344], 0 }
	__asm { mov dword ptr [esi + 0x348], 0 }
	__asm { mov dword ptr [esi + 0x34c], 0 }
	__asm { fldz }
	__asm { fstp qword ptr [esi + 0x350] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [esi + 0x358], 0 }
	__asm { mov word ptr [esi + 0x35c], 0 }
	__asm { call fn_007b6490 }
	__asm { push 0xc }
	__asm { push 0xe89498 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { jb L_0098238d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098238d: }
	__asm { xor eax, eax }
	__asm { mov word ptr [ebp - 0x1c], ax }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, 0x40 }
	__asm { mov word ptr [ebp - 0x14], ax }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x20], 0x3f800000 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, esi }
	__asm { call fn_00878a70 }
	__asm { push 6 }
	__asm { mov ecx, esi }
	__asm { call fn_00982170 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x350], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x354], eax }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { jmp fn_00982410 }
}

extern "C" char g_012e4de0[];
extern "C" char g_012ef104[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00869c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00982fa0
extern "C" __declspec(naked) void asm_00982fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bfd6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00869c20 }
	__asm { mov dword ptr [esi], 0xe894ec }
	__asm { mov dword ptr [esi + 4], 0xe895a4 }
	__asm { mov dword ptr [esi + 0x18], 0xe895ac }
	__asm { mov dword ptr [esi + 0x1c], 0xe895b8 }
	__asm { mov dword ptr [esi + 0x64], 0xe895c8 }
	__asm { mov dword ptr [esi + 0x68], 0xe895d0 }
	__asm { mov eax, dword ptr [g_012ef104] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00983049 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef104], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe894d0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12eefd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00983049: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12eefd8 }
	__asm { inc dword ptr [g_012e4de0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e2a84[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00983c70();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00983b20
extern "C" __declspec(naked) void asm_00983b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c0c6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00983c70 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e2a84] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00983bdf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2a84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe8972c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00983bdf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e2958 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe89888 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00983c5d }
	__asm { push 0x1231c90 }
	__asm { mov ecx, 0x1231c90 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00983c5d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00983c48 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00983c5d }
	__asm { L_00983c48: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00983c5d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_0041bea0();
extern "C" void fn_0045a890();
extern "C" void fn_007c9370();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00983ec0
extern "C" __declspec(naked) void asm_00983ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00983f2d }
	__asm { add edi, 0x1c }
	__asm { je L_00983f05 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041bea0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00983f05 }
	__asm { lea ebx, [edi - 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00983f05 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007c9370 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00983f24 }
	__asm { test ebx, ebx }
	__asm { je L_00983f24 }
	__asm { L_00983f05: }
	__asm { test edi, edi }
	__asm { je L_00983f2d }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0045a890 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00983f2d }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00983f2d }
	__asm { L_00983f24: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00983f2d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0041bea0();
extern "C" void fn_0043eed0();
extern "C" void fn_006b9740();
extern "C" void fn_007c9370();
extern "C" void fn_007cd560();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x00983fd0
extern "C" __declspec(naked) void asm_00983fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add ecx, -0x64 }
	__asm { test edi, edi }
	__asm { jne L_00983fe2 }
	__asm { xor al, al }
	__asm { jmp L_00983ff3 }
	__asm { L_00983fe2: }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { cmp eax, ecx }
	__asm { jne L_00983fed }
	__asm { mov al, 1 }
	__asm { jmp L_00983ff3 }
	__asm { L_00983fed: }
	__asm { push eax }
	__asm { call fn_0043eed0 }
	__asm { L_00983ff3: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0098403d }
	__asm { test al, al }
	__asm { jne L_00984048 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00984025 }
	__asm { push 0x24 }
	__asm { push 0xe898d8 }
	__asm { push 0xe89924 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00984041 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00984025: }
	__asm { movzx eax, cl }
	__asm { push 0xe89930 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0098403d: }
	__asm { test al, al }
	__asm { jne L_00984048 }
	__asm { L_00984041: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00984048: }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00984041 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_0041bea0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00984094 }
	__asm { mov ebx, edi }
	__asm { test ebx, ebx }
	__asm { je L_00984094 }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_007c9370 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0098408b }
	__asm { test ebx, ebx }
	__asm { jne L_00984094 }
	__asm { L_0098408b: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00984094: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00624b30();
extern "C" void fn_009845a0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00984780
extern "C" __declspec(naked) void asm_00984780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c1b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x28 }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009847fd }
	__asm { mov dword ptr [esi], 0xe89c58 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov al, byte ptr [edi + 0xc] }
	__asm { mov byte ptr [esi + 0xc], al }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_009845a0 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00624b30 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009847fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e7c[];
extern "C" char g_01301e84[];
extern "C" void fn_006b5b50();
extern "C" void fn_00985bb0();
extern "C" void fn_00985f20();
extern "C" void fn_00985f70();
extern "C" void fn_00986400();
extern "C" void fn_00baf830();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009862e0
extern "C" __declspec(naked) void asm_009862e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c3a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [ebp + 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00986370 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00baf830 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { movzx eax, byte ptr [g_01301e84] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00985bb0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00986400 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00985f70 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_009863d8 }
	__asm { L_00986370: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x1301e7c }
	__asm { call fn_00985f20 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [g_01301e7c] }
	__asm { cmp esi, eax }
	__asm { je L_009863b2 }
	__asm { cmp dword ptr [esi + 0x24], 8 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_00986397 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00986397: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push 0 }
	__asm { call fn_006b5b50 }
	__asm { test eax, eax }
	__asm { mov eax, dword ptr [g_01301e7c] }
	__asm { mov dword ptr [ebp + 0x20], esi }
	__asm { jns L_009863b5 }
	__asm { L_009863b2: }
	__asm { mov dword ptr [ebp + 0x20], eax }
	__asm { L_009863b5: }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_009863d8 }
	__asm { movzx eax, byte ptr [g_01301e84] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, 0x1301e7c }
	__asm { call fn_00985bb0 }
	__asm { L_009863d8: }
	__asm { cmp dword ptr [ebp + 0x1c], 8 }
	__asm { pop esi }
	__asm { jb L_009863ea }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009863ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e1005c[];
extern "C" char g_00e102b0[];
extern "C" char g_00e105a8[];
extern "C" void fn_004276b0();
// FUNCTION: ROBLOXSTUDIO 0x009867d0
extern "C" __declspec(naked) void asm_009867d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x90 }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e1005c] }
	__asm { movzx eax, word ptr [ebp - 2] }
	__asm { push eax }
	__asm { movzx eax, word ptr [ebp - 4] }
	__asm { push eax }
	__asm { movzx eax, word ptr [ebp - 6] }
	__asm { push eax }
	__asm { movzx eax, word ptr [ebp - 8] }
	__asm { push eax }
	__asm { movzx eax, word ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { movzx eax, word ptr [ebp - 0xa] }
	__asm { push eax }
	__asm { movzx eax, word ptr [ebp - 0xe] }
	__asm { push eax }
	__asm { push 0xe89d74 }
	__asm { lea eax, [ebp - 0x90] }
	__asm { push 0x80 }
	__asm { push eax }
	__asm { call dword ptr [g_00e105a8] }
	__asm { add esp, 0x28 }
	__asm { lea eax, [ebp - 0x90] }
	__asm { push 0x1004e20 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add esi, 0x18 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102b0] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10208[];
extern "C" void fn_0042c030();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00986870
extern "C" __declspec(naked) void asm_00986870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c3f9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebx + 0x14], 7 }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { push edi }
	__asm { mov word ptr [ebx], ax }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { xor ecx, ecx }
	__asm { inc eax }
	__asm { mov edx, 2 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { jb L_009868e0 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_009868e0: }
	__asm { inc eax }
	__asm { push eax }
	__asm { push esi }
	__asm { push -1 }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10208] }
	__asm { cmp word ptr [esi], 0 }
	__asm { jne L_009868fa }
	__asm { xor eax, eax }
	__asm { jmp L_0098690f }
	__asm { L_009868fa: }
	__asm { mov eax, esi }
	__asm { lea edx, [eax + 2] }
	__asm { nop }
	__asm { L_00986900: }
	__asm { mov cx, word ptr [eax] }
	__asm { add eax, 2 }
	__asm { test cx, cx }
	__asm { jne L_00986900 }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { L_0098690f: }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_0042c030 }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101cc[];
extern "C" void fn_004038a0();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00986940
extern "C" __declspec(naked) void asm_00986940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e259 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [ebx], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { jb L_009869a2 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_009869a2: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { inc eax }
	__asm { push eax }
	__asm { push edi }
	__asm { push -1 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101cc] }
	__asm { cmp byte ptr [edi], 0 }
	__asm { jne L_009869bf }
	__asm { xor ecx, ecx }
	__asm { jmp L_009869cd }
	__asm { L_009869bf: }
	__asm { mov ecx, edi }
	__asm { lea edx, [ecx + 1] }
	__asm { L_009869c4: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_009869c4 }
	__asm { sub ecx, edx }
	__asm { L_009869cd: }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_004038a0 }
	__asm { push edi }
	__asm { call fn_00cf6698 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00986cf0
extern "C" __declspec(naked) void asm_00986cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f0934 }
	__asm { mov edi, ecx }
	__asm { push 0xe89df8 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59928 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe89e0c }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe89e14 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe89e1c }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe89e24 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01302f7c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00989940();
extern "C" void fn_0098a450();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00987540
extern "C" __declspec(naked) void asm_00987540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c4d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00989940 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_01302f7c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009875ff }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01302f7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe76fd8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1302e50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf6680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009875ff: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x1302e50 }
	__asm { call fn_0098a450 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe8d150 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0098767d }
	__asm { push 0x1232438 }
	__asm { mov ecx, 0x1232438 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0098767d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00987668 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098767d }
	__asm { L_00987668: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098767d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01302f7c[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_009899a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00987690
extern "C" __declspec(naked) void asm_00987690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c506 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009899a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_01302f7c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0098774f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01302f7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe76fd8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1302e50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf6680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0098774f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x1302e50 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe8d1e0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009877cd }
	__asm { push 0x1232438 }
	__asm { mov ecx, 0x1232438 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009877cd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009877b8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009877cd }
	__asm { L_009877b8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009877cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01302f7c[];
extern "C" void fn_0040bb80();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00989a00();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009877e0
extern "C" __declspec(naked) void asm_009877e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c506 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00989a00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_01302f7c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0098789f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01302f7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe76fd8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1302e50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf6680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0098789f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x1302e50 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe8d194 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0098791d }
	__asm { push 0x1232438 }
	__asm { mov ecx, 0x1232438 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0098791d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00987908 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098791d }
	__asm { L_00987908: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098791d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01302f7c[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00989a60();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00987930
extern "C" __declspec(naked) void asm_00987930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c536 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00989a60 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_01302f7c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009879ec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01302f7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe76fd8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1302e50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf6680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009879ec: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x1302e50 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe8d228 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00987a6a }
	__asm { push 0x1232438 }
	__asm { mov ecx, 0x1232438 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00987a6a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00987a55 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00987a6a }
	__asm { L_00987a55: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00987a6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01302f7c[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00989ab0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00987a80
extern "C" __declspec(naked) void asm_00987a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c506 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00989ab0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_01302f7c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00987b3f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01302f7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe76fd8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1302e50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf6680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00987b3f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x1302e50 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe8d228 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00987bbd }
	__asm { push 0x1232438 }
	__asm { mov ecx, 0x1232438 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00987bbd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00987ba8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00987bbd }
	__asm { L_00987ba8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00987bbd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_0130314c[];
extern "C" char g_01303150[];
extern "C" char g_01303154[];
extern "C" char g_01303158[];
extern "C" void fn_00403540();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00988630
extern "C" __declspec(naked) void asm_00988630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01303158] }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_0098868c }
	__asm { or eax, 1 }
	__asm { push 0xdf6720 }
	__asm { mov dword ptr [g_01303158], eax }
	__asm { mov dword ptr [g_0130314c], 0x1232464 }
	__asm { mov dword ptr [g_01303154], 0x98cf00 }
	__asm { mov dword ptr [g_01303150], 0x8846b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0098868c: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, 0x130314c }
	__asm { jne L_009886b4 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_009886ac }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_009886ac: }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jmp L_0098870a }
	__asm { L_009886b4: }
	__asm { test ecx, ecx }
	__asm { je L_009886ca }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_009886ca: }
	__asm { lea ebx, [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00988704 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { L_00988704: }
	__asm { mov dword ptr [edi], 0x130314c }
	__asm { L_0098870a: }
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

extern "C" void fn_0040c260();
extern "C" void fn_0098a510();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009889d0
extern "C" __declspec(naked) void asm_009889d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c69b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00988a4e }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { call fn_0098a510 }
	__asm { push 0x30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00988a37 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_0098a510 }
	__asm { mov ecx, eax }
	__asm { jmp L_00988a39 }
	__asm { L_00988a37: }
	__asm { xor ecx, ecx }
	__asm { L_00988a39: }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_00c285f0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00988a50 }
	__asm { L_00988a4e: }
	__asm { xor bl, bl }
	__asm { L_00988a50: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_008d9f20();
// FUNCTION: ROBLOXSTUDIO 0x00988e90
extern "C" __declspec(naked) void asm_00988e90()
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
	__asm { je L_00988edb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00988edb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00988f2e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe729d4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe8df38 }
	__asm { mov dword ptr [esi + 8], 0xe8df48 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe8df50 }
	__asm { mov dword ptr [esi + 8], 0xe8df60 }
	__asm { jmp L_00988f30 }
	__asm { L_00988f2e: }
	__asm { xor esi, esi }
	__asm { L_00988f30: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008d9f20 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00988f4d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00988f4d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_0040c5b0();
extern "C" void fn_007cb440();
extern "C" void fn_007d58d0();
extern "C" void fn_00826b00();
extern "C" void fn_00988630();
extern "C" void fn_00989580();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00989000
extern "C" __declspec(naked) void asm_00989000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd541f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_0098903e }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_009890f1 }
	__asm { L_0098903e: }
	__asm { push esi }
	__asm { lea esi, [edi + 4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040c5b0 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00988630 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { pop esi }
	__asm { jb L_009890ae }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009890ae: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_009890d8 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009890d8: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_007d58d0 }
	__asm { mov dword ptr [edi], eax }
	__asm { L_009890f1: }
	__asm { mov ecx, edi }
	__asm { call fn_00989580 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_0092e9f0();
extern "C" void fn_00987de0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00989110
extern "C" __declspec(naked) void asm_00989110()
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
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00989161 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_0092e9f0 }
	__asm { mov esi, eax }
	__asm { jmp L_00989163 }
	__asm { L_00989161: }
	__asm { xor esi, esi }
	__asm { L_00989163: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00987de0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00989194 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00989194 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00989194: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00987e70();
extern "C" void fn_0098b450();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009891b0
extern "C" __declspec(naked) void asm_009891b0()
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
	__asm { push 0xb8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00989201 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_0098b450 }
	__asm { mov esi, eax }
	__asm { jmp L_00989203 }
	__asm { L_00989201: }
	__asm { xor esi, esi }
	__asm { L_00989203: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00987e70 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00989234 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00989234 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00989234: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de8e0();
extern "C" void fn_00987f00();
extern "C" void fn_00989f10();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00989253
extern "C" __declspec(naked) void asm_00989253()
{
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xb4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009892b9 }
	__asm { mov ecx, esi }
	__asm { call fn_00989f10 }
	__asm { mov dword ptr [esi], 0xe8cd3c }
	__asm { mov dword ptr [esi + 4], 0xe8cdb4 }
	__asm { mov dword ptr [esi + 0x18], 0xe8cdbc }
	__asm { mov dword ptr [esi + 0x1c], 0xe8cdc8 }
	__asm { jmp L_009892bb }
	__asm { L_009892b9: }
	__asm { xor esi, esi }
	__asm { L_009892bb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00987f00 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_009892ec }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_009892ec }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_009892ec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_009888b0();
extern "C" void fn_00989000();
// FUNCTION: ROBLOXSTUDIO 0x00989700
extern "C" __declspec(naked) void asm_00989700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dcf1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x1232464 }
	__asm { je L_009897dc }
	__asm { push eax }
	__asm { mov ecx, 0x1232464 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009897dc }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0098976d }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0098976d: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00989000 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00989810 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
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
	__asm { L_009897dc: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_009888b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { L_00989810: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_00989c20();
extern "C" void fn_00af4350();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00989830
extern "C" __declspec(naked) void asm_00989830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 1 }
	__asm { jb L_009898fb }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00989c20 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00989883 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00989883: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009898e1 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00af4350 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009898d0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_009898d0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009898e1: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009898fb }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009898fb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00989915 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00989915: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007cb250();
extern "C" void fn_007e94c0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_0098a340();
// FUNCTION: ROBLOXSTUDIO 0x00989cc0
extern "C" __declspec(naked) void asm_00989cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_0098a340 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe8d134 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007e94c0 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00989d6e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00989d6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01302f7c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0098a230
extern "C" __declspec(naked) void asm_0098a230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c826 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_01302f7c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0098a2aa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01302f7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe76fd8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1302e50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdf6680 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0098a2aa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x1302e50 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe8d294 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0098a322 }
	__asm { push 0x1232438 }
	__asm { mov ecx, 0x1232438 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0098a322 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0098a30d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098a322 }
	__asm { L_0098a30d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098a322: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e2104[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0098a340
extern "C" __declspec(naked) void asm_0098a340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c846 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e2104] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0098a3ba }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2104], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe89f04 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e1fd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0098a3ba: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e1fd8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe8d128 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0098a432 }
	__asm { push 0x123240c }
	__asm { mov ecx, 0x123240c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0098a432 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0098a41d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098a432 }
	__asm { L_0098a41d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098a432: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_007d58d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0098a450
extern "C" __declspec(naked) void asm_0098a450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d58d0 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe8d0ac }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0098a4e7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0098a4d6 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_0098a4d6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0098a4e7 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_0098a4e7: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_004038a0();
extern "C" void fn_006bc950();
extern "C" void fn_007b5bb0();
extern "C" void fn_007cb440();
extern "C" void fn_00989d90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0098af60
extern "C" __declspec(naked) void asm_0098af60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c967 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00989d90 }
	__asm { mov dword ptr [edi], 0xe8a19c }
	__asm { mov dword ptr [edi + 4], 0xe8a214 }
	__asm { mov dword ptr [edi + 0x18], 0xe8a21c }
	__asm { mov dword ptr [edi + 0x1c], 0xe8a228 }
	__asm { push 0x1302e18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0xe8a23c }
	__asm { mov dword ptr [edi + 4], 0xe8a2b4 }
	__asm { mov dword ptr [edi + 0x18], 0xe8a2bc }
	__asm { mov dword ptr [edi + 0x1c], 0xe8a2c8 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { lea esi, [edi + 0x70] }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { and byte ptr [edi + 0x9d], 0xf8 }
	__asm { or byte ptr [edi + 0xa8], 1 }
	__asm { mov dword ptr [edi + 0x8c], 0x3f000000 }
	__asm { mov dword ptr [edi + 0x90], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x98], 0 }
	__asm { mov byte ptr [edi + 0x9c], 0 }
	__asm { mov dword ptr [edi + 0xa0], 0xffffffff }
	__asm { mov dword ptr [edi + 0xa4], 0xffffffff }
	__asm { mov dword ptr [edi + 0xac], 0 }
	__asm { mov dword ptr [edi + 0xb0], 0 }
	__asm { push 5 }
	__asm { push 0xe76fd8 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0098b0a9 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098b0a9: }
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
extern "C" char g_01302e24[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_0098def0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0098b8f0
extern "C" __declspec(naked) void asm_0098b8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe8cc90 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0098b961 }
	__asm { cmp dword ptr [g_01302e24], 0x29a }
	__asm { je L_0098b961 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0098b950 }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098b961 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0098b950: }
	__asm { movzx eax, al }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098b961: }
	__asm { mov ecx, esi }
	__asm { call fn_0098def0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0098b9bb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0098b9bb: }
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

extern "C" char g_01232344[];
extern "C" char g_01301e89[];
extern "C" char g_01301e94[];
extern "C" void fn_004038a0();
extern "C" void fn_006b8a9c();
extern "C" void fn_0098c9b0();
extern "C" void fn_00990cc0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cfb768();
// FUNCTION: ROBLOXSTUDIO 0x0098c790
extern "C" __declspec(naked) void asm_0098c790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_0098c878 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cfb768 }
	__asm { push 0x18 }
	__asm { push 0xe8da30 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0098c816 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098c816: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test edi, edi }
	__asm { jne L_0098c876 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0098c876 }
	__asm { cmp byte ptr [g_01301e94], 0 }
	__asm { je L_0098c856 }
	__asm { push esi }
	__asm { call fn_00990cc0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0098c856: }
	__asm { mov al, byte ptr [g_01301e89] }
	__asm { test al, al }
	__asm { je L_0098c876 }
	__asm { push dword ptr [g_01232344] }
	__asm { movzx eax, al }
	__asm { push 0xe8da4c }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { L_0098c876: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0098c878: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00495b90();
extern "C" void fn_0092f610();
extern "C" void fn_0092f750();
extern "C" void fn_009891b0();
extern "C" void fn_00989300();
// FUNCTION: ROBLOXSTUDIO 0x0098d310
extern "C" __declspec(naked) void asm_0098d310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009891b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ecx + 0xa0] }
	__asm { push eax }
	__asm { push 0xe47350 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_0092f750 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0xa4 }
	__asm { push eax }
	__asm { push 0xe8cf18 }
	__asm { mov ecx, esi }
	__asm { call fn_0092f750 }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0xa8 }
	__asm { push eax }
	__asm { push 0xe8cf1c }
	__asm { mov ecx, esi }
	__asm { call fn_0092f750 }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0xac }
	__asm { push eax }
	__asm { push 0xe8cf24 }
	__asm { mov ecx, esi }
	__asm { call fn_0092f750 }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0xb0 }
	__asm { push eax }
	__asm { push 0xe8cf30 }
	__asm { mov ecx, esi }
	__asm { call fn_0092f750 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea eax, [ecx + 0x9c] }
	__asm { push eax }
	__asm { push 0xe8cf38 }
	__asm { call fn_00495b90 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea eax, [ecx + 0x8c] }
	__asm { push eax }
	__asm { push 0xe8cf48 }
	__asm { call fn_0092f610 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea eax, [ecx + 0x90] }
	__asm { push eax }
	__asm { push 0x100a8a0 }
	__asm { call fn_0092f610 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea eax, [ecx + 0x94] }
	__asm { push eax }
	__asm { push 0xe8cf50 }
	__asm { call fn_00989300 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea edx, [ecx + 0x98] }
	__asm { push edx }
	__asm { push 0xe8cf5c }
	__asm { call fn_00989300 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403040();
extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0098d7a0
extern "C" __declspec(naked) void asm_0098d7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cd30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00405b90 }
	__asm { push esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00403040 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_0098d804 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098d804: }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jb L_0098d827 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098d827: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01301e8b[];
extern "C" void fn_004038a0();
extern "C" void fn_006b8a90();
extern "C" void fn_0098c9b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cfb7c2();
// FUNCTION: ROBLOXSTUDIO 0x0098dd20
extern "C" __declspec(naked) void asm_0098dd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0098dd5a }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe8d3b8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0098dd5a: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { je L_0098ddbb }
	__asm { push 0x13 }
	__asm { push 0xe8d3e0 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cfb7c2 }
	__asm { push eax }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0098ddbb }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098ddbb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01302e24[];
extern "C" char g_0130315c[];
extern "C" char g_01303160[];
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0098def0
extern "C" __declspec(naked) void asm_0098def0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3cd4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0098df55 }
	__asm { cmp dword ptr [g_01302e24], 0x29a }
	__asm { je L_0098df55 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0098df44 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098df55 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0098df44: }
	__asm { movzx eax, al }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098df55: }
	__asm { push 0x988dd0 }
	__asm { push 0x1303144 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01303160] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0098df9f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303160], eax }
	__asm { push 0xe89f00 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130315c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0098df9f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130315c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e8b[];
extern "C" void fn_004039a0();
extern "C" void fn_006b8aae();
extern "C" void fn_0098c9b0();
extern "C" void fn_0098db50();
extern "C" void fn_00cf6522();
extern "C" void fn_00cfb7f8();
// FUNCTION: ROBLOXSTUDIO 0x0098e240
extern "C" __declspec(naked) void asm_0098e240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0098e27e }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x6c] }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push 0xe8d830 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_0098e27e: }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0098e31e }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0098db50 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_0098e30b }
	__asm { push ebx }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00cfb7f8 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_0098e2f7 }
	__asm { push 0xe8d858 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_004039a0 }
	__asm { push edi }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0098e2e4 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098e2e4: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0098e2f7: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0098e30b: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0098e31e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e8b[];
extern "C" void fn_004039a0();
extern "C" void fn_006b8aae();
extern "C" void fn_0098c9b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cfb83a();
// FUNCTION: ROBLOXSTUDIO 0x00990000
extern "C" __declspec(naked) void asm_00990000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0099003e }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x6c] }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push 0xe8d704 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_0099003e: }
	__asm { mov ecx, dword ptr [esi + 0x6c] }
	__asm { test ecx, ecx }
	__asm { jne L_0099005f }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 0xa0], eax }
	__asm { pop esi }
	__asm { setg al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0099005f: }
	__asm { xor al, al }
	__asm { test byte ptr [esi + 0xa8], 1 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { jne L_00990108 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00cfb83a }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_009900df }
	__asm { or byte ptr [esi + 0xa8], 1 }
	__asm { push 0xe8d274 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_004039a0 }
	__asm { push dword ptr [esi + 0x6c] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push esi }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_009900c6 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009900c6: }
	__asm { xor al, al }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { jmp L_009900e2 }
	__asm { L_009900df: }
	__asm { mov al, byte ptr [ebp - 0xd] }
	__asm { L_009900e2: }
	__asm { mov cl, byte ptr [g_01301e8b] }
	__asm { pop edi }
	__asm { test cl, cl }
	__asm { je L_00990108 }
	__asm { movzx eax, al }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { movzx eax, cl }
	__asm { push 0xe8d724 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { mov al, byte ptr [ebp - 0xd] }
	__asm { add esp, 0x14 }
	__asm { L_00990108: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e8b[];
extern "C" char g_01301e8d[];
extern "C" void fn_004038a0();
extern "C" void fn_006b8aae();
extern "C" void fn_0098c9b0();
extern "C" void fn_00994250();
extern "C" void fn_00cf6522();
extern "C" void fn_00cfb804();
// FUNCTION: ROBLOXSTUDIO 0x00991af0
extern "C" __declspec(naked) void asm_00991af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00991b2e }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x6c] }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push 0xe8de54 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00991b2e: }
	__asm { cmp dword ptr [esi + 0x6c], 0 }
	__asm { je L_00991ba0 }
	__asm { push 9 }
	__asm { push 0xe8de78 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [esi + 0x6c] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cfb804 }
	__asm { push eax }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00991b8e }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00991b8e: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { L_00991ba0: }
	__asm { cmp byte ptr [g_01301e8d], 0 }
	__asm { jne L_00991bb0 }
	__asm { mov ecx, esi }
	__asm { call fn_00994250 }
	__asm { L_00991bb0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e8b[];
extern "C" void fn_004039a0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0052d5c0();
extern "C" void fn_006b8aae();
extern "C" void fn_007cd560();
extern "C" void fn_0098c9b0();
extern "C" void fn_00991d50();
extern "C" void fn_00cf6522();
extern "C" void fn_00cfb81c();
// FUNCTION: ROBLOXSTUDIO 0x00991c40
extern "C" __declspec(naked) void asm_00991c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00991c80 }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xe8de1c }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00991c80: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00991d50 }
	__asm { test edi, edi }
	__asm { je L_00991d27 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00991ca5 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00991ca7 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00991ca7 }
	__asm { L_00991ca5: }
	__asm { mov eax, edi }
	__asm { L_00991ca7: }
	__asm { test eax, eax }
	__asm { je L_00991d27 }
	__asm { push ebx }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00991d26 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00991d26 }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00991d26 }
	__asm { call fn_0052d5c0 }
	__asm { test eax, eax }
	__asm { je L_00991d26 }
	__asm { mov al, byte ptr [eax + 0xf8] }
	__asm { test al, al }
	__asm { je L_00991d26 }
	__asm { cmp dword ptr [edi + 0x6c], 0 }
	__asm { je L_00991d26 }
	__asm { push 0xe8d3f4 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [edi + 0x6c] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cfb81c }
	__asm { push eax }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00991d26 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00991d26: }
	__asm { pop ebx }
	__asm { L_00991d27: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_007930d0();
extern "C" void fn_00793430();
extern "C" void fn_007cb440();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00992850
extern "C" __declspec(naked) void asm_00992850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3d058 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_00992915 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], al }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_007930d0 }
	__asm { test al, al }
	__asm { je L_00992904 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x30], 0xf }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 0x44], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea edx, [ebp - 0x44] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { jb L_00992904 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00992904: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00992915 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00992915: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01232344[];
extern "C" char g_01301e89[];
extern "C" char g_01301e8b[];
extern "C" char g_01301e8d[];
extern "C" char g_01301e94[];
extern "C" void fn_004039a0();
extern "C" void fn_006b8a90();
extern "C" void fn_006b8a9c();
extern "C" void fn_0098c9b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cfb7ec();
// FUNCTION: ROBLOXSTUDIO 0x00992bb0
extern "C" __declspec(naked) void asm_00992bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd25830 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00992be9 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe8dec8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00992be9: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00992c9e }
	__asm { cmp byte ptr [g_01301e8d], 0 }
	__asm { je L_00992c5c }
	__asm { cmp byte ptr [g_01301e94], 0 }
	__asm { je L_00992c3a }
	__asm { push 0xe8c6dc }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cfb7ec }
	__asm { push eax }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00992c98 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { jmp L_00992c90 }
	__asm { L_00992c3a: }
	__asm { mov al, byte ptr [g_01301e89] }
	__asm { test al, al }
	__asm { je L_00992c98 }
	__asm { push dword ptr [g_01232344] }
	__asm { movzx eax, al }
	__asm { push 0xe8dedc }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { jmp L_00992c98 }
	__asm { L_00992c5c: }
	__asm { push 0xe8c6dc }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cfb7ec }
	__asm { push eax }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { jb L_00992c98 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { L_00992c90: }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00992c98: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00992c9e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e8b[];
extern "C" char g_01301e8d[];
extern "C" char g_01301e94[];
extern "C" void fn_006b8aae();
extern "C" void fn_007b4f50();
extern "C" void fn_00827c70();
extern "C" void fn_00990150();
extern "C" void fn_00991a90();
extern "C" void fn_00992570();
extern "C" void fn_00993b00();
// FUNCTION: ROBLOXSTUDIO 0x00993090
extern "C" __declspec(naked) void asm_00993090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_009930b8 }
	__asm { push 0 }
	__asm { push edi }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe8d938 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_009930b8: }
	__asm { cmp edi, -1 }
	__asm { je L_00993162 }
	__asm { test edi, edi }
	__asm { je L_00993155 }
	__asm { cmp edi, dword ptr [esi + 0xa4] }
	__asm { jle L_00993169 }
	__asm { push 0x130204c }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0xa0], edi }
	__asm { mov dword ptr [esi + 0xa4], edi }
	__asm { call fn_007b4f50 }
	__asm { cmp byte ptr [g_01301e8d], 0 }
	__asm { jne L_00993103 }
	__asm { mov ecx, esi }
	__asm { call fn_00992570 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00993103: }
	__asm { push esi }
	__asm { call fn_00827c70 }
	__asm { mov edi, eax }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00993132 }
	__asm { movzx ecx, byte ptr [g_01301e94] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe8d95c }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00993132: }
	__asm { test edi, edi }
	__asm { jne L_00993145 }
	__asm { cmp byte ptr [g_01301e94], 0 }
	__asm { je L_00993145 }
	__asm { dec dword ptr [esi + 0xa0] }
	__asm { L_00993145: }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov ecx, esi }
	__asm { call fn_00990150 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00993155: }
	__asm { mov ecx, esi }
	__asm { call fn_00991a90 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00993162: }
	__asm { mov ecx, esi }
	__asm { call fn_00993b00 }
	__asm { L_00993169: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01301e8d[];
extern "C" void fn_004039a0();
extern "C" void fn_007b4f50();
extern "C" void fn_0098c9b0();
extern "C" void fn_00994250();
extern "C" void fn_00cf6522();
extern "C" void fn_00cfb7fe();
extern "C" void fn_00cfb852();
// FUNCTION: ROBLOXSTUDIO 0x00993b83
extern "C" __declspec(naked) void asm_00993b83()
{
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00993b9b }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00993b9b: }
	__asm { push 0xe8d2b8 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [esi + 0x6c] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cfb7fe }
	__asm { push eax }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00993c7c }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_00993c7c }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [esi + 0x6c] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00cfb852 }
	__asm { push eax }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00993c26 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00993c26: }
	__asm { push 0xe8d2b8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004039a0 }
	__asm { mov eax, dword ptr [esi + 0x6c] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_00cfb7fe }
	__asm { push eax }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00993c6a }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00993c6a: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { L_00993c7c: }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { cmp byte ptr [g_01301e8d], 0 }
	__asm { jne L_00993c93 }
	__asm { mov ecx, esi }
	__asm { call fn_00994250 }
	__asm { L_00993c93: }
	__asm { cmp dword ptr [esi + 0xa4], -1 }
	__asm { je L_00993cbc }
	__asm { push 0x130204c }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0xa4], 0xffffffff }
	__asm { mov dword ptr [esi + 0xa0], 0xffffffff }
	__asm { call fn_007b4f50 }
	__asm { L_00993cbc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004028a0();
extern "C" void fn_004039a0();
extern "C" void fn_00892440();
extern "C" void fn_00892710();
extern "C" void fn_0098c9b0();
extern "C" void fn_0098cf70();
extern "C" void fn_00cfb834();
// FUNCTION: ROBLOXSTUDIO 0x00993eb0
extern "C" __declspec(naked) void asm_00993eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3d218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test byte ptr [esi + 0x9d], 1 }
	__asm { je L_00993f5f }
	__asm { mov ecx, dword ptr [esi + 0xac] }
	__asm { test ecx, ecx }
	__asm { je L_00993f5f }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00892440 }
	__asm { add eax, 0x24 }
	__asm { push eax }
	__asm { call fn_0098cf70 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00993f5f }
	__asm { mov ecx, dword ptr [esi + 0xac] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00892710 }
	__asm { push eax }
	__asm { call fn_0098cf70 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00993f5f }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cfb834 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00993f5e }
	__asm { push 0xe8d990 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_004039a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push esi }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_004028a0 }
	__asm { L_00993f5e: }
	__asm { pop ebx }
	__asm { L_00993f5f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01301e8b[];
extern "C" void fn_004038a0();
extern "C" void fn_006b8a90();
extern "C" void fn_0098c9b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cfb7b0();
// FUNCTION: ROBLOXSTUDIO 0x00993f70
extern "C" __declspec(naked) void asm_00993f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00993fa9 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe8cafc }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00993fa9: }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { je L_00994020 }
	__asm { push 0xd }
	__asm { push 0xe8cb20 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { fld dword ptr [esi + 0x90] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [esi + 0x8c] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [esi + 0x88] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_00cfb7b0 }
	__asm { push eax }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00994020 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00994020: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e8b[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_006b8a90();
extern "C" void fn_0098c9b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cfb7e0();
// FUNCTION: ROBLOXSTUDIO 0x00994190
extern "C" __declspec(naked) void asm_00994190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_009941c9 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe8cac0 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_009941c9: }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { je L_00994241 }
	__asm { push 0x98e4a0 }
	__asm { push 0x1302e1c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push 0x13 }
	__asm { push 0xe8cae8 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [esi + 0x68] }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x9c] }
	__asm { imul eax, eax, 0x7c }
	__asm { add eax, 0x1302278 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cfb7e0 }
	__asm { push eax }
	__asm { call fn_0098c9b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00994241 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00994241: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e8d[];
extern "C" char g_01301e95[];
extern "C" void fn_004226b0();
extern "C" void fn_0044e4c0();
extern "C" void fn_006b9e50();
extern "C" void fn_00827c10();
extern "C" void fn_00988e90();
extern "C" void fn_00993eb0();
// FUNCTION: ROBLOXSTUDIO 0x00994250
extern "C" __declspec(naked) void asm_00994250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { cmp byte ptr [g_01301e8d], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_0099432f }
	__asm { cmp dword ptr [esi + 0xac], 0 }
	__asm { je L_00994315 }
	__asm { test byte ptr [esi + 0x9d], 1 }
	__asm { je L_00994315 }
	__asm { cmp dword ptr [esi + 0x6c], 0 }
	__asm { je L_00994315 }
	__asm { cmp byte ptr [g_01301e95], 0 }
	__asm { jne L_00994315 }
	__asm { push esi }
	__asm { call fn_00827c10 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0099433c }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0xa8] }
	__asm { mov dword ptr [ebp - 0x20], 0x990e10 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_00988e90 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xb0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044e4c0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0099433c }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00994315: }
	__asm { lea ecx, [esi + 0xb0] }
	__asm { call fn_006b9e50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0099432f: }
	__asm { mov eax, dword ptr [esi + 0x6c] }
	__asm { test eax, eax }
	__asm { je L_0099433c }
	__asm { push eax }
	__asm { call fn_00993eb0 }
	__asm { L_0099433c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00405b90();
extern "C" void fn_007d8220();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00994800
extern "C" __declspec(naked) void asm_00994800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3d2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jb L_0099486b }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0099486b: }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x30], 0xf }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { lea ecx, [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007d8220 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_009948c4 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009948c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0096bc30();
// FUNCTION: ROBLOXSTUDIO 0x009956a0
extern "C" __declspec(naked) void asm_009956a0()
{
	__asm { L_009956a0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jge L_009956da }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [ecx + ecx*2] }
	__asm { lea edx, [eax + edx*4] }
	__asm { test edx, edx }
	__asm { je L_009956d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { L_009956d0: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009956da: }
	__asm { mov edx, dword ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, edx }
	__asm { jb L_00995712 }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { lea eax, [edx + eax*4] }
	__asm { cmp edi, eax }
	__asm { jae L_00995712 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call L_009956a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00995712: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0096bc30 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009954e0();
// FUNCTION: ROBLOXSTUDIO 0x00997180
extern "C" __declspec(naked) void asm_00997180()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x6c] }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp esi, eax }
	__asm { je L_00997254 }
	__asm { push edi }
	__asm { L_00997192: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { jne L_009971d7 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_009971bc }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_009971d7 }
	__asm { mov edi, edi }
	__asm { L_009971b0: }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_009971b0 }
	__asm { jmp L_009971d7 }
	__asm { L_009971bc: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_009971d5 }
	__asm { L_009971c5: }
	__asm { cmp esi, dword ptr [eax + 8] }
	__asm { jne L_009971d5 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_009971c5 }
	__asm { L_009971d5: }
	__asm { mov esi, eax }
	__asm { L_009971d7: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00997219 }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { jne L_00997219 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00997204 }
	__asm { push 0x2c }
	__asm { push 0xe78b18 }
	__asm { push 0xe78b60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00997219 }
	__asm { L_00997204: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe78b70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00997219: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0099724a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 0xf }
	__asm { jne L_0099724a }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0099724a }
	__asm { push edi }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov dword ptr [ebx + 0x34], edi }
	__asm { call fn_009954e0 }
	__asm { mov dword ptr [ebx + 0x34], 0 }
	__asm { L_0099724a: }
	__asm { cmp esi, dword ptr [ebx + 0x6c] }
	__asm { jne L_00997192 }
	__asm { pop edi }
	__asm { L_00997254: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
extern "C" void fn_00999f80();
// FUNCTION: ROBLOXSTUDIO 0x00997510
extern "C" __declspec(naked) void asm_00997510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { je L_009975a3 }
	__asm { test edi, edi }
	__asm { jne L_0099755b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00997546 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099755b }
	__asm { L_00997546: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099755b: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009975a3 }
	__asm { mov ecx, edi }
	__asm { call fn_00999f80 }
	__asm { cmp dword ptr [eax], -1 }
	__asm { je L_009975a3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099758e }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009975a3 }
	__asm { L_0099758e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009975a3: }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_00999f80 }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
extern "C" void fn_00999f80();
// FUNCTION: ROBLOXSTUDIO 0x009975d0
extern "C" __declspec(naked) void asm_009975d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_00999f80 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { je L_00997667 }
	__asm { test esi, esi }
	__asm { jns L_00997624 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099760f }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00997624 }
	__asm { L_0099760f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00997624: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00997667 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00997667 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00997652 }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00997667 }
	__asm { L_00997652: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00997667: }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edx + eax*4 - 4] }
	__asm { mov dword ptr [edx + esi*4], ecx }
	__asm { call fn_00999f80 }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { mov ecx, ebx }
	__asm { call fn_00999f80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5b980();
extern "C" void fn_00c11fa0();
// FUNCTION: ROBLOXSTUDIO 0x009986e0
extern "C" __declspec(naked) void asm_009986e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0099877f }
	__asm { cmp byte ptr [esi + 0x30], 0 }
	__asm { je L_0099872f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099871a }
	__asm { push 0x1c3 }
	__asm { push 0xe8e158 }
	__asm { push 0xe857f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099872f }
	__asm { L_0099871a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8e930 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099872f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0099877f }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b5b980 }
	__asm { cmp dword ptr [eax + 0xe0], 0 }
	__asm { jne L_0099877f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099876a }
	__asm { push 0x1c4 }
	__asm { push 0xe8e158 }
	__asm { push 0xe8e988 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099877f }
	__asm { L_0099876a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8e9b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099877f: }
	__asm { push dword ptr [esi + 0xb4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xa50350 }
	__asm { call fn_00c11fa0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a50350();
// FUNCTION: ROBLOXSTUDIO 0x00998ae0
extern "C" __declspec(naked) void asm_00998ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_00998b7b }
	__asm { cmp dword ptr [edi + 0xe0], 0 }
	__asm { jne L_00998b36 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00998b21 }
	__asm { push 0x1bc }
	__asm { push 0xe8e158 }
	__asm { push 0xe8e404 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00998b36 }
	__asm { L_00998b21: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8e880 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00998b36: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00998b7b }
	__asm { cmp byte ptr [esi + 0x30], 0 }
	__asm { je L_00998b7b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00998b66 }
	__asm { push 0x1bd }
	__asm { push 0xe8e158 }
	__asm { push 0xe857f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00998b7b }
	__asm { L_00998b66: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8e8d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00998b7b: }
	__asm { mov ecx, dword ptr [esi + 0xb4] }
	__asm { push edi }
	__asm { call fn_00a50350 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a50360();
// FUNCTION: ROBLOXSTUDIO 0x00998d30
extern "C" __declspec(naked) void asm_00998d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_00998dcb }
	__asm { cmp dword ptr [edi + 0xe0], 0 }
	__asm { jne L_00998d86 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00998d71 }
	__asm { push 0x1d0 }
	__asm { push 0xe8e158 }
	__asm { push 0xe8e404 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00998d86 }
	__asm { L_00998d71: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8ea20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00998d86: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00998dcb }
	__asm { cmp byte ptr [esi + 0x30], 0 }
	__asm { je L_00998dcb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00998db6 }
	__asm { push 0x1d1 }
	__asm { push 0xe8e158 }
	__asm { push 0xe857f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00998dcb }
	__asm { L_00998db6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8ea78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00998dcb: }
	__asm { mov ecx, dword ptr [esi + 0xb4] }
	__asm { push edi }
	__asm { call fn_00a50360 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
// FUNCTION: ROBLOXSTUDIO 0x009990a0
extern "C" __declspec(naked) void asm_009990a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00999142 }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x6c] }
	__asm { call fn_00410ef0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x6c] }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test cl, cl }
	__asm { je L_00999142 }
	__asm { cmp dword ptr [ebp + 8], 1 }
	__asm { je L_00999142 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00999131 }
	__asm { push 0x308 }
	__asm { push 0xe8e158 }
	__asm { push 0xe55f98 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00999142 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00999131: }
	__asm { movzx eax, cl }
	__asm { push 0xe8f008 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00999142: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004198d0();
extern "C" void fn_007943e0();
extern "C" void fn_00999f90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00999fe0
extern "C" __declspec(naked) void asm_00999fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3d700 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_007943e0 }
	__asm { test al, al }
	__asm { je L_0099a04f }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00999f90 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_0099a04f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_004198d0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b58300();
// FUNCTION: ROBLOXSTUDIO 0x0099a5e0
extern "C" __declspec(naked) void asm_0099a5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0099a62e }
	__asm { cmp byte ptr [edi + 0x14], 0 }
	__asm { je L_0099a62e }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_0099a61d }
	__asm { push 0x86 }
	__asm { push 0xe8fe18 }
	__asm { push 0xe8fea8 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099a62e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099a61d: }
	__asm { movzx eax, al }
	__asm { push 0xe90010 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099a62e: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [edi + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b58300 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0099a685 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jg L_0099a685 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099a674 }
	__asm { push 0x88 }
	__asm { push 0xe8fe18 }
	__asm { push 0xe90068 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099a685 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099a674: }
	__asm { movzx eax, al }
	__asm { push 0xe90080 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099a685: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038064[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099a5e0();
extern "C" void fn_00a21530();
extern "C" void fn_00a4f5c0();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x0099ab80
extern "C" __declspec(naked) void asm_0099ab80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59308 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00b5cbf0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0099a5e0 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a21530 }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0099ac26 }
	__asm { fld dword ptr [g_01038064] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_00a4f5c0 }
	__asm { test al, al }
	__asm { je L_0099ac26 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099ac11 }
	__asm { push 0x91 }
	__asm { push 0xe8fe18 }
	__asm { push 0xe900e8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099ac26 }
	__asm { L_0099ac11: }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { push 0xe90138 }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099ac26: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009994b0();
extern "C" void fn_00b5bd60();
// FUNCTION: ROBLOXSTUDIO 0x0099afb0
extern "C" __declspec(naked) void asm_0099afb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00b5bd60 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, eax }
	__asm { call fn_00b5bd60 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, eax }
	__asm { je L_0099b058 }
	__asm { test edi, edi }
	__asm { jne L_0099b015 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099b000 }
	__asm { push 0x1f9 }
	__asm { push 0xe90eb4 }
	__asm { push 0xe91cc0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099b015 }
	__asm { L_0099b000: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe91cd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099b015: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0099b058 }
	__asm { test ebx, ebx }
	__asm { jne L_0099b058 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099b043 }
	__asm { push 0x1fa }
	__asm { push 0xe90eb4 }
	__asm { push 0xe91d40 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099b058 }
	__asm { L_0099b043: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe91d58 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099b058: }
	__asm { mov ecx, dword ptr [esi + 0x108] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0099b0ac }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { cmp eax, 3 }
	__asm { je L_0099b08d }
	__asm { cmp eax, 1 }
	__asm { je L_0099b08d }
	__asm { cmp eax, 2 }
	__asm { je L_0099b08d }
	__asm { mov eax, dword ptr [ebx + 0x40] }
	__asm { cmp eax, 3 }
	__asm { je L_0099b08d }
	__asm { cmp eax, 1 }
	__asm { je L_0099b08d }
	__asm { cmp eax, 2 }
	__asm { jne L_0099b0ac }
	__asm { L_0099b08d: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_009994b0 }
	__asm { L_0099b0ac: }
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
extern "C" void fn_009994b0();
extern "C" void fn_00b5bd60();
// FUNCTION: ROBLOXSTUDIO 0x0099b0c0
extern "C" __declspec(naked) void asm_0099b0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00b5bd60 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, eax }
	__asm { call fn_00b5bd60 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, eax }
	__asm { je L_0099b168 }
	__asm { test edi, edi }
	__asm { jne L_0099b125 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099b110 }
	__asm { push 0x1f9 }
	__asm { push 0xe90eb4 }
	__asm { push 0xe91cc0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099b125 }
	__asm { L_0099b110: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe91cd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099b125: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0099b168 }
	__asm { test ebx, ebx }
	__asm { jne L_0099b168 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099b153 }
	__asm { push 0x1fa }
	__asm { push 0xe90eb4 }
	__asm { push 0xe91d40 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099b168 }
	__asm { L_0099b153: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe91d58 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099b168: }
	__asm { mov ecx, dword ptr [esi + 0x108] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0099b1bc }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { cmp eax, 3 }
	__asm { je L_0099b19d }
	__asm { cmp eax, 1 }
	__asm { je L_0099b19d }
	__asm { cmp eax, 2 }
	__asm { je L_0099b19d }
	__asm { mov eax, dword ptr [ebx + 0x40] }
	__asm { cmp eax, 3 }
	__asm { je L_0099b19d }
	__asm { cmp eax, 1 }
	__asm { je L_0099b19d }
	__asm { cmp eax, 2 }
	__asm { jne L_0099b1bc }
	__asm { L_0099b19d: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009994b0 }
	__asm { L_0099b1bc: }
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
// FUNCTION: ROBLOXSTUDIO 0x0099c9f0
extern "C" __declspec(naked) void asm_0099c9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_0099ca93 }
	__asm { cmp edi, dword ptr [esi + 8] }
	__asm { jl L_0099ca3f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099ca2a }
	__asm { push 0x35 }
	__asm { push 0xe66d58 }
	__asm { push 0xe66d9c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099ca3f }
	__asm { L_0099ca2a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe907c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099ca3f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0099ca93 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { cmp dword ptr [esi], ecx }
	__asm { jne L_0099ca58 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { L_0099ca58: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp ecx, dword ptr [eax + edi*4] }
	__asm { je L_0099ca93 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099ca7e }
	__asm { push 0x36 }
	__asm { push 0xe66d58 }
	__asm { push 0xe66da8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099ca93 }
	__asm { L_0099ca7e: }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { push 0xe90828 }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099ca93: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0099d0e0
extern "C" __declspec(naked) void asm_0099d0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { je L_0099d17e }
	__asm { test esi, esi }
	__asm { jne L_0099d135 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099d120 }
	__asm { push 0xe7 }
	__asm { push 0xe90eb4 }
	__asm { push 0xe91244 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099d135 }
	__asm { L_0099d120: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe91248 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099d135: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0099d17e }
	__asm { cmp edi, dword ptr [esi + 0xc] }
	__asm { je L_0099d183 }
	__asm { cmp edi, dword ptr [esi + 0x10] }
	__asm { je L_0099d17e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099d169 }
	__asm { push 0xe8 }
	__asm { push 0xe90eb4 }
	__asm { push 0xe91298 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099d17e }
	__asm { L_0099d169: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe912a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099d17e: }
	__asm { cmp edi, dword ptr [esi + 0xc] }
	__asm { jne L_0099d188 }
	__asm { L_0099d183: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { jmp L_0099d18b }
	__asm { L_0099d188: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { L_0099d18b: }
	__asm { lea ecx, [eax + 1] }
	__asm { cmp ecx, dword ptr [ebx + 8] }
	__asm { jge L_0099d1a0 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0099d1a0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x0099d900
extern "C" __declspec(naked) void asm_0099d900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0099d960 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [esi + 0xc] }
	__asm { jne L_0099d920 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { jmp L_0099d923 }
	__asm { L_0099d920: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { L_0099d923: }
	__asm { cmp eax, -1 }
	__asm { je L_0099d960 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099d94f }
	__asm { push 0xf1 }
	__asm { push 0xe90eb4 }
	__asm { push 0xe91304 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099d960 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0099d94f: }
	__asm { movzx eax, cl }
	__asm { push 0xe91320 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099d960: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { cmp eax, dword ptr [esi + 0xc] }
	__asm { jne L_0099d96f }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { jmp L_0099d972 }
	__asm { L_0099d96f: }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { L_0099d972: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0088fab0 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_0099d988 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { L_0099d988: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099d900();
// FUNCTION: ROBLOXSTUDIO 0x0099d9a0
extern "C" __declspec(naked) void asm_0099d9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esi + 0xc] }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_0099da36 }
	__asm { lea ecx, [ebx + 0xb8] }
	__asm { call fn_0099d900 }
	__asm { test edi, edi }
	__asm { je L_0099d9db }
	__asm { lea ecx, [edi + 0xb8] }
	__asm { push esi }
	__asm { call fn_0099d900 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0099d9db: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0099da4d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { test eax, eax }
	__asm { je L_0099da4d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 0xb }
	__asm { je L_0099da4d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099da1c }
	__asm { push 0x132 }
	__asm { push 0xe90eb4 }
	__asm { push 0xe91468 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099da4d }
	__asm { L_0099da1c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe914d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0099da36: }
	__asm { lea ecx, [ebx + 0x94] }
	__asm { call fn_0099d900 }
	__asm { lea ecx, [edi + 0x94] }
	__asm { push esi }
	__asm { call fn_0099d900 }
	__asm { L_0099da4d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099d0e0();
// FUNCTION: ROBLOXSTUDIO 0x0099dd50
extern "C" __declspec(naked) void asm_0099dd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_0099ddcb }
	__asm { mov edi, edi }
	__asm { L_0099dd60: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_0099dd7c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 1 }
	__asm { jl L_0099dd7c }
	__asm { cmp eax, 5 }
	__asm { jle L_0099ddd3 }
	__asm { L_0099dd7c: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_0099dd9d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 6 }
	__asm { jl L_0099dd98 }
	__asm { cmp eax, 9 }
	__asm { jle L_0099ddd3 }
	__asm { L_0099dd98: }
	__asm { cmp eax, 0xa }
	__asm { je L_0099ddd3 }
	__asm { L_0099dd9d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_0099ddb8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 0xb }
	__asm { je L_0099ddd3 }
	__asm { test eax, eax }
	__asm { je L_0099ddd3 }
	__asm { L_0099ddb8: }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [edi + 0xb8] }
	__asm { call fn_0099d0e0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_0099dd60 }
	__asm { L_0099ddcb: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0099ddd3: }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x1c] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099de60();
// FUNCTION: ROBLOXSTUDIO 0x0099dfa0
extern "C" __declspec(naked) void asm_0099dfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esi + 0xc] }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_0099e036 }
	__asm { lea ecx, [ebx + 0xb8] }
	__asm { call fn_0099de60 }
	__asm { test edi, edi }
	__asm { je L_0099dfdb }
	__asm { lea ecx, [edi + 0xb8] }
	__asm { push esi }
	__asm { call fn_0099de60 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0099dfdb: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0099e04d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { test eax, eax }
	__asm { je L_0099e04d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 0xb }
	__asm { je L_0099e04d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099e01c }
	__asm { push 0x14b }
	__asm { push 0xe90eb4 }
	__asm { push 0xe91468 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099e04d }
	__asm { L_0099e01c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe91598 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0099e036: }
	__asm { lea ecx, [ebx + 0x94] }
	__asm { call fn_0099de60 }
	__asm { lea ecx, [edi + 0x94] }
	__asm { push esi }
	__asm { call fn_0099de60 }
	__asm { L_0099e04d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00914100();
extern "C" void fn_009988f0();
extern "C" void fn_00998970();
extern "C" void fn_00ba9d40();
// FUNCTION: ROBLOXSTUDIO 0x0099e080
extern "C" __declspec(naked) void asm_0099e080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x104] }
	__asm { cmp byte ptr [eax + 0x38], bl }
	__asm { je L_0099e11f }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { test ecx, ecx }
	__asm { je L_0099e0ae }
	__asm { push esi }
	__asm { call fn_00998970 }
	__asm { mov edi, eax }
	__asm { L_0099e0ae: }
	__asm { lea ecx, [esi + 0x34] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi + 0x104] }
	__asm { push ebx }
	__asm { call fn_00ba9d40 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0099e10e }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_0099e10e }
	__asm { mov ecx, esi }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { je L_0099e10e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099e0f9 }
	__asm { push 0x2e7 }
	__asm { push 0xe90eb4 }
	__asm { push 0xe919b0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099e10e }
	__asm { L_0099e0f9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe919d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099e10e: }
	__asm { test edi, edi }
	__asm { je L_0099e11e }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { push edi }
	__asm { call fn_009988f0 }
	__asm { L_0099e11e: }
	__asm { pop edi }
	__asm { L_0099e11f: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_006d19a0();
extern "C" void fn_00898ee0();
extern "C" void fn_0099e5c0();
// FUNCTION: ROBLOXSTUDIO 0x0099e130
extern "C" __declspec(naked) void asm_0099e130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x104] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { lea esi, [edi + 0x1c] }
	__asm { push esi }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00898ee0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0099e185 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_0099e185: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0xd4] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [edi + 0xd8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0xdc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0xe0] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0xe4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0xe8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0099e5c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_006d19a0();
extern "C" void fn_00898ee0();
extern "C" void fn_0099e5c0();
// FUNCTION: ROBLOXSTUDIO 0x0099ea90
extern "C" __declspec(naked) void asm_0099ea90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x104] }
	__asm { push edi }
	__asm { lea edi, [esi + 0x1c] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00898ee0 }
	__asm { add esi, 0xa4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0099eaeb }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_0099eaeb: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0099e5c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_005aa650();
extern "C" void fn_006dce00();
extern "C" void fn_00898ee0();
// FUNCTION: ROBLOXSTUDIO 0x0099eb70
extern "C" __declspec(naked) void asm_0099eb70()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b968 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { sub esp, 0x58 }
	__asm { mov eax, dword ptr [ecx + 0x100] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_0099ec08 }
	__asm { mov esi, dword ptr [ecx + 0x104] }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { lea edi, [esi + 0x1c] }
	__asm { push edi }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00898ee0 }
	__asm { lea ecx, [esi + 0xa4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0099ebeb }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_0099ebeb: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_006dce00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_005aa650 }
	__asm { L_0099ec08: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012e4c58[];
extern "C" char g_0131c7b4[];
extern "C" void fn_004212b0();
extern "C" void fn_007cbf10();
extern "C" void fn_008a5310();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0099efd0
extern "C" __declspec(naked) void asm_0099efd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3d9c6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_0099effc }
	__asm { mov dword ptr [esi + 0x68], 0xe6679c }
	__asm { L_0099effc: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008a5310 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe91dd4 }
	__asm { mov dword ptr [esi + 4], 0xe91e5c }
	__asm { mov dword ptr [esi + 0x18], 0xe91e64 }
	__asm { mov dword ptr [esi + 0x1c], 0xe91e70 }
	__asm { mov dword ptr [esi + 0x64], 0xe91e80 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe91e88 }
	__asm { mov eax, dword ptr [g_0131c7b4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0099f08e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c7b4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe91dc4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004212b0 }
	__asm { push eax }
	__asm { mov ecx, 0x131c7b8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde910 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0099f08e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131c7b8 }
	__asm { inc dword ptr [g_012e4c58] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_0088bd20();
extern "C" void fn_0099f4d0();
// FUNCTION: ROBLOXSTUDIO 0x0099f330
extern "C" __declspec(naked) void asm_0099f330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3d9eb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_0099f4d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe92198 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_0088bd20 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0099f3e4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0099f3e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5be0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_0099f4d0();
// FUNCTION: ROBLOXSTUDIO 0x0099f400
extern "C" __declspec(naked) void asm_0099f400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3da1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_0099f4d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe92154 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5be0 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0099f4b4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0099f4b4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c7b4[];
extern "C" void fn_004212b0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0099f4d0
extern "C" __declspec(naked) void asm_0099f4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3da46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131c7b4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0099f54a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c7b4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe91dc4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004212b0 }
	__asm { push eax }
	__asm { mov ecx, 0x131c7b8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde910 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0099f54a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131c7b8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe92120 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0099f5c2 }
	__asm { push 0x12d1e20 }
	__asm { mov ecx, 0x12d1e20 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0099f5c2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0099f5ad }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099f5c2 }
	__asm { L_0099f5ad: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099f5c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006bc950();
extern "C" void fn_006da0e0();
extern "C" void fn_0099efd0();
// FUNCTION: ROBLOXSTUDIO 0x0099f5e0
extern "C" __declspec(naked) void asm_0099f5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3da7f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_0099f616 }
	__asm { mov dword ptr [esi + 0x68], 0xe95614 }
	__asm { mov dword ptr [esi + 0x88], 0xe9561c }
	__asm { L_0099f616: }
	__asm { push 0 }
	__asm { push 0xe91dc4 }
	__asm { call fn_0099efd0 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe91e94 }
	__asm { mov dword ptr [esi + 4], 0xe91f1c }
	__asm { mov dword ptr [esi + 0x18], 0xe91f24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe91f30 }
	__asm { mov dword ptr [esi + 0x64], 0xe91f40 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe91f48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x70], 0xffffffff }
	__asm { mov dword ptr [esi + 0x74], 0xffffffff }
	__asm { mov dword ptr [esi + 0x78], 0xffffffff }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { push 0x1303690 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x94], 0x41200000 }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe91f54 }
	__asm { mov dword ptr [esi + 4], 0xe91fdc }
	__asm { mov dword ptr [esi + 0x18], 0xe91fe4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe91ff0 }
	__asm { mov dword ptr [esi + 0x64], 0xe92000 }
	__asm { mov dword ptr [esi + 0x6c], 0xe92008 }
	__asm { mov dword ptr [esi + 0x84], 0xe9203c }
	__asm { mov dword ptr [esi + 0x98], 0xe92068 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe92070 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xc4] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov byte ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], 0 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { lea ecx, [esi + 0xac] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006da0e0 }
	__asm { lea ecx, [esi + 0xdc] }
	__asm { call fn_006da0e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x10c], 0 }
	__asm { mov dword ptr [esi + 0x110], 0 }
	__asm { mov dword ptr [esi + 0x114], 0 }
	__asm { mov word ptr [esi + 0x118], 0x101 }
	__asm { mov dword ptr [esi + 0x11c], 0 }
	__asm { mov dword ptr [esi + 0x120], 0 }
	__asm { mov dword ptr [esi + 0x124], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
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
extern "C" void fn_0099f170();
// FUNCTION: ROBLOXSTUDIO 0x009a0000
extern "C" __declspec(naked) void asm_009a0000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3dc0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dce94] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009a007d }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce94], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006dea00 }
	__asm { mov esi, eax }
	__asm { call fn_006dea00 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [g_012dce7c], edx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [g_012dce80], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [g_012dce84], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [g_012dce88], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [g_012dce8c], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [g_012dce90], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_009a0083 }
	__asm { L_009a007d: }
	__asm { mov edx, dword ptr [g_012dce7c] }
	__asm { L_009a0083: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], edx }
	__asm { mov eax, dword ptr [g_012dce80] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [g_012dce84] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [g_012dce88] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [g_012dce8c] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [g_012dce90] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x18], 0x9a2080 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_0099f170 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_007b8720();
// FUNCTION: ROBLOXSTUDIO 0x009a05f0
extern "C" __declspec(naked) void asm_009a05f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_009a060a }
	__asm { add eax, -0x1c }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_009a0611 }
	__asm { L_009a060a: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_009a0611: }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_007b8720 }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov edi, dword ptr [edi + 0x30] }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ecx + 0x68] }
	__asm { mov eax, dword ptr [eax + edi] }
	__asm { add eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, eax }
	__asm { call dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f954[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009a0ee0
extern "C" __declspec(naked) void asm_009a0ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 8 }
	__asm { test al, al }
	__asm { je L_009a0f48 }
	__asm { cmp dword ptr [g_0131f954], 0x29a }
	__asm { je L_009a0f48 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009a0f37 }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009a0f48 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009a0f37: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009a0f48: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe92230 }
	__asm { call fn_007cb250 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { test al, 1 }
	__asm { jne L_009a0fad }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009a0fad: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0x131fab4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009a18f0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x009a12e0
extern "C" __declspec(naked) void asm_009a12e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x1233b8c }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_009a138a }
	__asm { mov ecx, dword ptr [edi + 0x120] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x11c] }
	__asm { cmp esi, ecx }
	__asm { je L_009a1323 }
	__asm { L_009a1318: }
	__asm { cmp dword ptr [esi], eax }
	__asm { je L_009a1323 }
	__asm { add esi, 4 }
	__asm { cmp esi, ecx }
	__asm { jne L_009a1318 }
	__asm { L_009a1323: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009a1368 }
	__asm { cmp esi, ecx }
	__asm { jne L_009a1368 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009a1357 }
	__asm { push 0xe4 }
	__asm { push 0xe92388 }
	__asm { push 0xe923d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009a1368 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009a1357: }
	__asm { movzx eax, al }
	__asm { push 0xe923f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009a1368: }
	__asm { mov eax, dword ptr [edi + 0x120] }
	__asm { lea ecx, [esi + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [edi + 0x120], -4 }
	__asm { pop esi }
	__asm { L_009a138a: }
	__asm { mov ecx, edi }
	__asm { call fn_009a18f0 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e6a9d4[];
extern "C" char g_0131a8e4[];
extern "C" char g_0131c7b4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009a18f0
extern "C" __declspec(naked) void asm_009a18f0()
{
	__asm { L_009a18f0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dc8c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x38] }
	__asm { push edi }
	__asm { mov word ptr [ecx + 0x118], 0x101 }
	__asm { test esi, esi }
	__asm { je L_009a1a12 }
	__asm { L_009a191f: }
	__asm { lea edi, [esi + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_009a19f2 }
	__asm { mov eax, dword ptr [g_0131c7b4] }
	__asm { test al, 1 }
	__asm { jne L_009a19da }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c7b4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { mov eax, dword ptr [g_0131a8e4] }
	__asm { test al, 1 }
	__asm { jne L_009a19b2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a8e4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e6a9d4] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131a8e8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_009a19b2: }
	__asm { push 0xe91dc4 }
	__asm { push 0x131a8e8 }
	__asm { mov ecx, 0x131c7b8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde910 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009a19da: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push 0x131c7b8 }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009a19f2 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { jne L_009a1a0d }
	__asm { L_009a19f2: }
	__asm { mov esi, dword ptr [esi + 0x38] }
	__asm { test esi, esi }
	__asm { jne L_009a191f }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009a1a0d: }
	__asm { call L_009a18f0 }
	__asm { L_009a1a12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012efe14[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_009a27f0();
extern "C" void fn_009a2910();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009a2390
extern "C" __declspec(naked) void asm_009a2390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dcc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009a27f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012efe14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009a244f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efe14], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9262c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12efce8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009a244f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12efce8 }
	__asm { call fn_009a2910 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe927bc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009a24cd }
	__asm { push 0x1233fd0 }
	__asm { mov ecx, 0x1233fd0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009a24cd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009a24b8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009a24cd }
	__asm { L_009a24b8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009a24cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_013036c4[];
extern "C" char g_013036c8[];
extern "C" char g_013036cc[];
extern "C" char g_013036d0[];
extern "C" void fn_00403540();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009a24e0
extern "C" __declspec(naked) void asm_009a24e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013036d0] }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009a253c }
	__asm { or eax, 1 }
	__asm { push 0xdf71a0 }
	__asm { mov dword ptr [g_013036d0], eax }
	__asm { mov dword ptr [g_013036c4], 0x1233fec }
	__asm { mov dword ptr [g_013036cc], 0x98cf00 }
	__asm { mov dword ptr [g_013036c8], 0x8846b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009a253c: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, 0x13036c4 }
	__asm { jne L_009a2564 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_009a255c }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_009a255c: }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jmp L_009a25ba }
	__asm { L_009a2564: }
	__asm { test ecx, ecx }
	__asm { je L_009a257a }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_009a257a: }
	__asm { lea ebx, [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_009a25b4 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { L_009a25b4: }
	__asm { mov dword ptr [edi], 0x13036c4 }
	__asm { L_009a25ba: }
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

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_009a25d0();
extern "C" void fn_00b08ee0();
// FUNCTION: ROBLOXSTUDIO 0x009a26c0
extern "C" __declspec(naked) void asm_009a26c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dcf1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x1233fec }
	__asm { je L_009a279c }
	__asm { push eax }
	__asm { mov ecx, 0x1233fec }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009a279c }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009a272d }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_009a272d: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00b08ee0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009a27d0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
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
	__asm { L_009a279c: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_009a25d0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { L_009a27d0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_00b09170();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a2910
extern "C" __declspec(naked) void asm_009a2910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b09170 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe92780 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_009a29a7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009a2996 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_009a2996: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009a29a7 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_009a29a7: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a2de0
extern "C" __declspec(naked) void asm_009a2de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3cd98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_009a2e10 }
	__asm { add eax, -0x1c }
	__asm { jmp L_009a2e12 }
	__asm { L_009a2e10: }
	__asm { xor eax, eax }
	__asm { L_009a2e12: }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov esi, eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { jb L_009a2e62 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a2e62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x009a3560
extern "C" __declspec(naked) void asm_009a3560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f096c }
	__asm { mov edi, ecx }
	__asm { push 0xe92964 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59940 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe9297c }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xf133d4 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe92984 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_009a34a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a36a0
extern "C" __declspec(naked) void asm_009a36a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3de80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009a34a0 }
	__asm { mov dword ptr [esi], 0xe928cc }
	__asm { mov dword ptr [esi + 4], 0xe92944 }
	__asm { mov dword ptr [esi + 0x18], 0xe9294c }
	__asm { mov dword ptr [esi + 0x1c], 0xe92958 }
	__asm { mov dword ptr [esi + 0x64], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x68], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x6c], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x70], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x74], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x78], 0x3f800000 }
	__asm { push 4 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { push 0xe6b704 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x88], 2 }
	__asm { mov dword ptr [esi + 0x8c], 2 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_009a3782 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a3782: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009a3e80
extern "C" __declspec(naked) void asm_009a3e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe93650 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe937e0 }
	__asm { mov dword ptr [esi + 8], 0xe937f0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009a3f2a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009a3f16 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009a3f16: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009a3f2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009a3f40
extern "C" __declspec(naked) void asm_009a3f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe93630 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe93780 }
	__asm { mov dword ptr [esi + 8], 0xe93790 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009a3fea }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009a3fd6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009a3fd6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009a3fea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009a4000
extern "C" __declspec(naked) void asm_009a4000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe93640 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe937b0 }
	__asm { mov dword ptr [esi + 8], 0xe937c0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009a40aa }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009a4096 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009a4096: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009a40aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009a40c0
extern "C" __declspec(naked) void asm_009a40c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe93620 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe93750 }
	__asm { mov dword ptr [esi + 8], 0xe93760 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009a416a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_009a4156 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009a4156: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009a416a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009a5890();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x009a4210
extern "C" __declspec(naked) void asm_009a4210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, esi }
	__asm { call fn_009a5890 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009a428b }
	__asm { test al, 1 }
	__asm { jne L_009a4284 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009a4284 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009a4284: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_009a428b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009a42b2 }
	__asm { test al, 1 }
	__asm { jne L_009a42b2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009a42b2 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009a42b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a4da0
extern "C" __declspec(naked) void asm_009a4da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { mov ebx, ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { mov al, byte ptr [ebx + 4] }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { mov byte ptr [ebp + 0x10], al }
	__asm { push dword ptr [esi] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add ecx, ebx }
	__asm { call eax }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_009a4e3f }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a4e3f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040c260();
extern "C" void fn_0095b950();
extern "C" void fn_009a9600();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009a5730
extern "C" __declspec(naked) void asm_009a5730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3dfcb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_009a57bb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_0095b950 }
	__asm { push 0x30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_009a57a4 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_0095b950 }
	__asm { jmp L_009a57a6 }
	__asm { L_009a57a4: }
	__asm { xor esi, esi }
	__asm { L_009a57a6: }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009a9600 }
	__asm { mov bl, 1 }
	__asm { jmp L_009a57bd }
	__asm { L_009a57bb: }
	__asm { xor bl, bl }
	__asm { L_009a57bd: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009a9600 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_0095b950();
extern "C" void fn_009a5730();
extern "C" void fn_009a9600();
// FUNCTION: ROBLOXSTUDIO 0x009a57e0
extern "C" __declspec(naked) void asm_009a57e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_0095b950 }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_0095b950 }
	__asm { mov esi, 0xe93814 }
	__asm { mov ecx, esi }
	__asm { call fn_009a5730 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009a9600 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009a9600 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x009a5890
extern "C" __declspec(naked) void asm_009a5890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00b25b30 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b25b30 }
	__asm { mov esi, 0xe93844 }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009a591a }
	__asm { test cl, 1 }
	__asm { jne L_009a5913 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_009a5913 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009a5913: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_009a591a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009a594a }
	__asm { test al, 1 }
	__asm { jne L_009a594a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009a594a }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009a594a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x009a6310
extern "C" __declspec(naked) void asm_009a6310()
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
	__asm { je L_009a635b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009a635b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_009a63ae }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe936c0 }
	__asm { mov dword ptr [esi + 8], 0xe936d0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe936d8 }
	__asm { mov dword ptr [esi + 8], 0xe936e8 }
	__asm { jmp L_009a63b0 }
	__asm { L_009a63ae: }
	__asm { xor esi, esi }
	__asm { L_009a63b0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009a63cd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009a63cd: }
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
extern "C" void fn_009af260();
// FUNCTION: ROBLOXSTUDIO 0x009a6420
extern "C" __declspec(naked) void asm_009a6420()
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
	__asm { je L_009a646b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_009a646b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_009a64be }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe93658 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe93720 }
	__asm { mov dword ptr [esi + 8], 0xe93730 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe93738 }
	__asm { mov dword ptr [esi + 8], 0xe93748 }
	__asm { jmp L_009a64c0 }
	__asm { L_009a64be: }
	__asm { xor esi, esi }
	__asm { L_009a64c0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009af260 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_009a64dd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_009a64dd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
