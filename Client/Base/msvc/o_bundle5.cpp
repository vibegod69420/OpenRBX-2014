// Bundled inline-assembly functions (merged from asmify12).

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_008642b0();
// FUNCTION: ROBLOXSTUDIO 0x00862fd0
extern "C" __declspec(naked) void asm_00862fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b0c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0086302a }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0086302a: }
	__asm { mov ecx, edi }
	__asm { call fn_008642b0 }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00863065 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00863065 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00863065 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00863065: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00862fd0();
// FUNCTION: ROBLOXSTUDIO 0x00863080
extern "C" __declspec(naked) void asm_00863080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6b0c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x10 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_008630d6 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_008630d6: }
	__asm { mov ecx, edi }
	__asm { call fn_00862fd0 }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00863111 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00863111 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00863111 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00863111: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131da24[];
extern "C" void fn_0040bac0();
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00863130
extern "C" __declspec(naked) void asm_00863130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd298c6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [g_0131da24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008631dc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131da24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe61944 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x131da28 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008631dc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131da28 }
	__asm { call fn_0040bac0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe52414 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00863259 }
	__asm { push 0x11fee80 }
	__asm { mov ecx, 0x11fee80 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00863259 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00863244 }
	__asm { push 0x1df }
	__asm { push 0xe4fb58 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00863259 }
	__asm { L_00863244: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe544a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00863259: }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00863288 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe637f8 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { jmp L_0086328a }
	__asm { L_00863288: }
	__asm { xor edi, edi }
	__asm { L_0086328a: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp edi, eax }
	__asm { je L_0086329a }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0086329a: }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008632ae }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_008632ae: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_008632c1 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_008632c1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0086b250();
extern "C" void fn_008843d0();
extern "C" void fn_008853a0();
// FUNCTION: ROBLOXSTUDIO 0x008855b0
extern "C" __declspec(naked) void asm_008855b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b8f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xe65b6c }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008853a0 }
	__asm { mov dword ptr [esi], 0xe65c94 }
	__asm { mov dword ptr [esi + 4], 0xe65d4c }
	__asm { mov dword ptr [esi + 0x18], 0xe65d54 }
	__asm { mov dword ptr [esi + 0x1c], 0xe65d60 }
	__asm { mov dword ptr [esi + 0x64], 0xe65d70 }
	__asm { mov dword ptr [esi + 0x68], 0xe65d78 }
	__asm { lea ecx, [esi + 0x290] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008843d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe65dac }
	__asm { mov dword ptr [esi + 4], 0xe65e64 }
	__asm { mov dword ptr [esi + 0x18], 0xe65e6c }
	__asm { mov dword ptr [esi + 0x1c], 0xe65e78 }
	__asm { mov dword ptr [esi + 0x64], 0xe65e88 }
	__asm { mov dword ptr [esi + 0x68], 0xe65e90 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xe65b7c }
	__asm { mov dword ptr [ecx + 4], 0xe65c34 }
	__asm { mov dword ptr [ecx + 0x18], 0xe65c3c }
	__asm { mov dword ptr [ecx + 0x1c], 0xe65c48 }
	__asm { mov dword ptr [ecx + 0x64], 0xe65c58 }
	__asm { mov dword ptr [ecx + 0x68], 0xe65c60 }
	__asm { jmp fn_0086b250 }
}

extern "C" char g_00e10198[];
extern "C" char g_012fb0dc[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0055a3f0();
// FUNCTION: ROBLOXSTUDIO 0x00887150
extern "C" __declspec(naked) void asm_00887150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0055a3f0 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00887199 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00887199 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00887199 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00887199: }
	__asm { add dword ptr [g_012fb0dc], 0x18 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_012fb0dc[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00414990();
extern "C" void fn_00424480();
extern "C" void fn_0048aba0();
extern "C" void fn_0055a3f0();
extern "C" void fn_00887bb0();
extern "C" void fn_00888e30();
extern "C" void fn_00891470();
extern "C" void fn_00b57f30();
extern "C" void fn_00b58090();
// FUNCTION: ROBLOXSTUDIO 0x00889690
extern "C" __declspec(naked) void asm_00889690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, edx }
	__asm { sar eax, 3 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test eax, eax }
	__asm { je L_008896cb }
	__asm { L_008896b0: }
	__asm { push ebx }
	__asm { push dword ptr [edx + esi*8] }
	__asm { call fn_00891470 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, edx }
	__asm { inc esi }
	__asm { sar eax, 3 }
	__asm { add esp, 8 }
	__asm { cmp esi, eax }
	__asm { jb L_008896b0 }
	__asm { L_008896cb: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_008896e7 }
	__asm { L_008896d6: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00414990 }
	__asm { add esi, 8 }
	__asm { cmp esi, edi }
	__asm { jne L_008896d6 }
	__asm { L_008896e7: }
	__asm { call fn_00424480 }
	__asm { cmp byte ptr [eax + 0x8d], 0 }
	__asm { je L_00889745 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { je L_00889745 }
	__asm { cmp byte ptr [ebp + 0x18], 0 }
	__asm { jne L_00889745 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [esi + 0x128] }
	__asm { lea ecx, [esi + 0x128] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax + 0xcc] }
	__asm { push 2 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push ebx }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 0xd0] }
	__asm { mov eax, dword ptr [eax + 0xd4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00888e30 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00887bb0 }
	__asm { L_00889745: }
	__asm { cmp byte ptr [ebp + 0x14], 0 }
	__asm { push ebx }
	__asm { jne L_0088975d }
	__asm { call fn_00b57f30 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_0088975d: }
	__asm { call fn_00b58090 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [g_012fb0dc], 0 }
	__asm { call fn_0055a3f0 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_0048aba0 }
	__asm { mov bl, al }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008897c0 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008897c0 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_008897c0 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008897c0: }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_012fba18[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0055a460();
// FUNCTION: ROBLOXSTUDIO 0x0088ec00
extern "C" __declspec(naked) void asm_0088ec00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0055a460 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0088ec49 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0088ec49 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_0088ec49 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0088ec49: }
	__asm { add dword ptr [g_012fba18], 0x50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_012fba24[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0055a4d0();
// FUNCTION: ROBLOXSTUDIO 0x0088ec60
extern "C" __declspec(naked) void asm_0088ec60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0055a4d0 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0088eca9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0088eca9 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_0088eca9 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0088eca9: }
	__asm { add dword ptr [g_012fba24], 0xd0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_00897300();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x00890cf0
extern "C" __declspec(naked) void asm_00890cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00890d8f }
	__asm { push 0x8973a0 }
	__asm { push 0x12fba9c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00897300 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00890d55 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00890d55: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00890d8f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00890d8f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00890d8f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00890d8f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00890d8f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fba94[];
extern "C" char g_012fba98[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00890e50
extern "C" __declspec(naked) void asm_00890e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c44e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_008911cc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00890e82: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x897390 }
	__asm { push 0x12fba8c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fba98] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00890ee9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba98], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00890edd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fba94], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00890eee }
	__asm { L_00890edd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fba94], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00890eee }
	__asm { L_00890ee9: }
	__asm { mov eax, dword ptr [g_012fba94] }
	__asm { L_00890eee: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00890f75 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00890f1b }
	__asm { add eax, -5 }
	__asm { jmp L_00890f1d }
	__asm { L_00890f1b: }
	__asm { xor eax, eax }
	__asm { L_00890f1d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00890f72 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00890f72 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00890f61 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00890f72 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00890f61: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00890f72: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00890f75: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00891065 }
	__asm { L_00890f80: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00891065 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00891005 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00890fa8 }
	__asm { add eax, -5 }
	__asm { jmp L_00890faa }
	__asm { L_00890fa8: }
	__asm { xor eax, eax }
	__asm { L_00890faa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00890fff }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00890fff }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00890fee }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00890fff }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00890fee: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00890fff: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00891005: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0089105a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0089101c }
	__asm { add ebx, -5 }
	__asm { jmp L_0089101e }
	__asm { L_0089101c: }
	__asm { xor ebx, ebx }
	__asm { L_0089101e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00891054 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00891054 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0089105a }
	__asm { L_00891054: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0089105a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00890f80 }
	__asm { L_00891065: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_008910c9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008910c9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008910c9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008910c9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_008910bf }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_008910bd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_008910bf }
	__asm { L_008910bd: }
	__asm { mov esi, edx }
	__asm { L_008910bf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_008910c9: }
	__asm { test esi, esi }
	__asm { je L_00891130 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008910d9 }
	__asm { add eax, -5 }
	__asm { jmp L_008910db }
	__asm { L_008910d9: }
	__asm { xor eax, eax }
	__asm { L_008910db: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00891130 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00891130 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0089111f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00891130 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0089111f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00891130: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0089117f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00891147 }
	__asm { add edi, -5 }
	__asm { jmp L_00891149 }
	__asm { L_00891147: }
	__asm { xor edi, edi }
	__asm { L_00891149: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00891179 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00891179 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0089117f }
	__asm { L_00891179: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0089117f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008911be }
	__asm { add esi, 5 }
	__asm { je L_00891194 }
	__asm { add esi, -5 }
	__asm { jmp L_00891196 }
	__asm { L_00891194: }
	__asm { xor esi, esi }
	__asm { L_00891196: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008911be }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008911be }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_008911be: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00890e82 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_008911cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00897270();
// FUNCTION: ROBLOXSTUDIO 0x00893aa0
extern "C" __declspec(naked) void asm_00893aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00893b08 }
	__asm { test ebx, ebx }
	__asm { jne L_00893b08 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00893af7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00893b08 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00893af7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00893b08: }
	__asm { push 0x897390 }
	__asm { push 0x12fba8c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00897270 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00893b48 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00893bfd }
	__asm { L_00893b48: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00893bb7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00893bb7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00893ba6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00893bb7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00893ba6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00893bb7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00893bcf }
	__asm { add esi, -5 }
	__asm { jmp L_00893bd1 }
	__asm { L_00893bcf: }
	__asm { xor esi, esi }
	__asm { L_00893bd1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00893bfd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00893bfd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00893bfd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00893c3a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00893c3a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00893c3a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00893c3a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00893c3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_0055a4d0();
// FUNCTION: ROBLOXSTUDIO 0x008942a0
extern "C" __declspec(naked) void asm_008942a0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0055a4d0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_008942be }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_008942c8 }
	__asm { L_008942be: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_008942c8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008942f4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008942f4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_008942f4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008942f4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00897270();
// FUNCTION: ROBLOXSTUDIO 0x00894450
extern "C" __declspec(naked) void asm_00894450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00894488 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00894488: }
	__asm { push 0x897390 }
	__asm { push 0x12fba8c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00897270 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_008944c4 }
	__asm { push ebx }
	__asm { jmp L_008944c8 }
	__asm { L_008944c4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_008944c8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_0089450a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0089450a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0089450a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0089450a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0089450a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0089454d }
	__asm { add esi, 5 }
	__asm { je L_0089451f }
	__asm { add esi, -5 }
	__asm { jmp L_00894521 }
	__asm { L_0089451f: }
	__asm { xor esi, esi }
	__asm { L_00894521: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089454d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089454d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0089454d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e105fc[];
extern "C" char g_011dd418[];
extern "C" void fn_004039a0();
extern "C" void fn_006d8660();
extern "C" void fn_006d86d0();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008950e0
extern "C" __declspec(naked) void asm_008950e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c569 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea esi, [edi + 8] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_008951b5 }
	__asm { call fn_006d8660 }
	__asm { cmp dword ptr [g_011dd418], ebx }
	__asm { je L_0089516f }
	__asm { push 0xe37130 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_004039a0 }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov ebx, 1 }
	__asm { push ebx }
	__asm { push 0x9e }
	__asm { push 0xe370e8 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push 0xe37160 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call dword ptr [g_011dd418] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [ebp - 0xd], bl }
	__asm { test al, al }
	__asm { jne L_00895173 }
	__asm { L_0089516f: }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { L_00895173: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_008951a2 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_00895190 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00895190: }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { L_008951a2: }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { je L_008951b0 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_008951b0: }
	__asm { call fn_006d86d0 }
	__asm { L_008951b5: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovl edx, esi }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov edx, ebx }
	__asm { lea esi, [eax + ecx*4] }
	__asm { cmp eax, esi }
	__asm { jae L_008951e2 }
	__asm { L_008951d0: }
	__asm { test eax, eax }
	__asm { je L_008951d8 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_008951d8: }
	__asm { add eax, 4 }
	__asm { add edx, 4 }
	__asm { cmp eax, esi }
	__asm { jb L_008951d0 }
	__asm { L_008951e2: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push 0x12fb464 }
	__asm { call fn_007b4f50 }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a5d4[];
extern "C" char g_0131a5d8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0089a9a0
extern "C" __declspec(naked) void asm_0089a9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c8ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0089ad1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0089a9d2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x41f020 }
	__asm { push 0x131a5e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a5d8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0089aa39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a5d8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0089aa2d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131a5d4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0089aa3e }
	__asm { L_0089aa2d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131a5d4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0089aa3e }
	__asm { L_0089aa39: }
	__asm { mov eax, dword ptr [g_0131a5d4] }
	__asm { L_0089aa3e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0089aac5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0089aa6b }
	__asm { add eax, -5 }
	__asm { jmp L_0089aa6d }
	__asm { L_0089aa6b: }
	__asm { xor eax, eax }
	__asm { L_0089aa6d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0089aac2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0089aac2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0089aab1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0089aac2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0089aab1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0089aac2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0089aac5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0089abb5 }
	__asm { L_0089aad0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0089abb5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0089ab55 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0089aaf8 }
	__asm { add eax, -5 }
	__asm { jmp L_0089aafa }
	__asm { L_0089aaf8: }
	__asm { xor eax, eax }
	__asm { L_0089aafa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0089ab4f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0089ab4f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0089ab3e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0089ab4f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0089ab3e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0089ab4f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0089ab55: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0089abaa }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0089ab6c }
	__asm { add ebx, -5 }
	__asm { jmp L_0089ab6e }
	__asm { L_0089ab6c: }
	__asm { xor ebx, ebx }
	__asm { L_0089ab6e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089aba4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089aba4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0089abaa }
	__asm { L_0089aba4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0089abaa: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0089aad0 }
	__asm { L_0089abb5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0089ac19 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0089ac19 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0089ac19 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0089ac19 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0089ac0f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0089ac0d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0089ac0f }
	__asm { L_0089ac0d: }
	__asm { mov esi, edx }
	__asm { L_0089ac0f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0089ac19: }
	__asm { test esi, esi }
	__asm { je L_0089ac80 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0089ac29 }
	__asm { add eax, -5 }
	__asm { jmp L_0089ac2b }
	__asm { L_0089ac29: }
	__asm { xor eax, eax }
	__asm { L_0089ac2b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0089ac80 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0089ac80 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0089ac6f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0089ac80 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0089ac6f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0089ac80: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0089accf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0089ac97 }
	__asm { add edi, -5 }
	__asm { jmp L_0089ac99 }
	__asm { L_0089ac97: }
	__asm { xor edi, edi }
	__asm { L_0089ac99: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089acc9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089acc9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0089accf }
	__asm { L_0089acc9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0089accf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0089ad0e }
	__asm { add esi, 5 }
	__asm { je L_0089ace4 }
	__asm { add esi, -5 }
	__asm { jmp L_0089ace6 }
	__asm { L_0089ace4: }
	__asm { xor esi, esi }
	__asm { L_0089ace6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089ad0e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089ad0e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0089ad0e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0089a9d2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0089ad1c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ef90();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0089ae70
extern "C" __declspec(naked) void asm_0089ae70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_0089aea8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0089aea8: }
	__asm { push 0x41f020 }
	__asm { push 0x131a5e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0041ef90 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0089aee4 }
	__asm { push ebx }
	__asm { jmp L_0089aee8 }
	__asm { L_0089aee4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_0089aee8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_0089af2a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0089af2a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0089af2a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0089af2a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0089af2a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0089af6d }
	__asm { add esi, 5 }
	__asm { je L_0089af3f }
	__asm { add esi, -5 }
	__asm { jmp L_0089af41 }
	__asm { L_0089af3f: }
	__asm { xor esi, esi }
	__asm { L_0089af41: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089af6d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0089af6d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0089af6d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a2440
extern "C" __declspec(naked) void asm_008a2440()
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
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_008a248f }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a248f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { int 3 }
	__asm { mov eax, dword ptr [ecx + 0x158] }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_008a90f0();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x008a7910
