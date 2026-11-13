// 14-20 byte call variants, conditional dispatches and getters.

extern "C" void __stdcall twoArgTarget9_00676300(int, int);
// FUNCTION: ROBLOXSTUDIO 0x00676300
extern "C" __declspec(naked) void pushArg2_00676300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call twoArgTarget9_00676300 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void __stdcall twoArgTarget9_009dd740(int, int);
// FUNCTION: ROBLOXSTUDIO 0x009dd740
extern "C" __declspec(naked) void pushArg2_009dd740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call twoArgTarget9_009dd740 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void __stdcall twoArgTarget9_009ddf00(int, int);
// FUNCTION: ROBLOXSTUDIO 0x009ddf00
extern "C" __declspec(naked) void pushArg2_009ddf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call twoArgTarget9_009ddf00 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void cdeclTwoArg9_006e86a0(int, int);
// FUNCTION: ROBLOXSTUDIO 0x006e86a0
extern "C" __declspec(naked) void pushConst2_006e86a0()
{
	__asm { push 0x10 }
	__asm { push dword ptr [esp + 8] }
	__asm { call cdeclTwoArg9_006e86a0 }
	__asm { add esp, 8 }
	__asm { ret 4 }
}

extern "C" void condTarget9_008c6470();
// FUNCTION: ROBLOXSTUDIO 0x008c6470
extern "C" __declspec(naked) void condCall9_008c6470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je done }
	__asm { call condTarget9_008c6470 }
	__asm { done: pop ebp }
	__asm { ret 8 }
}

extern "C" void condTarget9_00b18ae0();
// FUNCTION: ROBLOXSTUDIO 0x00b18ae0
extern "C" __declspec(naked) void condCall9_00b18ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je done }
	__asm { call condTarget9_00b18ae0 }
	__asm { done: pop ebp }
	__asm { ret 8 }
}

extern "C" void retArgTarget9_00872420(int);
// FUNCTION: ROBLOXSTUDIO 0x00872420
extern "C" __declspec(naked) void retArg9_00872420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call retArgTarget9_00872420 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void retArg2Target9_00b61fb0();
// FUNCTION: ROBLOXSTUDIO 0x00b61fb0
extern "C" __declspec(naked) void retArg2_00b61fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call retArg2Target9_00b61fb0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void movCallTarget9_00993ae0();
// FUNCTION: ROBLOXSTUDIO 0x00993ae0
extern "C" __declspec(naked) void movCallRet1_00993ae0()
{
	__asm { mov ecx, dword ptr [ecx + 0x208] }
	__asm { call movCallTarget9_00993ae0 }
	__asm { mov eax, 1 }
	__asm { ret 4 }
}

extern "C" void movCallTarget9_00a8b180();
// FUNCTION: ROBLOXSTUDIO 0x00a8b180
extern "C" __declspec(naked) void movCallRet1_00a8b180()
{
	__asm { mov ecx, dword ptr [ecx + 0x208] }
	__asm { call movCallTarget9_00a8b180 }
	__asm { mov eax, 1 }
	__asm { ret 4 }
}

extern "C" void condBufTarget9_004d1f30();
// FUNCTION: ROBLOXSTUDIO 0x004d1f30
extern "C" __declspec(naked) void condBufCall9_004d1f30()
{
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je done }
	__asm { push dword ptr [ecx + 8] }
	__asm { lea ecx, [ecx + 0x10] }
	__asm { call condBufTarget9_004d1f30 }
	__asm { done: ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007b4970
extern "C" __declspec(naked) void condVtail8_007b4970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { test ecx, ecx }
	__asm { je skip }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x68] }
	__asm { skip: pop ebp }
	__asm { ret 8 }
}

extern "C" void pushConstCallTarget_00892f50();
// FUNCTION: ROBLOXSTUDIO 0x00892f50
extern "C" __declspec(naked) void pushConstCall9_00892f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x3f }
	__asm { call pushConstCallTarget_00892f50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009d86d0
extern "C" __declspec(naked) void ternNested_009d86d0()
{
	__asm { mov eax, dword ptr [ecx + 0x270] }
	__asm { test eax, eax }
	__asm { je zero }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { ret }
	__asm { zero: xor eax, eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009d8f50
extern "C" __declspec(naked) void ternNested_009d8f50()
{
	__asm { mov eax, dword ptr [ecx + 0x2a0] }
	__asm { test eax, eax }
	__asm { je zero }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { ret }
	__asm { zero: xor eax, eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ca6810
extern "C" __declspec(naked) void ternNested_00ca6810()
{
	__asm { mov eax, dword ptr [ecx + 0x20d4] }
	__asm { test eax, eax }
	__asm { je zero }
	__asm { mov eax, dword ptr [eax + 0x178] }
	__asm { ret }
	__asm { zero: xor eax, eax }
	__asm { ret }
}

extern "C" float gfloat9_008a44b0;
extern "C" void floatGlobTarget_008a44b0(float);
// FUNCTION: ROBLOXSTUDIO 0x008a44b0
extern "C" __declspec(naked) void floatGlobCall_008a44b0()
{
	__asm { fld dword ptr [gfloat9_008a44b0] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call floatGlobTarget_008a44b0 }
	__asm { ret 4 }
}

extern "C" float gfloat9_008a44d0;
extern "C" void floatGlobTarget_008a44d0(float);
// FUNCTION: ROBLOXSTUDIO 0x008a44d0
extern "C" __declspec(naked) void floatGlobCall_008a44d0()
{
	__asm { fld dword ptr [gfloat9_008a44d0] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call floatGlobTarget_008a44d0 }
	__asm { ret 4 }
}

extern "C" int addSkipTarget_0082efb0();
// FUNCTION: ROBLOXSTUDIO 0x0082efb0
extern "C" __declspec(naked) void addSkip_0082efb0()
{
	__asm { add ecx, 0x10 }
	__asm { call addSkipTarget_0082efb0 }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [eax + 0x78], 1 }
	__asm { sete al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0091a6d0
extern "C" __declspec(naked) void negChain_0091a6d0()
{
	__asm { mov eax, dword ptr [ecx - 0x50] }
	__asm { mov eax, dword ptr [eax + 0x104] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00aa8790
extern "C" __declspec(naked) void negChain_00aa8790()
{
	__asm { mov eax, dword ptr [ecx - 0x58] }
	__asm { mov eax, dword ptr [eax + 0x104] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { ret }
}

extern "C" int (*pfn9_0042ae00)();
// FUNCTION: ROBLOXSTUDIO 0x0042ae00
extern "C" __declspec(naked) void iatCall9_0042ae00()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [pfn9_0042ae00] }
	__asm { sub eax, dword ptr [esi + 0x18] }
	__asm { pop esi }
	__asm { ret }
}
