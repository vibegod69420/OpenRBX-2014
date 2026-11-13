// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00af3f10
extern "C" __declspec(naked) void asm_00af3f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0xb0 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00afadd0
extern "C" __declspec(naked) void asm_00afadd0()
{
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00afade4 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_00afade4: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_00afadef }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00afadef: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00afadf8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00afadf8: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00afae00
extern "C" __declspec(naked) void asm_00afae00()
{
	__asm { push esi }
	__asm { push 0x10 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00afae19 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00afae19: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_00afae28 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00afae28: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00afae33 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00afae33: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00afae40
extern "C" __declspec(naked) void asm_00afae40()
{
	__asm { push esi }
	__asm { push 0x1c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00afae59 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00afae59: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_00afae68 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00afae68: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00afae73 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00afae73: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_009a6860();
// FUNCTION: ROBLOXSTUDIO 0x00afb9d0
extern "C" __declspec(naked) void asm_00afb9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00afb9fe }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009a6860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00afb9fe: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009c4650();
// FUNCTION: ROBLOXSTUDIO 0x00afba10
extern "C" __declspec(naked) void asm_00afba10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00afba3e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009c4650 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00afba3e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00af7340();
// FUNCTION: ROBLOXSTUDIO 0x00afba50
extern "C" __declspec(naked) void asm_00afba50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00afba7e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00af7340 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00afba7e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00afc3b0();
// FUNCTION: ROBLOXSTUDIO 0x00afc380
extern "C" __declspec(naked) void asm_00afc380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00afc39b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00afc3b0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00afc39b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00afc3b0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00af57e0();
// FUNCTION: ROBLOXSTUDIO 0x00afdde0
extern "C" __declspec(naked) void asm_00afdde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { call fn_00af57e0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00afe030();
// FUNCTION: ROBLOXSTUDIO 0x00afde10
extern "C" __declspec(naked) void asm_00afde10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00afde33 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00afe030 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00afde33: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1278ad8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00afe180();
// FUNCTION: ROBLOXSTUDIO 0x00afde50
extern "C" __declspec(naked) void asm_00afde50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00afde73 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00afe180 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00afde73: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1278d50 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00afe2e0();
// FUNCTION: ROBLOXSTUDIO 0x00afde90
extern "C" __declspec(naked) void asm_00afde90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00afdeb3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00afe2e0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00afdeb3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1278b38 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00afe470();
// FUNCTION: ROBLOXSTUDIO 0x00afded0
extern "C" __declspec(naked) void asm_00afded0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00afdef3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00afe470 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00afdef3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1278e28 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aff6d0();
// FUNCTION: ROBLOXSTUDIO 0x00b06760
extern "C" __declspec(naked) void asm_00b06760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_00aff6d0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b06a10();
// FUNCTION: ROBLOXSTUDIO 0x00b068d0
extern "C" __declspec(naked) void asm_00b068d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b068f3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b06a10 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b068f3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x127ab78 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b06b30();
// FUNCTION: ROBLOXSTUDIO 0x00b06910
extern "C" __declspec(naked) void asm_00b06910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b06933 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b06b30 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b06933: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x127b4b0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b06c80();
// FUNCTION: ROBLOXSTUDIO 0x00b06950
extern "C" __declspec(naked) void asm_00b06950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b06973 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b06c80 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b06973: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x127b2b8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b06dd0();
// FUNCTION: ROBLOXSTUDIO 0x00b06990
extern "C" __declspec(naked) void asm_00b06990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b069b3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b06dd0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b069b3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x127ad78 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b06f30();
// FUNCTION: ROBLOXSTUDIO 0x00b069d0
extern "C" __declspec(naked) void asm_00b069d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b069f3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b06f30 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b069f3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x127a910 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b08c90
extern "C" __declspec(naked) void asm_00b08c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { jb L_00b08cb7 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b08cb7: }
	__asm { lea eax, [esi + 0x1c] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a5d310();
// FUNCTION: ROBLOXSTUDIO 0x00b0b530
extern "C" __declspec(naked) void asm_00b0b530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { call dword ptr [eax + 0xa8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 0xb8] }
	__asm { call fn_00a5d310 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x00b0c5b0
extern "C" __declspec(naked) void asm_00b0c5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x88], al }
	__asm { je L_00b0c5d9 }
	__asm { push 0x130d8d0 }
	__asm { mov byte ptr [esi + 0x88], al }
	__asm { call fn_007b4f50 }
	__asm { lea ecx, [esi + 0x68] }
	__asm { call fn_00d09250 }
	__asm { L_00b0c5d9: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b11b40();
extern "C" void fn_00b7f950();
// FUNCTION: ROBLOXSTUDIO 0x00b12190
extern "C" __declspec(naked) void asm_00b12190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00b7f950 }
	__asm { mov esi, eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b121b4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b11b40 }
	__asm { mov eax, esi }
	__asm { L_00b121b4: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b148b0();
// FUNCTION: ROBLOXSTUDIO 0x00b147f0
extern "C" __declspec(naked) void asm_00b147f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b14813 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b148b0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b14813: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x127e3b8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b149c0();
// FUNCTION: ROBLOXSTUDIO 0x00b14830
extern "C" __declspec(naked) void asm_00b14830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b14853 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b149c0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b14853: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x127e290 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b14ad0();
// FUNCTION: ROBLOXSTUDIO 0x00b14870
extern "C" __declspec(naked) void asm_00b14870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b14893 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b14ad0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b14893: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x127e158 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4790();
extern "C" void fn_00c363b0();
// FUNCTION: ROBLOXSTUDIO 0x00b16ad0
extern "C" __declspec(naked) void asm_00b16ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_007b4790 }
	__asm { cmp byte ptr [esi + 0xa0], 0 }
	__asm { jne L_00b16b00 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00c363b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00b16b00 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x88] }
	__asm { L_00b16b00: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4a10();
extern "C" void fn_00cf67f8();
extern "C" void fn_00d08c90();
// FUNCTION: ROBLOXSTUDIO 0x00b181d0
extern "C" __declspec(naked) void asm_00b181d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_007b4a10 }
	__asm { push 0 }
	__asm { push 0x11edc30 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00b18207 }
	__asm { mov ecx, dword ptr [edi + 0x90] }
	__asm { push eax }
	__asm { call fn_00d08c90 }
	__asm { L_00b18207: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00adee70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b19480
extern "C" __declspec(naked) void asm_00b19480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b194b1 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00adee70 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [edi + 4] }
	__asm { L_00b194b1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c2bee0();
extern "C" void fn_00c30dc0();
// FUNCTION: ROBLOXSTUDIO 0x00b1a070
extern "C" __declspec(naked) void asm_00b1a070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00b1a0a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b1a091 }
	__asm { cmp eax, 1 }
	__asm { jne L_00b1a0a0 }
	__asm { L_00b1a091: }
	__asm { push esi }
	__asm { call fn_00c30dc0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xb0], eax }
	__asm { L_00b1a0a0: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00b1c410
extern "C" __declspec(naked) void asm_00b1c410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0x294 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00b1c560
extern "C" __declspec(naked) void asm_00b1c560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x290], eax }
	__asm { je L_00b1c58b }
	__asm { push 0x130e064 }
	__asm { mov dword ptr [esi + 0x290], eax }
	__asm { call fn_007b4f50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xa4] }
	__asm { L_00b1c58b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00b1c790();
// FUNCTION: ROBLOXSTUDIO 0x00b1c760
extern "C" __declspec(naked) void asm_00b1c760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b1c790 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00b1c8a0();
// FUNCTION: ROBLOXSTUDIO 0x00b1c870
extern "C" __declspec(naked) void asm_00b1c870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b1c8a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00b1ebc0();
// FUNCTION: ROBLOXSTUDIO 0x00b1eb90
extern "C" __declspec(naked) void asm_00b1eb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b1ebc0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00b1ecd0();
// FUNCTION: ROBLOXSTUDIO 0x00b1eca0
extern "C" __declspec(naked) void asm_00b1eca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b1ecd0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00b1ede0();
// FUNCTION: ROBLOXSTUDIO 0x00b1edb0
extern "C" __declspec(naked) void asm_00b1edb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b1ede0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00b1eef0();
// FUNCTION: ROBLOXSTUDIO 0x00b1eec0
extern "C" __declspec(naked) void asm_00b1eec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b1eef0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00b1efd0();
// FUNCTION: ROBLOXSTUDIO 0x00b1efa0
extern "C" __declspec(naked) void asm_00b1efa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b1efd0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00b1f0b0();
// FUNCTION: ROBLOXSTUDIO 0x00b1f080
extern "C" __declspec(naked) void asm_00b1f080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b1f0b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b20b70
extern "C" __declspec(naked) void asm_00b20b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { sub esp, 0xc }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { add ecx, dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00b20bd0
extern "C" __declspec(naked) void asm_00b20bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x10 }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { add ecx, dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00b206f0();
// FUNCTION: ROBLOXSTUDIO 0x00b20c10
extern "C" __declspec(naked) void asm_00b20c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x10 }
	__asm { add ecx, 0x10 }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b206f0 }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00b1eec0();