extern "C" __declspec(naked) void asm_008a7910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_008a79af }
	__asm { push 0x8a9190 }
	__asm { push 0x12fc338 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008a90f0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008a7975 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_008a7975: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_008a79af }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008a79af }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008a79af }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008a79af }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008a79af: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10268[];
extern "C" char g_00e103ac[];
extern "C" char g_00e1058c[];
extern "C" char g_012fc5b4[];
extern "C" void fn_006071e0();
extern "C" void fn_006b8aa8();
extern "C" void fn_006b8aae();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008b6660
extern "C" __declspec(naked) void asm_008b6660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2db38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 4 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call dword ptr [g_00e1058c] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { test byte ptr [ebp + 0x14], 2 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { je L_008b66d2 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x10 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call dword ptr [g_00e103ac] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push dword ptr [ebx + 4] }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_00e103ac] }
	__asm { jmp L_008b678a }
	__asm { L_008b66d2: }
	__asm { mov eax, 0x80808081 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 7 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add ecx, 0x10 }
	__asm { add eax, edx }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_006071e0 }
	__asm { push dword ptr [ebx + 4] }
	__asm { test byte ptr [ebp + 0x14], 1 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov ecx, 0xb6d060 }
	__asm { push dword ptr [ebx] }
	__asm { mov eax, 0xb6c7e0 }
	__asm { cmovne eax, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { push 0x10 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { call dword ptr [g_00e103ac] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { push edx }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call dword ptr [g_00e103ac] }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_008b678a }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_008b678a: }
	__asm { mov cl, byte ptr [g_012fc5b4] }
	__asm { test cl, cl }
	__asm { je L_008b67cb }
	__asm { lea eax, [ebx + 0xc] }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe6cfa0 }
	__asm { push eax }
	__asm { call fn_006b8aa8 }
	__asm { mov al, byte ptr [g_012fc5b4] }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_008b67cb }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { movzx eax, al }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { push 0xe6cfac }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_008b67cb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_00403540();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
// FUNCTION: ROBLOXSTUDIO 0x008b8a30
extern "C" __declspec(naked) void asm_008b8a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2dea1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebp - 0x18], 0x12fc5e4 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp esi, 0x120f11c }
	__asm { je L_008b8aa7 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push 0x120f11c }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_008b8aa7: }
	__asm { cmp byte ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_008b8ade }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008b8ade }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008b8ade }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008b8ade }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008b8ade: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_00403540();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
// FUNCTION: ROBLOXSTUDIO 0x008b8c30
extern "C" __declspec(naked) void asm_008b8c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], 0x12fc5e4 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp eax, 0x120f11c }
	__asm { je L_008b8c7e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, 0x120f11c }
	__asm { call fn_00403540 }
	__asm { L_008b8c7e: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_008b8cb8 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008b8cb8 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008b8cb8 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008b8cb8 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008b8cb8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_008c6620();
// FUNCTION: ROBLOXSTUDIO 0x008c5ff0
extern "C" __declspec(naked) void asm_008c5ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_008c6028 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_008c6028: }
	__asm { push 0x8c6870 }
	__asm { push 0x12fcf98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008c6620 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_008c6064 }
	__asm { push ebx }
	__asm { jmp L_008c6068 }
	__asm { L_008c6064: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_008c6068: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_008c60aa }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008c60aa }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008c60aa }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008c60aa }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008c60aa: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008c60ed }
	__asm { add esi, 5 }
	__asm { je L_008c60bf }
	__asm { add esi, -5 }
	__asm { jmp L_008c60c1 }
	__asm { L_008c60bf: }
	__asm { xor esi, esi }
	__asm { L_008c60c1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c60ed }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c60ed }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008c60ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_008241d0();
// FUNCTION: ROBLOXSTUDIO 0x008c6110
extern "C" __declspec(naked) void asm_008c6110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_008c6148 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_008c6148: }
	__asm { push 0x824660 }
	__asm { push 0x12f61e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008241d0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_008c6184 }
	__asm { push ebx }
	__asm { jmp L_008c6188 }
	__asm { L_008c6184: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_008c6188: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_008c61ca }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008c61ca }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008c61ca }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008c61ca }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008c61ca: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008c620d }
	__asm { add esi, 5 }
	__asm { je L_008c61df }
	__asm { add esi, -5 }
	__asm { jmp L_008c61e1 }
	__asm { L_008c61df: }
	__asm { xor esi, esi }
	__asm { L_008c61e1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c620d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c620d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008c620d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_008c66b0();
// FUNCTION: ROBLOXSTUDIO 0x008c6230
extern "C" __declspec(naked) void asm_008c6230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_008c6268 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_008c6268: }
	__asm { push 0x8c6880 }
	__asm { push 0x12fcfa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008c66b0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_008c62a4 }
	__asm { push ebx }
	__asm { jmp L_008c62a8 }
	__asm { L_008c62a4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_008c62a8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_008c62ea }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008c62ea }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008c62ea }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008c62ea }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008c62ea: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008c632d }
	__asm { add esi, 5 }
	__asm { je L_008c62ff }
	__asm { add esi, -5 }
	__asm { jmp L_008c6301 }
	__asm { L_008c62ff: }
	__asm { xor esi, esi }
	__asm { L_008c6301: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c632d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c632d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008c632d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0043d360();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x008c6350
extern "C" __declspec(naked) void asm_008c6350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_008c6388 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_008c6388: }
	__asm { push 0x43d3f0 }
	__asm { push 0x131abf4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043d360 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_008c63c4 }
	__asm { push ebx }
	__asm { jmp L_008c63c8 }
	__asm { L_008c63c4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_008c63c8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_008c640a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008c640a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008c640a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008c640a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008c640a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008c644d }
	__asm { add esi, 5 }
	__asm { je L_008c641f }
	__asm { add esi, -5 }
	__asm { jmp L_008c6421 }
	__asm { L_008c641f: }
	__asm { xor esi, esi }
	__asm { L_008c6421: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c644d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c644d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008c644d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc977[];
extern "C" char g_012fcfe8[];
extern "C" void fn_0048eee0();
extern "C" void fn_006b8a9c();
extern "C" void fn_006b9740();
extern "C" void fn_008d4960();
extern "C" void fn_008d5990();
extern "C" void fn_008d64f0();
extern "C" void fn_00941e40();
extern "C" void fn_00be8210();
extern "C" void fn_00c452a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008d0240
extern "C" __declspec(naked) void asm_008d0240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [edi + 0x48] }
	__asm { call fn_00c452a0 }
	__asm { push dword ptr [edi + 0x48] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [edi + 0x44] }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { je L_008d0292 }
	__asm { cmp dword ptr [edi + 0x38], 0 }
	__asm { je L_008d0279 }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call fn_008d4960 }
	__asm { L_008d0279: }
	__asm { push dword ptr [edi + 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { L_008d0292: }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x28] }
	__asm { call fn_008d64f0 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_0048eee0 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00be8210 }
	__asm { push dword ptr [edi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008d5990 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00941e40 }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { movzx eax, byte ptr [g_012fc977] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0xe6fe90 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006b8a9c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_008d0383 }
	__asm { cmp dword ptr [g_012fcfe8], esi }
	__asm { je L_008d0383 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008d0372 }
	__asm { push 0x150 }
	__asm { push 0xe6fcb0 }
	__asm { push 0xe6fe98 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d0383 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008d0372: }
	__asm { movzx eax, al }
	__asm { push 0xe6feb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d0383: }
	__asm { mov dword ptr [g_012fcfe8], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_008e30b0();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x008d4b00
extern "C" __declspec(naked) void asm_008d4b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_008d4b9f }
	__asm { push 0x8e3280 }
	__asm { push 0x12fd3c8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008e30b0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008d4b65 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_008d4b65: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_008d4b9f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008d4b9f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008d4b9f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008d4b9f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008d4b9f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_008e3140();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x008d4bb0
extern "C" __declspec(naked) void asm_008d4bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_008d4c4f }
	__asm { push 0x8e3290 }
	__asm { push 0x12fd3a8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008e3140 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008d4c15 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_008d4c15: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_008d4c4f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008d4c4f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008d4c4f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008d4c4f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008d4c4f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_008e31d0();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x008d4c60
extern "C" __declspec(naked) void asm_008d4c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_008d4cff }
	__asm { push 0x8e32a0 }
	__asm { push 0x12fd3b0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008e31d0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008d4cc5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_008d4cc5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_008d4cff }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008d4cff }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008d4cff }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008d4cff }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008d4cff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fd398[];
extern "C" char g_012fd39c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008d4d70
extern "C" __declspec(naked) void asm_008d4d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd301be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_008d50ec }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_008d4da2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x8e3260 }
	__asm { push 0x12fd388 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fd39c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008d4e09 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd39c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008d4dfd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fd398], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_008d4e0e }
	__asm { L_008d4dfd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fd398], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_008d4e0e }
	__asm { L_008d4e09: }
	__asm { mov eax, dword ptr [g_012fd398] }
	__asm { L_008d4e0e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_008d4e95 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008d4e3b }
	__asm { add eax, -5 }
	__asm { jmp L_008d4e3d }
	__asm { L_008d4e3b: }
	__asm { xor eax, eax }
	__asm { L_008d4e3d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008d4e92 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008d4e92 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008d4e81 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d4e92 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008d4e81: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d4e92: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_008d4e95: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_008d4f85 }
	__asm { L_008d4ea0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_008d4f85 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_008d4f25 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_008d4ec8 }
	__asm { add eax, -5 }
	__asm { jmp L_008d4eca }
	__asm { L_008d4ec8: }
	__asm { xor eax, eax }
	__asm { L_008d4eca: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008d4f1f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_008d4f1f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008d4f0e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d4f1f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008d4f0e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d4f1f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008d4f25: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_008d4f7a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_008d4f3c }
	__asm { add ebx, -5 }
	__asm { jmp L_008d4f3e }
	__asm { L_008d4f3c: }
	__asm { xor ebx, ebx }
	__asm { L_008d4f3e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d4f74 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d4f74 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008d4f7a }
	__asm { L_008d4f74: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008d4f7a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_008d4ea0 }
	__asm { L_008d4f85: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_008d4fe9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008d4fe9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008d4fe9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008d4fe9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_008d4fdf }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_008d4fdd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_008d4fdf }
	__asm { L_008d4fdd: }
	__asm { mov esi, edx }
	__asm { L_008d4fdf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_008d4fe9: }
	__asm { test esi, esi }
	__asm { je L_008d5050 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008d4ff9 }
	__asm { add eax, -5 }
	__asm { jmp L_008d4ffb }
	__asm { L_008d4ff9: }
	__asm { xor eax, eax }
	__asm { L_008d4ffb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008d5050 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008d5050 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008d503f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d5050 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008d503f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d5050: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_008d509f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_008d5067 }
	__asm { add edi, -5 }
	__asm { jmp L_008d5069 }
	__asm { L_008d5067: }
	__asm { xor edi, edi }
	__asm { L_008d5069: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d5099 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d5099 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008d509f }
	__asm { L_008d5099: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008d509f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008d50de }
	__asm { add esi, 5 }
	__asm { je L_008d50b4 }
	__asm { add esi, -5 }
	__asm { jmp L_008d50b6 }
	__asm { L_008d50b4: }
	__asm { xor esi, esi }
	__asm { L_008d50b6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d50de }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d50de }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_008d50de: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_008d4da2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_008d50ec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fd3a0[];
