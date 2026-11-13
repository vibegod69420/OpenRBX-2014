// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012f5190[];
extern "C" void fn_004115f0();
extern "C" void fn_007dbd10();
extern "C" void fn_00af8960();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814e30
extern "C" __declspec(naked) void asm_00814e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2342e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00814e5e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00814e60 }
	__asm { L_00814e5e: }
	__asm { xor bl, bl }
	__asm { L_00814e60: }
	__asm { push 0x820ee0 }
	__asm { push 0x12f2f68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5190] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00814ea8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5190], eax }
	__asm { mov ecx, 0x12f5108 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8960 }
	__asm { push 0xde80d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00814ea8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5108 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dbd10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5220[];
extern "C" void fn_004115f0();
extern "C" void fn_007dbda0();
extern "C" void fn_00a5e4b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814ed0
extern "C" __declspec(naked) void asm_00814ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00814efe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00814f00 }
	__asm { L_00814efe: }
	__asm { xor bl, bl }
	__asm { L_00814f00: }
	__asm { push 0x820f40 }
	__asm { push 0x12f2f70 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5220] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00814f48 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5220], eax }
	__asm { mov ecx, 0x12f5198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5e4b0 }
	__asm { push 0xde80e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00814f48: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5198 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dbda0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3a80[];
extern "C" void fn_004115f0();
extern "C" void fn_007dbe30();
extern "C" void fn_00986cf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814f70
extern "C" __declspec(naked) void asm_00814f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2344e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00814f9e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00814fa0 }
	__asm { L_00814f9e: }
	__asm { xor bl, bl }
	__asm { L_00814fa0: }
	__asm { push 0x820fa0 }
	__asm { push 0x12f2e20 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3a80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00814fe8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3a80], eax }
	__asm { mov ecx, 0x12f39f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00986cf0 }
	__asm { push 0xde80f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00814fe8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f39f8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dbe30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5580[];
extern "C" void fn_004115f0();
extern "C" void fn_007dbec0();
extern "C" void fn_008ba850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815010
extern "C" __declspec(naked) void asm_00815010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081503e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815040 }
	__asm { L_0081503e: }
	__asm { xor bl, bl }
	__asm { L_00815040: }
	__asm { push 0x821000 }
	__asm { push 0x12f2fa0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5580] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815088 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5580], eax }
	__asm { mov ecx, 0x12f54f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba850 }
	__asm { push 0xde8100 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815088: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f54f8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dbec0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5fa0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dbf50();
extern "C" void fn_00909880();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008150b0
extern "C" __declspec(naked) void asm_008150b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd33a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008150de }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008150e0 }
	__asm { L_008150de: }
	__asm { xor bl, bl }
	__asm { L_008150e0: }
	__asm { push 0x821060 }
	__asm { push 0x12f3030 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5fa0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815128 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5fa0], eax }
	__asm { mov ecx, 0x12f5f18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00909880 }
	__asm { push 0xde8110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815128: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5f18 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dbf50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f42f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dbff0();
extern "C" void fn_00843a30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815150
extern "C" __declspec(naked) void asm_00815150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd270fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081517e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815180 }
	__asm { L_0081517e: }
	__asm { xor bl, bl }
	__asm { L_00815180: }
	__asm { push 0x8210c0 }
	__asm { push 0x12f2e98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f42f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008151c8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f42f0], eax }
	__asm { mov ecx, 0x12f4268 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843a30 }
	__asm { push 0xde8120 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008151c8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4268 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dbff0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f52b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc080();
extern "C" void fn_00ab5990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008151f0
extern "C" __declspec(naked) void asm_008151f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd231ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081521e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815220 }
	__asm { L_0081521e: }
	__asm { xor bl, bl }
	__asm { L_00815220: }
	__asm { push 0x821120 }
	__asm { push 0x12f2f78 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f52b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815268 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f52b0], eax }
	__asm { mov ecx, 0x12f5228 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5990 }
	__asm { push 0xde8130 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815268: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5228 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc080 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f58e0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc110();
extern "C" void fn_00a6e1c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815290
extern "C" __declspec(naked) void asm_00815290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008152be }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008152c0 }
	__asm { L_008152be: }
	__asm { xor bl, bl }
	__asm { L_008152c0: }
	__asm { push 0x821180 }
	__asm { push 0x12f2fd0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f58e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815308 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f58e0], eax }
	__asm { mov ecx, 0x12f5858 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a6e1c0 }
	__asm { push 0xde8140 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815308: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5858 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc110 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5970[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc1a0();
extern "C" void fn_00a6e300();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815330
extern "C" __declspec(naked) void asm_00815330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2320e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081535e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815360 }
	__asm { L_0081535e: }
	__asm { xor bl, bl }
	__asm { L_00815360: }
	__asm { push 0x8211e0 }
	__asm { push 0x12f2fd8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5970] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008153a8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5970], eax }
	__asm { mov ecx, 0x12f58e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a6e300 }
	__asm { push 0xde8150 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008153a8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f58e8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc1a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3c30[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc230();
extern "C" void fn_008fd8d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008153d0
extern "C" __declspec(naked) void asm_008153d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2346e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008153fe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815400 }
	__asm { L_008153fe: }
	__asm { xor bl, bl }
	__asm { L_00815400: }
	__asm { push 0x821240 }
	__asm { push 0x12f2e38 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3c30] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815448 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3c30], eax }
	__asm { mov ecx, 0x12f3ba8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fd8d0 }
	__asm { push 0xde8160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815448: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3ba8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc230 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3ba0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc2c0();
extern "C" void fn_008fda40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815470
extern "C" __declspec(naked) void asm_00815470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2348e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081549e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008154a0 }
	__asm { L_0081549e: }
	__asm { xor bl, bl }
	__asm { L_008154a0: }
	__asm { push 0x8212a0 }
	__asm { push 0x12f2e30 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3ba0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008154e8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3ba0], eax }
	__asm { mov ecx, 0x12f3b18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fda40 }
	__asm { push 0xde8170 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008154e8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3b18 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc2c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5cd0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc350();
extern "C" void fn_008a6a00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815510
extern "C" __declspec(naked) void asm_00815510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081553e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815540 }
	__asm { L_0081553e: }
	__asm { xor bl, bl }
	__asm { L_00815540: }
	__asm { push 0x821300 }
	__asm { push 0x12f3008 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5cd0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815588 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5cd0], eax }
	__asm { mov ecx, 0x12f5c48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a6a00 }
	__asm { push 0xde8180 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815588: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5c48 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f38d0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc3e0();
extern "C" void fn_00a0dfd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008155b0
extern "C" __declspec(naked) void asm_008155b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008155de }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008155e0 }
	__asm { L_008155de: }
	__asm { xor bl, bl }
	__asm { L_008155e0: }
	__asm { push 0x821360 }
	__asm { push 0x12f2e08 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f38d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815628 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f38d0], eax }
	__asm { mov ecx, 0x12f3848 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0dfd0 }
	__asm { push 0xde8190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815628: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3848 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc3e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3840[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc470();
extern "C" void fn_00a0e130();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815650
extern "C" __declspec(naked) void asm_00815650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081567e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815680 }
	__asm { L_0081567e: }
	__asm { xor bl, bl }
	__asm { L_00815680: }
	__asm { push 0x8213c0 }
	__asm { push 0x12f2e00 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3840] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008156c8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3840], eax }
	__asm { mov ecx, 0x12f37b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0e130 }
	__asm { push 0xde81a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008156c8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f37b8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc470 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4da0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc500();
extern "C" void fn_0088c8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008156f0
extern "C" __declspec(naked) void asm_008156f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081571e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815720 }
	__asm { L_0081571e: }
	__asm { xor bl, bl }
	__asm { L_00815720: }
	__asm { push 0x821420 }
	__asm { push 0x12f2f30 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4da0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815768 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4da0], eax }
	__asm { mov ecx, 0x12f4d18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088c8a0 }
	__asm { push 0xde81b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815768: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4d18 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc500 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4a40[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc590();
extern "C" void fn_009bb3b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815790
extern "C" __declspec(naked) void asm_00815790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008157be }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008157c0 }
	__asm { L_008157be: }
	__asm { xor bl, bl }
	__asm { L_008157c0: }
	__asm { push 0x821480 }
	__asm { push 0x12f2f00 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4a40] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815808 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4a40], eax }
	__asm { mov ecx, 0x12f49b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bb3b0 }
	__asm { push 0xde81c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815808: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f49b8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc590 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f49b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc620();
extern "C" void fn_009bb500();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815830
extern "C" __declspec(naked) void asm_00815830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2322e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081585e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815860 }
	__asm { L_0081585e: }
	__asm { xor bl, bl }
	__asm { L_00815860: }
	__asm { push 0x8214e0 }
	__asm { push 0x12f2ef8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f49b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008158a8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f49b0], eax }
	__asm { mov ecx, 0x12f4928 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bb500 }
	__asm { push 0xde81d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008158a8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4928 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc620 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4410[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc6b0();
extern "C" void fn_00843b60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008158d0
extern "C" __declspec(naked) void asm_008158d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2850e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008158fe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815900 }
	__asm { L_008158fe: }
	__asm { xor bl, bl }
	__asm { L_00815900: }
	__asm { push 0x821540 }
	__asm { push 0x12f2ea8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4410] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815948 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4410], eax }
	__asm { mov ecx, 0x12f4388 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843b60 }
	__asm { push 0xde81e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815948: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4388 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc6b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f44a0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc740();
extern "C" void fn_00843c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815970
extern "C" __declspec(naked) void asm_00815970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2852e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081599e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008159a0 }
	__asm { L_0081599e: }
	__asm { xor bl, bl }
	__asm { L_008159a0: }
	__asm { push 0x8215a0 }
	__asm { push 0x12f2eb0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f44a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008159e8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f44a0], eax }
	__asm { mov ecx, 0x12f4418 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843c90 }
	__asm { push 0xde81f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008159e8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4418 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc740 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4380[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc7d0();
extern "C" void fn_00843e20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815a10
extern "C" __declspec(naked) void asm_00815a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2854e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00815a3e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815a40 }
	__asm { L_00815a3e: }
	__asm { xor bl, bl }
	__asm { L_00815a40: }
	__asm { push 0x821600 }
	__asm { push 0x12f2ea0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4380] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815a88 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4380], eax }
	__asm { mov ecx, 0x12f42f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843e20 }
	__asm { push 0xde8200 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815a88: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f42f8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc7d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5f10[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc860();
extern "C" void fn_00937350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815ab0
extern "C" __declspec(naked) void asm_00815ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24aae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00815ade }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815ae0 }
	__asm { L_00815ade: }
	__asm { xor bl, bl }
	__asm { L_00815ae0: }
	__asm { push 0x821660 }
	__asm { push 0x12f3028 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5f10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815b28 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5f10], eax }
	__asm { mov ecx, 0x12f5e88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00937350 }
	__asm { push 0xde8210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815b28: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5e88 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc860 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3cc0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc8f0();
extern "C" void fn_00a8cae0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815b50
extern "C" __declspec(naked) void asm_00815b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00815b7e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815b80 }
	__asm { L_00815b7e: }
	__asm { xor bl, bl }
	__asm { L_00815b80: }
	__asm { push 0x8216c0 }
	__asm { push 0x12f2e40 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3cc0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815bc8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3cc0], eax }
	__asm { mov ecx, 0x12f3c38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cae0 }
	__asm { push 0xde8220 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815bc8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3c38 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc8f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5340[];
extern "C" void fn_004115f0();
extern "C" void fn_007dc980();
extern "C" void fn_00ab5ad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815bf0
extern "C" __declspec(naked) void asm_00815bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2324e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00815c1e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815c20 }
	__asm { L_00815c1e: }
	__asm { xor bl, bl }
	__asm { L_00815c20: }
	__asm { push 0x821720 }
	__asm { push 0x12f2f80 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5340] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815c68 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5340], eax }
	__asm { mov ecx, 0x12f52b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5ad0 }
	__asm { push 0xde8230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815c68: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f52b8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dc980 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dca10();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815c90
extern "C" __declspec(naked) void asm_00815c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ace }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00815cbe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815cc0 }
	__asm { L_00815cbe: }
	__asm { xor bl, bl }
	__asm { L_00815cc0: }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815d08 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815d08: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3968 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dca10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3e70[];