// FUNCTION: ROBLOXSTUDIO 0x00b20c40
extern "C" __declspec(naked) void asm_00b20c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b20c6e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b1eec0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00b20c6e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00b1efa0();
// FUNCTION: ROBLOXSTUDIO 0x00b20c80
extern "C" __declspec(naked) void asm_00b20c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b20cae }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b1efa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00b20cae: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00b1f080();
// FUNCTION: ROBLOXSTUDIO 0x00b20cc0
extern "C" __declspec(naked) void asm_00b20cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b20cee }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b1f080 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00b20cee: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00b21400();
// FUNCTION: ROBLOXSTUDIO 0x00b21370
extern "C" __declspec(naked) void asm_00b21370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b2138b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b21400 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b2138b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00b21400 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b21790();
// FUNCTION: ROBLOXSTUDIO 0x00b213a0
extern "C" __declspec(naked) void asm_00b213a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b213bb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b21790 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b213bb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00b21790 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b21b20();
// FUNCTION: ROBLOXSTUDIO 0x00b213d0
extern "C" __declspec(naked) void asm_00b213d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b213eb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b21b20 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b213eb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00b21b20 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b222e0
extern "C" __declspec(naked) void asm_00b222e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_00b2230b }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub esp, 0xc }
	__asm { add ecx, 8 }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { call dword ptr [eax] }
	__asm { L_00b2230b: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b22310
extern "C" __declspec(naked) void asm_00b22310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_00b22342 }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub esp, 0x10 }
	__asm { add ecx, 8 }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { call dword ptr [eax] }
	__asm { L_00b22342: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b224f0();
// FUNCTION: ROBLOXSTUDIO 0x00b231c0
extern "C" __declspec(naked) void asm_00b231c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 8 }
	__asm { fst qword ptr [esi + 0x90] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00b224f0 }
	__asm { fstp qword ptr [esi + 0x98] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fadd dword ptr [ebp + 0x10] }
	__asm { fstp qword ptr [esi + 0xa0] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp qword ptr [esi + 0xa8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00b23b30();
extern "C" void fn_00b26510();
// FUNCTION: ROBLOXSTUDIO 0x00b24220
extern "C" __declspec(naked) void asm_00b24220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b26510 }
	__asm { mov esi, eax }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00b24244 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00b23b30 }
	__asm { mov eax, esi }
	__asm { L_00b24244: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b26510
extern "C" __declspec(naked) void asm_00b26510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x2c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00b26527 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00b26527: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_00b26534 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_00b26537 }
	__asm { L_00b26534: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00b26537: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00b26542 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00b26542: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b27e30();
// FUNCTION: ROBLOXSTUDIO 0x00b27ac0
extern "C" __declspec(naked) void asm_00b27ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b27ae3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b27e30 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b27ae3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1283a40 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b28d60();
// FUNCTION: ROBLOXSTUDIO 0x00b28e20
extern "C" __declspec(naked) void asm_00b28e20()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b28d60 }
	__asm { mov dword ptr [esi], 0xec6cbc }
	__asm { mov dword ptr [esi + 4], 0xec6d58 }
	__asm { mov dword ptr [esi + 0x18], 0xec6d60 }
	__asm { mov dword ptr [esi + 0x1c], 0xec6d6c }
	__asm { mov dword ptr [esi + 0x64], 0xec6d7c }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b2ac20();