extern "C" char g_012fd3a4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008d5100
extern "C" __declspec(naked) void asm_008d5100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd301ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_008d547c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_008d5132: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x8e3270 }
	__asm { push 0x12fd390 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fd3a4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008d5199 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd3a4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008d518d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fd3a0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_008d519e }
	__asm { L_008d518d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fd3a0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_008d519e }
	__asm { L_008d5199: }
	__asm { mov eax, dword ptr [g_012fd3a0] }
	__asm { L_008d519e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_008d5225 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008d51cb }
	__asm { add eax, -5 }
	__asm { jmp L_008d51cd }
	__asm { L_008d51cb: }
	__asm { xor eax, eax }
	__asm { L_008d51cd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008d5222 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008d5222 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008d5211 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d5222 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008d5211: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d5222: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_008d5225: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_008d5315 }
	__asm { L_008d5230: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_008d5315 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_008d52b5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_008d5258 }
	__asm { add eax, -5 }
	__asm { jmp L_008d525a }
	__asm { L_008d5258: }
	__asm { xor eax, eax }
	__asm { L_008d525a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008d52af }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_008d52af }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008d529e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d52af }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008d529e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d52af: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008d52b5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_008d530a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_008d52cc }
	__asm { add ebx, -5 }
	__asm { jmp L_008d52ce }
	__asm { L_008d52cc: }
	__asm { xor ebx, ebx }
	__asm { L_008d52ce: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d5304 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d5304 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008d530a }
	__asm { L_008d5304: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008d530a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_008d5230 }
	__asm { L_008d5315: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_008d5379 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008d5379 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008d5379 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008d5379 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_008d536f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_008d536d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_008d536f }
	__asm { L_008d536d: }
	__asm { mov esi, edx }
	__asm { L_008d536f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_008d5379: }
	__asm { test esi, esi }
	__asm { je L_008d53e0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_008d5389 }
	__asm { add eax, -5 }
	__asm { jmp L_008d538b }
	__asm { L_008d5389: }
	__asm { xor eax, eax }
	__asm { L_008d538b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008d53e0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_008d53e0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008d53cf }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d53e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008d53cf: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d53e0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_008d542f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_008d53f7 }
	__asm { add edi, -5 }
	__asm { jmp L_008d53f9 }
	__asm { L_008d53f7: }
	__asm { xor edi, edi }
	__asm { L_008d53f9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d5429 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d5429 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_008d542f }
	__asm { L_008d5429: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_008d542f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008d546e }
	__asm { add esi, 5 }
	__asm { je L_008d5444 }
	__asm { add esi, -5 }
	__asm { jmp L_008d5446 }
	__asm { L_008d5444: }
	__asm { xor esi, esi }
	__asm { L_008d5446: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d546e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008d546e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_008d546e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_008d5132 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_008d547c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_008c6590();
// FUNCTION: ROBLOXSTUDIO 0x008d9f20
extern "C" __declspec(naked) void asm_008d9f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_008d9f88 }
	__asm { test ebx, ebx }
	__asm { jne L_008d9f88 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008d9f77 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d9f88 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008d9f77: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d9f88: }
	__asm { push 0x8c6860 }
	__asm { push 0x12fcfa0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008c6590 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_008d9fc8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_008da07d }
	__asm { L_008d9fc8: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_008da037 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_008da037 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008da026 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008da037 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008da026: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008da037: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008da04f }
	__asm { add esi, -5 }
	__asm { jmp L_008da051 }
	__asm { L_008da04f: }
	__asm { xor esi, esi }
	__asm { L_008da051: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008da07d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008da07d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008da07d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_008da0ba }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008da0ba }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008da0ba }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008da0ba }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008da0ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_008e2f90();
// FUNCTION: ROBLOXSTUDIO 0x008da0d0
extern "C" __declspec(naked) void asm_008da0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_008da138 }
	__asm { test ebx, ebx }
	__asm { jne L_008da138 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008da127 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008da138 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008da127: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008da138: }
	__asm { push 0x8e3260 }
	__asm { push 0x12fd388 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008e2f90 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_008da178 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_008da22d }
	__asm { L_008da178: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_008da1e7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_008da1e7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008da1d6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008da1e7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008da1d6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008da1e7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008da1ff }
	__asm { add esi, -5 }
	__asm { jmp L_008da201 }
	__asm { L_008da1ff: }
	__asm { xor esi, esi }
	__asm { L_008da201: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008da22d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008da22d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008da22d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_008da26a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008da26a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008da26a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008da26a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008da26a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_008e3020();
// FUNCTION: ROBLOXSTUDIO 0x008da280
extern "C" __declspec(naked) void asm_008da280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_008da2e8 }
	__asm { test ebx, ebx }
	__asm { jne L_008da2e8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008da2d7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008da2e8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008da2d7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008da2e8: }
	__asm { push 0x8e3270 }
	__asm { push 0x12fd390 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008e3020 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_008da328 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_008da3dd }
	__asm { L_008da328: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_008da397 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_008da397 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008da386 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008da397 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008da386: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008da397: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008da3af }
	__asm { add esi, -5 }
	__asm { jmp L_008da3b1 }
	__asm { L_008da3af: }
	__asm { xor esi, esi }
	__asm { L_008da3b1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008da3dd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008da3dd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008da3dd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_008da41a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008da41a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008da41a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008da41a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008da41a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_007aa110();
// FUNCTION: ROBLOXSTUDIO 0x008dc530
extern "C" __declspec(naked) void asm_008dc530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_008dc568 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_008dc568: }
	__asm { push 0x7aa230 }
	__asm { push 0x12e1890 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_007aa110 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_008dc5a4 }
	__asm { push ebx }
	__asm { jmp L_008dc5a8 }
	__asm { L_008dc5a4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_008dc5a8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_008dc5ea }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008dc5ea }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008dc5ea }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008dc5ea }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008dc5ea: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008dc62d }
	__asm { add esi, 5 }
	__asm { je L_008dc5ff }
	__asm { add esi, -5 }
	__asm { jmp L_008dc601 }
	__asm { L_008dc5ff: }
	__asm { xor esi, esi }
	__asm { L_008dc601: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008dc62d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008dc62d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008dc62d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_008e2f90();
// FUNCTION: ROBLOXSTUDIO 0x008dc650
extern "C" __declspec(naked) void asm_008dc650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_008dc688 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_008dc688: }
	__asm { push 0x8e3260 }
	__asm { push 0x12fd388 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008e2f90 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_008dc6c4 }
	__asm { push ebx }
	__asm { jmp L_008dc6c8 }
	__asm { L_008dc6c4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_008dc6c8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_008dc70a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008dc70a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008dc70a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008dc70a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008dc70a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008dc74d }
	__asm { add esi, 5 }
	__asm { je L_008dc71f }
	__asm { add esi, -5 }
	__asm { jmp L_008dc721 }
	__asm { L_008dc71f: }
	__asm { xor esi, esi }
	__asm { L_008dc721: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008dc74d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008dc74d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008dc74d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_008e3020();
// FUNCTION: ROBLOXSTUDIO 0x008dc770
extern "C" __declspec(naked) void asm_008dc770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_008dc7a8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_008dc7a8: }
	__asm { push 0x8e3270 }
	__asm { push 0x12fd390 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008e3020 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_008dc7e4 }
	__asm { push ebx }
	__asm { jmp L_008dc7e8 }
	__asm { L_008dc7e4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_008dc7e8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_008dc82a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008dc82a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008dc82a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008dc82a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008dc82a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008dc86d }
	__asm { add esi, 5 }
	__asm { je L_008dc83f }
	__asm { add esi, -5 }
	__asm { jmp L_008dc841 }
	__asm { L_008dc83f: }
	__asm { xor esi, esi }
	__asm { L_008dc841: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008dc86d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008dc86d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008dc86d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fd36c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_006b9740();
extern "C" void fn_007b5ea0();
extern "C" void fn_007c6b40();
extern "C" void fn_008d4340();
// FUNCTION: ROBLOXSTUDIO 0x008e3b10
extern "C" __declspec(naked) void asm_008e3b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd36c40 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fd36c] }
	__asm { sub esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_008e3c7b }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_007c6b40 }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008e3b77 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_008e3b77 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_008e3b77 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_008e3b77: }
	__asm { lea eax, [ebx + 0xa4] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { cmp dword ptr [g_012fd36c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_008e3c36 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_008d4340 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5ea0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_008e3c08 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { cmp eax, dword ptr [g_012fd36c] }
	__asm { je L_008e3c08 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008e3bf7 }
	__asm { push 0x8b }
	__asm { push 0x1002ed8 }
	__asm { push 0x1002f28 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008e3c08 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008e3bf7: }
	__asm { movzx eax, cl }
	__asm { push 0x1002f38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008e3c08: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008e3c36 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_008e3c36 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_008e3c36 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_008e3c36: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [g_012fd36c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_008e3c76 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008e3c76 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008e3c76 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008e3c76 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008e3c76: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_008e3c7b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009a9600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f4c40
extern "C" __declspec(naked) void asm_008f4c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32218 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008f4c8e }
	__asm { test al, 1 }
	__asm { jne L_008f4c87 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f4c87 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f4c87: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_008f4c8e: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008f4c9e }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f4c9e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { add ecx, 8 }
	__asm { jmp fn_009a9600 }
}

extern "C" char g_00e10198[];
extern "C" void fn_004030b0();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00433450();
extern "C" void fn_008f83b0();
extern "C" void fn_0095a840();
// FUNCTION: ROBLOXSTUDIO 0x008f6db0
extern "C" __declspec(naked) void asm_008f6db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0xf8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea ebx, [esi + 0x100] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movzx eax, byte ptr [ebx + 0xc] }
	__asm { lea esi, [ebx + 0xc] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_008f6e00 }
	__asm { inc eax }
	__asm { jmp L_008f6e02 }
	__asm { L_008f6e00: }
	__asm { xor eax, eax }
	__asm { L_008f6e02: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { jne L_008f6e28 }
	__asm { xor bl, bl }
	__asm { jmp L_008f6e49 }
	__asm { L_008f6e28: }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008f83b0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_008f6e47 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add eax, 0x24 }
	__asm { push eax }
	__asm { call fn_00433450 }
	__asm { L_008f6e47: }
	__asm { mov bl, 1 }
	__asm { L_008f6e49: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop edi }
	__asm { je L_008f6e84 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008f6e84 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008f6e84 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008f6e84 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008f6e84: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
// FUNCTION: ROBLOXSTUDIO 0x008f8310
extern "C" __declspec(naked) void asm_008f8310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0xf8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [esi + 0x100] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x100] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_008f839c }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008f839c }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008f839c }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008f839c }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008f839c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_008f4860();
extern "C" void fn_00adee70();
// FUNCTION: ROBLOXSTUDIO 0x008f9ac0
extern "C" __declspec(naked) void asm_008f9ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd328f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 0xf8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_008f9b26 }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_008f9b26: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_008f9b45 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_008f9b45: }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_008f4860 }
	__asm { mov edx, dword ptr [esi + 0x100] }
	__asm { lea ecx, [esi + 0x100] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [edx + 4] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00adee70 }
	__asm { cmp byte ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_008f9ba7 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008f9ba7 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008f9ba7 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008f9ba7 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008f9ba7: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008f9bd9 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_008f9bd9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_008f9bd9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_008f9bd9: }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_008f9c0a }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_008f9c0a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_008f9c0a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_008f9c0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
// FUNCTION: ROBLOXSTUDIO 0x008fa910
extern "C" __declspec(naked) void asm_008fa910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0xf8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [esi + 0x100] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x100] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax] }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_008fa996 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_008fa996 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_008fa996 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_008fa996 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_008fa996: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004f6040();
extern "C" void fn_006c5e50();
// FUNCTION: ROBLOXSTUDIO 0x008ff820
extern "C" __declspec(naked) void asm_008ff820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c5e50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { jmp fn_004f6040 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9a8[];
extern "C" void fn_00424480();
extern "C" void fn_00558f50();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00908680
extern "C" __declspec(naked) void asm_00908680()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009086cd }
	__asm { cmp dword ptr [g_0131f9a8], 0x29a }
	__asm { je L_009086cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009086bc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009086cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009086bc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009086cd: }
	__asm { mov ecx, 0x131fcec }
	__asm { jmp fn_00558f50 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { call fn_00424480 }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0090c6a0();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x0090ac90
extern "C" __declspec(naked) void asm_0090ac90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0090ad2f }
	__asm { push 0x90c740 }
	__asm { push 0x12fe9c0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0090c6a0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0090acf5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_0090acf5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_0090ad2f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0090ad2f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0090ad2f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0090ad2f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0090ad2f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fe9b8[];
extern "C" char g_012fe9bc[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0090ad70
extern "C" __declspec(naked) void asm_0090ad70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33d0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0090b0ec }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0090ada2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x90c730 }
	__asm { push 0x12fe9b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fe9bc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0090ae09 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fe9bc], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0090adfd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fe9b8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0090ae0e }
	__asm { L_0090adfd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fe9b8], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0090ae0e }
	__asm { L_0090ae09: }
	__asm { mov eax, dword ptr [g_012fe9b8] }
	__asm { L_0090ae0e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0090ae95 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0090ae3b }
	__asm { add eax, -5 }
	__asm { jmp L_0090ae3d }
	__asm { L_0090ae3b: }
	__asm { xor eax, eax }
	__asm { L_0090ae3d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0090ae92 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0090ae92 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0090ae81 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0090ae92 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0090ae81: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0090ae92: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0090ae95: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0090af85 }
	__asm { L_0090aea0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0090af85 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0090af25 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0090aec8 }
	__asm { add eax, -5 }
	__asm { jmp L_0090aeca }
	__asm { L_0090aec8: }
	__asm { xor eax, eax }
	__asm { L_0090aeca: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0090af1f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0090af1f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0090af0e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0090af1f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0090af0e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0090af1f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0090af25: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0090af7a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0090af3c }
	__asm { add ebx, -5 }
	__asm { jmp L_0090af3e }
	__asm { L_0090af3c: }
	__asm { xor ebx, ebx }
	__asm { L_0090af3e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090af74 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090af74 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0090af7a }
	__asm { L_0090af74: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0090af7a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0090aea0 }
	__asm { L_0090af85: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0090afe9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0090afe9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0090afe9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0090afe9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0090afdf }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0090afdd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0090afdf }
	__asm { L_0090afdd: }
	__asm { mov esi, edx }
	__asm { L_0090afdf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0090afe9: }
	__asm { test esi, esi }
	__asm { je L_0090b050 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0090aff9 }
	__asm { add eax, -5 }
	__asm { jmp L_0090affb }
	__asm { L_0090aff9: }
	__asm { xor eax, eax }
	__asm { L_0090affb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0090b050 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0090b050 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0090b03f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0090b050 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0090b03f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0090b050: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0090b09f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0090b067 }
	__asm { add edi, -5 }
	__asm { jmp L_0090b069 }
	__asm { L_0090b067: }
	__asm { xor edi, edi }
	__asm { L_0090b069: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090b099 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090b099 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0090b09f }
	__asm { L_0090b099: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0090b09f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0090b0de }
	__asm { add esi, 5 }
	__asm { je L_0090b0b4 }
	__asm { add esi, -5 }
	__asm { jmp L_0090b0b6 }
	__asm { L_0090b0b4: }
	__asm { xor esi, esi }
	__asm { L_0090b0b6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090b0de }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090b0de }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0090b0de: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0090ada2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0090b0ec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_0090c610();