extern "C" void fn_004115f0();
extern "C" void fn_007dcaa0();
extern "C" void fn_00aef650();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815d30
extern "C" __declspec(naked) void asm_00815d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2326e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00815d5e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815d60 }
	__asm { L_00815d5e: }
	__asm { xor bl, bl }
	__asm { L_00815d60: }
	__asm { push 0x8217e0 }
	__asm { push 0x12f2e58 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3e70] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815da8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3e70], eax }
	__asm { mov ecx, 0x12f3de8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef650 }
	__asm { push 0xde8250 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815da8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3de8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dcaa0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f60c0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dcb30();
extern "C" void fn_00b07e10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815dd0
extern "C" __declspec(naked) void asm_00815dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24aee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00815dfe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815e00 }
	__asm { L_00815dfe: }
	__asm { xor bl, bl }
	__asm { L_00815e00: }
	__asm { push 0x821840 }
	__asm { push 0x12f3040 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f60c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815e48 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f60c0], eax }
	__asm { mov ecx, 0x12f6038 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b07e10 }
	__asm { push 0xde8260 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815e48: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f6038 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dcb30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3f00[];
extern "C" void fn_004115f0();
extern "C" void fn_007dcbc0();
extern "C" void fn_00af1670();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815e70
extern "C" __declspec(naked) void asm_00815e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2350e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00815e9e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815ea0 }
	__asm { L_00815e9e: }
	__asm { xor bl, bl }
	__asm { L_00815ea0: }
	__asm { push 0x8218a0 }
	__asm { push 0x12f2e60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3f00] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815ee8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3f00], eax }
	__asm { mov ecx, 0x12f3e78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af1670 }
	__asm { push 0xde8270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815ee8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3e78 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dcbc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3b10[];
extern "C" void fn_004115f0();
extern "C" void fn_007dcc50();
extern "C" void fn_009a3560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815f10
extern "C" __declspec(naked) void asm_00815f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00815f3e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815f40 }
	__asm { L_00815f3e: }
	__asm { xor bl, bl }
	__asm { L_00815f40: }
	__asm { push 0x821900 }
	__asm { push 0x12f2e28 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3b10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00815f88 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3b10], eax }
	__asm { mov ecx, 0x12f3a88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009a3560 }
	__asm { push 0xde8280 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00815f88: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3a88 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dcc50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3d50[];
extern "C" void fn_004115f0();
extern "C" void fn_007dcce0();
extern "C" void fn_00a8cc20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00815fc0
extern "C" __declspec(naked) void asm_00815fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2328e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00815fee }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00815ff0 }
	__asm { L_00815fee: }
	__asm { xor bl, bl }
	__asm { L_00815ff0: }
	__asm { push 0x821960 }
	__asm { push 0x12f2e48 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3d50] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816038 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3d50], eax }
	__asm { mov ecx, 0x12f3cc8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cc20 }
	__asm { push 0xde8290 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816038: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3cc8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dcce0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f45c0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dcd70();
extern "C" void fn_00aeec50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816060
extern "C" __declspec(naked) void asm_00816060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081608e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816090 }
	__asm { L_0081608e: }
	__asm { xor bl, bl }
	__asm { L_00816090: }
	__asm { push 0x8219c0 }
	__asm { push 0x12f2ec0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f45c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008160d8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f45c0], eax }
	__asm { mov ecx, 0x12f4538 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeec50 }
	__asm { push 0xde82a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008160d8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4538 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dcd70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4c80[];
extern "C" void fn_004115f0();
extern "C" void fn_007dce00();
extern "C" void fn_008aa2f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816100
extern "C" __declspec(naked) void asm_00816100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2352e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081612e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816130 }
	__asm { L_0081612e: }
	__asm { xor bl, bl }
	__asm { L_00816130: }
	__asm { push 0x821a20 }
	__asm { push 0x12f2f20 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4c80] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816178 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4c80], eax }
	__asm { mov ecx, 0x12f4bf8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008aa2f0 }
	__asm { push 0xde82b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816178: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4bf8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dce00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f6150[];
extern "C" void fn_004115f0();
extern "C" void fn_007dce90();
extern "C" void fn_00a676e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008161a0
extern "C" __declspec(naked) void asm_008161a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008161ce }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008161d0 }
	__asm { L_008161ce: }
	__asm { xor bl, bl }
	__asm { L_008161d0: }
	__asm { push 0x821a80 }
	__asm { push 0x12f3048 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6150] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816218 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6150], eax }
	__asm { mov ecx, 0x12f60c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a676e0 }
	__asm { push 0xde82c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816218: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f60c8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dce90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4f50[];
extern "C" void fn_004115f0();
extern "C" void fn_007dcf20();
extern "C" void fn_00973200();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816240
extern "C" __declspec(naked) void asm_00816240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2354e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081626e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816270 }
	__asm { L_0081626e: }
	__asm { xor bl, bl }
	__asm { L_00816270: }
	__asm { push 0x821ae0 }
	__asm { push 0x12f2f48 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4f50] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008162b8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4f50], eax }
	__asm { mov ecx, 0x12f4ec8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00973200 }
	__asm { push 0xde82d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008162b8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4ec8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dcf20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4b60[];
extern "C" void fn_004115f0();
extern "C" void fn_007dcfb0();
extern "C" void fn_00aa4b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008162e0
extern "C" __declspec(naked) void asm_008162e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2356e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081630e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816310 }
	__asm { L_0081630e: }
	__asm { xor bl, bl }
	__asm { L_00816310: }
	__asm { push 0x821b40 }
	__asm { push 0x12f2f10 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4b60] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816358 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4b60], eax }
	__asm { mov ecx, 0x12f4ad8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aa4b40 }
	__asm { push 0xde82e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816358: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4ad8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dcfb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f41d0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd040();
extern "C" void fn_009d1120();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816380
extern "C" __declspec(naked) void asm_00816380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ebe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008163ae }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008163b0 }
	__asm { L_008163ae: }
	__asm { xor bl, bl }
	__asm { L_008163b0: }
	__asm { push 0x821ba0 }
	__asm { push 0x12f2e88 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f41d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008163f8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f41d0], eax }
	__asm { mov ecx, 0x12f4148 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d1120 }
	__asm { push 0xde82f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008163f8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4148 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd040 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4890[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd0d0();
extern "C" void fn_00aeed90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816420
extern "C" __declspec(naked) void asm_00816420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd232ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081644e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816450 }
	__asm { L_0081644e: }
	__asm { xor bl, bl }
	__asm { L_00816450: }
	__asm { push 0x821c60 }
	__asm { push 0x12f2ee8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4890] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816498 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4890], eax }
	__asm { mov ecx, 0x12f4808 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeed90 }
	__asm { push 0xde8310 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816498: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4808 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd0d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4920[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd160();
extern "C" void fn_00aeeef0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008164c0
extern "C" __declspec(naked) void asm_008164c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ede }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008164ee }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008164f0 }
	__asm { L_008164ee: }
	__asm { xor bl, bl }
	__asm { L_008164f0: }
	__asm { push 0x821cc0 }
	__asm { push 0x12f2ef0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4920] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816538 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4920], eax }
	__asm { mov ecx, 0x12f4898 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeeef0 }
	__asm { push 0xde8320 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816538: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4898 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4fe0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd1f0();
extern "C" void fn_0088ca10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816560
extern "C" __declspec(naked) void asm_00816560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2358e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081658e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816590 }
	__asm { L_0081658e: }
	__asm { xor bl, bl }
	__asm { L_00816590: }
	__asm { push 0x821d20 }
	__asm { push 0x12f2f50 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4fe0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008165d8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4fe0], eax }
	__asm { mov ecx, 0x12f4f58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088ca10 }
	__asm { push 0xde8330 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008165d8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4f58 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd1f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4ec0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd280();
extern "C" void fn_00973340();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816600
extern "C" __declspec(naked) void asm_00816600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081662e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816630 }
	__asm { L_0081662e: }
	__asm { xor bl, bl }
	__asm { L_00816630: }
	__asm { push 0x821d80 }
	__asm { push 0x12f2f40 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4ec0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816678 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4ec0], eax }
	__asm { mov ecx, 0x12f4e38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00973340 }
	__asm { push 0xde8340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816678: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4e38 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd280 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4650[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd310();
extern "C" void fn_0091ebb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008166a0
extern "C" __declspec(naked) void asm_008166a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd232ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008166ce }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008166d0 }
	__asm { L_008166ce: }
	__asm { xor bl, bl }
	__asm { L_008166d0: }
	__asm { push 0x821de0 }
	__asm { push 0x12f2ec8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4650] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816718 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4650], eax }
	__asm { mov ecx, 0x12f45c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0091ebb0 }
	__asm { push 0xde8350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816718: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f45c8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd310 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3180[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd3a0();
extern "C" void fn_008fdb80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816740
extern "C" __declspec(naked) void asm_00816740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2330e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081676e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816770 }
	__asm { L_0081676e: }
	__asm { xor bl, bl }
	__asm { L_00816770: }
	__asm { push 0x821e40 }
	__asm { push 0x12f2da0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3180] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008167b8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3180], eax }
	__asm { mov ecx, 0x12f30f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdb80 }
	__asm { push 0xde8360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008167b8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f30f8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd3a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4770[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd430();
extern "C" void fn_00af3210();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008167e0
extern "C" __declspec(naked) void asm_008167e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081680e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816810 }
	__asm { L_0081680e: }
	__asm { xor bl, bl }
	__asm { L_00816810: }
	__asm { push 0x821ea0 }
	__asm { push 0x12f2ed8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4770] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816858 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4770], eax }
	__asm { mov ecx, 0x12f46e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af3210 }
	__asm { push 0xde8370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816858: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f46e8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd430 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f61e0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd4c0();
extern "C" void fn_00ab5c00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816880
extern "C" __declspec(naked) void asm_00816880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008168ae }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008168b0 }
	__asm { L_008168ae: }
	__asm { xor bl, bl }
	__asm { L_008168b0: }
	__asm { push 0x821f00 }
	__asm { push 0x12f3050 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f61e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008168f8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f61e0], eax }
	__asm { mov ecx, 0x12f6158 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5c00 }
	__asm { push 0xde8380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008168f8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f6158 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd4c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5610[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd550();
extern "C" void fn_008ba9b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816920
extern "C" __declspec(naked) void asm_00816920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081694e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816950 }
	__asm { L_0081694e: }
	__asm { xor bl, bl }
	__asm { L_00816950: }
	__asm { push 0x821f60 }
	__asm { push 0x12f2fa8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5610] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816998 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5610], eax }
	__asm { mov ecx, 0x12f5588 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba9b0 }
	__asm { push 0xde8390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816998: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5588 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd550 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f30f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd5e0();
extern "C" void fn_00a74a50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008169c0
extern "C" __declspec(naked) void asm_008169c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24efe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008169ee }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008169f0 }
	__asm { L_008169ee: }
	__asm { xor bl, bl }
	__asm { L_008169f0: }
	__asm { push 0x821fc0 }
	__asm { push 0x12f2d98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f30f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816a38 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f30f0], eax }
	__asm { mov ecx, 0x12f3068 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a74a50 }
	__asm { push 0xde83a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816a38: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3068 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd5e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5070[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd670();
extern "C" void fn_008fdcc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816a60
extern "C" __declspec(naked) void asm_00816a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2332e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00816a8e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816a90 }
	__asm { L_00816a8e: }
	__asm { xor bl, bl }
	__asm { L_00816a90: }
	__asm { push 0x822020 }
	__asm { push 0x12f2f58 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5070] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816ad8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5070], eax }
	__asm { mov ecx, 0x12f4fe8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdcc0 }
	__asm { push 0xde83b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816ad8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4fe8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd670 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4530[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd700();
extern "C" void fn_00843ff0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816b00
extern "C" __declspec(naked) void asm_00816b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2360e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00816b2e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816b30 }
	__asm { L_00816b2e: }
	__asm { xor bl, bl }
	__asm { L_00816b30: }
	__asm { push 0x822080 }
	__asm { push 0x12f2eb8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4530] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816b78 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4530], eax }
	__asm { mov ecx, 0x12f44a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843ff0 }
	__asm { push 0xde83c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816b78: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f44a8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd700 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f34e0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd790();
extern "C" void fn_00aef060();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816ba0
extern "C" __declspec(naked) void asm_00816ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00816bce }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816bd0 }
	__asm { L_00816bce: }
	__asm { xor bl, bl }
	__asm { L_00816bd0: }
	__asm { push 0x8220e0 }
	__asm { push 0x12f2dd0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f34e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816c18 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f34e0], eax }
	__asm { mov ecx, 0x12f3458 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef060 }
	__asm { push 0xde83d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816c18: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3458 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd790 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3210[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd820();
extern "C" void fn_008fde00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816c40
extern "C" __declspec(naked) void asm_00816c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00816c6e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816c70 }
	__asm { L_00816c6e: }
	__asm { xor bl, bl }
	__asm { L_00816c70: }
	__asm { push 0x822140 }
	__asm { push 0x12f2da8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3210] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816cb8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3210], eax }
	__asm { mov ecx, 0x12f3188 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fde00 }
	__asm { push 0xde83e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816cb8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3188 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd820 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4bf0[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd8b0();
extern "C" void fn_00af4490();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816ce0
extern "C" __declspec(naked) void asm_00816ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2362e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00816d0e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816d10 }
	__asm { L_00816d0e: }
	__asm { xor bl, bl }
	__asm { L_00816d10: }
	__asm { push 0x8221a0 }
	__asm { push 0x12f2f18 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4bf0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816d58 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4bf0], eax }
	__asm { mov ecx, 0x12f4b68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4490 }
	__asm { push 0xde83f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816d58: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4b68 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd8b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5100[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd940();
extern "C" void fn_00af8ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816d80
extern "C" __declspec(naked) void asm_00816d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00816dae }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816db0 }
	__asm { L_00816dae: }
	__asm { xor bl, bl }
	__asm { L_00816db0: }
	__asm { push 0x822200 }
	__asm { push 0x12f2f60 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5100] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816df8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5100], eax }
	__asm { mov ecx, 0x12f5078 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8ab0 }
	__asm { push 0xde8400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816df8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5078 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd940 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4260[];
extern "C" void fn_004115f0();
extern "C" void fn_007dd9d0();
extern "C" void fn_009d1260();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816e20
extern "C" __declspec(naked) void asm_00816e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2334e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00816e4e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816e50 }
	__asm { L_00816e4e: }
	__asm { xor bl, bl }
	__asm { L_00816e50: }
	__asm { push 0x822260 }
	__asm { push 0x12f2e90 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4260] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816e98 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4260], eax }
	__asm { mov ecx, 0x12f41d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d1260 }
	__asm { push 0xde8410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816e98: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f41d8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dd9d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4140[];
extern "C" void fn_004115f0();
extern "C" void fn_007dda60();
extern "C" void fn_009d14c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816ec0
extern "C" __declspec(naked) void asm_00816ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4132e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00816eee }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816ef0 }
	__asm { L_00816eee: }
	__asm { xor bl, bl }
	__asm { L_00816ef0: }
	__asm { push 0x8222c0 }
	__asm { push 0x12f2e80 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4140] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816f38 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4140], eax }
	__asm { mov ecx, 0x12f40b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d14c0 }
	__asm { push 0xde8420 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816f38: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f40b8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dda60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f46e0[];
extern "C" void fn_004115f0();
extern "C" void fn_007ddaf0();
extern "C" void fn_00af1d80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00816f60
extern "C" __declspec(naked) void asm_00816f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2364e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00816f8e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00816f90 }
	__asm { L_00816f8e: }
	__asm { xor bl, bl }
	__asm { L_00816f90: }
	__asm { push 0x822320 }
	__asm { push 0x12f2ed0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f46e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00816fd8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f46e0], eax }
	__asm { mov ecx, 0x12f4658 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af1d80 }
	__asm { push 0xde8430 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00816fd8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4658 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007ddaf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f57c0[];
extern "C" void fn_004115f0();
extern "C" void fn_007ddb80();
extern "C" void fn_00981740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817000
extern "C" __declspec(naked) void asm_00817000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081702e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817030 }
	__asm { L_0081702e: }
	__asm { xor bl, bl }
	__asm { L_00817030: }
	__asm { push 0x822380 }
	__asm { push 0x12f2fc0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f57c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817078 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f57c0], eax }
	__asm { mov ecx, 0x12f5738 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00981740 }
	__asm { push 0xde8440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817078: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5738 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007ddb80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5850[];
extern "C" void fn_004115f0();
extern "C" void fn_007ddc10();
extern "C" void fn_00867ac0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008170a0
extern "C" __declspec(naked) void asm_008170a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2366e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008170ce }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008170d0 }
	__asm { L_008170ce: }
	__asm { xor bl, bl }
	__asm { L_008170d0: }
	__asm { push 0x8223e0 }
	__asm { push 0x12f2fc8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5850] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817118 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5850], eax }
	__asm { mov ecx, 0x12f57c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867ac0 }
	__asm { push 0xde8450 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817118: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f57c8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007ddc10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3f90[];
extern "C" void fn_004115f0();
extern "C" void fn_007ddca0();
extern "C" void fn_00af17a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817140
extern "C" __declspec(naked) void asm_00817140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2336e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081716e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817170 }
	__asm { L_0081716e: }
	__asm { xor bl, bl }
	__asm { L_00817170: }
	__asm { push 0x822440 }
	__asm { push 0x12f2e68 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3f90] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008171b8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3f90], eax }
	__asm { mov ecx, 0x12f3f08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af17a0 }
	__asm { push 0xde8460 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008171b8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3f08 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007ddca0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_007ddd30();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008171e0
extern "C" __declspec(naked) void asm_008171e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081720e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817210 }
	__asm { L_0081720e: }
	__asm { xor bl, bl }
	__asm { L_00817210: }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817258 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817258: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4c88 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007ddd30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4e30[];