// FUNCTION: ROBLOXSTUDIO 0x00b2ffe0
extern "C" __declspec(naked) void asm_00b2ffe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b3000e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b2ac20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00b3000e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00b2acd0();
// FUNCTION: ROBLOXSTUDIO 0x00b30020
extern "C" __declspec(naked) void asm_00b30020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b3004e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b2acd0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00b3004e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00b2ad80();
// FUNCTION: ROBLOXSTUDIO 0x00b30060
extern "C" __declspec(naked) void asm_00b30060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b3008e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b2ad80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00b3008e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00b31240();
// FUNCTION: ROBLOXSTUDIO 0x00b31180
extern "C" __declspec(naked) void asm_00b31180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b3119b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b31240 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b3119b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00b31240 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00558b00();
// FUNCTION: ROBLOXSTUDIO 0x00b311b0
extern "C" __declspec(naked) void asm_00b311b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b311cb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00558b00 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b311cb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00558b00 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b315d0();
// FUNCTION: ROBLOXSTUDIO 0x00b311e0
extern "C" __declspec(naked) void asm_00b311e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b311fb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b315d0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b311fb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00b315d0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b31960();
// FUNCTION: ROBLOXSTUDIO 0x00b31210
extern "C" __declspec(naked) void asm_00b31210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b3122b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00b31960 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b3122b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00b31960 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b2f600();
// FUNCTION: ROBLOXSTUDIO 0x00b31ea0
extern "C" __declspec(naked) void asm_00b31ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00b31eaf }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00b31eb1 }
	__asm { L_00b31eaf: }
	__asm { xor edx, edx }
	__asm { L_00b31eb1: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ecx + 0x28] }
	__asm { push edx }
	__asm { call fn_00b2f600 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b33e50();
// FUNCTION: ROBLOXSTUDIO 0x00b33ab0
extern "C" __declspec(naked) void asm_00b33ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b33ad3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b33e50 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b33ad3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1284ba0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b391b0
extern "C" __declspec(naked) void asm_00b391b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 4] }
	__asm { mov dword ptr [ecx], 0xe6dc74 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b69050 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00b48660
extern "C" __declspec(naked) void asm_00b48660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_00b48691 }
	__asm { push 0 }
	__asm { push 0x11edc30 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00b48691 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x28] }
	__asm { L_00b48691: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bcfb00();
// FUNCTION: ROBLOXSTUDIO 0x00b49920
extern "C" __declspec(naked) void asm_00b49920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bcfb00 }
	__asm { xor eax, eax }
	__asm { mov word ptr [esi + 0x24], ax }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [esi + 0x1c], 0xfffffffe }
	__asm { mov dword ptr [esi + 0x20], 0xffffffff }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b4a010();