// FUNCTION: ROBLOXSTUDIO 0x0090bb00
extern "C" __declspec(naked) void asm_0090bb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0090bb68 }
	__asm { test ebx, ebx }
	__asm { jne L_0090bb68 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0090bb57 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0090bb68 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0090bb57: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0090bb68: }
	__asm { push 0x90c730 }
	__asm { push 0x12fe9b0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0090c610 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_0090bba8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0090bc5d }
	__asm { L_0090bba8: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0090bc17 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0090bc17 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0090bc06 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0090bc17 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0090bc06: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0090bc17: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0090bc2f }
	__asm { add esi, -5 }
	__asm { jmp L_0090bc31 }
	__asm { L_0090bc2f: }
	__asm { xor esi, esi }
	__asm { L_0090bc31: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090bc5d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090bc5d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0090bc5d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_0090bc9a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0090bc9a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0090bc9a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0090bc9a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0090bc9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_0090c610();
// FUNCTION: ROBLOXSTUDIO 0x0090bdd0
extern "C" __declspec(naked) void asm_0090bdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_0090be08 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0090be08: }
	__asm { push 0x90c730 }
	__asm { push 0x12fe9b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0090c610 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0090be44 }
	__asm { push ebx }
	__asm { jmp L_0090be48 }
	__asm { L_0090be44: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_0090be48: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_0090be8a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0090be8a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0090be8a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0090be8a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0090be8a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0090becd }
	__asm { add esi, 5 }
	__asm { je L_0090be9f }
	__asm { add esi, -5 }
	__asm { jmp L_0090bea1 }
	__asm { L_0090be9f: }
	__asm { xor esi, esi }
	__asm { L_0090bea1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090becd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090becd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0090becd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0088e620();
extern "C" void fn_0090fd20();
// FUNCTION: ROBLOXSTUDIO 0x0090fc30
extern "C" __declspec(naked) void asm_0090fc30()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe782a4 }
	__asm { mov dword ptr [edx + 4], 0xe783b4 }
	__asm { mov dword ptr [edx + 0x18], 0xe783bc }
	__asm { mov dword ptr [edx + 0x1c], 0xe783c8 }
	__asm { mov dword ptr [edx + 0x64], 0xe783d8 }
	__asm { mov dword ptr [edx + 0x70], 0xe783e0 }
	__asm { mov dword ptr [edx + 0x98], 0xe78400 }
	__asm { mov dword ptr [edx + 0xb0], 0xe78434 }
	__asm { mov dword ptr [edx + 0xc4], 0xe78460 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe78468 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xb4] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0090fd20 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_0088e620 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00acc990();
extern "C" void fn_00b90240();
// FUNCTION: ROBLOXSTUDIO 0x00914f40
extern "C" __declspec(naked) void asm_00914f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x8c] }
	__asm { call fn_00acc990 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fucomi st(0), st(1) }
	__asm { fstp st(1) }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00914f7e }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi + 0x8c] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b90240 }
	__asm { push 0x12fedac }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00914f7e: }
	__asm { fstp st(0) }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0090fcb0();
extern "C" void fn_009166a0();
// FUNCTION: ROBLOXSTUDIO 0x00916620
extern "C" __declspec(naked) void asm_00916620()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe7b05c }
	__asm { mov dword ptr [edx + 4], 0xe7b16c }
	__asm { mov dword ptr [edx + 0x18], 0xe7b174 }
	__asm { mov dword ptr [edx + 0x1c], 0xe7b180 }
	__asm { mov dword ptr [edx + 0x64], 0xe7b190 }
	__asm { mov dword ptr [edx + 0x70], 0xe7b198 }
	__asm { mov dword ptr [edx + 0x98], 0xe7b1b8 }
	__asm { mov dword ptr [edx + 0xb0], 0xe7b1ec }
	__asm { mov dword ptr [edx + 0xc4], 0xe7b218 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe7b220 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xcc] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0090fcb0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_009166a0 }
}

extern "C" char g_012fee68[];
extern "C" void fn_0043f630();
extern "C" void fn_00917080();
extern "C" void fn_00aa84d0();
// FUNCTION: ROBLOXSTUDIO 0x00917020
extern "C" __declspec(naked) void asm_00917020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_00917032 }
	__asm { add edx, -0x1c }
	__asm { jmp L_00917034 }
	__asm { L_00917032: }
	__asm { xor edx, edx }
	__asm { L_00917034: }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call fn_0043f630 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { jmp fn_00917080 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { cmp byte ptr [g_012fee68], 0 }
	__asm { je L_00917075 }
	__asm { push ecx }
	__asm { mov ecx, 0x12feee8 }
	__asm { call fn_00aa84d0 }
	__asm { ret }
	__asm { L_00917075: }
	__asm { jmp fn_00917080 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e0ec[];
extern "C" void fn_00480860();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00917580
extern "C" __declspec(naked) void asm_00917580()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009175cd }
	__asm { cmp dword ptr [g_0131e0ec], 0x29a }
	__asm { je L_009175cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009175bc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009175cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009175bc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009175cd: }
	__asm { mov ecx, 0x131e124 }
	__asm { jmp fn_00480860 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { lea eax, [ecx + 0x138] }
	__asm { ret }
}

extern "C" void fn_00892730();
// FUNCTION: ROBLOXSTUDIO 0x009175fd
extern "C" __declspec(naked) void asm_009175fd()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x40 }
	__asm { jmp fn_00892730 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [ecx + 0x20b] }
	__asm { ret }
}

extern "C" void fn_0088e620();
extern "C" void fn_00919570();
// FUNCTION: ROBLOXSTUDIO 0x009194f0
extern "C" __declspec(naked) void asm_009194f0()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe7c3e4 }
	__asm { mov dword ptr [edx + 4], 0xe7c4f0 }
	__asm { mov dword ptr [edx + 0x18], 0xe7c4f8 }
	__asm { mov dword ptr [edx + 0x1c], 0xe7c504 }
	__asm { mov dword ptr [edx + 0x64], 0xe7c514 }
	__asm { mov dword ptr [edx + 0x70], 0xe7c51c }
	__asm { mov dword ptr [edx + 0x98], 0xe7c53c }
	__asm { mov dword ptr [edx + 0xb0], 0xe7c570 }
	__asm { mov dword ptr [edx + 0xc4], 0xe7c59c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe7c5a4 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xbc] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0088e620 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_00919570 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_008a2fb0();
extern "C" void fn_00ac80e0();
// FUNCTION: ROBLOXSTUDIO 0x009209e0
extern "C" __declspec(naked) void asm_009209e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, edx }
	__asm { sub ecx, eax }
	__asm { sar ecx, 2 }
	__asm { cmp ecx, esi }
	__asm { jbe L_00920a10 }
	__asm { lea eax, [eax + esi*4] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008a2fb0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00920a10: }
	__asm { jae L_00920a46 }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00ac80e0 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov eax, edi }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov ecx, esi }
	__asm { sar eax, 2 }
	__asm { sub ecx, eax }
	__asm { je L_00920a33 }
	__asm { xor eax, eax }
	__asm { rep stosd }
	__asm { L_00920a33: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [ebx] }
	__asm { pop edi }
	__asm { sar eax, 2 }
	__asm { sub esi, eax }
	__asm { lea eax, [ecx + esi*4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_00920a46: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_009290c0();
// FUNCTION: ROBLOXSTUDIO 0x00929880
extern "C" __declspec(naked) void asm_00929880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_009298a5 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { jmp L_009298a7 }
	__asm { L_009298a5: }
	__asm { xor esi, esi }
	__asm { L_009298a7: }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push 0x12ff720 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { jmp fn_009290c0 }
}

extern "C" void fn_004034a0();
extern "C" void fn_00412a30();
extern "C" void fn_00574850();
extern "C" void fn_0092c550();
// FUNCTION: ROBLOXSTUDIO 0x0092d7c0
extern "C" __declspec(naked) void asm_0092d7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35df9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push ebx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp + 0x28], edx }
	__asm { jb L_0092d808 }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_0092d80a }
	__asm { L_0092d808: }
	__asm { mov esi, eax }
	__asm { L_0092d80a: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { cmp ecx, edi }
	__asm { je L_0092d93c }
	__asm { L_0092d834: }
	__asm { mov edx, dword ptr [ebx + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_0092d843 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp + 0x24], eax }
	__asm { jmp L_0092d846 }
	__asm { L_0092d843: }
	__asm { mov dword ptr [ebp + 0x24], ebx }
	__asm { L_0092d846: }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { add eax, dword ptr [ebp + 0x24] }
	__asm { cmp esi, ecx }
	__asm { jne L_0092d878 }
	__asm { cmp edx, 0x10 }
	__asm { jb L_0092d859 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { jmp L_0092d85b }
	__asm { L_0092d859: }
	__asm { mov ecx, ebx }
	__asm { L_0092d85b: }
	__asm { test eax, eax }
	__asm { jne L_0092d86a }
	__asm { push eax }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_004034a0 }
	__asm { jmp L_0092d897 }
	__asm { L_0092d86a: }
	__asm { sub eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_004034a0 }
	__asm { jmp L_0092d897 }
	__asm { L_0092d878: }
	__asm { cmp edx, 0x10 }
	__asm { jb L_0092d881 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { jmp L_0092d883 }
	__asm { L_0092d881: }
	__asm { mov edx, ebx }
	__asm { L_0092d883: }
	__asm { test eax, eax }
	__asm { je L_0092d889 }
	__asm { sub eax, edx }
	__asm { L_0092d889: }
	__asm { sub ecx, esi }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00412a30 }
	__asm { L_0092d897: }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0092d8a3 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { jmp L_0092d8a5 }
	__asm { L_0092d8a3: }
	__asm { mov edx, ebx }
	__asm { L_0092d8a5: }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov esi, dword ptr [ebp + 0x28] }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { cmp esi, edx }
	__asm { jne L_0092d8dc }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0092d8bd }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { jmp L_0092d8bf }
	__asm { L_0092d8bd: }
	__asm { mov ecx, ebx }
	__asm { L_0092d8bf: }
	__asm { test eax, eax }
	__asm { jne L_0092d8ce }
	__asm { push eax }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_004034a0 }
	__asm { jmp L_0092d8fb }
	__asm { L_0092d8ce: }
	__asm { sub eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_004034a0 }
	__asm { jmp L_0092d8fb }
	__asm { L_0092d8dc: }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0092d8e5 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { jmp L_0092d8e7 }
	__asm { L_0092d8e5: }
	__asm { mov ecx, ebx }
	__asm { L_0092d8e7: }
	__asm { test eax, eax }
	__asm { je L_0092d8ed }
	__asm { sub eax, ecx }
	__asm { L_0092d8ed: }
	__asm { sub edx, esi }
	__asm { push edx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00412a30 }
	__asm { L_0092d8fb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov esi, edi }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0092d90a }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0092d90c }
	__asm { L_0092d90a: }
	__asm { mov ecx, eax }
	__asm { L_0092d90c: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_0092c550 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { cmp ecx, edi }
	__asm { je L_0092d939 }
	__asm { mov edx, dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp + 0x28], edx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jmp L_0092d834 }
	__asm { L_0092d939: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_0092d93c: }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0092d946 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0092d948 }
	__asm { L_0092d946: }
	__asm { mov ecx, eax }
	__asm { L_0092d948: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { add eax, ecx }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_0092d957 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { jmp L_0092d959 }
	__asm { L_0092d957: }
	__asm { mov edx, ebx }
	__asm { L_0092d959: }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { push eax }
	__asm { add ecx, edx }
	__asm { push esi }
	__asm { push ecx }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_00574850 }
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

extern "C" void fn_0092c690();
// FUNCTION: ROBLOXSTUDIO 0x0092db80
extern "C" __declspec(naked) void asm_0092db80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b2f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0092c690 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov dword ptr [edi + 0x10], esi }
	__asm { test esi, esi }
	__asm { je L_0092dbee }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov esi, dword ptr [ebp + 0x24] }
	__asm { L_0092dbee: }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0092dc3d }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0092dc2a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [esi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0092dc2a }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0092dc2a: }
	__asm { pop ebx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0092dc3d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_00933390();
// FUNCTION: ROBLOXSTUDIO 0x0093ce00
extern "C" __declspec(naked) void asm_0093ce00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37303 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe82d64 }
	__asm { mov dword ptr [esi + 4], 0xe82dc0 }
	__asm { mov dword ptr [esi + 0x1c], 0xe82df4 }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_0093ce56 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe82eb4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0093ce56: }
	__asm { mov edi, dword ptr [esi + 0x44] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0093ce89 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0093ce88 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0093ce88 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0093ce88: }
	__asm { pop ebx }
	__asm { L_0093ce89: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00933390 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c53e0();
extern "C" void fn_006c5500();
// FUNCTION: ROBLOXSTUDIO 0x0093d8e0
extern "C" __declspec(naked) void asm_0093d8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006c53e0 }
	__asm { lea edi, [esi + 0x1818] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { fld qword ptr [esi + 8] }
	__asm { fld qword ptr [ebp - 8] }
	__asm { add esp, 0x10 }
	__asm { fcomi st(0), st(1) }
	__asm { fstp st(1) }
	__asm { jb L_0093d94e }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { fstp st(0) }
	__asm { inc eax }
	__asm { and eax, 0x1ff }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [ebp + 8], cl }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { setne cl }
	__asm { lea eax, [eax + eax*2] }
	__asm { mov dword ptr [esi + eax*4 + 0x1c], ecx }
	__asm { fld qword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { lea eax, [eax + eax*2] }
	__asm { fstp dword ptr [esi + eax*4 + 0x14] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { add eax, 2 }
	__asm { lea eax, [eax + eax*2] }
	__asm { jmp L_0093d980 }
	__asm { L_0093d94e: }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_0093d963 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { fstp st(0) }
	__asm { lea eax, [eax + eax*2] }
	__asm { inc dword ptr [esi + eax*4 + 0x1c] }
	__asm { fld qword ptr [ebp - 8] }
	__asm { L_0093d963: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { lea eax, [eax + eax*2] }
	__asm { fadd dword ptr [esi + eax*4 + 0x14] }
	__asm { fstp dword ptr [esi + eax*4 + 0x14] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, 2 }
	__asm { lea eax, [eax + eax*2] }
	__asm { fld dword ptr [esi + eax*4] }
	__asm { fadd qword ptr [ebp + 0xc] }
	__asm { L_0093d980: }
	__asm { fstp dword ptr [esi + eax*4] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0093f140();
extern "C" void fn_00b0bbd0();
// FUNCTION: ROBLOXSTUDIO 0x00944780
extern "C" __declspec(naked) void asm_00944780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebx + 0x68], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0093f140 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0x6c], ecx }
	__asm { mov esi, dword ptr [ebx + 0x70] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0x70], edx }
	__asm { test esi, esi }
	__asm { je L_009447ff }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009447ff }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009447ff }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009447ff: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00944830 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00944830 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00944830 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00944830: }
	__asm { mov ecx, dword ptr [ebx + 0x6c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x74], ecx }
	__asm { push dword ptr [eax + 0xba0] }
	__asm { call fn_00b0bbd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_006bc0d0();
extern "C" void fn_0094bf50();
extern "C" void fn_009515c0();
extern "C" void fn_00955570();
extern "C" void fn_00955650();
// FUNCTION: ROBLOXSTUDIO 0x00956ef0
extern "C" __declspec(naked) void asm_00956ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39190 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00955650 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x24 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [edi + 0x18], 0 }
	__asm { je L_00956f49 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_009515c0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0094bf50 }
	__asm { L_00956f49: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [edi + 0x88] }
	__asm { push eax }
	__asm { call fn_00955570 }
	__asm { add esp, 8 }
	__asm { lea ecx, [edi + 0x2c] }
	__asm { mov byte ptr [edi + 0x18], 1 }
	__asm { call fn_006bc0d0 }
	__asm { mov edi, dword ptr [edi + 0x4c] }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp esi, edi }
	__asm { je L_00956f7e }
	__asm { L_00956f70: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_006bc0d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, edi }
	__asm { jne L_00956f70 }
	__asm { L_00956f7e: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { pop edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_00956fba }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00956fba }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00956fba }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00956fba }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00956fba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_009570d0();
