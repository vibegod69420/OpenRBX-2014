// Bundled inline-assembly functions (merged from asmify12).

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_005e0880();
extern "C" void fn_00607260();
extern "C" void fn_0060f500();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005eb890
extern "C" __declspec(naked) void asm_005eb890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0ece6 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { cmp eax, 1 }
	__asm { jne L_005eb8f6 }
	__asm { push 0x90 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005eb8e6 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_005e0880 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005eb8e6: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005eb8f6: }
	__asm { test eax, eax }
	__asm { jne L_005eb92a }
	__asm { push 0x54 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_005eb8e6 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00607260 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005eb92a: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe1ca30 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xe1ca48 }
	__asm { jmp fn_0060f500 }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db32c[];
extern "C" char g_012db334[];
extern "C" char g_012db344[];
extern "C" char g_012db348[];
extern "C" char g_012db350[];
extern "C" char g_012db35c[];
extern "C" char g_012db368[];
// FUNCTION: ROBLOXSTUDIO 0x005f5f50
extern "C" __declspec(naked) void asm_005f5f50()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1fe18 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1fe30 }
	__asm { mov dword ptr [g_012db32c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db334], eax }
	__asm { test eax, eax }
	__asm { je L_005f5f7d }
	__asm { test bl, bl }
	__asm { je L_005f5f7f }
	__asm { L_005f5f7d: }
	__asm { mov bl, 1 }
	__asm { L_005f5f7f: }
	__asm { push 0xe1fe4c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db344], eax }
	__asm { test eax, eax }
	__asm { je L_005f5f93 }
	__asm { test bl, bl }
	__asm { je L_005f5f95 }
	__asm { L_005f5f93: }
	__asm { mov bl, 1 }
	__asm { L_005f5f95: }
	__asm { push 0xe1fe6c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db348], eax }
	__asm { test eax, eax }
	__asm { je L_005f5fa9 }
	__asm { test bl, bl }
	__asm { je L_005f5fab }
	__asm { L_005f5fa9: }
	__asm { mov bl, 1 }
	__asm { L_005f5fab: }
	__asm { push 0xe1fe90 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db350], eax }
	__asm { test eax, eax }
	__asm { je L_005f5fbf }
	__asm { test bl, bl }
	__asm { je L_005f5fc1 }
	__asm { L_005f5fbf: }
	__asm { mov bl, 1 }
	__asm { L_005f5fc1: }
	__asm { push 0xe1feac }
	__asm { call esi }
	__asm { mov dword ptr [g_012db35c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5fda }
	__asm { test bl, bl }
	__asm { jne L_005f5fda }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f5fda: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
	__asm { int 3 }
	__asm { push 0xe1fec4 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { mov dword ptr [g_012db368], eax }
	__asm { sete al }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dae98[];
extern "C" char g_012dae9c[];
extern "C" char g_012daea4[];
extern "C" char g_012daeb0[];
extern "C" char g_012daebc[];
extern "C" char g_012daec4[];
extern "C" char g_012daec8[];
// FUNCTION: ROBLOXSTUDIO 0x005fb210
extern "C" __declspec(naked) void asm_005fb210()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe25244 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe25260 }
	__asm { mov dword ptr [g_012dae98], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae9c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb23d }
	__asm { test bl, bl }
	__asm { je L_005fb23f }
	__asm { L_005fb23d: }
	__asm { mov bl, 1 }
	__asm { L_005fb23f: }
	__asm { push 0xe25274 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daea4], eax }
	__asm { test eax, eax }
	__asm { je L_005fb253 }
	__asm { test bl, bl }
	__asm { je L_005fb255 }
	__asm { L_005fb253: }
	__asm { mov bl, 1 }
	__asm { L_005fb255: }
	__asm { push 0xe25288 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daeb0], eax }
	__asm { test eax, eax }
	__asm { je L_005fb269 }
	__asm { test bl, bl }
	__asm { je L_005fb26b }
	__asm { L_005fb269: }
	__asm { mov bl, 1 }
	__asm { L_005fb26b: }
	__asm { push 0xe2529c }
	__asm { call esi }
	__asm { mov dword ptr [g_012daebc], eax }
	__asm { test eax, eax }
	__asm { je L_005fb27f }
	__asm { test bl, bl }
	__asm { je L_005fb281 }
	__asm { L_005fb27f: }
	__asm { mov bl, 1 }
	__asm { L_005fb281: }
	__asm { push 0xe252ac }
	__asm { call esi }
	__asm { mov dword ptr [g_012daec4], eax }
	__asm { test eax, eax }
	__asm { je L_005fb29a }
	__asm { test bl, bl }
	__asm { jne L_005fb29a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fb29a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
	__asm { int 3 }
	__asm { push 0xe252c4 }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { mov dword ptr [g_012daec8], eax }
	__asm { sete al }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db8b0[];
extern "C" char g_012db8bc[];
extern "C" char g_012db8c4[];
extern "C" char g_012db8d0[];
extern "C" char g_012db8e4[];
extern "C" char g_012db8e8[];
extern "C" char g_012db8f4[];
extern "C" char g_012db908[];
// FUNCTION: ROBLOXSTUDIO 0x00604380
extern "C" __declspec(naked) void asm_00604380()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2ce44 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2ce5c }
	__asm { mov dword ptr [g_012db8b0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8bc], eax }
	__asm { test eax, eax }
	__asm { je L_006043ad }
	__asm { test bl, bl }
	__asm { je L_006043af }
	__asm { L_006043ad: }
	__asm { mov bl, 1 }
	__asm { L_006043af: }
	__asm { push 0xe2ce70 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8c4], eax }
	__asm { test eax, eax }
	__asm { je L_006043c3 }
	__asm { test bl, bl }
	__asm { je L_006043c5 }
	__asm { L_006043c3: }
	__asm { mov bl, 1 }
	__asm { L_006043c5: }
	__asm { push 0xe2ce88 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8d0], eax }
	__asm { test eax, eax }
	__asm { je L_006043d9 }
	__asm { test bl, bl }
	__asm { je L_006043db }
	__asm { L_006043d9: }
	__asm { mov bl, 1 }
	__asm { L_006043db: }
	__asm { push 0xe2cea0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8e4], eax }
	__asm { test eax, eax }
	__asm { je L_006043ef }
	__asm { test bl, bl }
	__asm { je L_006043f1 }
	__asm { L_006043ef: }
	__asm { mov bl, 1 }
	__asm { L_006043f1: }
	__asm { push 0xe2ceb4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8e8], eax }
	__asm { test eax, eax }
	__asm { je L_0060440a }
	__asm { test bl, bl }
	__asm { jne L_0060440a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0060440a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
	__asm { int 3 }
	__asm { push ebx }
	__asm { push 0xe2cecc }
	__asm { call dword ptr [g_00e108b8] }
	__asm { test eax, eax }
	__asm { push 0xe2cee0 }
	__asm { mov dword ptr [g_012db8f4], eax }
	__asm { sete bl }
	__asm { call dword ptr [g_00e108b8] }
	__asm { mov dword ptr [g_012db908], eax }
	__asm { test eax, eax }
	__asm { je L_00604442 }
	__asm { test bl, bl }
	__asm { jne L_00604442 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00604442: }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403160();
extern "C" void fn_006085c0();
// FUNCTION: ROBLOXSTUDIO 0x00608520
extern "C" __declspec(naked) void asm_00608520()
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
	__asm { call fn_006085c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00608597 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00608596 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00608596 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00608596: }
	__asm { pop ebx }
	__asm { L_00608597: }
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

extern "C" void fn_005eba70();
extern "C" void fn_005ebab0();
// FUNCTION: ROBLOXSTUDIO 0x0060a0e0
extern "C" __declspec(naked) void asm_0060a0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005ebab0 }
	__asm { mov dword ptr [esi], 0xe30ffc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xe30ffc }
	__asm { jmp fn_005eba70 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10828[];
extern "C" char g_00e108a0[];
extern "C" char g_00e108a4[];
extern "C" char g_012d9db0[];
// FUNCTION: ROBLOXSTUDIO 0x0060f150
extern "C" __declspec(naked) void asm_0060f150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ebx], esi }
	__asm { jne L_0060f17d }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_0060f17d }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jne L_0060f17d }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { cmp eax, dword ptr [edi + 8] }
	__asm { je L_0060f258 }
	__asm { L_0060f17d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 0x84c0 }
	__asm { push eax }
	__asm { call dword ptr [g_012d9db0] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax*4 + 0xe32020] }
	__asm { cmp dword ptr [ebx], esi }
	__asm { je L_0060f1aa }
	__asm { mov dword ptr [ebx], esi }
	__asm { push dword ptr [esi + 0x4c] }
	__asm { mov ebx, eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10828] }
	__asm { jmp L_0060f1ac }
	__asm { L_0060f1aa: }
	__asm { mov ebx, eax }
	__asm { L_0060f1ac: }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_0060f1c7 }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jne L_0060f1c7 }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { cmp eax, dword ptr [edi + 8] }
	__asm { je L_0060f258 }
	__asm { L_0060f1c7: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { mov eax, 1 }
	__asm { cmp eax, dword ptr [esi + 0x3c] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [g_00e108a4] }
	__asm { sbb ecx, ecx }
	__asm { neg ecx }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push dword ptr [eax*4 + 0xe320e0] }
	__asm { push 0x2801 }
	__asm { push ebx }
	__asm { call esi }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [eax*4 + 0xe3202c] }
	__asm { push 0x2800 }
	__asm { push ebx }
	__asm { call esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push dword ptr [eax*4 + 0xe320f8] }
	__asm { push 0x2802 }
	__asm { push ebx }
	__asm { call esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push dword ptr [eax*4 + 0xe320f8] }
	__asm { push 0x2803 }
	__asm { push ebx }
	__asm { call esi }
	__asm { cmp dword ptr [edi], 2 }
	__asm { jne L_0060f23d }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { jmp L_0060f242 }
	__asm { L_0060f23d: }
	__asm { mov eax, 1 }
	__asm { L_0060f242: }
	__asm { cvtsi2ss xmm0, eax }
	__asm { push ecx }
	__asm { movss dword ptr [esp], xmm0 }
	__asm { push 0x84fe }
	__asm { push ebx }
	__asm { call dword ptr [g_00e108a0] }
	__asm { L_0060f258: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { int 3 }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [eax*4 + 0xe32020] }
	__asm { ret }
}