// FUNCTION: ROBLOXSTUDIO 0x00b4a290
extern "C" __declspec(naked) void asm_00b4a290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { fstp dword ptr [esp] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b4a010 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099cc10();
// FUNCTION: ROBLOXSTUDIO 0x00b4a370
extern "C" __declspec(naked) void asm_00b4a370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call fn_0099cc10 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { call fn_0099cc10 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b53cd0();
extern "C" void fn_00b8c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00b4a930
extern "C" __declspec(naked) void asm_00b4a930()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x2c] }
	__asm { test esi, esi }
	__asm { je L_00b4a95c }
	__asm { push esi }
	__asm { call fn_00b8c1b0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b53cd0 }
	__asm { test esi, esi }
	__asm { je L_00b4a955 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00b4a955: }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { L_00b4a95c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b55350
extern "C" __declspec(naked) void asm_00b55350()
{
	__asm { xor edx, edx }
	__asm { cmp dword ptr [ecx + 0xfc], edx }
	__asm { setge dl }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 0xf8], eax }
	__asm { setge al }
	__asm { add edx, eax }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 0xf4], eax }
	__asm { setge al }
	__asm { add edx, eax }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 0xf0], eax }
	__asm { setge al }
	__asm { add edx, eax }
	__asm { xor eax, eax }
	__asm { cmp edx, 1 }
	__asm { setle al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b57660
extern "C" __declspec(naked) void asm_00b57660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, 0x48 }
	__asm { mov word ptr [esi], ax }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 4] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00595fa0();