// FUNCTION: ROBLOXSTUDIO 0x00957040
extern "C" __declspec(naked) void asm_00957040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009570d0 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_009570c0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009570c0 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009570c0 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009570c0 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009570c0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_004030b0();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00426930();
extern "C" void fn_0095a840();
extern "C" void fn_0095f200();
// FUNCTION: ROBLOXSTUDIO 0x0095e9f0
extern "C" __declspec(naked) void asm_0095e9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0xf8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea ebx, [esi + 0x100] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movzx eax, byte ptr [ebx + 0xc] }
	__asm { lea esi, [ebx + 0xc] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_0095ea40 }
	__asm { inc eax }
	__asm { jmp L_0095ea42 }
	__asm { L_0095ea40: }
	__asm { xor eax, eax }
	__asm { L_0095ea42: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { jne L_0095ea68 }
	__asm { xor bl, bl }
	__asm { jmp L_0095ea89 }
	__asm { L_0095ea68: }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0095f200 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0095ea87 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add eax, 0x24 }
	__asm { push eax }
	__asm { call fn_00426930 }
	__asm { L_0095ea87: }
	__asm { mov bl, 1 }
	__asm { L_0095ea89: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop edi }
	__asm { je L_0095eac4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0095eac4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0095eac4 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0095eac4 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0095eac4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10198[];
extern "C" void fn_004030b0();
extern "C" void fn_00403540();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0095a840();
extern "C" void fn_0095f270();
// FUNCTION: ROBLOXSTUDIO 0x0095eae0
extern "C" __declspec(naked) void asm_0095eae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0xf8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea ebx, [esi + 0x100] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movzx eax, byte ptr [ebx + 0xc] }
	__asm { lea esi, [ebx + 0xc] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_0095eb30 }
	__asm { inc eax }
	__asm { jmp L_0095eb32 }
	__asm { L_0095eb30: }
	__asm { xor eax, eax }
	__asm { L_0095eb32: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { jne L_0095eb58 }
	__asm { xor bl, bl }
	__asm { jmp L_0095eb81 }
	__asm { L_0095eb58: }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0095f270 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_0095eb7f }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add eax, 0x24 }
	__asm { cmp ecx, eax }
	__asm { je L_0095eb7f }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_0095eb7f: }
	__asm { mov bl, 1 }
	__asm { L_0095eb81: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop edi }
	__asm { je L_0095ebbc }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0095ebbc }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0095ebbc }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0095ebbc }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0095ebbc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10198[];
extern "C" char g_012fc97a[];
extern "C" void fn_00403380();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_006b8a9c();
extern "C" void fn_0095c730();
// FUNCTION: ROBLOXSTUDIO 0x00960310
extern "C" __declspec(naked) void asm_00960310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39d10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov bl, byte ptr [g_012fc97a] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test bl, bl }
	__asm { je L_0096035d }
	__asm { mov ecx, esi }
	__asm { call fn_00403380 }
	__asm { push eax }
	__asm { movzx eax, bl }
	__asm { push 0xe85080 }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { L_0096035d: }
	__asm { lea eax, [edi + 0xf8] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_0096039d }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0096039d: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009603bc }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_009603bc: }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call fn_0095c730 }
	__asm { mov edx, dword ptr [edi + 0x100] }
	__asm { lea ecx, [edi + 0x100] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_009603f0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_009603f0: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00960427 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00960427 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00960427 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00960427 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00960427: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00960459 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00960459 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00960459 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00960459: }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0096048a }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0096048a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0096048a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0096048a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10198[];
extern "C" char g_012fc97a[];
extern "C" void fn_00403380();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_006b8a9c();
extern "C" void fn_0095c870();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009604a0
extern "C" __declspec(naked) void asm_009604a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39d40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov bl, byte ptr [g_012fc97a] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test bl, bl }
	__asm { je L_009604ed }
	__asm { mov ecx, esi }
	__asm { call fn_00403380 }
	__asm { push eax }
	__asm { movzx eax, bl }
	__asm { push 0xe85080 }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { L_009604ed: }
	__asm { lea eax, [edi + 0xf8] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_0096052d }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0096052d: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0096054c }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_0096054c: }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_0095c870 }
	__asm { mov edx, dword ptr [edi + 0x100] }
	__asm { lea ecx, [edi + 0x100] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [edx + 4] }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0096057a }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0096057a: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_009605c3 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009605c3 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009605c3 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009605c3 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009605c3: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009605f5 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009605f5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009605f5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009605f5: }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00960626 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00960626 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00960626 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00960626: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00493600();
extern "C" void fn_00887050();
extern "C" void fn_0097f6d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00964fc0
extern "C" __declspec(naked) void asm_00964fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a443 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ebx, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ebx, ebx }
	__asm { je L_00965025 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { test esi, esi }
	__asm { je L_0096501c }
	__asm { lea ecx, [esi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0096501c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0096501c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0096501c: }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00965025: }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { test eax, eax }
	__asm { je L_00965035 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00965035: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { jmp fn_00887050 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_0097f6d0 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01301204[];
extern "C" char g_01301208[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00967790
extern "C" __declspec(naked) void asm_00967790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a74e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00967b0c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009677c2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x96bec0 }
	__asm { push 0x13011fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01301208] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00967829 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01301208], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0096781d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01301204], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0096782e }
	__asm { L_0096781d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01301204], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0096782e }
	__asm { L_00967829: }
	__asm { mov eax, dword ptr [g_01301204] }
	__asm { L_0096782e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009678b5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0096785b }
	__asm { add eax, -5 }
	__asm { jmp L_0096785d }
	__asm { L_0096785b: }
	__asm { xor eax, eax }
	__asm { L_0096785d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009678b2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009678b2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009678a1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009678b2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009678a1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009678b2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009678b5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009679a5 }
	__asm { L_009678c0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009679a5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00967945 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009678e8 }
	__asm { add eax, -5 }
	__asm { jmp L_009678ea }
	__asm { L_009678e8: }
	__asm { xor eax, eax }
	__asm { L_009678ea: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0096793f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0096793f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0096792e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0096793f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0096792e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0096793f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00967945: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0096799a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0096795c }
	__asm { add ebx, -5 }
	__asm { jmp L_0096795e }
	__asm { L_0096795c: }
	__asm { xor ebx, ebx }
	__asm { L_0096795e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00967994 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00967994 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0096799a }
	__asm { L_00967994: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0096799a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009678c0 }
	__asm { L_009679a5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00967a09 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00967a09 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00967a09 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00967a09 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009679ff }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_009679fd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009679ff }
	__asm { L_009679fd: }
	__asm { mov esi, edx }
	__asm { L_009679ff: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00967a09: }
	__asm { test esi, esi }
	__asm { je L_00967a70 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00967a19 }
	__asm { add eax, -5 }
	__asm { jmp L_00967a1b }
	__asm { L_00967a19: }
	__asm { xor eax, eax }
	__asm { L_00967a1b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00967a70 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00967a70 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00967a5f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00967a70 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00967a5f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00967a70: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00967abf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00967a87 }
	__asm { add edi, -5 }
	__asm { jmp L_00967a89 }
	__asm { L_00967a87: }
	__asm { xor edi, edi }
	__asm { L_00967a89: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00967ab9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00967ab9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00967abf }
	__asm { L_00967ab9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00967abf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00967afe }
	__asm { add esi, 5 }
	__asm { je L_00967ad4 }
	__asm { add esi, -5 }
	__asm { jmp L_00967ad6 }
	__asm { L_00967ad4: }
	__asm { xor esi, esi }
	__asm { L_00967ad6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00967afe }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00967afe }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00967afe: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009677c2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00967b0c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_0096be30();
// FUNCTION: ROBLOXSTUDIO 0x0096a000
extern "C" __declspec(naked) void asm_0096a000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_0096a038 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0096a038: }
	__asm { push 0x96bec0 }
	__asm { push 0x13011fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0096be30 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0096a074 }
	__asm { push ebx }
	__asm { jmp L_0096a078 }
	__asm { L_0096a074: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_0096a078: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_0096a0ba }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0096a0ba }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0096a0ba }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0096a0ba }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0096a0ba: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0096a0fd }
	__asm { add esi, 5 }
	__asm { je L_0096a0cf }
	__asm { add esi, -5 }
	__asm { jmp L_0096a0d1 }
	__asm { L_0096a0cf: }
	__asm { xor esi, esi }
	__asm { L_0096a0d1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0096a0fd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0096a0fd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0096a0fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_007c2020();
// FUNCTION: ROBLOXSTUDIO 0x0096c380
extern "C" __declspec(naked) void asm_0096c380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ecx + 0x208] }
	__asm { fld qword ptr [ebp + 8] }
	__asm { fucomi st(0), st(1) }
	__asm { fstp st(1) }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0096c3aa }
	__asm { push 0x1300d84 }
	__asm { fstp qword ptr [ecx + 0x208] }
	__asm { call fn_007b4f50 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0096c3aa: }
	__asm { fstp st(0) }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x128] }
	__asm { lea ecx, [esi + 0x128] }
	__asm { call dword ptr [eax + 8] }
	__asm { cmp dword ptr [eax + 0x1a0], 6 }
	__asm { je L_0096c3e9 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x1d6], 1 }
	__asm { call fn_007c2020 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0096c3e9 }
	__asm { mov dword ptr [eax + 0x120], 1 }
	__asm { L_0096c3e9: }
	__asm { pop esi }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0043a870();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007b4f50();
extern "C" void fn_007cd560();
extern "C" void fn_00c363b0();
// FUNCTION: ROBLOXSTUDIO 0x0096d330
extern "C" __declspec(naked) void asm_0096d330()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_0096d37f }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0096d34e }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0096d350 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0096d350 }
	__asm { L_0096d34e: }
	__asm { mov eax, edi }
	__asm { L_0096d350: }
	__asm { test eax, eax }
	__asm { je L_0096d37f }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_0096d37f }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0096d37f }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0096d37f }
	__asm { call fn_0043a870 }
	__asm { mov esi, eax }
	__asm { jmp L_0096d381 }
	__asm { L_0096d37f: }
	__asm { xor esi, esi }
	__asm { L_0096d381: }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00c363b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0096d3bc }
	__asm { fld qword ptr [edi + 0x208] }
	__asm { fld qword ptr [esi + 0x80] }
	__asm { fucomi st(0), st(1) }
	__asm { fstp st(1) }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0096d3cc }
	__asm { push 0x1300d84 }
	__asm { fstp qword ptr [edi + 0x208] }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0096d3bc: }
	__asm { fld qword ptr [esi + 0x80] }
	__asm { fstp qword ptr [edi + 0x208] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0096d3cc: }
	__asm { pop edi }
	__asm { fstp st(0) }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_007c0b60();
extern "C" void fn_00855e70();
extern "C" void fn_00b0bbd0();
extern "C" void fn_00c2fed0();
// FUNCTION: ROBLOXSTUDIO 0x0096d3e0
extern "C" __declspec(naked) void asm_0096d3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { call fn_00c2fed0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0096d460 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00855e70 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0096d42a }
	__asm { push esi }
	__asm { call fn_00b0bbd0 }
	__asm { L_0096d42a: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0096d460 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0096d45f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0096d45f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0096d45f: }
	__asm { pop edi }
	__asm { L_0096d460: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { lea eax, [ecx + 0x138] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 0x128] }
	__asm { lea ecx, [ecx + 0x128] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, eax }
	__asm { call fn_007c0b60 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0096ff90
extern "C" __declspec(naked) void asm_0096ff90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ecx + 0xb4], 0 }
	__asm { lea edx, [ecx + 0xd0] }
	__asm { jne L_0096ffa8 }
	__asm { lea edx, [ecx + 0xdc] }
	__asm { L_0096ffa8: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { lea eax, [ecx + 0x184] }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_00573dd0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0097cf20
extern "C" __declspec(naked) void asm_0097cf20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_0097cf58 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0097cf58: }
	__asm { push 0x573dc0 }
	__asm { push 0x131ca78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00573dd0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0097cf94 }
	__asm { push ebx }
	__asm { jmp L_0097cf98 }
	__asm { L_0097cf94: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_0097cf98: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_0097cfda }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0097cfda }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0097cfda }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0097cfda }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0097cfda: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0097d01d }
	__asm { add esi, 5 }
	__asm { je L_0097cfef }
	__asm { add esi, -5 }
	__asm { jmp L_0097cff1 }
	__asm { L_0097cfef: }
	__asm { xor esi, esi }
	__asm { L_0097cff1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097d01d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0097d01d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0097d01d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e10388[];
extern "C" char g_0130162a[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_00481410();
extern "C" void fn_005457f0();
extern "C" void fn_007cd560();
extern "C" void fn_0083dda0();
extern "C" void fn_0090c1c0();
extern "C" void fn_00979930();
extern "C" void fn_0097a4a0();
extern "C" void fn_00c707d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0097d470
extern "C" __declspec(naked) void asm_0097d470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b8d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { call fn_00c707d0 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebx + 0xa0] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea esi, [ebx + 0xdc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp eax, esi }
	__asm { je L_0097d4f5 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { L_0097d4f5: }
	__asm { cmp byte ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0097d52c }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0097d52c }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0097d52c }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0097d52c }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0097d52c: }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { jbe L_0097d773 }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp esi, eax }
	__asm { je L_0097d773 }
	__asm { L_0097d543: }
	__asm { cmp byte ptr [g_0130162a], 0 }
	__asm { jne L_0097d560 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, ebx }
	__asm { call fn_0097a4a0 }
	__asm { L_0097d560: }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { test ebx, ebx }
	__asm { je L_0097d705 }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0097d582 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0097d584 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0097d584 }
	__asm { L_0097d582: }
	__asm { mov eax, ebx }
	__asm { L_0097d584: }
	__asm { test eax, eax }
	__asm { je L_0097d631 }
	__asm { add eax, 0x1c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { je L_0097d631 }
	__asm { mov edi, dword ptr [eax + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0097d631 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add ecx, -0x1c }
	__asm { je L_0097d631 }
	__asm { call fn_00481410 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_0097d631 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0097d5e3 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0097d5e3: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0097d603 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0097d603: }
	__asm { push dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0090c1c0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { cmp edx, 1 }
	__asm { je L_0097d705 }
	__asm { L_0097d631: }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0097d646 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0097d648 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0097d648 }
	__asm { L_0097d646: }
	__asm { mov eax, ebx }
	__asm { L_0097d648: }
	__asm { test eax, eax }
	__asm { je L_0097d702 }
	__asm { add eax, 0x1c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { je L_0097d702 }
	__asm { mov edi, dword ptr [eax + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0097d702 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add ecx, -0x1c }
	__asm { je L_0097d702 }
	__asm { call fn_005457f0 }
	__asm { test eax, eax }
	__asm { je L_0097d702 }
	__asm { mov ecx, dword ptr [eax + 0x178] }
	__asm { test ecx, ecx }
	__asm { je L_0097d702 }
	__asm { call fn_0083dda0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_0097d702 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0097d6be }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0097d6be: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0097d6de }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0097d6de: }
	__asm { push dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0090c1c0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_0097d705 }
	__asm { L_0097d702: }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { L_0097d705: }
	__asm { cmp byte ptr [g_0130162a], 0 }
	__asm { je L_0097d72a }
	__asm { cmp edx, 1 }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { lea eax, [esi + 0x1c] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, ebx }
	__asm { call fn_0097a4a0 }
	__asm { L_0097d72a: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_0097d76a }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0097d74f }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0097d76a }
	__asm { L_0097d743: }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0097d743 }
	__asm { jmp L_0097d76a }
	__asm { L_0097d74f: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0097d768 }
	__asm { L_0097d758: }
	__asm { cmp esi, dword ptr [eax + 8] }
	__asm { jne L_0097d768 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0097d758 }
	__asm { L_0097d768: }
	__asm { mov esi, eax }
	__asm { L_0097d76a: }
	__asm { cmp esi, dword ptr [ebp - 0x28] }
	__asm { jne L_0097d543 }
	__asm { L_0097d773: }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00979930 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e10268[];
