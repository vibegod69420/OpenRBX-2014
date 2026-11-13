// Global constant setters and predicates, byte-argument setters,
// nested member getters and immediate comparisons.

extern "C" int gval_0082d2c0;
struct CGSet_0082d2c0 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x0082d2c0
void CGSet_0082d2c0::set(int)
{
	gval_0082d2c0 = 0x2;
}

extern "C" int gval_0082d2d0;
struct CGSet_0082d2d0 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x0082d2d0
void CGSet_0082d2d0::set(int)
{
	gval_0082d2d0 = 0x0;
}

extern "C" int gval_0082d2e0;
struct CGSet_0082d2e0 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x0082d2e0
void CGSet_0082d2e0::set(int)
{
	gval_0082d2e0 = 0x1;
}

extern "C" int gval_0082d2f0;
struct CGSet_0082d2f0 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x0082d2f0
void CGSet_0082d2f0::set(int)
{
	gval_0082d2f0 = 0x40800000;
}

extern "C" int gval_0082d300;
struct CGSet_0082d300 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x0082d300
void CGSet_0082d300::set(int)
{
	gval_0082d300 = 0x41800000;
}

extern "C" int gval_0082d310;
struct CGSet_0082d310 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x0082d310
void CGSet_0082d310::set(int)
{
	gval_0082d310 = 0x40000000;
}

extern "C" int gval_0082d320;
struct CGSet_0082d320 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x0082d320
void CGSet_0082d320::set(int)
{
	gval_0082d320 = 0x2;
}

extern "C" int gval_0082d330;
struct CGSet_0082d330 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x0082d330
void CGSet_0082d330::set(int)
{
	gval_0082d330 = 0x1;
}

extern "C" int gval_0082d340;
struct CGSet_0082d340 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x0082d340
void CGSet_0082d340::set(int)
{
	gval_0082d340 = 0x0;
}

extern "C" int gflag_0082e370;
// FUNCTION: ROBLOXSTUDIO 0x0082e370
bool gbool_0082e370()
{
	return gflag_0082e370 == 2;
}

extern "C" int gflag_0082e390;
// FUNCTION: ROBLOXSTUDIO 0x0082e390
bool gbool_0082e390()
{
	return gflag_0082e390 == 1;
}

extern "C" int gflag_0082e400;
// FUNCTION: ROBLOXSTUDIO 0x0082e400
bool gbool_0082e400()
{
	return gflag_0082e400 == 1;
}