// FUNCTION: ROBLOXSTUDIO 0x00b5bd60
extern "C" __declspec(naked) void asm_00b5bd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 8] }
	__asm { call fn_00595fa0 }
	__asm { test eax, eax }
	__asm { je L_00b5bd82 }
	__asm { mov ecx, eax }
	__asm { call fn_00595fa0 }
	__asm { test eax, eax }
	__asm { je L_00b5bd82 }
	__asm { add eax, -8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b5bd82: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00595fa0();
extern "C" void fn_00b5bd60();
// FUNCTION: ROBLOXSTUDIO 0x00b5c9c0
extern "C" __declspec(naked) void asm_00b5c9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b5bd60 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b5c9e3 }
	__asm { lea ecx, [eax + 8] }
	__asm { call fn_00595fa0 }
	__asm { test eax, eax }
	__asm { je L_00b5c9e3 }
	__asm { add eax, -8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b5c9e3: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b5cfb0
extern "C" __declspec(naked) void asm_00b5cfb0()
{
	__asm { push 0x14 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00b5cfc4 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_00b5cfc4: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_00b5cfcf }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00b5cfcf: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00b5cfd8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00b5cfd8: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" void fn_00b49710();
extern "C" void fn_00b5b980();
// FUNCTION: ROBLOXSTUDIO 0x00b5cfe0
extern "C" __declspec(naked) void asm_00b5cfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b5b980 }
	__asm { mov edx, dword ptr [eax + 0x70] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov eax, dword ptr [eax + 0x74] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_00b49710 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099e570();
extern "C" void fn_00b5b980();
extern "C" void fn_00b5b9e0();
// FUNCTION: ROBLOXSTUDIO 0x00b5e460
extern "C" __declspec(naked) void asm_00b5e460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b5b9e0 }
	__asm { cmp eax, 4 }
	__asm { je L_00b5e47a }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { cmp eax, 5 }
	__asm { jne L_00b5e47e }
	__asm { L_00b5e47a: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00b5e47e: }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b5b980 }
	__asm { mov ecx, eax }
	__asm { call fn_0099e570 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_00ba92b0();
// FUNCTION: ROBLOXSTUDIO 0x00b5e4a0
extern "C" __declspec(naked) void asm_00b5e4a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_006da0e0 }
	__asm { lea ecx, [esi + 0x38] }
	__asm { call fn_006da0e0 }
	__asm { lea ecx, [esi + 0x68] }
	__asm { call fn_006da0e0 }
	__asm { lea ecx, [esi + 0x98] }
	__asm { call fn_006da0e0 }
	__asm { call fn_00ba92b0 }
	__asm { mov dword ptr [esi + 0xc8], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b600b0
extern "C" __declspec(naked) void asm_00b600b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b600e6 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00b600e6: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006a2760();
extern "C" void fn_008bb540();
// FUNCTION: ROBLOXSTUDIO 0x00b67f70
extern "C" __declspec(naked) void asm_00b67f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_008bb540 }
	__asm { mov esi, eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b67f94 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a2760 }
	__asm { mov eax, esi }
	__asm { L_00b67f94: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b68b30
extern "C" __declspec(naked) void asm_00b68b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { jb L_00b68b48 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b68b48: }
	__asm { mov dword ptr [esi + 0x24], 0xf }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a35560();
extern "C" void fn_00a35810();
extern "C" void fn_00a38710();
// FUNCTION: ROBLOXSTUDIO 0x00b6e2c0
extern "C" __declspec(naked) void asm_00b6e2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38710 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a38710 }
	__asm { push 2 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35810 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a35560 }
	__asm { add esp, 0x24 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35850();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38710();
extern "C" void fn_00a38960();
// FUNCTION: ROBLOXSTUDIO 0x00b6e300
extern "C" __declspec(naked) void asm_00b6e300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a38710 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35850 }
	__asm { add esp, 0x24 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35650();
extern "C" void fn_00a357b0();
extern "C" void fn_00a38960();
// FUNCTION: ROBLOXSTUDIO 0x00b6f060
extern "C" __declspec(naked) void asm_00b6f060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push 0xffffd8ed }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a35650 }
	__asm { add esp, 0x24 }
	__asm { mov eax, 3 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a356d0();
extern "C" void fn_00a357b0();
extern "C" void fn_00a38960();
// FUNCTION: ROBLOXSTUDIO 0x00b6f130
extern "C" __declspec(naked) void asm_00b6f130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push 0xffffd8ed }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push esi }
	__asm { call fn_00a356d0 }
	__asm { add esp, 0x20 }
	__asm { mov eax, 3 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a357b0();
extern "C" void fn_00a38960();
extern "C" void fn_00a38a50();
// FUNCTION: ROBLOXSTUDIO 0x00b6f380
extern "C" __declspec(naked) void asm_00b6f380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push 0xed128c }
	__asm { push esi }
	__asm { call fn_00a38a50 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { add esp, 0x1c }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35650();
extern "C" void fn_00a387b0();
// FUNCTION: ROBLOXSTUDIO 0x00b6faa0
extern "C" __declspec(naked) void asm_00b6faa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a387b0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35650 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
extern "C" void fn_00cf6e98();
// FUNCTION: ROBLOXSTUDIO 0x00b71790
extern "C" __declspec(naked) void asm_00b71790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { add esp, 8 }
	__asm { call fn_00cf6e98 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
extern "C" void fn_00cf6e92();
// FUNCTION: ROBLOXSTUDIO 0x00b717f0
extern "C" __declspec(naked) void asm_00b717f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { add esp, 8 }
	__asm { call fn_00cf6e92 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
extern "C" void fn_00cf6e9e();
// FUNCTION: ROBLOXSTUDIO 0x00b71850
extern "C" __declspec(naked) void asm_00b71850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { add esp, 8 }
	__asm { call fn_00cf6e9e }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
extern "C" void fn_00cf6e2e();
// FUNCTION: ROBLOXSTUDIO 0x00b71880
extern "C" __declspec(naked) void asm_00b71880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { add esp, 8 }
	__asm { call fn_00cf6e2e }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
extern "C" void fn_00cf6e28();
// FUNCTION: ROBLOXSTUDIO 0x00b718b0
extern "C" __declspec(naked) void asm_00b718b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { add esp, 8 }
	__asm { call fn_00cf6e28 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104fc[];
extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00b71950
extern "C" __declspec(naked) void asm_00b71950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e104fc] }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
extern "C" void fn_00cf68ec();
// FUNCTION: ROBLOXSTUDIO 0x00b71980
extern "C" __declspec(naked) void asm_00b71980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b72910
extern "C" __declspec(naked) void asm_00b72910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b72f20();
// FUNCTION: ROBLOXSTUDIO 0x00b72ee0
extern "C" __declspec(naked) void asm_00b72ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_00b72f20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b77360();
// FUNCTION: ROBLOXSTUDIO 0x00b774d0
extern "C" __declspec(naked) void asm_00b774d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0xec }
	__asm { call fn_00b77360 }
	__asm { test eax, eax }
	__asm { je L_00b774fa }
	__asm { add eax, 4 }
	__asm { je L_00b774fa }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b774fa: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b77360();
// FUNCTION: ROBLOXSTUDIO 0x00b77500
extern "C" __declspec(naked) void asm_00b77500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x50 }
	__asm { call fn_00b77360 }
	__asm { test eax, eax }
	__asm { je L_00b77527 }
	__asm { add eax, 4 }
	__asm { je L_00b77527 }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b77527: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b72c70();