extern "C" char g_00e10388[];
extern "C" char g_0122cb14[];
extern "C" char g_0122cb18[];
extern "C" char g_0122cb1c[];
extern "C" char g_01301628[];
extern "C" void fn_004038a0();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00421eb0();
extern "C" void fn_00481410();
extern "C" void fn_007b1ac0();
extern "C" void fn_007b3490();
extern "C" void fn_007b5ea0();
extern "C" void fn_007cd560();
extern "C" void fn_00810590();
extern "C" void fn_008523c0();
extern "C" void fn_008780e0();
extern "C" void fn_00878780();
extern "C" void fn_00971be0();
extern "C" void fn_009773b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0097d910
extern "C" __declspec(naked) void asm_0097d910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b908 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0x1301644 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp ebx, eax }
	__asm { je L_0097d99b }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x2c], esi }
	__asm { mov dword ptr [ebp - 0x28], edi }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { jmp L_0097d9a1 }
	__asm { L_0097d99b: }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { mov esi, dword ptr [ebp - 0x2c] }
	__asm { L_0097d9a1: }
	__asm { cmp byte ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0097d9de }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0097d9d8 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0097d9d8 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0097d9d8 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0097d9d8: }
	__asm { mov esi, dword ptr [ebp - 0x2c] }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { L_0097d9de: }
	__asm { mov ecx, edi }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_0097dbd6 }
	__asm { cmp esi, edi }
	__asm { je L_0097dbd6 }
	__asm { L_0097da00: }
	__asm { cmp byte ptr [g_01301628], 0 }
	__asm { je L_0097dbb9 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push 2 }
	__asm { mov ecx, dword ptr [ecx + 0x6c] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_007b1ac0 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_0097da4a }
	__asm { add eax, 0x1c }
	__asm { je L_0097da4a }
	__asm { mov ebx, dword ptr [eax + 0xc] }
	__asm { call fn_00810590 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0097da4a }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { jmp L_0097da4c }
	__asm { L_0097da4a: }
	__asm { xor ebx, ebx }
	__asm { L_0097da4c: }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub esp, 0x10 }
	__asm { cvttss2si ecx, dword ptr [eax + 0x6c] }
	__asm { cvttss2si eax, dword ptr [eax + 0x70] }
	__asm { mov word ptr [ebp - 0x38], cx }
	__asm { mov ecx, esp }
	__asm { mov word ptr [ebp - 0x30], ax }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov eax, dword ptr [ebp - 0x3c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00878780 }
	__asm { movss xmm0, dword ptr [g_0122cb14] }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov ecx, ebx }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [g_0122cb18] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [g_0122cb1c] }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { call fn_008780e0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_008523c0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00481410 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_0097db57 }
	__asm { push 9 }
	__asm { push 0xe77a7c }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 0x40], 0xf }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [ebp - 0x54], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_007b3490 }
	__asm { cmp dword ptr [ebp - 0x40], 0x10 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { jb L_0097db37 }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_0097db37: }
	__asm { mov dword ptr [ebp - 0x40], 0xf }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [ebp - 0x54], 0 }
	__asm { test eax, eax }
	__asm { je L_0097db57 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_007b5ea0 }
	__asm { L_0097db57: }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ebx, ebx }
	__asm { je L_0097db88 }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0097db88 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0097db88 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0097db88: }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0097dbb9 }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0097dbb9 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0097dbb9 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0097dbb9: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push dword ptr [esi + 8] }
	__asm { push esi }
	__asm { call fn_009773b0 }
	__asm { add esi, 0xc }
	__asm { cmp esi, edi }
	__asm { jne L_0097da00 }
	__asm { mov esi, dword ptr [ebp - 0x2c] }
	__asm { L_0097dbd6: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0097dc07 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00971be0 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_0097dc07: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004063f0();
extern "C" void fn_005dbac0();
extern "C" void fn_00984560();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009845a0
extern "C" __declspec(naked) void asm_009845a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c190 }
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
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_005dbac0 }
	__asm { test al, al }
	__asm { je L_0098461d }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00984560 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_0098461d: }
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
	__asm { call fn_004063f0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xe89c58 }
	__asm { mov dword ptr [ecx + 4], 2 }
	__asm { mov dword ptr [ecx + 8], 1 }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx + 0x1c], 0 }
	__asm { mov dword ptr [ecx + 0x20], 0 }
	__asm { mov dword ptr [ecx + 0x24], 0 }
	__asm { mov eax, ecx }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_01215924[];
extern "C" char g_01301e8b[];
extern "C" void fn_004039a0();
extern "C" void fn_00463750();
extern "C" void fn_0047ec70();
extern "C" void fn_006b8a90();
extern "C" void fn_008fa110();
extern "C" void fn_0098c890();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6804();
extern "C" void fn_00cfb7ce();
// FUNCTION: ROBLOXSTUDIO 0x0098db50
extern "C" __declspec(naked) void asm_0098db50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd302a0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_01301e8b] }
	__asm { sub esp, 0x9c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0098db8d }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xe8def0 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0098db8d: }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jne L_0098dcfb }
	__asm { fld dword ptr [g_01215924] }
	__asm { push ecx }
	__asm { lea eax, [edi + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00463750 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call fn_008fa110 }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_0098dc0f }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0098dbfb }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0098dbfb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0098dbfb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0098dbfb: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0098dc0f: }
	__asm { xor esi, esi }
	__asm { cmp byte ptr [edi + 0x28], 0 }
	__asm { mov eax, 0x10 }
	__asm { cmovne esi, eax }
	__asm { call fn_0047ec70 }
	__asm { cmp byte ptr [eax + 0x75], 0 }
	__asm { mov edx, 0x40 }
	__asm { mov ecx, 0x20 }
	__asm { cmovne ecx, edx }
	__asm { push 0x7c }
	__asm { lea eax, [ebp - 0xa8] }
	__asm { or ecx, 0x800 }
	__asm { push 0 }
	__asm { push eax }
	__asm { or esi, ecx }
	__asm { call fn_00cf6804 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 0xa8], 0x7c }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { push 0xe8df00 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0xa4], eax }
	__asm { call fn_004039a0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_0098dc80 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0098dc80: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea edx, [ebp - 0x2c] }
	__asm { push edx }
	__asm { push edi }
	__asm { lea edx, [ebp - 0xa8] }
	__asm { push edx }
	__asm { push esi }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00cfb7ce }
	__asm { push eax }
	__asm { call fn_0098c890 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0098dcb3 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0098dcb3: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_0098dcfa }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0098dcfa }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0098dcfa }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0098dcfa: }
	__asm { pop ebx }
	__asm { L_0098dcfb: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { mov eax, dword ptr [ecx + 0x9c] }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_013031a0[];
extern "C" char g_013031a4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009966d0
extern "C" __declspec(naked) void asm_009966d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3d58e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00996a4c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00996702: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9997a0 }
	__asm { push 0x1303188 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013031a4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00996769 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013031a4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0099675d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013031a0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0099676e }
	__asm { L_0099675d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013031a0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0099676e }
	__asm { L_00996769: }
	__asm { mov eax, dword ptr [g_013031a0] }
	__asm { L_0099676e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009967f5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0099679b }
	__asm { add eax, -5 }
	__asm { jmp L_0099679d }
	__asm { L_0099679b: }
	__asm { xor eax, eax }
	__asm { L_0099679d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009967f2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009967f2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009967e1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009967f2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009967e1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009967f2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009967f5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009968e5 }
	__asm { L_00996800: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009968e5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00996885 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00996828 }
	__asm { add eax, -5 }
	__asm { jmp L_0099682a }
	__asm { L_00996828: }
	__asm { xor eax, eax }
	__asm { L_0099682a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0099687f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0099687f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099686e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099687f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099686e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099687f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00996885: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009968da }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0099689c }
	__asm { add ebx, -5 }
	__asm { jmp L_0099689e }
	__asm { L_0099689c: }
	__asm { xor ebx, ebx }
	__asm { L_0099689e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009968d4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009968d4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009968da }
	__asm { L_009968d4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009968da: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00996800 }
	__asm { L_009968e5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00996949 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00996949 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00996949 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00996949 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0099693f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0099693d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0099693f }
	__asm { L_0099693d: }
	__asm { mov esi, edx }
	__asm { L_0099693f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00996949: }
	__asm { test esi, esi }
	__asm { je L_009969b0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00996959 }
	__asm { add eax, -5 }
	__asm { jmp L_0099695b }
	__asm { L_00996959: }
	__asm { xor eax, eax }
	__asm { L_0099695b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009969b0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009969b0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099699f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009969b0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099699f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009969b0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009969ff }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009969c7 }
	__asm { add edi, -5 }
	__asm { jmp L_009969c9 }
	__asm { L_009969c7: }
	__asm { xor edi, edi }
	__asm { L_009969c9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009969f9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009969f9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009969ff }
	__asm { L_009969f9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009969ff: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00996a3e }
	__asm { add esi, 5 }
	__asm { je L_00996a14 }
	__asm { add esi, -5 }
	__asm { jmp L_00996a16 }
	__asm { L_00996a14: }
	__asm { xor esi, esi }
	__asm { L_00996a16: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00996a3e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00996a3e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00996a3e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00996702 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00996a4c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_013031b0[];
extern "C" char g_013031b4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00996a60
extern "C" __declspec(naked) void asm_00996a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3d5be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00996ddc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00996a92: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9997b0 }
	__asm { push 0x1303198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013031b4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00996af9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013031b4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00996aed }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013031b0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00996afe }
	__asm { L_00996aed: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013031b0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00996afe }
	__asm { L_00996af9: }
	__asm { mov eax, dword ptr [g_013031b0] }
	__asm { L_00996afe: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00996b85 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00996b2b }
	__asm { add eax, -5 }
	__asm { jmp L_00996b2d }
	__asm { L_00996b2b: }
	__asm { xor eax, eax }
	__asm { L_00996b2d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00996b82 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00996b82 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00996b71 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00996b82 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00996b71: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00996b82: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00996b85: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00996c75 }
	__asm { L_00996b90: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00996c75 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00996c15 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00996bb8 }
	__asm { add eax, -5 }
	__asm { jmp L_00996bba }
	__asm { L_00996bb8: }
	__asm { xor eax, eax }
	__asm { L_00996bba: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00996c0f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00996c0f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00996bfe }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00996c0f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00996bfe: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00996c0f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00996c15: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00996c6a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00996c2c }
	__asm { add ebx, -5 }
	__asm { jmp L_00996c2e }
	__asm { L_00996c2c: }
	__asm { xor ebx, ebx }
	__asm { L_00996c2e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00996c64 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00996c64 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00996c6a }
	__asm { L_00996c64: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00996c6a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00996b90 }
	__asm { L_00996c75: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00996cd9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00996cd9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00996cd9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00996cd9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00996ccf }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00996ccd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00996ccf }
	__asm { L_00996ccd: }
	__asm { mov esi, edx }
	__asm { L_00996ccf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00996cd9: }
	__asm { test esi, esi }
	__asm { je L_00996d40 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00996ce9 }
	__asm { add eax, -5 }
	__asm { jmp L_00996ceb }
	__asm { L_00996ce9: }
	__asm { xor eax, eax }
	__asm { L_00996ceb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00996d40 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00996d40 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00996d2f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00996d40 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00996d2f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00996d40: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00996d8f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00996d57 }
	__asm { add edi, -5 }
	__asm { jmp L_00996d59 }
	__asm { L_00996d57: }
	__asm { xor edi, edi }
	__asm { L_00996d59: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00996d89 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00996d89 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00996d8f }
	__asm { L_00996d89: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00996d8f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00996dce }
	__asm { add esi, 5 }
	__asm { je L_00996da4 }
	__asm { add esi, -5 }
	__asm { jmp L_00996da6 }
	__asm { L_00996da4: }
	__asm { xor esi, esi }
	__asm { L_00996da6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00996dce }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00996dce }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00996dce: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00996a92 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00996ddc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_013031bc[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0099d3e0();
// FUNCTION: ROBLOXSTUDIO 0x0099bec0
extern "C" __declspec(naked) void asm_0099bec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0099d3e0 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0099bf09 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0099bf09 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_0099bf09 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0099bf09: }
	__asm { add dword ptr [g_013031bc], 0xec }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_0099d3e0();