extern "C" void fn_004115f0();
extern "C" void fn_007dddc0();
extern "C" void fn_009734a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817280
extern "C" __declspec(naked) void asm_00817280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008172ae }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008172b0 }
	__asm { L_008172ae: }
	__asm { xor bl, bl }
	__asm { L_008172b0: }
	__asm { push 0x822500 }
	__asm { push 0x12f2f38 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4e30] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008172f8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4e30], eax }
	__asm { mov ecx, 0x12f4da8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009734a0 }
	__asm { push 0xde8480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008172f8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4da8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dddc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f6030[];
extern "C" void fn_004115f0();
extern "C" void fn_007dde50();
extern "C" void fn_008ed280();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817320
extern "C" __declspec(naked) void asm_00817320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081734e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817350 }
	__asm { L_0081734e: }
	__asm { xor bl, bl }
	__asm { L_00817350: }
	__asm { push 0x822560 }
	__asm { push 0x12f3038 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6030] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817398 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6030], eax }
	__asm { mov ecx, 0x12f5fa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ed280 }
	__asm { push 0xde8490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817398: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5fa8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007dde50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f32a0[];
extern "C" void fn_004115f0();
extern "C" void fn_007ddee0();
extern "C" void fn_008fdf40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008173c0
extern "C" __declspec(naked) void asm_008173c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008173ee }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008173f0 }
	__asm { L_008173ee: }
	__asm { xor bl, bl }
	__asm { L_008173f0: }
	__asm { push 0x8225c0 }
	__asm { push 0x12f2db0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f32a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817438 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f32a0], eax }
	__asm { mov ecx, 0x12f3218 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdf40 }
	__asm { push 0xde84a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817438: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3218 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007ddee0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3de0[];
extern "C" void fn_004115f0();
extern "C" void fn_007ddf70();
extern "C" void fn_00a8cd60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817460
extern "C" __declspec(naked) void asm_00817460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2368e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081748e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817490 }
	__asm { L_0081748e: }
	__asm { xor bl, bl }
	__asm { L_00817490: }
	__asm { push 0x822620 }
	__asm { push 0x12f2e50 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3de0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008174d8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3de0], eax }
	__asm { mov ecx, 0x12f3d58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cd60 }
	__asm { push 0xde84b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008174d8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3d58 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007ddf70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5730[];
extern "C" void fn_004115f0();
extern "C" void fn_007de000();
extern "C" void fn_008bab60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817500
extern "C" __declspec(naked) void asm_00817500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24bee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081752e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817530 }
	__asm { L_0081752e: }
	__asm { xor bl, bl }
	__asm { L_00817530: }
	__asm { push 0x822680 }
	__asm { push 0x12f2fb8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5730] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817578 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5730], eax }
	__asm { mov ecx, 0x12f56a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008bab60 }
	__asm { push 0xde84c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817578: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f56a8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de000 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3690[];
extern "C" void fn_004115f0();
extern "C" void fn_007de090();
extern "C" void fn_00867c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008175a0
extern "C" __declspec(naked) void asm_008175a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008175ce }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008175d0 }
	__asm { L_008175ce: }
	__asm { xor bl, bl }
	__asm { L_008175d0: }
	__asm { push 0x8226e0 }
	__asm { push 0x12f2de8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3690] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817618 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3690], eax }
	__asm { mov ecx, 0x12f3608 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867c20 }
	__asm { push 0xde84d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817618: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3608 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3570[];
extern "C" void fn_004115f0();
extern "C" void fn_007de120();
extern "C" void fn_00867d60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817640
extern "C" __declspec(naked) void asm_00817640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29b5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081766e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817670 }
	__asm { L_0081766e: }
	__asm { xor bl, bl }
	__asm { L_00817670: }
	__asm { push 0x822740 }
	__asm { push 0x12f2dd8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3570] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008176b8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3570], eax }
	__asm { mov ecx, 0x12f34e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867d60 }
	__asm { push 0xde84e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008176b8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f34e8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de120 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3600[];
extern "C" void fn_004115f0();
extern "C" void fn_007de1b0();
extern "C" void fn_00867ee0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008176e0
extern "C" __declspec(naked) void asm_008176e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081770e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817710 }
	__asm { L_0081770e: }
	__asm { xor bl, bl }
	__asm { L_00817710: }
	__asm { push 0x8227a0 }
	__asm { push 0x12f2de0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3600] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817758 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3600], eax }
	__asm { mov ecx, 0x12f3578 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00867ee0 }
	__asm { push 0xde84f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817758: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3578 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de1b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f54f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007de240();
extern "C" void fn_00907c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817780
extern "C" __declspec(naked) void asm_00817780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008177ae }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008177b0 }
	__asm { L_008177ae: }
	__asm { xor bl, bl }
	__asm { L_008177b0: }
	__asm { push 0x822800 }
	__asm { push 0x12f2f98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f54f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008177f8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f54f0], eax }
	__asm { mov ecx, 0x12f5468 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00907c90 }
	__asm { push 0xde8500 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008177f8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5468 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de240 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5df0[];
extern "C" void fn_004115f0();
extern "C" void fn_007de2d0();
extern "C" void fn_009cc610();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817820
extern "C" __declspec(naked) void asm_00817820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd22a2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081784e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817850 }
	__asm { L_0081784e: }
	__asm { xor bl, bl }
	__asm { L_00817850: }
	__asm { push 0x822860 }
	__asm { push 0x12f3018 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5df0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817898 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5df0], eax }
	__asm { mov ecx, 0x12f5d68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009cc610 }
	__asm { push 0xde8510 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817898: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5d68 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de2d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5d60[];
extern "C" void fn_004115f0();
extern "C" void fn_007de360();
extern "C" void fn_009cc760();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008178c0
extern "C" __declspec(naked) void asm_008178c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24f7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_008178ee }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008178f0 }
	__asm { L_008178ee: }
	__asm { xor bl, bl }
	__asm { L_008178f0: }
	__asm { push 0x8228c0 }
	__asm { push 0x12f3010 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5d60] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817938 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5d60], eax }
	__asm { mov ecx, 0x12f5cd8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009cc760 }
	__asm { push 0xde8520 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817938: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5cd8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de360 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5460[];
extern "C" void fn_004115f0();
extern "C" void fn_007de3f0();
extern "C" void fn_00907df0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817960
extern "C" __declspec(naked) void asm_00817960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd236ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0081798e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817990 }
	__asm { L_0081798e: }
	__asm { xor bl, bl }
	__asm { L_00817990: }
	__asm { push 0x822920 }
	__asm { push 0x12f2f90 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5460] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008179d8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5460], eax }
	__asm { mov ecx, 0x12f53d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00907df0 }
	__asm { push 0xde8530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008179d8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f53d8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de3f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4ad0[];
extern "C" void fn_004115f0();
extern "C" void fn_007de480();
extern "C" void fn_00aef1a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817a00
extern "C" __declspec(naked) void asm_00817a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2338e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00817a2e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817a30 }
	__asm { L_00817a2e: }
	__asm { xor bl, bl }
	__asm { L_00817a30: }
	__asm { push 0x822980 }
	__asm { push 0x12f2f08 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4ad0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817a78 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4ad0], eax }
	__asm { mov ecx, 0x12f4a48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef1a0 }
	__asm { push 0xde8540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817a78: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4a48 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de480 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4800[];
extern "C" void fn_004115f0();
extern "C" void fn_007de510();
extern "C" void fn_00aef2d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817aa0
extern "C" __declspec(naked) void asm_00817aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24c0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00817ace }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817ad0 }
	__asm { L_00817ace: }
	__asm { xor bl, bl }
	__asm { L_00817ad0: }
	__asm { push 0x8229e0 }
	__asm { push 0x12f2ee0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4800] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817b18 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4800], eax }
	__asm { mov ecx, 0x12f4778 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef2d0 }
	__asm { push 0xde8550 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817b18: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f4778 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de510 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5c40[];
extern "C" void fn_004115f0();
extern "C" void fn_007de5a0();
extern "C" void fn_008a02f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817b40
extern "C" __declspec(naked) void asm_00817b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cb3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00817b6e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817b70 }
	__asm { L_00817b6e: }
	__asm { xor bl, bl }
	__asm { L_00817b70: }
	__asm { push 0x822a40 }
	__asm { push 0x12f3000 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5c40] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817bb8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5c40], eax }
	__asm { mov ecx, 0x12f5bb8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a02f0 }
	__asm { push 0xde8560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817bb8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5bb8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de5a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f5bb0[];
extern "C" void fn_004115f0();
extern "C" void fn_007de630();
extern "C" void fn_008a0450();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817be0
extern "C" __declspec(naked) void asm_00817be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2370e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00817c0e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817c10 }
	__asm { L_00817c0e: }
	__asm { xor bl, bl }
	__asm { L_00817c10: }
	__asm { push 0x822aa0 }
	__asm { push 0x12f2ff8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5bb0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817c58 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5bb0], eax }
	__asm { mov ecx, 0x12f5b28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a0450 }
	__asm { push 0xde8570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817c58: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f5b28 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de630 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3720[];
extern "C" void fn_004115f0();
extern "C" void fn_007de6c0();
extern "C" void fn_00a0e2d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817c80
extern "C" __declspec(naked) void asm_00817c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd233ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00817cae }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817cb0 }
	__asm { L_00817cae: }
	__asm { xor bl, bl }
	__asm { L_00817cb0: }
	__asm { push 0x822b00 }
	__asm { push 0x12f2df0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f3720] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817cf8 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3720], eax }
	__asm { mov ecx, 0x12f3698 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0e2d0 }
	__asm { push 0xde8580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817cf8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3698 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de6c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f37b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007de750();
extern "C" void fn_00a0e410();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00817d20
extern "C" __declspec(naked) void asm_00817d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2372e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00817d4e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00817d50 }
	__asm { L_00817d4e: }
	__asm { xor bl, bl }
	__asm { L_00817d50: }
	__asm { push 0x822b60 }
	__asm { push 0x12f2df8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f37b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00817d98 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f37b0], eax }
	__asm { mov ecx, 0x12f3728 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0e410 }
	__asm { push 0xde8590 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00817d98: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f3728 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007de750 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51c8[];
extern "C" void fn_006b9740();
extern "C" void fn_007e7330();
// FUNCTION: ROBLOXSTUDIO 0x0081eb40
extern "C" __declspec(naked) void asm_0081eb40()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081ebda }
	__asm { cmp dword ptr [g_012e51c8], 0x29a }
	__asm { je L_0081eb8f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081eb7a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081eb8f }
	__asm { L_0081eb7a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081eb8f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081ebda }
	__asm { cmp dword ptr [g_012e51c8], 0x29a }
	__asm { je L_0081ebda }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081ebc5 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ebda }
	__asm { L_0081ebc5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ebda: }
	__asm { jmp fn_007e7330 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51d0[];
extern "C" void fn_006b9740();
extern "C" void fn_007e6c50();
// FUNCTION: ROBLOXSTUDIO 0x0081ebe0
extern "C" __declspec(naked) void asm_0081ebe0()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081ec7a }
	__asm { cmp dword ptr [g_012e51d0], 0x29a }
	__asm { je L_0081ec2f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081ec1a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ec2f }
	__asm { L_0081ec1a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ec2f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081ec7a }
	__asm { cmp dword ptr [g_012e51d0], 0x29a }
	__asm { je L_0081ec7a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081ec65 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ec7a }
	__asm { L_0081ec65: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ec7a: }
	__asm { jmp fn_007e6c50 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5180[];
extern "C" void fn_006b9740();
extern "C" void fn_007e73d0();
// FUNCTION: ROBLOXSTUDIO 0x0081ec80
extern "C" __declspec(naked) void asm_0081ec80()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081ed1a }
	__asm { cmp dword ptr [g_012e5180], 0x29a }
	__asm { je L_0081eccf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081ecba }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081eccf }
	__asm { L_0081ecba: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081eccf: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081ed1a }
	__asm { cmp dword ptr [g_012e5180], 0x29a }
	__asm { je L_0081ed1a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081ed05 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ed1a }
	__asm { L_0081ed05: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ed1a: }
	__asm { jmp fn_007e73d0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5188[];
extern "C" void fn_006b9740();
extern "C" void fn_007e6cf0();
// FUNCTION: ROBLOXSTUDIO 0x0081ed20
extern "C" __declspec(naked) void asm_0081ed20()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081edba }
	__asm { cmp dword ptr [g_012e5188], 0x29a }
	__asm { je L_0081ed6f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081ed5a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ed6f }
	__asm { L_0081ed5a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ed6f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081edba }
	__asm { cmp dword ptr [g_012e5188], 0x29a }
	__asm { je L_0081edba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081eda5 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081edba }
	__asm { L_0081eda5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081edba: }
	__asm { jmp fn_007e6cf0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5198[];
extern "C" void fn_006b9740();
extern "C" void fn_007e5e90();
// FUNCTION: ROBLOXSTUDIO 0x0081edc0
extern "C" __declspec(naked) void asm_0081edc0()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081ee5a }
	__asm { cmp dword ptr [g_012e5198], 0x29a }
	__asm { je L_0081ee0f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081edfa }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ee0f }
	__asm { L_0081edfa: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ee0f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081ee5a }
	__asm { cmp dword ptr [g_012e5198], 0x29a }
	__asm { je L_0081ee5a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081ee45 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ee5a }
	__asm { L_0081ee45: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ee5a: }
	__asm { jmp fn_007e5e90 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51c0[];
extern "C" void fn_006b9740();
extern "C" void fn_007e64d0();
// FUNCTION: ROBLOXSTUDIO 0x0081ee60
extern "C" __declspec(naked) void asm_0081ee60()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081eefa }
	__asm { cmp dword ptr [g_012e51c0], 0x29a }
	__asm { je L_0081eeaf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081ee9a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081eeaf }
	__asm { L_0081ee9a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081eeaf: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081eefa }
	__asm { cmp dword ptr [g_012e51c0], 0x29a }
	__asm { je L_0081eefa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081eee5 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081eefa }
	__asm { L_0081eee5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081eefa: }
	__asm { jmp fn_007e64d0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51b8[];
extern "C" void fn_006b9740();
extern "C" void fn_007e67f0();
// FUNCTION: ROBLOXSTUDIO 0x0081ef00
extern "C" __declspec(naked) void asm_0081ef00()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081ef9a }
	__asm { cmp dword ptr [g_012e51b8], 0x29a }
	__asm { je L_0081ef4f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081ef3a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ef4f }
	__asm { L_0081ef3a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ef4f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081ef9a }
	__asm { cmp dword ptr [g_012e51b8], 0x29a }
	__asm { je L_0081ef9a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081ef85 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081ef9a }
	__asm { L_0081ef85: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081ef9a: }
	__asm { jmp fn_007e67f0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51b0[];
extern "C" void fn_006b9740();
extern "C" void fn_007e6570();
// FUNCTION: ROBLOXSTUDIO 0x0081efa0
extern "C" __declspec(naked) void asm_0081efa0()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f03a }
	__asm { cmp dword ptr [g_012e51b0], 0x29a }
	__asm { je L_0081efef }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081efda }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081efef }
	__asm { L_0081efda: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081efef: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f03a }
	__asm { cmp dword ptr [g_012e51b0], 0x29a }
	__asm { je L_0081f03a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f025 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f03a }
	__asm { L_0081f025: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f03a: }
	__asm { jmp fn_007e6570 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51a8[];
extern "C" void fn_006b9740();
extern "C" void fn_007e7a10();
// FUNCTION: ROBLOXSTUDIO 0x0081f040
extern "C" __declspec(naked) void asm_0081f040()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f0da }
	__asm { cmp dword ptr [g_012e51a8], 0x29a }
	__asm { je L_0081f08f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f07a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f08f }
	__asm { L_0081f07a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f08f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f0da }
	__asm { cmp dword ptr [g_012e51a8], 0x29a }
	__asm { je L_0081f0da }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f0c5 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f0da }
	__asm { L_0081f0c5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f0da: }
	__asm { jmp fn_007e7a10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51a0[];
extern "C" void fn_006b9740();
extern "C" void fn_007e84b0();
// FUNCTION: ROBLOXSTUDIO 0x0081f0e0
extern "C" __declspec(naked) void asm_0081f0e0()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f17a }
	__asm { cmp dword ptr [g_012e51a0], 0x29a }
	__asm { je L_0081f12f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f11a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f12f }
	__asm { L_0081f11a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f12f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f17a }
	__asm { cmp dword ptr [g_012e51a0], 0x29a }
	__asm { je L_0081f17a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f165 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f17a }
	__asm { L_0081f165: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f17a: }
	__asm { jmp fn_007e84b0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5190[];
extern "C" void fn_006b9740();
extern "C" void fn_007e6430();
// FUNCTION: ROBLOXSTUDIO 0x0081f180
extern "C" __declspec(naked) void asm_0081f180()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f21a }
	__asm { cmp dword ptr [g_012e5190], 0x29a }
	__asm { je L_0081f1cf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f1ba }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f1cf }
	__asm { L_0081f1ba: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f1cf: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f21a }
	__asm { cmp dword ptr [g_012e5190], 0x29a }
	__asm { je L_0081f21a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f205 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f21a }
	__asm { L_0081f205: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f21a: }
	__asm { jmp fn_007e6430 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49b0[];
extern "C" void fn_006b9740();
extern "C" void fn_007e5f30();
// FUNCTION: ROBLOXSTUDIO 0x0081f220
extern "C" __declspec(naked) void asm_0081f220()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f2ba }
	__asm { cmp dword ptr [g_012e49b0], 0x29a }
	__asm { je L_0081f26f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f25a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f26f }
	__asm { L_0081f25a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f26f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f2ba }
	__asm { cmp dword ptr [g_012e49b0], 0x29a }
	__asm { je L_0081f2ba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f2a5 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f2ba }
	__asm { L_0081f2a5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f2ba: }
	__asm { jmp fn_007e5f30 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49a8[];
extern "C" void fn_006b9740();
extern "C" void fn_007e5fd0();
// FUNCTION: ROBLOXSTUDIO 0x0081f2c0
extern "C" __declspec(naked) void asm_0081f2c0()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f35a }
	__asm { cmp dword ptr [g_012e49a8], 0x29a }
	__asm { je L_0081f30f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f2fa }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f30f }
	__asm { L_0081f2fa: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f30f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f35a }
	__asm { cmp dword ptr [g_012e49a8], 0x29a }
	__asm { je L_0081f35a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f345 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f35a }
	__asm { L_0081f345: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f35a: }
	__asm { jmp fn_007e5fd0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4830[];
extern "C" void fn_006b9740();
extern "C" void fn_007e6930();
// FUNCTION: ROBLOXSTUDIO 0x0081f360
extern "C" __declspec(naked) void asm_0081f360()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f3fa }
	__asm { cmp dword ptr [g_012e4830], 0x29a }
	__asm { je L_0081f3af }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f39a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f3af }
	__asm { L_0081f39a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f3af: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f3fa }
	__asm { cmp dword ptr [g_012e4830], 0x29a }
	__asm { je L_0081f3fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f3e5 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f3fa }
	__asm { L_0081f3e5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f3fa: }
	__asm { jmp fn_007e6930 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4828[];
extern "C" void fn_006b9740();
extern "C" void fn_007e69d0();
// FUNCTION: ROBLOXSTUDIO 0x0081f400
extern "C" __declspec(naked) void asm_0081f400()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f49a }
	__asm { cmp dword ptr [g_012e4828], 0x29a }
	__asm { je L_0081f44f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f43a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f44f }
	__asm { L_0081f43a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f44f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f49a }
	__asm { cmp dword ptr [g_012e4828], 0x29a }
	__asm { je L_0081f49a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f485 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f49a }
	__asm { L_0081f485: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f49a: }
	__asm { jmp fn_007e69d0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4910[];
extern "C" void fn_006b9740();
extern "C" void fn_007e71f0();
// FUNCTION: ROBLOXSTUDIO 0x0081f4a0
extern "C" __declspec(naked) void asm_0081f4a0()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f53a }
	__asm { cmp dword ptr [g_012e4910], 0x29a }
	__asm { je L_0081f4ef }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f4da }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f4ef }
	__asm { L_0081f4da: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f4ef: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0081f53a }
	__asm { cmp dword ptr [g_012e4910], 0x29a }
	__asm { je L_0081f53a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081f525 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0081f53a }
	__asm { L_0081f525: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0081f53a: }
	__asm { jmp fn_007e71f0 }
}