extern "C" void fn_0060f500();
// FUNCTION: ROBLOXSTUDIO 0x00610670
extern "C" __declspec(naked) void asm_00610670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0x14], 1 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xe32ae8 }
	__asm { jmp fn_0060f500 }
}

extern "C" char g_00e33590[];
extern "C" char g_010380b8[];
extern "C" void fn_00613580();
// FUNCTION: ROBLOXSTUDIO 0x00612200
extern "C" __declspec(naked) void asm_00612200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f848 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { mov eax, dword ptr [ecx + 0x50] }
	__asm { movss xmm2, dword ptr [ebp + 0xc] }
	__asm { mulss xmm2, dword ptr [g_010380b8] }
	__asm { movss xmm3, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { comiss xmm2, xmm3 }
	__asm { mov eax, dword ptr [ecx + 0x54] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 0x58] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { movss dword ptr [ebp + 0xc], xmm2 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { ja L_0061224f }
	__asm { lea eax, [ebp + 8] }
	__asm { L_0061224f: }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mulss xmm1, dword ptr [g_00e33590] }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ebp - 0x30], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x38], 0xe32df8 }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { movss dword ptr [ebp - 0x28], xmm1 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ecx + 0x80] }
	__asm { movss dword ptr [ebp - 0x24], xmm2 }
	__asm { movss dword ptr [ebp - 0x20], xmm3 }
	__asm { movss dword ptr [ebp - 0x1c], xmm3 }
	__asm { call fn_00613580 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
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