// FUNCTION: ROBLOXSTUDIO 0x0099daf0
extern "C" __declspec(naked) void asm_0099daf0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0099d3e0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_0099db0e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_0099db18 }
	__asm { L_0099db0e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_0099db18: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0099db44 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0099db44 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_0099db44 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0099db44: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009b2790();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x009ac310
extern "C" __declspec(naked) void asm_009ac310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_009ac3af }
	__asm { push 0x9b2a10 }
	__asm { push 0x1303f14 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009b2790 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009ac375 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_009ac375: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009ac3af }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ac3af }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ac3af }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ac3af }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009ac3af: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01303eec[];
extern "C" char g_01303ef0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009acd80
extern "C" __declspec(naked) void asm_009acd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e94e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009ad0fc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009acdb2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9b29f0 }
	__asm { push 0x1303ecc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01303ef0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009ace19 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303ef0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009ace0d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01303eec], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009ace1e }
	__asm { L_009ace0d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01303eec], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009ace1e }
	__asm { L_009ace19: }
	__asm { mov eax, dword ptr [g_01303eec] }
	__asm { L_009ace1e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009acea5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009ace4b }
	__asm { add eax, -5 }
	__asm { jmp L_009ace4d }
	__asm { L_009ace4b: }
	__asm { xor eax, eax }
	__asm { L_009ace4d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009acea2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009acea2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009ace91 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009acea2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009ace91: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009acea2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009acea5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009acf95 }
	__asm { L_009aceb0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009acf95 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009acf35 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009aced8 }
	__asm { add eax, -5 }
	__asm { jmp L_009aceda }
	__asm { L_009aced8: }
	__asm { xor eax, eax }
	__asm { L_009aceda: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009acf2f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009acf2f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009acf1e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009acf2f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009acf1e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009acf2f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009acf35: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009acf8a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009acf4c }
	__asm { add ebx, -5 }
	__asm { jmp L_009acf4e }
	__asm { L_009acf4c: }
	__asm { xor ebx, ebx }
	__asm { L_009acf4e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009acf84 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009acf84 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009acf8a }
	__asm { L_009acf84: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009acf8a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009aceb0 }
	__asm { L_009acf95: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009acff9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009acff9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009acff9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009acff9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009acfef }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_009acfed }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009acfef }
	__asm { L_009acfed: }
	__asm { mov esi, edx }
	__asm { L_009acfef: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009acff9: }
	__asm { test esi, esi }
	__asm { je L_009ad060 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009ad009 }
	__asm { add eax, -5 }
	__asm { jmp L_009ad00b }
	__asm { L_009ad009: }
	__asm { xor eax, eax }
	__asm { L_009ad00b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009ad060 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009ad060 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009ad04f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ad060 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009ad04f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ad060: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009ad0af }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009ad077 }
	__asm { add edi, -5 }
	__asm { jmp L_009ad079 }
	__asm { L_009ad077: }
	__asm { xor edi, edi }
	__asm { L_009ad079: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ad0a9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ad0a9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009ad0af }
	__asm { L_009ad0a9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009ad0af: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009ad0ee }
	__asm { add esi, 5 }
	__asm { je L_009ad0c4 }
	__asm { add esi, -5 }
	__asm { jmp L_009ad0c6 }
	__asm { L_009ad0c4: }
	__asm { xor esi, esi }
	__asm { L_009ad0c6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ad0ee }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ad0ee }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009ad0ee: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009acdb2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009ad0fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01303edc[];
extern "C" char g_01303ee0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009ad110
extern "C" __declspec(naked) void asm_009ad110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e97e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009ad48c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009ad142: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9b2a00 }
	__asm { push 0x1303ebc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01303ee0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009ad1a9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01303ee0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009ad19d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01303edc], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009ad1ae }
	__asm { L_009ad19d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01303edc], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009ad1ae }
	__asm { L_009ad1a9: }
	__asm { mov eax, dword ptr [g_01303edc] }
	__asm { L_009ad1ae: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009ad235 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009ad1db }
	__asm { add eax, -5 }
	__asm { jmp L_009ad1dd }
	__asm { L_009ad1db: }
	__asm { xor eax, eax }
	__asm { L_009ad1dd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009ad232 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009ad232 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009ad221 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ad232 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009ad221: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ad232: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009ad235: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009ad325 }
	__asm { L_009ad240: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009ad325 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009ad2c5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009ad268 }
	__asm { add eax, -5 }
	__asm { jmp L_009ad26a }
	__asm { L_009ad268: }
	__asm { xor eax, eax }
	__asm { L_009ad26a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009ad2bf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009ad2bf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009ad2ae }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ad2bf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009ad2ae: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ad2bf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009ad2c5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009ad31a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009ad2dc }
	__asm { add ebx, -5 }
	__asm { jmp L_009ad2de }
	__asm { L_009ad2dc: }
	__asm { xor ebx, ebx }
	__asm { L_009ad2de: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ad314 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ad314 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009ad31a }
	__asm { L_009ad314: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009ad31a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009ad240 }
	__asm { L_009ad325: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009ad389 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ad389 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ad389 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ad389 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009ad37f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_009ad37d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009ad37f }
	__asm { L_009ad37d: }
	__asm { mov esi, edx }
	__asm { L_009ad37f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009ad389: }
	__asm { test esi, esi }
	__asm { je L_009ad3f0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009ad399 }
	__asm { add eax, -5 }
	__asm { jmp L_009ad39b }
	__asm { L_009ad399: }
	__asm { xor eax, eax }
	__asm { L_009ad39b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009ad3f0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009ad3f0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009ad3df }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ad3f0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009ad3df: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ad3f0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009ad43f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009ad407 }
	__asm { add edi, -5 }
	__asm { jmp L_009ad409 }
	__asm { L_009ad407: }
	__asm { xor edi, edi }
	__asm { L_009ad409: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ad439 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ad439 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009ad43f }
	__asm { L_009ad439: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009ad43f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009ad47e }
	__asm { add esi, 5 }
	__asm { je L_009ad454 }
	__asm { add esi, -5 }
	__asm { jmp L_009ad456 }
	__asm { L_009ad454: }
	__asm { xor esi, esi }
	__asm { L_009ad456: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ad47e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ad47e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009ad47e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009ad142 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009ad48c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_009b2700();
// FUNCTION: ROBLOXSTUDIO 0x009b13b0
extern "C" __declspec(naked) void asm_009b13b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_009b13e8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_009b13e8: }
	__asm { push 0x9b2a00 }
	__asm { push 0x1303ebc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009b2700 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_009b1424 }
	__asm { push ebx }
	__asm { jmp L_009b1428 }
	__asm { L_009b1424: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_009b1428: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_009b146a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009b146a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009b146a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009b146a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009b146a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009b14ad }
	__asm { add esi, 5 }
	__asm { je L_009b147f }
	__asm { add esi, -5 }
	__asm { jmp L_009b1481 }
	__asm { L_009b147f: }
	__asm { xor esi, esi }
	__asm { L_009b1481: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009b14ad }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009b14ad }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009b14ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e102c4[];
extern "C" char g_00e102c8[];
extern "C" char g_00e102d4[];
extern "C" char g_00e102d8[];
extern "C" char g_00e10318[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10328[];
extern "C" char g_01303810[];
extern "C" void fn_00403540();
extern "C" void fn_004039a0();
extern "C" void fn_0040fb10();
extern "C" void fn_004226b0();
extern "C" void fn_00423a00();
extern "C" void fn_00424610();
extern "C" void fn_00426140();
extern "C" void fn_00427010();
extern "C" void fn_004272a0();
extern "C" void fn_0042d490();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9da0();
extern "C" void fn_009a63f0();
extern "C" void fn_009a6500();
extern "C" void fn_009a99a0();
extern "C" void fn_009aaf70();
extern "C" void fn_009ab1f0();
extern "C" void fn_00ac6360();
extern "C" void fn_00b2deb0();
extern "C" void fn_00c2bee0();
extern "C" void fn_00c2fed0();
extern "C" void fn_00c307f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009b1730
extern "C" __declspec(naked) void asm_009b1730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ece0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xe4 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0xec], 0x1004fbc }
	__asm { mov dword ptr [ebp - 0xdc], 0x1004fb4 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xd4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xec] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e10328] }
	__asm { mov eax, dword ptr [ebp - 0xec] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xec], 0xe18340 }
	__asm { mov eax, dword ptr [ebp - 0xec] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ebp + ecx - 0xf0], eax }
	__asm { lea ecx, [ebp - 0xd4] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xd4], 0xe1827c }
	__asm { mov dword ptr [ebp - 0x9c], 0 }
	__asm { mov dword ptr [ebp - 0x98], 0 }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { or ebx, 0xffffffff }
	__asm { call fn_00c2fed0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009b182b }
	__asm { mov ebx, dword ptr [eax + 0xcc] }
	__asm { push 0x2b }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0xdc] }
	__asm { call dword ptr [g_00e102c4] }
	__asm { push eax }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { L_009b182b: }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x170] }
	__asm { call fn_006b97e0 }
	__asm { push eax }
	__asm { push 0x2b }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0xdc] }
	__asm { call dword ptr [g_00e102c4] }
	__asm { push eax }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e102c4] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xec] }
	__asm { call fn_00424610 }
	__asm { lea eax, [edi + 0x158] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0042d490 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x168] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_009a99a0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b2deb0 }
	__asm { lea eax, [ebp + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x168] }
	__asm { call fn_009a99a0 }
	__asm { lea ecx, [eax + 0x20] }
	__asm { call fn_00b2deb0 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { je L_009b1901 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { dec dword ptr [edx] }
	__asm { jne L_009b1901 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edx + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009b1901 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009b1901 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009b1901 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009b1901: }
	__asm { lea ecx, [edi + 0x150] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { jne L_009b19aa }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x80] }
	__asm { mov dword ptr [ebp - 0x3c], 0x9afcc0 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], edi }
	__asm { call fn_009a6500 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x150] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test eax, eax }
	__asm { je L_009b195f }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009b195f: }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x88] }
	__asm { mov dword ptr [ebp - 0x3c], 0x9afaf0 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], edi }
	__asm { call fn_009a63f0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x154] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test eax, eax }
	__asm { je L_009b19aa }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009b19aa: }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c307f0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009b1a5b }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_009b1a5b }
	__asm { cmp byte ptr [ebp + 0xc], al }
	__asm { je L_009b1a18 }
	__asm { test edi, edi }
	__asm { je L_009b19de }
	__asm { add edi, 0x1c }
	__asm { jmp L_009b19e0 }
	__asm { L_009b19de: }
	__asm { xor edi, edi }
	__asm { L_009b19e0: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push edi }
	__asm { mov ecx, 0x13038a8 }
	__asm { call fn_00ac6360 }
	__asm { jmp L_009b1b42 }
	__asm { L_009b1a18: }
	__asm { test edi, edi }
	__asm { je L_009b1a21 }
	__asm { add edi, 0x1c }
	__asm { jmp L_009b1a23 }
	__asm { L_009b1a21: }
	__asm { xor edi, edi }
	__asm { L_009b1a23: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push edi }
	__asm { mov ecx, 0x1303870 }
	__asm { call fn_00ac6360 }
	__asm { jmp L_009b1b42 }
	__asm { L_009b1a5b: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_009b1ab5 }
	__asm { cmp byte ptr [g_01303810], 0 }
	__asm { jne L_009b1a7f }
	__asm { cmp dword ptr [edi + 0x138], 0 }
	__asm { jne L_009b1a7f }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0xe934b4 }
	__asm { jmp L_009b1ad1 }
	__asm { L_009b1a7f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, edi }
	__asm { call fn_009ab1f0 }
	__asm { jmp L_009b1b42 }
	__asm { L_009b1ab5: }
	__asm { cmp byte ptr [g_01303810], 0 }
	__asm { jne L_009b1b11 }
	__asm { cmp dword ptr [edi + 0x120], 0 }
	__asm { jne L_009b1b11 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0xe934cc }
	__asm { L_009b1ad1: }
	__asm { call fn_004039a0 }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { call fn_00427010 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_009b1aef }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b1aef: }
	__asm { lea ecx, [ebp - 0xec] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_00423a00 }
	__asm { jmp L_009b1bc9 }
	__asm { L_009b1b11: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, edi }
	__asm { call fn_009aaf70 }
	__asm { L_009b1b42: }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_009b1b53 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009b1b53: }
	__asm { mov eax, dword ptr [ebp - 0xec] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp + eax - 0xec], 0xe18340 }
	__asm { mov eax, dword ptr [ebp - 0xec] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ebp + ecx - 0xf0], eax }
	__asm { lea ecx, [ebp - 0xd4] }
	__asm { mov dword ptr [ebp - 0xd4], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebp - 0xd4] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebp - 0xcc] }
	__asm { call dword ptr [g_00e102d8] }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { L_009b1bc9: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009b1bf4 }
	__asm { test al, 1 }
	__asm { jne L_009b1bed }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009b1bed }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009b1bed: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_009b1bf4: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009b1c1b }
	__asm { test al, 1 }
	__asm { jne L_009b1c1b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009b1c1b }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009b1c1b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f988[];
extern "C" void fn_00559370();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009b83c0
extern "C" __declspec(naked) void asm_009b83c0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009b840d }
	__asm { cmp dword ptr [g_0131f988], 0x29a }
	__asm { je L_009b840d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009b83fc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009b840d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009b83fc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009b840d: }
	__asm { mov ecx, 0x131faa8 }
	__asm { jmp fn_00559370 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [ecx + 0x70] }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009c15c0();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x009be110
extern "C" __declspec(naked) void asm_009be110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_009be1af }
	__asm { push 0x9c1700 }
	__asm { push 0x13044b4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009c15c0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009be175 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_009be175: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009be1af }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009be1af }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009be1af }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009be1af }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009be1af: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009c1650();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x009be1c0
extern "C" __declspec(naked) void asm_009be1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_009be25f }
	__asm { push 0x9c1710 }
	__asm { push 0x13044bc }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009c1650 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009be225 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_009be225: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009be25f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009be25f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009be25f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009be25f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009be25f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_013044a4[];