// FUNCTION: ROBLOXSTUDIO 0x00b77670
extern "C" __declspec(naked) void asm_00b77670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { call fn_00b72c70 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b77c70();
// FUNCTION: ROBLOXSTUDIO 0x00b778f0
extern "C" __declspec(naked) void asm_00b778f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b77913 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b77c70 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b77913: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128d5a0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b77e00();
// FUNCTION: ROBLOXSTUDIO 0x00b77930
extern "C" __declspec(naked) void asm_00b77930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b77953 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b77e00 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b77953: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128db08 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b77f60();
// FUNCTION: ROBLOXSTUDIO 0x00b77970
extern "C" __declspec(naked) void asm_00b77970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b77993 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b77f60 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b77993: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128da00 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b780c0();
// FUNCTION: ROBLOXSTUDIO 0x00b779b0
extern "C" __declspec(naked) void asm_00b779b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b779d3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b780c0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b779d3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128d8c0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b781d0();
// FUNCTION: ROBLOXSTUDIO 0x00b779f0
extern "C" __declspec(naked) void asm_00b779f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b77a13 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b781d0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b77a13: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128d3b8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00891b30();
extern "C" void fn_00a35690();
// FUNCTION: ROBLOXSTUDIO 0x00b78f30
extern "C" __declspec(naked) void asm_00b78f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { call fn_00891b30 }
	__asm { mov ecx, dword ptr [eax + 0x2c] }
	__asm { add eax, 0x1c }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00b78f4b }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00b78f4b: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e0[];