struct CBSet_00660dc0 { char pad[0x41]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00660dc0
void CBSet_00660dc0::set(char c)
{
	m = c;
}

struct CBSet_0067fd50 { char pad[0x28]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x0067fd50
void CBSet_0067fd50::set(char c)
{
	m = c;
}

struct CBSet_00898360 { char pad[0x40]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00898360
void CBSet_00898360::set(char c)
{
	m = c;
}

struct CBSet_00900000 { char pad[0x7c]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00900000
void CBSet_00900000::set(char c)
{
	m = c;
}

struct CBSet_00915270 { char pad[0x4]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00915270
void CBSet_00915270::set(char c)
{
	m = c;
}

struct CBSet_009840a0 { char pad[0x69]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x009840a0
void CBSet_009840a0::set(char c)
{
	m = c;
}

struct CBSet_00c909f0 { char pad[0x58]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00c909f0
void CBSet_00c909f0::set(char c)
{
	m = c;
}

struct CBSet_00cf2180 { char pad[0xc]; char m; void set(char c); };
// FUNCTION: ROBLOXSTUDIO 0x00cf2180
void CBSet_00cf2180::set(char c)
{
	m = c;
}

extern "C" void __stdcall pushImmTarget_008a4500(int);
struct CPushImm_008a4500 { void call(int); };
// FUNCTION: ROBLOXSTUDIO 0x008a4500
void CPushImm_008a4500::call(int)
{
	pushImmTarget_008a4500(0x12fc19c);
}

extern "C" void __stdcall pushImmTarget_008a4510(int);
struct CPushImm_008a4510 { void call(int); };
// FUNCTION: ROBLOXSTUDIO 0x008a4510
void CPushImm_008a4510::call(int)
{
	pushImmTarget_008a4510(0x120c560);
}

extern "C" void __stdcall pushImmTarget_008a47d0(int);
struct CPushImm_008a47d0 { void call(int); };
// FUNCTION: ROBLOXSTUDIO 0x008a47d0
void CPushImm_008a47d0::call(int)
{
	pushImmTarget_008a47d0(0x100);
}

extern "C" void __stdcall pushImmTarget_008a47e0(int);
struct CPushImm_008a47e0 { void call(int); };
// FUNCTION: ROBLOXSTUDIO 0x008a47e0
void CPushImm_008a47e0::call(int)
{
	pushImmTarget_008a47e0(0x12fc190);
}

struct CFInner_00892470 { char pad[0x11c]; float f; };
struct CNFloat_00892470 { char pad[0xe0]; CFInner_00892470* p; float get(); };
// FUNCTION: ROBLOXSTUDIO 0x00892470
float CNFloat_00892470::get()
{
	return this->p->f;
}

struct CFInner_00892520 { char pad[0x118]; float f; };
struct CNFloat_00892520 { char pad[0xe0]; CFInner_00892520* p; float get(); };
// FUNCTION: ROBLOXSTUDIO 0x00892520
float CNFloat_00892520::get()
{
	return this->p->f;
}

struct CFInner_00913d00 { char pad[0x98]; float f; };
struct CNFloat_00913d00 { char pad[0x8c]; CFInner_00913d00* p; float get(); };
// FUNCTION: ROBLOXSTUDIO 0x00913d00
float CNFloat_00913d00::get()
{
	return this->p->f;
}

struct CFInner_00913e00 { char pad[0xd0]; float f; };
struct CNFloat_00913e00 { char pad[0x8c]; CFInner_00913e00* p; float get(); };
// FUNCTION: ROBLOXSTUDIO 0x00913e00
float CNFloat_00913e00::get()
{
	return this->p->f;
}

struct CFInner_00913e10 { char pad[0xa8]; float f; };
struct CNFloat_00913e10 { char pad[0x8c]; CFInner_00913e10* p; float get(); };
// FUNCTION: ROBLOXSTUDIO 0x00913e10
float CNFloat_00913e10::get()
{
	return this->p->f;
}

struct CFInner_00a8d9a0 { char pad[0xac]; float f; };
struct CNFloat_00a8d9a0 { char pad[0x8c]; CFInner_00a8d9a0* p; float get(); };
// FUNCTION: ROBLOXSTUDIO 0x00a8d9a0
float CNFloat_00a8d9a0::get()
{
	return this->p->f;
}

struct CCmp_0090fff0 { char pad[0x118]; int m; bool test(); };
// FUNCTION: ROBLOXSTUDIO 0x0090fff0
bool CCmp_0090fff0::test()
{
	return m == 1;
}

struct CCmp_00924110 { char pad[0x1bc]; int m; bool test(); };
// FUNCTION: ROBLOXSTUDIO 0x00924110
bool CCmp_00924110::test()
{
	return m >= 5;
}

struct CCmp_009ccfc0 { char pad[0x84]; int m; bool test(); };
// FUNCTION: ROBLOXSTUDIO 0x009ccfc0
bool CCmp_009ccfc0::test()
{
	return m == 8;
}

struct CCmp_009cd010 { char pad[0x84]; int m; bool test(); };
// FUNCTION: ROBLOXSTUDIO 0x009cd010
bool CCmp_009cd010::test()
{
	return m == 127;
}

struct CCmp_009cd020 { char pad[0x84]; int m; bool test(); };
// FUNCTION: ROBLOXSTUDIO 0x009cd020
bool CCmp_009cd020::test()
{
	return m == 27;
}

extern "C" void __stdcall leaTarget2_00bd7f90(void*);
struct CLea2_00bd7f90 { char pad[0x244]; char m; void call(); };
// FUNCTION: ROBLOXSTUDIO 0x00bd7f90
void CLea2_00bd7f90::call()
{
	leaTarget2_00bd7f90(&m);
}

// FUNCTION: ROBLOXSTUDIO 0x0099d300
extern "C" __declspec(naked) void vtailNested_0099d300()
{
	__asm { mov ecx, dword ptr [ecx + 0x100] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x0099dae0
extern "C" __declspec(naked) void vtailNested_0099dae0()
{
	__asm { mov ecx, dword ptr [ecx + 0x100] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x48] }
	__asm { jmp eax }
}