extern "C" char g_013044a8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009be2d0
extern "C" __declspec(naked) void asm_009be2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3fbbe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009be64c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009be302: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9c16e0 }
	__asm { push 0x1304494 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013044a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009be369 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013044a8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009be35d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013044a4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009be36e }
	__asm { L_009be35d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013044a4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009be36e }
	__asm { L_009be369: }
	__asm { mov eax, dword ptr [g_013044a4] }
	__asm { L_009be36e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009be3f5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009be39b }
	__asm { add eax, -5 }
	__asm { jmp L_009be39d }
	__asm { L_009be39b: }
	__asm { xor eax, eax }
	__asm { L_009be39d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009be3f2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009be3f2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009be3e1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009be3f2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009be3e1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009be3f2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009be3f5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009be4e5 }
	__asm { L_009be400: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009be4e5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009be485 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009be428 }
	__asm { add eax, -5 }
	__asm { jmp L_009be42a }
	__asm { L_009be428: }
	__asm { xor eax, eax }
	__asm { L_009be42a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009be47f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009be47f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009be46e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009be47f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009be46e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009be47f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009be485: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009be4da }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009be49c }
	__asm { add ebx, -5 }
	__asm { jmp L_009be49e }
	__asm { L_009be49c: }
	__asm { xor ebx, ebx }
	__asm { L_009be49e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be4d4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be4d4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009be4da }
	__asm { L_009be4d4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009be4da: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009be400 }
	__asm { L_009be4e5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009be549 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009be549 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009be549 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009be549 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009be53f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_009be53d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009be53f }
	__asm { L_009be53d: }
	__asm { mov esi, edx }
	__asm { L_009be53f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009be549: }
	__asm { test esi, esi }
	__asm { je L_009be5b0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009be559 }
	__asm { add eax, -5 }
	__asm { jmp L_009be55b }
	__asm { L_009be559: }
	__asm { xor eax, eax }
	__asm { L_009be55b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009be5b0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009be5b0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009be59f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009be5b0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009be59f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009be5b0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009be5ff }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009be5c7 }
	__asm { add edi, -5 }
	__asm { jmp L_009be5c9 }
	__asm { L_009be5c7: }
	__asm { xor edi, edi }
	__asm { L_009be5c9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be5f9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be5f9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009be5ff }
	__asm { L_009be5f9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009be5ff: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009be63e }
	__asm { add esi, 5 }
	__asm { je L_009be614 }
	__asm { add esi, -5 }
	__asm { jmp L_009be616 }
	__asm { L_009be614: }
	__asm { xor esi, esi }
	__asm { L_009be616: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be63e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be63e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009be63e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009be302 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009be64c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_013044ac[];
extern "C" char g_013044b0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009be660
extern "C" __declspec(naked) void asm_009be660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3fbee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009be9dc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_009be692: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x9c16f0 }
	__asm { push 0x130449c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013044b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009be6f9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013044b0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009be6ed }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013044ac], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009be6fe }
	__asm { L_009be6ed: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013044ac], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009be6fe }
	__asm { L_009be6f9: }
	__asm { mov eax, dword ptr [g_013044ac] }
	__asm { L_009be6fe: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_009be785 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009be72b }
	__asm { add eax, -5 }
	__asm { jmp L_009be72d }
	__asm { L_009be72b: }
	__asm { xor eax, eax }
	__asm { L_009be72d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009be782 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009be782 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009be771 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009be782 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009be771: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009be782: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_009be785: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_009be875 }
	__asm { L_009be790: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_009be875 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009be815 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009be7b8 }
	__asm { add eax, -5 }
	__asm { jmp L_009be7ba }
	__asm { L_009be7b8: }
	__asm { xor eax, eax }
	__asm { L_009be7ba: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009be80f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009be80f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009be7fe }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009be80f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009be7fe: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009be80f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009be815: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_009be86a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_009be82c }
	__asm { add ebx, -5 }
	__asm { jmp L_009be82e }
	__asm { L_009be82c: }
	__asm { xor ebx, ebx }
	__asm { L_009be82e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be864 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be864 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009be86a }
	__asm { L_009be864: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009be86a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_009be790 }
	__asm { L_009be875: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009be8d9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009be8d9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009be8d9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009be8d9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009be8cf }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_009be8cd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009be8cf }
	__asm { L_009be8cd: }
	__asm { mov esi, edx }
	__asm { L_009be8cf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009be8d9: }
	__asm { test esi, esi }
	__asm { je L_009be940 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009be8e9 }
	__asm { add eax, -5 }
	__asm { jmp L_009be8eb }
	__asm { L_009be8e9: }
	__asm { xor eax, eax }
	__asm { L_009be8eb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009be940 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_009be940 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009be92f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009be940 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009be92f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009be940: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_009be98f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_009be957 }
	__asm { add edi, -5 }
	__asm { jmp L_009be959 }
	__asm { L_009be957: }
	__asm { xor edi, edi }
	__asm { L_009be959: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be989 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be989 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_009be98f }
	__asm { L_009be989: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_009be98f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009be9ce }
	__asm { add esi, 5 }
	__asm { je L_009be9a4 }
	__asm { add esi, -5 }
	__asm { jmp L_009be9a6 }
	__asm { L_009be9a4: }
	__asm { xor esi, esi }
	__asm { L_009be9a6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be9ce }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009be9ce }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009be9ce: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_009be692 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009be9dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_009c14a0();
// FUNCTION: ROBLOXSTUDIO 0x009bf5a0
extern "C" __declspec(naked) void asm_009bf5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_009bf608 }
	__asm { test ebx, ebx }
	__asm { jne L_009bf608 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009bf5f7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009bf608 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009bf5f7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009bf608: }
	__asm { push 0x9c16e0 }
	__asm { push 0x1304494 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009c14a0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_009bf648 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_009bf6fd }
	__asm { L_009bf648: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_009bf6b7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_009bf6b7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009bf6a6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009bf6b7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_009bf6a6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009bf6b7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009bf6cf }
	__asm { add esi, -5 }
	__asm { jmp L_009bf6d1 }
	__asm { L_009bf6cf: }
	__asm { xor esi, esi }
	__asm { L_009bf6d1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bf6fd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bf6fd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009bf6fd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_009bf73a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009bf73a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009bf73a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009bf73a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009bf73a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_009c1530();
// FUNCTION: ROBLOXSTUDIO 0x009bf750
extern "C" __declspec(naked) void asm_009bf750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_009bf7b8 }
	__asm { test ebx, ebx }
	__asm { jne L_009bf7b8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009bf7a7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009bf7b8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009bf7a7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009bf7b8: }
	__asm { push 0x9c16f0 }
	__asm { push 0x130449c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009c1530 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_009bf7f8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_009bf8ad }
	__asm { L_009bf7f8: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_009bf867 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_009bf867 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009bf856 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009bf867 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_009bf856: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009bf867: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009bf87f }
	__asm { add esi, -5 }
	__asm { jmp L_009bf881 }
	__asm { L_009bf87f: }
	__asm { xor esi, esi }
	__asm { L_009bf881: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bf8ad }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009bf8ad }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009bf8ad: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_009bf8ea }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009bf8ea }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009bf8ea }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009bf8ea }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009bf8ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_009c14a0();
// FUNCTION: ROBLOXSTUDIO 0x009c0340
extern "C" __declspec(naked) void asm_009c0340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_009c0378 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_009c0378: }
	__asm { push 0x9c16e0 }
	__asm { push 0x1304494 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009c14a0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_009c03b4 }
	__asm { push ebx }
	__asm { jmp L_009c03b8 }
	__asm { L_009c03b4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_009c03b8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_009c03fa }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009c03fa }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009c03fa }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009c03fa }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009c03fa: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009c043d }
	__asm { add esi, 5 }
	__asm { je L_009c040f }
	__asm { add esi, -5 }
	__asm { jmp L_009c0411 }
	__asm { L_009c040f: }
	__asm { xor esi, esi }
	__asm { L_009c0411: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009c043d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009c043d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009c043d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_009c1530();
// FUNCTION: ROBLOXSTUDIO 0x009c0460
extern "C" __declspec(naked) void asm_009c0460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_009c0498 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_009c0498: }
	__asm { push 0x9c16f0 }
	__asm { push 0x130449c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009c1530 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_009c04d4 }
	__asm { push ebx }
	__asm { jmp L_009c04d8 }
	__asm { L_009c04d4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_009c04d8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_009c051a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009c051a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009c051a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009c051a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009c051a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009c055d }
	__asm { add esi, 5 }
	__asm { je L_009c052f }
	__asm { add esi, -5 }
	__asm { jmp L_009c0531 }
	__asm { L_009c052f: }
	__asm { xor esi, esi }
	__asm { L_009c0531: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009c055d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009c055d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009c055d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_009cae90();
// FUNCTION: ROBLOXSTUDIO 0x009c82e0
extern "C" __declspec(naked) void asm_009c82e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_009c837f }
	__asm { push 0x9cb1f0 }
	__asm { push 0x1304ce8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009cae90 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009c8345 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_009c8345: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009c837f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009c837f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009c837f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009c837f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009c837f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00824410();
// FUNCTION: ROBLOXSTUDIO 0x009ca560
extern "C" __declspec(naked) void asm_009ca560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_009ca598 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_009ca598: }
	__asm { push 0x8246a0 }
	__asm { push 0x12f6204 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00824410 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_009ca5d4 }
	__asm { push ebx }
	__asm { jmp L_009ca5d8 }
	__asm { L_009ca5d4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_009ca5d8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_009ca61a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ca61a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ca61a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ca61a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009ca61a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009ca65d }
	__asm { add esi, 5 }
	__asm { je L_009ca62f }
	__asm { add esi, -5 }
	__asm { jmp L_009ca631 }
	__asm { L_009ca62f: }
	__asm { xor esi, esi }
	__asm { L_009ca631: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ca65d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ca65d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009ca65d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_008244a0();
// FUNCTION: ROBLOXSTUDIO 0x009ca680
extern "C" __declspec(naked) void asm_009ca680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_009ca6b8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_009ca6b8: }
	__asm { push 0x8246b0 }
	__asm { push 0x12f61fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008244a0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_009ca6f4 }
	__asm { push ebx }
	__asm { jmp L_009ca6f8 }
	__asm { L_009ca6f4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_009ca6f8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_009ca73a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ca73a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ca73a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ca73a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009ca73a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009ca77d }
	__asm { add esi, 5 }
	__asm { je L_009ca74f }
	__asm { add esi, -5 }
	__asm { jmp L_009ca751 }
	__asm { L_009ca74f: }
	__asm { xor esi, esi }
	__asm { L_009ca751: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ca77d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009ca77d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009ca77d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009ccf80
extern "C" __declspec(naked) void asm_009ccf80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x78] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0x7c] }
	__asm { mov ecx, dword ptr [ecx + 0x80] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { test dword ptr [ecx + 0x8c], 0x300 }
	__asm { jne L_009ccfaf }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_009ccfaf: }
	__asm { mov al, 1 }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_009dcec0();
// FUNCTION: ROBLOXSTUDIO 0x009d65b0
extern "C" __declspec(naked) void asm_009d65b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_009d664f }
	__asm { push 0x9dd000 }
	__asm { push 0x1305cc8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009dcec0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009d6615 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_009d6615: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009d664f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009d664f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009d664f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009d664f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009d664f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_009dce30();
// FUNCTION: ROBLOXSTUDIO 0x009d95e0
extern "C" __declspec(naked) void asm_009d95e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_009d9648 }
	__asm { test ebx, ebx }
	__asm { jne L_009d9648 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009d9637 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d9648 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009d9637: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d9648: }
	__asm { push 0x9dcff0 }
	__asm { push 0x1305ca0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009dce30 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_009d9688 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_009d973d }
	__asm { L_009d9688: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_009d96f7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_009d96f7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009d96e6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d96f7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_009d96e6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d96f7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009d970f }
	__asm { add esi, -5 }
	__asm { jmp L_009d9711 }
	__asm { L_009d970f: }
	__asm { xor esi, esi }
	__asm { L_009d9711: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d973d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009d973d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009d973d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_009d977a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009d977a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009d977a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009d977a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009d977a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00824140();
// FUNCTION: ROBLOXSTUDIO 0x009da3f0
extern "C" __declspec(naked) void asm_009da3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_009da428 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_009da428: }
	__asm { push 0x824650 }
	__asm { push 0x12e5a28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00824140 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_009da464 }
	__asm { push ebx }
	__asm { jmp L_009da468 }
	__asm { L_009da464: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_009da468: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_009da4aa }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009da4aa }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009da4aa }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009da4aa }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009da4aa: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009da4ed }
	__asm { add esi, 5 }
	__asm { je L_009da4bf }
	__asm { add esi, -5 }
	__asm { jmp L_009da4c1 }
	__asm { L_009da4bf: }
	__asm { xor esi, esi }
	__asm { L_009da4c1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009da4ed }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009da4ed }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009da4ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_009dcda0();
// FUNCTION: ROBLOXSTUDIO 0x009da510
extern "C" __declspec(naked) void asm_009da510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_009da548 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_009da548: }
	__asm { push 0x9dcfe0 }
	__asm { push 0x1305ca8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009dcda0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_009da584 }
	__asm { push ebx }
	__asm { jmp L_009da588 }
	__asm { L_009da584: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_009da588: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_009da5ca }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009da5ca }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009da5ca }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009da5ca }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009da5ca: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009da60d }
	__asm { add esi, 5 }
	__asm { je L_009da5df }
	__asm { add esi, -5 }
	__asm { jmp L_009da5e1 }
	__asm { L_009da5df: }
	__asm { xor esi, esi }
	__asm { L_009da5e1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009da60d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009da60d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009da60d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_009dce30();
// FUNCTION: ROBLOXSTUDIO 0x009da630
extern "C" __declspec(naked) void asm_009da630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_009da668 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_009da668: }
	__asm { push 0x9dcff0 }
	__asm { push 0x1305ca0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009dce30 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_009da6a4 }
	__asm { push ebx }
	__asm { jmp L_009da6a8 }
	__asm { L_009da6a4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_009da6a8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_009da6ea }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009da6ea }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009da6ea }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009da6ea }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009da6ea: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009da72d }
	__asm { add esi, 5 }
	__asm { je L_009da6ff }
	__asm { add esi, -5 }
	__asm { jmp L_009da701 }
	__asm { L_009da6ff: }
	__asm { xor esi, esi }
	__asm { L_009da701: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009da72d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009da72d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_009da72d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_009f0bb0();
// FUNCTION: ROBLOXSTUDIO 0x009ea2b0
extern "C" __declspec(naked) void asm_009ea2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_009ea34f }
	__asm { push 0x9f0ec0 }
	__asm { push 0x1306120 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009f0bb0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009ea315 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_009ea315: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009ea34f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009ea34f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009ea34f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009ea34f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_009ea34f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)