extern "C" void fn_007c81e0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a2a0
extern "C" __declspec(naked) void asm_00b7a2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_012105e0] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00b7a2c5 }
	__asm { push eax }
	__asm { call fn_007c81e0 }
	__asm { add esp, 4 }
	__asm { L_00b7a2c5: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc80[];
extern "C" void fn_00a389c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7a470
extern "C" __declspec(naked) void asm_00b7a470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [g_0128dc80] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { mov esi, eax }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b7a499 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7a499: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128e204[];
extern "C" void fn_004226b0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a520
extern "C" __declspec(naked) void asm_00b7a520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128e204] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00b7a548 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00b7a548: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35710();
// FUNCTION: ROBLOXSTUDIO 0x00b7c190
extern "C" __declspec(naked) void asm_00b7c190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00b7c1a6 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00b7c1a6: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a35710 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b7f890
extern "C" __declspec(naked) void asm_00b7f890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x20 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00b7f8a7 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00b7f8a7: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_00b7f8b4 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_00b7f8b7 }
	__asm { L_00b7f8b4: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00b7f8b7: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00b7f8c2 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00b7f8c2: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b7f8d0
extern "C" __declspec(naked) void asm_00b7f8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00b7f8e7 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00b7f8e7: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_00b7f8f4 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_00b7f8f7 }
	__asm { L_00b7f8f4: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00b7f8f7: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00b7f902 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00b7f902: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b7f910
extern "C" __declspec(naked) void asm_00b7f910()
{
	__asm { push esi }
	__asm { push 0x5c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00b7f929 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00b7f929: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_00b7f938 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00b7f938: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00b7f943 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00b7f943: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b7f950
extern "C" __declspec(naked) void asm_00b7f950()
{
	__asm { push esi }
	__asm { push 0x30 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00b7f969 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00b7f969: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_00b7f978 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00b7f978: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00b7f983 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00b7f983: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b80ed0();
// FUNCTION: ROBLOXSTUDIO 0x00b80c80
extern "C" __declspec(naked) void asm_00b80c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b80ca3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b80ed0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b80ca3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128dc88 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b81010();
// FUNCTION: ROBLOXSTUDIO 0x00b80cc0
extern "C" __declspec(naked) void asm_00b80cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b80ce3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b81010 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b80ce3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128df90 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34e50();
extern "C" void fn_00a35670();
extern "C" void fn_00a358d0();
// FUNCTION: ROBLOXSTUDIO 0x00b81c20
extern "C" __declspec(naked) void asm_00b81c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xb81c20 }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a34e50 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a358d0 }
	__asm { add esp, 0x1c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b82fc0
extern "C" __declspec(naked) void asm_00b82fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { and eax, 0x80000003 }
	__asm { jns L_00b82fd4 }
	__asm { dec eax }
	__asm { or eax, 0xfffffffc }
	__asm { inc eax }
	__asm { L_00b82fd4: }
	__asm { jne L_00b82fe8 }
	__asm { add ecx, -0x18 }
	__asm { shr ecx, 2 }
	__asm { dec ecx }
	__asm { or eax, 0xffffffff }
	__asm { cmp ecx, 0x10 }
	__asm { cmovl eax, ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b82fe8: }
	__asm { or eax, 0xffffffff }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00b843e0
extern "C" __declspec(naked) void asm_00b843e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x128e288 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00b84400 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b84400: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00b84410
extern "C" __declspec(naked) void asm_00b84410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x128e2f8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00b84430 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b84430: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b87f80
extern "C" __declspec(naked) void asm_00b87f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00b87fac }
	__asm { test al, 1 }
	__asm { jne L_00b87fa6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b87fa6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b87fa6: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00b87fac: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b89440
extern "C" __declspec(naked) void asm_00b89440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x28 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00b89457 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00b89457: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_00b89464 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_00b89467 }
	__asm { L_00b89464: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00b89467: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00b89472 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00b89472: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b89480
extern "C" __declspec(naked) void asm_00b89480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x40 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00b89497 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00b89497: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_00b894a4 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_00b894a7 }
	__asm { L_00b894a4: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00b894a7: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00b894b2 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00b894b2: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b8a890();
// FUNCTION: ROBLOXSTUDIO 0x00b8a750
extern "C" __declspec(naked) void asm_00b8a750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00b8a773 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b8a890 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b8a773: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128e990 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b8c920
extern "C" __declspec(naked) void asm_00b8c920()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { L_00b8c926: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00b8c937 }
	__asm { cmp dword ptr [eax + 0x28], edi }
	__asm { je L_00b8c942 }
	__asm { L_00b8c937: }
	__asm { inc esi }
	__asm { cmp esi, 2 }
	__asm { jl L_00b8c926 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00b8c942: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00aefa00();
extern "C" void fn_00b8cc20();
// FUNCTION: ROBLOXSTUDIO 0x00b8c9b0
extern "C" __declspec(naked) void asm_00b8c9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00aefa00 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xed457c }
	__asm { mov dword ptr [esi + 0x1c], 0xed45c8 }
	__asm { call fn_00b8cc20 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aef7c0();
extern "C" void fn_00b8cc20();
// FUNCTION: ROBLOXSTUDIO 0x00b8c9e0
extern "C" __declspec(naked) void asm_00b8c9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00aef7c0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xed457c }
	__asm { mov dword ptr [esi + 0x1c], 0xed45c8 }
	__asm { call fn_00b8cc20 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00968f00();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00b90900
extern "C" __declspec(naked) void asm_00b90900()
{
	__asm { push 0 }
	__asm { push 0x12bdbf4 }
	__asm { push 0x11ecebc }
	__asm { push 0 }
	__asm { push ecx }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00b9092f }
	__asm { push eax }
	__asm { call fn_00968f00 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b9092f }
	__asm { mov eax, dword ptr [eax + 0xb4] }
	__asm { ret }
	__asm { L_00b9092f: }
	__asm { xor eax, eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b90e10
extern "C" __declspec(naked) void asm_00b90e10()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp byte ptr [eax + 0x38], 0 }
	__asm { je L_00b90e33 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp byte ptr [eax + 0x38], 0 }
	__asm { je L_00b90e33 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00b90e33: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b533d0();
extern "C" void fn_00b8c2a0();
// FUNCTION: ROBLOXSTUDIO 0x00b91540
extern "C" __declspec(naked) void asm_00b91540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00b8c2a0 }
	__asm { test esi, esi }
	__asm { je L_00b91566 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esi, 0x94 }
	__asm { push esi }
	__asm { call fn_00b533d0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b91566: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { push esi }
	__asm { call fn_00b533d0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b93010
extern "C" __declspec(naked) void asm_00b93010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00b93029 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 2 }
	__asm { jne L_00b93041 }
	__asm { L_00b93029: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00b9303c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 2 }
	__asm { jne L_00b93041 }
	__asm { L_00b9303c: }
	__asm { mov eax, 2 }
	__asm { L_00b93041: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00891b10();
extern "C" void fn_00891b30();
extern "C" void fn_00b93050();
// FUNCTION: ROBLOXSTUDIO 0x00b930f0
extern "C" __declspec(naked) void asm_00b930f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b93050 }
	__asm { cmp eax, 2 }
	__asm { jne L_00b93121 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00891b10 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call fn_00891b30 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [eax + 0x48], cl }
	__asm { mov edx, 2 }
	__asm { cmove ecx, edx }
	__asm { mov eax, ecx }
	__asm { L_00b93121: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00b973b0
extern "C" __declspec(naked) void asm_00b973b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0x4c }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b973f0
extern "C" __declspec(naked) void asm_00b973f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xd }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xed5c18 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b97430
extern "C" __declspec(naked) void asm_00b97430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xa }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xed5e14 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b97470
extern "C" __declspec(naked) void asm_00b97470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xb }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xe81b60 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b974b0
extern "C" __declspec(naked) void asm_00b974b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xe }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xed5cc0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00b974f0
extern "C" __declspec(naked) void asm_00b974f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0xec }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b97530
extern "C" __declspec(naked) void asm_00b97530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xb }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xe887ec }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b97570
extern "C" __declspec(naked) void asm_00b97570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xa }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xed5d6c }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b975b0
extern "C" __declspec(naked) void asm_00b975b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xb }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xe81b54 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b975f0
extern "C" __declspec(naked) void asm_00b975f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xf }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xe81b6c }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b97630
extern "C" __declspec(naked) void asm_00b97630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xa }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xed5ebc }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00b977e0
extern "C" __declspec(naked) void asm_00b977e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x11edc90 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00b97800 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b97800: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b9b4c0
extern "C" __declspec(naked) void asm_00b9b4c0()
{
	__asm { push 0x20 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00b9b4d4 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_00b9b4d4: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_00b9b4df }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00b9b4df: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00b9b4e8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00b9b4e8: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00b9d230
extern "C" __declspec(naked) void asm_00b9d230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xe }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xed7080 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b9ffc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9ecf0
extern "C" __declspec(naked) void asm_00b9ecf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00b9ffc0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