extern "C" char g_012f5e80[];
extern "C" void fn_00b018c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820ac0
extern "C" __declspec(naked) void asm_00820ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5e80] }
	__asm { test al, 1 }
	__asm { jne L_00820b07 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5e80], eax }
	__asm { mov ecx, 0x12f5df8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b018c0 }
	__asm { push 0xde8020 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820b07: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3330[];
extern "C" void fn_00aeeaf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820b20
extern "C" __declspec(naked) void asm_00820b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd233ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3330] }
	__asm { test al, 1 }
	__asm { jne L_00820b67 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3330], eax }
	__asm { mov ecx, 0x12f32a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeeaf0 }
	__asm { push 0xde8030 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820b67: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f40b0[];
extern "C" void fn_00a55ed0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820b80
extern "C" __declspec(naked) void asm_00820b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd231ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f40b0] }
	__asm { test al, 1 }
	__asm { jne L_00820bc7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f40b0], eax }
	__asm { mov ecx, 0x12f4028 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a55ed0 }
	__asm { push 0xde8040 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820bc7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3450[];
extern "C" void fn_00927c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820be0
extern "C" __declspec(naked) void asm_00820be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3450] }
	__asm { test al, 1 }
	__asm { jne L_00820c27 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3450], eax }
	__asm { mov ecx, 0x12f33c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00927c20 }
	__asm { push 0xde8050 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820c27: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f53d0[];
extern "C" void fn_009fcd30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820c40
extern "C" __declspec(naked) void asm_00820c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f53d0] }
	__asm { test al, 1 }
	__asm { jne L_00820c87 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f53d0], eax }
	__asm { mov ecx, 0x12f5348 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009fcd30 }
	__asm { push 0xde8060 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820c87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f33c0[];
extern "C" void fn_009b3e70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820ca0
extern "C" __declspec(naked) void asm_00820ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3efee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f33c0] }
	__asm { test al, 1 }
	__asm { jne L_00820ce7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f33c0], eax }
	__asm { mov ecx, 0x12f3338 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009b3e70 }
	__asm { push 0xde8070 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820ce7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3960[];
extern "C" void fn_007b92b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820d00
extern "C" __declspec(naked) void asm_00820d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24dde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3960] }
	__asm { test al, 1 }
	__asm { jne L_00820d47 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3960], eax }
	__asm { mov ecx, 0x12f38d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b92b0 }
	__asm { push 0xde8080 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820d47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f56a0[];
extern "C" void fn_008ba710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820d60
extern "C" __declspec(naked) void asm_00820d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24dfe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f56a0] }
	__asm { test al, 1 }
	__asm { jne L_00820da7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f56a0], eax }
	__asm { mov ecx, 0x12f5618 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba710 }
	__asm { push 0xde8090 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820da7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a90[];
extern "C" void fn_0089fe30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820dc0
extern "C" __declspec(naked) void asm_00820dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5a90] }
	__asm { test al, 1 }
	__asm { jne L_00820e07 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a90], eax }
	__asm { mov ecx, 0x12f5a08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089fe30 }
	__asm { push 0xde80a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820e07: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5a00[];
extern "C" void fn_0089ff90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820e20
extern "C" __declspec(naked) void asm_00820e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2340e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5a00] }
	__asm { test al, 1 }
	__asm { jne L_00820e67 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5a00], eax }
	__asm { mov ecx, 0x12f5978 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089ff90 }
	__asm { push 0xde80b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820e67: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5b20[];
extern "C" void fn_008a01a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820e80
extern "C" __declspec(naked) void asm_00820e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cb1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5b20] }
	__asm { test al, 1 }
	__asm { jne L_00820ec7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5b20], eax }
	__asm { mov ecx, 0x12f5a98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a01a0 }
	__asm { push 0xde80c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820ec7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5190[];
extern "C" void fn_00af8960();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820ee0
extern "C" __declspec(naked) void asm_00820ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2342e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5190] }
	__asm { test al, 1 }
	__asm { jne L_00820f27 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5190], eax }
	__asm { mov ecx, 0x12f5108 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af8960 }
	__asm { push 0xde80d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820f27: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5220[];
extern "C" void fn_00a5e4b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820f40
extern "C" __declspec(naked) void asm_00820f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5220] }
	__asm { test al, 1 }
	__asm { jne L_00820f87 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5220], eax }
	__asm { mov ecx, 0x12f5198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5e4b0 }
	__asm { push 0xde80e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820f87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3a80[];
extern "C" void fn_00986cf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00820fa0
extern "C" __declspec(naked) void asm_00820fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2344e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3a80] }
	__asm { test al, 1 }
	__asm { jne L_00820fe7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3a80], eax }
	__asm { mov ecx, 0x12f39f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00986cf0 }
	__asm { push 0xde80f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00820fe7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5580[];
extern "C" void fn_008ba850();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821000
extern "C" __declspec(naked) void asm_00821000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5580] }
	__asm { test al, 1 }
	__asm { jne L_00821047 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5580], eax }
	__asm { mov ecx, 0x12f54f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba850 }
	__asm { push 0xde8100 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821047: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5fa0[];
extern "C" void fn_00909880();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821060
extern "C" __declspec(naked) void asm_00821060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd33a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5fa0] }
	__asm { test al, 1 }
	__asm { jne L_008210a7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5fa0], eax }
	__asm { mov ecx, 0x12f5f18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00909880 }
	__asm { push 0xde8110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008210a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f42f0[];
extern "C" void fn_00843a30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008210c0
extern "C" __declspec(naked) void asm_008210c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd270fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f42f0] }
	__asm { test al, 1 }
	__asm { jne L_00821107 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f42f0], eax }
	__asm { mov ecx, 0x12f4268 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843a30 }
	__asm { push 0xde8120 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821107: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f52b0[];
extern "C" void fn_00ab5990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821120
extern "C" __declspec(naked) void asm_00821120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd231ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f52b0] }
	__asm { test al, 1 }
	__asm { jne L_00821167 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f52b0], eax }
	__asm { mov ecx, 0x12f5228 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5990 }
	__asm { push 0xde8130 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821167: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f58e0[];
extern "C" void fn_00a6e1c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821180
extern "C" __declspec(naked) void asm_00821180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f58e0] }
	__asm { test al, 1 }
	__asm { jne L_008211c7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f58e0], eax }
	__asm { mov ecx, 0x12f5858 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a6e1c0 }
	__asm { push 0xde8140 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008211c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5970[];
extern "C" void fn_00a6e300();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008211e0
extern "C" __declspec(naked) void asm_008211e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2320e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5970] }
	__asm { test al, 1 }
	__asm { jne L_00821227 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5970], eax }
	__asm { mov ecx, 0x12f58e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a6e300 }
	__asm { push 0xde8150 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821227: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3c30[];
extern "C" void fn_008fd8d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821240
extern "C" __declspec(naked) void asm_00821240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2346e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3c30] }
	__asm { test al, 1 }
	__asm { jne L_00821287 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3c30], eax }
	__asm { mov ecx, 0x12f3ba8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fd8d0 }
	__asm { push 0xde8160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821287: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3ba0[];
extern "C" void fn_008fda40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008212a0
extern "C" __declspec(naked) void asm_008212a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2348e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3ba0] }
	__asm { test al, 1 }
	__asm { jne L_008212e7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3ba0], eax }
	__asm { mov ecx, 0x12f3b18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fda40 }
	__asm { push 0xde8170 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008212e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5cd0[];
extern "C" void fn_008a6a00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821300
extern "C" __declspec(naked) void asm_00821300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5cd0] }
	__asm { test al, 1 }
	__asm { jne L_00821347 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5cd0], eax }
	__asm { mov ecx, 0x12f5c48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a6a00 }
	__asm { push 0xde8180 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821347: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f38d0[];
extern "C" void fn_00a0dfd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821360
extern "C" __declspec(naked) void asm_00821360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f38d0] }
	__asm { test al, 1 }
	__asm { jne L_008213a7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f38d0], eax }
	__asm { mov ecx, 0x12f3848 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0dfd0 }
	__asm { push 0xde8190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008213a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3840[];
extern "C" void fn_00a0e130();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008213c0
extern "C" __declspec(naked) void asm_008213c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3840] }
	__asm { test al, 1 }
	__asm { jne L_00821407 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3840], eax }
	__asm { mov ecx, 0x12f37b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a0e130 }
	__asm { push 0xde81a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821407: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4da0[];
extern "C" void fn_0088c8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821420
extern "C" __declspec(naked) void asm_00821420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4da0] }
	__asm { test al, 1 }
	__asm { jne L_00821467 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4da0], eax }
	__asm { mov ecx, 0x12f4d18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088c8a0 }
	__asm { push 0xde81b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821467: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4a40[];
extern "C" void fn_009bb3b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821480
extern "C" __declspec(naked) void asm_00821480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24a8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4a40] }
	__asm { test al, 1 }
	__asm { jne L_008214c7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4a40], eax }
	__asm { mov ecx, 0x12f49b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bb3b0 }
	__asm { push 0xde81c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008214c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f49b0[];
extern "C" void fn_009bb500();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008214e0
extern "C" __declspec(naked) void asm_008214e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2322e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f49b0] }
	__asm { test al, 1 }
	__asm { jne L_00821527 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f49b0], eax }
	__asm { mov ecx, 0x12f4928 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009bb500 }
	__asm { push 0xde81d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821527: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4410[];
extern "C" void fn_00843b60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821540
extern "C" __declspec(naked) void asm_00821540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2850e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4410] }
	__asm { test al, 1 }
	__asm { jne L_00821587 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4410], eax }
	__asm { mov ecx, 0x12f4388 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843b60 }
	__asm { push 0xde81e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821587: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f44a0[];
extern "C" void fn_00843c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008215a0
extern "C" __declspec(naked) void asm_008215a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2852e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f44a0] }
	__asm { test al, 1 }
	__asm { jne L_008215e7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f44a0], eax }
	__asm { mov ecx, 0x12f4418 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843c90 }
	__asm { push 0xde81f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008215e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4380[];
extern "C" void fn_00843e20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821600
extern "C" __declspec(naked) void asm_00821600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2854e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4380] }
	__asm { test al, 1 }
	__asm { jne L_00821647 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4380], eax }
	__asm { mov ecx, 0x12f42f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00843e20 }
	__asm { push 0xde8200 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821647: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5f10[];
extern "C" void fn_00937350();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821660
extern "C" __declspec(naked) void asm_00821660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24aae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5f10] }
	__asm { test al, 1 }
	__asm { jne L_008216a7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5f10], eax }
	__asm { mov ecx, 0x12f5e88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00937350 }
	__asm { push 0xde8210 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008216a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3cc0[];
extern "C" void fn_00a8cae0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008216c0
extern "C" __declspec(naked) void asm_008216c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd234ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3cc0] }
	__asm { test al, 1 }
	__asm { jne L_00821707 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3cc0], eax }
	__asm { mov ecx, 0x12f3c38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cae0 }
	__asm { push 0xde8220 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821707: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5340[];
extern "C" void fn_00ab5ad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821720
extern "C" __declspec(naked) void asm_00821720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2324e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5340] }
	__asm { test al, 1 }
	__asm { jne L_00821767 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5340], eax }
	__asm { mov ecx, 0x12f52b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5ad0 }
	__asm { push 0xde8230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821767: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f39f0[];
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821780
extern "C" __declspec(naked) void asm_00821780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ace }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { test al, 1 }
	__asm { jne L_008217c7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008217c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3e70[];
extern "C" void fn_00aef650();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008217e0
extern "C" __declspec(naked) void asm_008217e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2326e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3e70] }
	__asm { test al, 1 }
	__asm { jne L_00821827 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3e70], eax }
	__asm { mov ecx, 0x12f3de8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef650 }
	__asm { push 0xde8250 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821827: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f60c0[];
extern "C" void fn_00b07e10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821840
extern "C" __declspec(naked) void asm_00821840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24aee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f60c0] }
	__asm { test al, 1 }
	__asm { jne L_00821887 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f60c0], eax }
	__asm { mov ecx, 0x12f6038 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b07e10 }
	__asm { push 0xde8260 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821887: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3f00[];
extern "C" void fn_00af1670();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008218a0
extern "C" __declspec(naked) void asm_008218a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2350e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3f00] }
	__asm { test al, 1 }
	__asm { jne L_008218e7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3f00], eax }
	__asm { mov ecx, 0x12f3e78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af1670 }
	__asm { push 0xde8270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008218e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3b10[];
extern "C" void fn_009a3560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821900
extern "C" __declspec(naked) void asm_00821900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24e9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3b10] }
	__asm { test al, 1 }
	__asm { jne L_00821947 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3b10], eax }
	__asm { mov ecx, 0x12f3a88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009a3560 }
	__asm { push 0xde8280 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821947: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3d50[];
extern "C" void fn_00a8cc20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821960
extern "C" __declspec(naked) void asm_00821960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2328e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3d50] }
	__asm { test al, 1 }
	__asm { jne L_008219a7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3d50], eax }
	__asm { mov ecx, 0x12f3cc8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a8cc20 }
	__asm { push 0xde8290 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008219a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f45c0[];
extern "C" void fn_00aeec50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008219c0
extern "C" __declspec(naked) void asm_008219c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f45c0] }
	__asm { test al, 1 }
	__asm { jne L_00821a07 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f45c0], eax }
	__asm { mov ecx, 0x12f4538 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeec50 }
	__asm { push 0xde82a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821a07: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4c80[];
extern "C" void fn_008aa2f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821a20
extern "C" __declspec(naked) void asm_00821a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2352e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4c80] }
	__asm { test al, 1 }
	__asm { jne L_00821a67 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4c80], eax }
	__asm { mov ecx, 0x12f4bf8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008aa2f0 }
	__asm { push 0xde82b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821a67: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f6150[];
extern "C" void fn_00a676e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821a80
extern "C" __declspec(naked) void asm_00821a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24b2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f6150] }
	__asm { test al, 1 }
	__asm { jne L_00821ac7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6150], eax }
	__asm { mov ecx, 0x12f60c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a676e0 }
	__asm { push 0xde82c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821ac7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4f50[];
extern "C" void fn_00973200();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821ae0
extern "C" __declspec(naked) void asm_00821ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2354e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4f50] }
	__asm { test al, 1 }
	__asm { jne L_00821b27 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4f50], eax }
	__asm { mov ecx, 0x12f4ec8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00973200 }
	__asm { push 0xde82d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821b27: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4b60[];
extern "C" void fn_00aa4b40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821b40
extern "C" __declspec(naked) void asm_00821b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2356e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4b60] }
	__asm { test al, 1 }
	__asm { jne L_00821b87 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4b60], eax }
	__asm { mov ecx, 0x12f4ad8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aa4b40 }
	__asm { push 0xde82e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821b87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f41d0[];
extern "C" void fn_009d1120();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821ba0
extern "C" __declspec(naked) void asm_00821ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ebe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f41d0] }
	__asm { test al, 1 }
	__asm { jne L_00821be7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f41d0], eax }
	__asm { mov ecx, 0x12f4148 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009d1120 }
	__asm { push 0xde82f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821be7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4020[];
extern "C" void fn_007d6150();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821c00
extern "C" __declspec(naked) void asm_00821c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd232ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4020] }
	__asm { test al, 1 }
	__asm { jne L_00821c47 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4020], eax }
	__asm { mov ecx, 0x12f3f98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d6150 }
	__asm { push 0xde8300 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821c47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4890[];
extern "C" void fn_00aeed90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821c60
extern "C" __declspec(naked) void asm_00821c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd232ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4890] }
	__asm { test al, 1 }
	__asm { jne L_00821ca7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4890], eax }
	__asm { mov ecx, 0x12f4808 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeed90 }
	__asm { push 0xde8310 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821ca7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4920[];
extern "C" void fn_00aeeef0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821cc0
extern "C" __declspec(naked) void asm_00821cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24ede }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4920] }
	__asm { test al, 1 }
	__asm { jne L_00821d07 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4920], eax }
	__asm { mov ecx, 0x12f4898 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeeef0 }
	__asm { push 0xde8320 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821d07: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4fe0[];
extern "C" void fn_0088ca10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821d20
extern "C" __declspec(naked) void asm_00821d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2358e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4fe0] }
	__asm { test al, 1 }
	__asm { jne L_00821d67 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4fe0], eax }
	__asm { mov ecx, 0x12f4f58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088ca10 }
	__asm { push 0xde8330 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821d67: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4ec0[];
extern "C" void fn_00973340();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821d80
extern "C" __declspec(naked) void asm_00821d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd229ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4ec0] }
	__asm { test al, 1 }
	__asm { jne L_00821dc7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4ec0], eax }
	__asm { mov ecx, 0x12f4e38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00973340 }
	__asm { push 0xde8340 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821dc7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4650[];
extern "C" void fn_0091ebb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821de0
extern "C" __declspec(naked) void asm_00821de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd232ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4650] }
	__asm { test al, 1 }
	__asm { jne L_00821e27 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4650], eax }
	__asm { mov ecx, 0x12f45c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0091ebb0 }
	__asm { push 0xde8350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821e27: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f3180[];
extern "C" void fn_008fdb80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821e40
extern "C" __declspec(naked) void asm_00821e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2330e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f3180] }
	__asm { test al, 1 }
	__asm { jne L_00821e87 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3180], eax }
	__asm { mov ecx, 0x12f30f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdb80 }
	__asm { push 0xde8360 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821e87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f4770[];
extern "C" void fn_00af3210();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821ea0
extern "C" __declspec(naked) void asm_00821ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f4770] }
	__asm { test al, 1 }
	__asm { jne L_00821ee7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4770], eax }
	__asm { mov ecx, 0x12f46e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af3210 }
	__asm { push 0xde8370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821ee7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f61e0[];
extern "C" void fn_00ab5c00();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821f00
extern "C" __declspec(naked) void asm_00821f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f61e0] }
	__asm { test al, 1 }
	__asm { jne L_00821f47 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f61e0], eax }
	__asm { mov ecx, 0x12f6158 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ab5c00 }
	__asm { push 0xde8380 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821f47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5610[];
extern "C" void fn_008ba9b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821f60
extern "C" __declspec(naked) void asm_00821f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd235ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5610] }
	__asm { test al, 1 }
	__asm { jne L_00821fa7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5610], eax }
	__asm { mov ecx, 0x12f5588 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008ba9b0 }
	__asm { push 0xde8390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00821fa7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f30f0[];
extern "C" void fn_00a74a50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00821fc0
extern "C" __declspec(naked) void asm_00821fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd24efe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f30f0] }
	__asm { test al, 1 }
	__asm { jne L_00822007 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f30f0], eax }
	__asm { mov ecx, 0x12f3068 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a74a50 }
	__asm { push 0xde83a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822007: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5070[];
extern "C" void fn_008fdcc0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00822020
extern "C" __declspec(naked) void asm_00822020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2332e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012f5070] }
	__asm { test al, 1 }
	__asm { jne L_00822067 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5070], eax }
	__asm { mov ecx, 0x12f4fe8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008fdcc0 }
	__asm { push 0xde83b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00822067: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
