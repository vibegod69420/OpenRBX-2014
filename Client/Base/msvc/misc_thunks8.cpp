// 13-18 byte argument setters, call variants and dispatch helpers.

struct CBSet32_00682010 { char pad[0x1d9]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00682010
void CBSet32_00682010::set(char c)
{
	m = c;
}

struct CBSet32_0085f5d0 { char pad[0xb68]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x0085f5d0
void CBSet32_0085f5d0::set(char c)
{
	m = c;
}

struct CBSet32_0085f8c0 { char pad[0xc71]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x0085f8c0
void CBSet32_0085f8c0::set(char c)
{
	m = c;
}

struct CBSet32_0085f8d0 { char pad[0xe00]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x0085f8d0
void CBSet32_0085f8d0::set(char c)
{
	m = c;
}

struct CBSet32_0085fa50 { char pad[0xdb0]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x0085fa50
void CBSet32_0085fa50::set(char c)
{
	m = c;
}

struct CBSet32_008bc080 { char pad[0x80]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x008bc080
void CBSet32_008bc080::set(char c)
{
	m = c;
}

struct CBSet32_00926020 { char pad[0x1f5]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00926020
void CBSet32_00926020::set(char c)
{
	m = c;
}

struct CBSet32_0096c930 { char pad[0x228]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x0096c930
void CBSet32_0096c930::set(char c)
{
	m = c;
}

struct CBSet32_009dd4a0 { char pad[0x264]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x009dd4a0
void CBSet32_009dd4a0::set(char c)
{
	m = c;
}

struct CBSet32_00bba7c0 { char pad[0xa9]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00bba7c0
void CBSet32_00bba7c0::set(char c)
{
	m = c;
}

struct CBSet32_00bba8d0 { char pad[0xaa]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00bba8d0
void CBSet32_00bba8d0::set(char c)
{
	m = c;
}

struct CBSet32_00bba9b0 { char pad[0xa8]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00bba9b0
void CBSet32_00bba9b0::set(char c)
{
	m = c;
}

struct CBSet32_00cf2110 { char pad[0x570]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00cf2110
void CBSet32_00cf2110::set(char c)
{
	m = c;
}

struct CWSet_00cf2120 { char pad[0x10]; short m; void set(short v); };
// FUNCTION: ROBLOXSTUDIO 0x00cf2120
void CWSet_00cf2120::set(short v)
{
	m = v;
}

struct CLeArg_00ca5cb0 { bool le(int v); };
// FUNCTION: ROBLOXSTUDIO 0x00ca5cb0
bool CLeArg_00ca5cb0::le(int v)
{
	return v <= 0x1a;
}

extern "C" float gcvt_0082e3a0;
// FUNCTION: ROBLOXSTUDIO 0x0082e3a0
bool cvtCmp_0082e3a0()
{
	return (int)gcvt_0082e3a0 == 4;
}

extern "C" float gcvt_0082e3c0;
// FUNCTION: ROBLOXSTUDIO 0x0082e3c0
bool cvtCmp_0082e3c0()
{
	return (int)gcvt_0082e3c0 == 16;
}

extern "C" float gcvt_0082e3e0;
// FUNCTION: ROBLOXSTUDIO 0x0082e3e0
bool cvtCmp_0082e3e0()
{
	return (int)gcvt_0082e3e0 == 2;
}

struct CTern_009689f0 { char pad[0xb4]; int a; char pad2[0x4]; int b; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x009689f0
int CTern_009689f0::get()
{
	return a ? a : b;
}

struct CTern_009d8ed0 { char pad[0x268]; int a; char pad2[0x2c]; int b; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x009d8ed0
int CTern_009d8ed0::get()
{
	return a ? a : b;
}

struct CCmpArg_007a59d0 { bool test(int unused, int* p); };
// FUNCTION: ROBLOXSTUDIO 0x007a59d0
bool CCmpArg_007a59d0::test(int unused, int* p)
{
	return *p == 2;
}

// FUNCTION: ROBLOXSTUDIO 0x00427a60
extern "C" __declspec(naked) void vdispatch_00427a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp dword ptr [ecx + 0x4] }
}

// FUNCTION: ROBLOXSTUDIO 0x00427a80
extern "C" __declspec(naked) void vdispatch_00427a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp dword ptr [ecx + 0x8] }
}

extern "C" void __stdcall leaTarget4_008a44a0(void*);
// FUNCTION: ROBLOXSTUDIO 0x008a44a0
extern "C" __declspec(naked) void leaCall4_008a44a0()
{
	__asm { lea eax, [ecx + 0x110] }
	__asm { push eax }
	__asm { call leaTarget4_008a44a0 }
	__asm { ret 4 }
}

extern "C" void passTargetPop_006e8590(int);
// FUNCTION: ROBLOXSTUDIO 0x006e8590
extern "C" __declspec(naked) void passThruPop_006e8590()
{
	__asm { push dword ptr [esp + 4] }
	__asm { call passTargetPop_006e8590 }
	__asm { pop ecx }
	__asm { ret 4 }
}

extern "C" void passTargetPop_006e86c0(int);
// FUNCTION: ROBLOXSTUDIO 0x006e86c0
extern "C" __declspec(naked) void passThruPop_006e86c0()
{
	__asm { push dword ptr [esp + 4] }
	__asm { call passTargetPop_006e86c0 }
	__asm { pop ecx }
	__asm { ret 4 }
}

extern "C" void floatTargetZ_008a47c0(float);
// FUNCTION: ROBLOXSTUDIO 0x008a47c0
extern "C" __declspec(naked) void floatZeroCall_008a47c0()
{
	__asm { fldz }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call floatTargetZ_008a47c0 }
	__asm { ret 4 }
}

extern "C" void floatTargetZ_008a47f0(float);
// FUNCTION: ROBLOXSTUDIO 0x008a47f0
extern "C" __declspec(naked) void floatZeroCall_008a47f0()
{
	__asm { fldz }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call floatTargetZ_008a47f0 }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005e0070
extern "C" __declspec(naked) void membPtrCond_005e0070()
{
	__asm { mov eax, dword ptr [ecx + 0xc4] }
	__asm { test eax, eax }
	__asm { je done }
	__asm { jmp eax }
	__asm { done: ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008ac860
extern "C" __declspec(naked) void vcallFld_008ac860()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x8c] }
	__asm { fld dword ptr [eax + 0x0] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00856210
extern "C" __declspec(naked) void baseThis_00856210()
{
	__asm { lea eax, [ecx - 0xa0] }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { and eax, ecx }
	__asm { ret }
}

extern "C" int pushMemberDecTarget_008e3c90(int);
// FUNCTION: ROBLOXSTUDIO 0x008e3c90
extern "C" __declspec(naked) void pushMemberDec_008e3c90()
{
	__asm { push dword ptr [ecx + 0x4c] }
	__asm { call pushMemberDecTarget_008e3c90 }
	__asm { add esp, 4 }
	__asm { dec eax }
	__asm { ret }
}
