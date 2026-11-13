// Identity accessors, stack-adjust and call/jump thunks, and small
// member-call forwarders. Call targets are wildcarded.

struct CIdent_00402eb0 { int get(int v); };
// FUNCTION: ROBLOXSTUDIO 0x00402eb0
int CIdent_00402eb0::get(int v)
{
	return v;
}

extern "C" void thunkTarget_0042bbf3();
// FUNCTION: ROBLOXSTUDIO 0x0042bbf3
extern "C" __declspec(naked) void stackAdjustThunk_0042bbf3()
{
	__asm { sub dword ptr [esp + 4], 4 }
	__asm { jmp thunkTarget_0042bbf3 }
}

extern "C" void thunkTarget_0042bbfd();
// FUNCTION: ROBLOXSTUDIO 0x0042bbfd
extern "C" __declspec(naked) void stackAdjustThunk_0042bbfd()
{
	__asm { sub dword ptr [esp + 4], 4 }
	__asm { jmp thunkTarget_0042bbfd }
}

extern "C" void thunkTarget_0042bc07();
// FUNCTION: ROBLOXSTUDIO 0x0042bc07
extern "C" __declspec(naked) void stackAdjustThunk_0042bc07()
{
	__asm { sub dword ptr [esp + 4], 4 }
	__asm { jmp thunkTarget_0042bc07 }
}

extern "C" void thunkCall_004058d0();
extern "C" void thunkJump_004058d0();
// FUNCTION: ROBLOXSTUDIO 0x004058d0
extern "C" __declspec(naked) void callJumpThunk_004058d0()
{
	__asm { call thunkCall_004058d0 }
	__asm { jmp thunkJump_004058d0 }
}

extern "C" void thunkCall_00490f10();
extern "C" void thunkJump_00490f10();
// FUNCTION: ROBLOXSTUDIO 0x00490f10
extern "C" __declspec(naked) void callJumpThunk_00490f10()
{
	__asm { call thunkCall_00490f10 }
	__asm { jmp thunkJump_00490f10 }
}

extern "C" void thunkCall_00557cf0();
extern "C" void thunkJump_00557cf0();
// FUNCTION: ROBLOXSTUDIO 0x00557cf0
extern "C" __declspec(naked) void callJumpThunk_00557cf0()
{
	__asm { call thunkCall_00557cf0 }
	__asm { jmp thunkJump_00557cf0 }
}

extern "C" void thunkCall_00557e90();
extern "C" void thunkJump_00557e90();
// FUNCTION: ROBLOXSTUDIO 0x00557e90
extern "C" __declspec(naked) void callJumpThunk_00557e90()
{
	__asm { call thunkCall_00557e90 }
	__asm { jmp thunkJump_00557e90 }
}

extern "C" void thunkCall_00557fd0();
extern "C" void thunkJump_00557fd0();
// FUNCTION: ROBLOXSTUDIO 0x00557fd0
extern "C" __declspec(naked) void callJumpThunk_00557fd0()
{
	__asm { call thunkCall_00557fd0 }
	__asm { jmp thunkJump_00557fd0 }
}

extern "C" void thunkCall_00558110();
extern "C" void thunkJump_00558110();
// FUNCTION: ROBLOXSTUDIO 0x00558110
extern "C" __declspec(naked) void callJumpThunk_00558110()
{
	__asm { call thunkCall_00558110 }
	__asm { jmp thunkJump_00558110 }
}

extern "C" void thunkCall_00558250();
extern "C" void thunkJump_00558250();
// FUNCTION: ROBLOXSTUDIO 0x00558250
extern "C" __declspec(naked) void callJumpThunk_00558250()
{
	__asm { call thunkCall_00558250 }
	__asm { jmp thunkJump_00558250 }
}

extern "C" void thunkCall_00558390();
extern "C" void thunkJump_00558390();
// FUNCTION: ROBLOXSTUDIO 0x00558390
extern "C" __declspec(naked) void callJumpThunk_00558390()
{
	__asm { call thunkCall_00558390 }
	__asm { jmp thunkJump_00558390 }
}

extern "C" void thunkCall_005584d0();
extern "C" void thunkJump_005584d0();
// FUNCTION: ROBLOXSTUDIO 0x005584d0
extern "C" __declspec(naked) void callJumpThunk_005584d0()
{
	__asm { call thunkCall_005584d0 }
	__asm { jmp thunkJump_005584d0 }
}

extern "C" void thunkCall_00558640();
extern "C" void thunkJump_00558640();
// FUNCTION: ROBLOXSTUDIO 0x00558640
extern "C" __declspec(naked) void callJumpThunk_00558640()
{
	__asm { call thunkCall_00558640 }
	__asm { jmp thunkJump_00558640 }
}

extern "C" void predTarget_00ba3be0();
struct CPred_00ba3be0 { bool call(int); };
// FUNCTION: ROBLOXSTUDIO 0x00ba3be0
bool CPred_00ba3be0::call(int)
{
	predTarget_00ba3be0();
	return true;
}

struct CNestInner_0082ef50 { char pad[0x1d8]; char m; };
struct CNested_0082ef50 { char pad[0xc]; CNestInner_0082ef50* p; char get(); };
// FUNCTION: ROBLOXSTUDIO 0x0082ef50
char CNested_0082ef50::get()
{
	return this->p->m;
}

extern "C" void thunkTarget_00849c55();
// FUNCTION: ROBLOXSTUDIO 0x00849c55
extern "C" __declspec(naked) void subThunk_00849c55()
{
	__asm { sub ecx, 0x88 }
	__asm { jmp thunkTarget_00849c55 }
}

extern "C" void thunkTarget_00849c60();
// FUNCTION: ROBLOXSTUDIO 0x00849c60
extern "C" __declspec(naked) void subThunk_00849c60()
{
	__asm { sub ecx, 0x9c }
	__asm { jmp thunkTarget_00849c60 }
}

extern "C" void thunkTarget_00849c6b();
// FUNCTION: ROBLOXSTUDIO 0x00849c6b
extern "C" __declspec(naked) void subThunk_00849c6b()
{
	__asm { sub ecx, 0xa0 }
	__asm { jmp thunkTarget_00849c6b }
}

extern "C" void thunkTarget_0088073a();
// FUNCTION: ROBLOXSTUDIO 0x0088073a
extern "C" __declspec(naked) void subThunk_0088073a()
{
	__asm { sub ecx, 0x290 }
	__asm { jmp thunkTarget_0088073a }
}

extern "C" void thunkTarget_008871a3();
// FUNCTION: ROBLOXSTUDIO 0x008871a3
extern "C" __declspec(naked) void subThunk_008871a3()
{
	__asm { sub ecx, 0x128 }
	__asm { jmp thunkTarget_008871a3 }
}

extern "C" void thunkTarget_008a0eef();
// FUNCTION: ROBLOXSTUDIO 0x008a0eef
extern "C" __declspec(naked) void subThunk_008a0eef()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_008a0eef }
}

extern "C" void thunkTarget_008a0f1a();
// FUNCTION: ROBLOXSTUDIO 0x008a0f1a
extern "C" __declspec(naked) void subThunk_008a0f1a()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_008a0f1a }
}

extern "C" void thunkTarget_008a73de();
// FUNCTION: ROBLOXSTUDIO 0x008a73de
extern "C" __declspec(naked) void subThunk_008a73de()
{
	__asm { sub ecx, 0x88 }
	__asm { jmp thunkTarget_008a73de }
}

extern "C" void thunkTarget_008abc0d();
// FUNCTION: ROBLOXSTUDIO 0x008abc0d
extern "C" __declspec(naked) void subThunk_008abc0d()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_008abc0d }
}

extern "C" void thunkTarget_008abc20();
// FUNCTION: ROBLOXSTUDIO 0x008abc20
extern "C" __declspec(naked) void subThunk_008abc20()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_008abc20 }
}

extern "C" void thunkTarget_008abc3b();
// FUNCTION: ROBLOXSTUDIO 0x008abc3b
extern "C" __declspec(naked) void subThunk_008abc3b()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_008abc3b }
}

extern "C" void thunkTarget_008abc56();
// FUNCTION: ROBLOXSTUDIO 0x008abc56
extern "C" __declspec(naked) void subThunk_008abc56()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_008abc56 }
}

extern "C" void thunkTarget_0090fd96();
// FUNCTION: ROBLOXSTUDIO 0x0090fd96
extern "C" __declspec(naked) void subThunk_0090fd96()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_0090fd96 }
}

extern "C" void thunkTarget_0090fdb1();
// FUNCTION: ROBLOXSTUDIO 0x0090fdb1
extern "C" __declspec(naked) void subThunk_0090fdb1()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_0090fdb1 }
}

extern "C" void thunkTarget_0090fdcc();
// FUNCTION: ROBLOXSTUDIO 0x0090fdcc
extern "C" __declspec(naked) void subThunk_0090fdcc()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_0090fdcc }
}

extern "C" void thunkTarget_0090fde7();
// FUNCTION: ROBLOXSTUDIO 0x0090fde7
extern "C" __declspec(naked) void subThunk_0090fde7()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_0090fde7 }
}

extern "C" void thunkTarget_00916a25();
// FUNCTION: ROBLOXSTUDIO 0x00916a25
extern "C" __declspec(naked) void subThunk_00916a25()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00916a25 }
}

extern "C" void thunkTarget_00916a38();
// FUNCTION: ROBLOXSTUDIO 0x00916a38
extern "C" __declspec(naked) void subThunk_00916a38()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00916a38 }
}

extern "C" void thunkTarget_00916a53();
// FUNCTION: ROBLOXSTUDIO 0x00916a53
extern "C" __declspec(naked) void subThunk_00916a53()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00916a53 }
}

extern "C" void thunkTarget_00916a6e();
// FUNCTION: ROBLOXSTUDIO 0x00916a6e
extern "C" __declspec(naked) void subThunk_00916a6e()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00916a6e }
}

extern "C" void thunkTarget_009199a7();
// FUNCTION: ROBLOXSTUDIO 0x009199a7
extern "C" __declspec(naked) void subThunk_009199a7()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_009199a7 }
}

extern "C" void thunkTarget_009199ba();
// FUNCTION: ROBLOXSTUDIO 0x009199ba
extern "C" __declspec(naked) void subThunk_009199ba()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_009199ba }
}

extern "C" void thunkTarget_009199dd();
// FUNCTION: ROBLOXSTUDIO 0x009199dd
extern "C" __declspec(naked) void subThunk_009199dd()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_009199dd }
}

extern "C" void thunkTarget_009199f0();
// FUNCTION: ROBLOXSTUDIO 0x009199f0
extern "C" __declspec(naked) void subThunk_009199f0()
{
	__asm { sub ecx, 0x94 }
	__asm { jmp thunkTarget_009199f0 }
}

extern "C" void thunkTarget_009199fb();
// FUNCTION: ROBLOXSTUDIO 0x009199fb
extern "C" __declspec(naked) void subThunk_009199fb()
{
	__asm { sub ecx, 0x130 }
	__asm { jmp thunkTarget_009199fb }
}

extern "C" void thunkTarget_00919a06();
// FUNCTION: ROBLOXSTUDIO 0x00919a06
extern "C" __declspec(naked) void subThunk_00919a06()
{
	__asm { sub ecx, 0x14c }
	__asm { jmp thunkTarget_00919a06 }
}

extern "C" void thunkTarget_00919a21();
// FUNCTION: ROBLOXSTUDIO 0x00919a21
extern "C" __declspec(naked) void subThunk_00919a21()
{
	__asm { sub ecx, 0x1c4 }
	__asm { jmp thunkTarget_00919a21 }
}

extern "C" void thunkTarget_00919a2c();
// FUNCTION: ROBLOXSTUDIO 0x00919a2c
extern "C" __declspec(naked) void subThunk_00919a2c()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00919a2c }
}

extern "C" void thunkTarget_00923544();
// FUNCTION: ROBLOXSTUDIO 0x00923544
extern "C" __declspec(naked) void subThunk_00923544()
{
	__asm { sub ecx, 0x190 }
	__asm { jmp thunkTarget_00923544 }
}

extern "C" void thunkTarget_00965784();
// FUNCTION: ROBLOXSTUDIO 0x00965784
extern "C" __declspec(naked) void subThunk_00965784()
{
	__asm { sub ecx, 0x84 }
	__asm { jmp thunkTarget_00965784 }
}

extern "C" void thunkTarget_009657a7();
// FUNCTION: ROBLOXSTUDIO 0x009657a7
extern "C" __declspec(naked) void subThunk_009657a7()
{
	__asm { sub ecx, 0x128 }
	__asm { jmp thunkTarget_009657a7 }
}

extern "C" void thunkTarget_009657b2();
// FUNCTION: ROBLOXSTUDIO 0x009657b2
extern "C" __declspec(naked) void subThunk_009657b2()
{
	__asm { sub ecx, 0x150 }
	__asm { jmp thunkTarget_009657b2 }
}

extern "C" void thunkTarget_009657bd();
// FUNCTION: ROBLOXSTUDIO 0x009657bd
extern "C" __declspec(naked) void subThunk_009657bd()
{
	__asm { sub ecx, 0x160 }
	__asm { jmp thunkTarget_009657bd }
}

extern "C" void thunkTarget_009657d8();
// FUNCTION: ROBLOXSTUDIO 0x009657d8
extern "C" __declspec(naked) void subThunk_009657d8()
{
	__asm { sub ecx, 0x84 }
	__asm { jmp thunkTarget_009657d8 }
}

extern "C" void thunkTarget_0098331d();
// FUNCTION: ROBLOXSTUDIO 0x0098331d
extern "C" __declspec(naked) void subThunk_0098331d()
{
	__asm { sub ecx, 0x290 }
	__asm { jmp thunkTarget_0098331d }
}

extern "C" void thunkTarget_0099f9ef();
// FUNCTION: ROBLOXSTUDIO 0x0099f9ef
extern "C" __declspec(naked) void subThunk_0099f9ef()
{
	__asm { sub ecx, 0x84 }
	__asm { jmp thunkTarget_0099f9ef }
}

extern "C" void thunkTarget_009cb9d4();
// FUNCTION: ROBLOXSTUDIO 0x009cb9d4
extern "C" __declspec(naked) void subThunk_009cb9d4()
{
	__asm { sub ecx, 0x84 }
	__asm { jmp thunkTarget_009cb9d4 }
}

extern "C" void thunkTarget_009d3d7a();
// FUNCTION: ROBLOXSTUDIO 0x009d3d7a
extern "C" __declspec(naked) void subThunk_009d3d7a()
{
	__asm { sub ecx, 0x128 }
	__asm { jmp thunkTarget_009d3d7a }
}

extern "C" void thunkTarget_009d3d8d();
// FUNCTION: ROBLOXSTUDIO 0x009d3d8d
extern "C" __declspec(naked) void subThunk_009d3d8d()
{
	__asm { sub ecx, 0x180 }
	__asm { jmp thunkTarget_009d3d8d }
}

extern "C" void thunkTarget_009d3d98();
// FUNCTION: ROBLOXSTUDIO 0x009d3d98
extern "C" __declspec(naked) void subThunk_009d3d98()
{
	__asm { sub ecx, 0x184 }
	__asm { jmp thunkTarget_009d3d98 }
}

extern "C" void thunkTarget_009d3db3();
// FUNCTION: ROBLOXSTUDIO 0x009d3db3
extern "C" __declspec(naked) void subThunk_009d3db3()
{
	__asm { sub ecx, 0x80 }
	__asm { jmp thunkTarget_009d3db3 }
}

extern "C" void thunkTarget_009d3dbe();
// FUNCTION: ROBLOXSTUDIO 0x009d3dbe
extern "C" __declspec(naked) void subThunk_009d3dbe()
{
	__asm { sub ecx, 0xf8 }
	__asm { jmp thunkTarget_009d3dbe }
}

extern "C" void thunkTarget_009f85cb();
// FUNCTION: ROBLOXSTUDIO 0x009f85cb
extern "C" __declspec(naked) void subThunk_009f85cb()
{
	__asm { sub ecx, 0x88 }
	__asm { jmp thunkTarget_009f85cb }
}

extern "C" void thunkTarget_009f85d6();
// FUNCTION: ROBLOXSTUDIO 0x009f85d6
extern "C" __declspec(naked) void subThunk_009f85d6()
{
	__asm { sub ecx, 0x88 }
	__asm { jmp thunkTarget_009f85d6 }
}

extern "C" void thunkTarget_00a025ae();
// FUNCTION: ROBLOXSTUDIO 0x00a025ae
extern "C" __declspec(naked) void subThunk_00a025ae()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00a025ae }
}

extern "C" void thunkTarget_00a025c9();
// FUNCTION: ROBLOXSTUDIO 0x00a025c9
extern "C" __declspec(naked) void subThunk_00a025c9()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00a025c9 }
}

extern "C" void thunkTarget_00a572a1();
// FUNCTION: ROBLOXSTUDIO 0x00a572a1
extern "C" __declspec(naked) void subThunk_00a572a1()
{
	__asm { sub ecx, 0xdc }
	__asm { jmp thunkTarget_00a572a1 }
}

extern "C" void thunkTarget_00a8b6a6();
// FUNCTION: ROBLOXSTUDIO 0x00a8b6a6
extern "C" __declspec(naked) void subThunk_00a8b6a6()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00a8b6a6 }
}

extern "C" void thunkTarget_00a8b6c9();
// FUNCTION: ROBLOXSTUDIO 0x00a8b6c9
extern "C" __declspec(naked) void subThunk_00a8b6c9()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00a8b6c9 }
}

extern "C" void thunkTarget_00a8eeba();
// FUNCTION: ROBLOXSTUDIO 0x00a8eeba
extern "C" __declspec(naked) void subThunk_00a8eeba()
{
	__asm { sub ecx, 0x190 }
	__asm { jmp thunkTarget_00a8eeba }
}

extern "C" void thunkTarget_00a8eed5();
// FUNCTION: ROBLOXSTUDIO 0x00a8eed5
extern "C" __declspec(naked) void subThunk_00a8eed5()
{
	__asm { sub ecx, 0x190 }
	__asm { jmp thunkTarget_00a8eed5 }
}

extern "C" void thunkTarget_00a902d9();
// FUNCTION: ROBLOXSTUDIO 0x00a902d9
extern "C" __declspec(naked) void subThunk_00a902d9()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00a902d9 }
}

extern "C" void thunkTarget_00a902f4();
// FUNCTION: ROBLOXSTUDIO 0x00a902f4
extern "C" __declspec(naked) void subThunk_00a902f4()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00a902f4 }
}

extern "C" void thunkTarget_00a95481();
// FUNCTION: ROBLOXSTUDIO 0x00a95481
extern "C" __declspec(naked) void subThunk_00a95481()
{
	__asm { sub ecx, 0xf8 }
	__asm { jmp thunkTarget_00a95481 }
}

extern "C" void thunkTarget_00a954a4();
// FUNCTION: ROBLOXSTUDIO 0x00a954a4
extern "C" __declspec(naked) void subThunk_00a954a4()
{
	__asm { sub ecx, 0x80 }
	__asm { jmp thunkTarget_00a954a4 }
}

extern "C" void thunkTarget_00a954af();
// FUNCTION: ROBLOXSTUDIO 0x00a954af
extern "C" __declspec(naked) void subThunk_00a954af()
{
	__asm { sub ecx, 0xf8 }
	__asm { jmp thunkTarget_00a954af }
}

extern "C" void thunkTarget_00a954d2();
// FUNCTION: ROBLOXSTUDIO 0x00a954d2
extern "C" __declspec(naked) void subThunk_00a954d2()
{
	__asm { sub ecx, 0x80 }
	__asm { jmp thunkTarget_00a954d2 }
}

extern "C" void thunkTarget_00a954dd();
// FUNCTION: ROBLOXSTUDIO 0x00a954dd
extern "C" __declspec(naked) void subThunk_00a954dd()
{
	__asm { sub ecx, 0xf8 }
	__asm { jmp thunkTarget_00a954dd }
}

extern "C" void thunkTarget_00a954f8();
// FUNCTION: ROBLOXSTUDIO 0x00a954f8
extern "C" __declspec(naked) void subThunk_00a954f8()
{
	__asm { sub ecx, 0x80 }
	__asm { jmp thunkTarget_00a954f8 }
}

extern "C" void thunkTarget_00a9551b();
// FUNCTION: ROBLOXSTUDIO 0x00a9551b
extern "C" __declspec(naked) void subThunk_00a9551b()
{
	__asm { sub ecx, 0x80 }
	__asm { jmp thunkTarget_00a9551b }
}

extern "C" void thunkTarget_00a95526();
// FUNCTION: ROBLOXSTUDIO 0x00a95526
extern "C" __declspec(naked) void subThunk_00a95526()
{
	__asm { sub ecx, 0xf8 }
	__asm { jmp thunkTarget_00a95526 }
}

extern "C" void thunkTarget_00a95549();
// FUNCTION: ROBLOXSTUDIO 0x00a95549
extern "C" __declspec(naked) void subThunk_00a95549()
{
	__asm { sub ecx, 0x80 }
	__asm { jmp thunkTarget_00a95549 }
}

extern "C" void thunkTarget_00a95554();
// FUNCTION: ROBLOXSTUDIO 0x00a95554
extern "C" __declspec(naked) void subThunk_00a95554()
{
	__asm { sub ecx, 0xf8 }
	__asm { jmp thunkTarget_00a95554 }
}

extern "C" void thunkTarget_00a95567();
// FUNCTION: ROBLOXSTUDIO 0x00a95567
extern "C" __declspec(naked) void subThunk_00a95567()
{
	__asm { sub ecx, 0x80 }
	__asm { jmp thunkTarget_00a95567 }
}

extern "C" void thunkTarget_00a9557a();
// FUNCTION: ROBLOXSTUDIO 0x00a9557a
extern "C" __declspec(naked) void subThunk_00a9557a()
{
	__asm { sub ecx, 0x80 }
	__asm { jmp thunkTarget_00a9557a }
}

extern "C" void thunkTarget_00a95585();
// FUNCTION: ROBLOXSTUDIO 0x00a95585
extern "C" __declspec(naked) void subThunk_00a95585()
{
	__asm { sub ecx, 0xf8 }
	__asm { jmp thunkTarget_00a95585 }
}

extern "C" void thunkTarget_00a955b8();
// FUNCTION: ROBLOXSTUDIO 0x00a955b8
extern "C" __declspec(naked) void subThunk_00a955b8()
{
	__asm { sub ecx, 0x80 }
	__asm { jmp thunkTarget_00a955b8 }
}

extern "C" void thunkTarget_00a955c3();
// FUNCTION: ROBLOXSTUDIO 0x00a955c3
extern "C" __declspec(naked) void subThunk_00a955c3()
{
	__asm { sub ecx, 0xf8 }
	__asm { jmp thunkTarget_00a955c3 }
}

extern "C" void thunkTarget_00a955ce();
// FUNCTION: ROBLOXSTUDIO 0x00a955ce
extern "C" __declspec(naked) void subThunk_00a955ce()
{
	__asm { sub ecx, 0x134 }
	__asm { jmp thunkTarget_00a955ce }
}

extern "C" void thunkTarget_00a955f1();
// FUNCTION: ROBLOXSTUDIO 0x00a955f1
extern "C" __declspec(naked) void subThunk_00a955f1()
{
	__asm { sub ecx, 0x80 }
	__asm { jmp thunkTarget_00a955f1 }
}

extern "C" void thunkTarget_00a955fc();
// FUNCTION: ROBLOXSTUDIO 0x00a955fc
extern "C" __declspec(naked) void subThunk_00a955fc()
{
	__asm { sub ecx, 0xf8 }
	__asm { jmp thunkTarget_00a955fc }
}

extern "C" void thunkTarget_00a9560f();
// FUNCTION: ROBLOXSTUDIO 0x00a9560f
extern "C" __declspec(naked) void subThunk_00a9560f()
{
	__asm { sub ecx, 0xf8 }
	__asm { jmp thunkTarget_00a9560f }
}

extern "C" void thunkTarget_00a9561a();
// FUNCTION: ROBLOXSTUDIO 0x00a9561a
extern "C" __declspec(naked) void subThunk_00a9561a()
{
	__asm { sub ecx, 0x134 }
	__asm { jmp thunkTarget_00a9561a }
}

extern "C" void thunkTarget_00a9563d();
// FUNCTION: ROBLOXSTUDIO 0x00a9563d
extern "C" __declspec(naked) void subThunk_00a9563d()
{
	__asm { sub ecx, 0x80 }
	__asm { jmp thunkTarget_00a9563d }
}

extern "C" void thunkTarget_00a95648();
// FUNCTION: ROBLOXSTUDIO 0x00a95648
extern "C" __declspec(naked) void subThunk_00a95648()
{
	__asm { sub ecx, 0xf8 }
	__asm { jmp thunkTarget_00a95648 }
}

extern "C" void thunkTarget_00aa2bde();
// FUNCTION: ROBLOXSTUDIO 0x00aa2bde
extern "C" __declspec(naked) void subThunk_00aa2bde()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00aa2bde }
}

extern "C" void thunkTarget_00aa2bf9();
// FUNCTION: ROBLOXSTUDIO 0x00aa2bf9
extern "C" __declspec(naked) void subThunk_00aa2bf9()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00aa2bf9 }
}

extern "C" void thunkTarget_00aa2c14();
// FUNCTION: ROBLOXSTUDIO 0x00aa2c14
extern "C" __declspec(naked) void subThunk_00aa2c14()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00aa2c14 }
}

extern "C" void thunkTarget_00aa5f4a();
// FUNCTION: ROBLOXSTUDIO 0x00aa5f4a
extern "C" __declspec(naked) void subThunk_00aa5f4a()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00aa5f4a }
}

extern "C" void thunkTarget_00aa5f5d();
// FUNCTION: ROBLOXSTUDIO 0x00aa5f5d
extern "C" __declspec(naked) void subThunk_00aa5f5d()
{
	__asm { sub ecx, 0x138 }
	__asm { jmp thunkTarget_00aa5f5d }
}

extern "C" void thunkTarget_00aa5f68();
// FUNCTION: ROBLOXSTUDIO 0x00aa5f68
extern "C" __declspec(naked) void subThunk_00aa5f68()
{
	__asm { sub ecx, 0x154 }
	__asm { jmp thunkTarget_00aa5f68 }
}

extern "C" void thunkTarget_00aa5f83();
// FUNCTION: ROBLOXSTUDIO 0x00aa5f83
extern "C" __declspec(naked) void subThunk_00aa5f83()
{
	__asm { sub ecx, 0x1cc }
	__asm { jmp thunkTarget_00aa5f83 }
}

extern "C" void thunkTarget_00aa5f8e();
// FUNCTION: ROBLOXSTUDIO 0x00aa5f8e
extern "C" __declspec(naked) void subThunk_00aa5f8e()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00aa5f8e }
}

extern "C" void thunkTarget_00aac4d6();
// FUNCTION: ROBLOXSTUDIO 0x00aac4d6
extern "C" __declspec(naked) void subThunk_00aac4d6()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00aac4d6 }
}

extern "C" void thunkTarget_00aac4f9();
// FUNCTION: ROBLOXSTUDIO 0x00aac4f9
extern "C" __declspec(naked) void subThunk_00aac4f9()
{
	__asm { sub ecx, 0xb0 }
	__asm { jmp thunkTarget_00aac4f9 }
}

extern "C" void thunkTarget_00ac7fd2();
// FUNCTION: ROBLOXSTUDIO 0x00ac7fd2
extern "C" __declspec(naked) void subThunk_00ac7fd2()
{
	__asm { sub ecx, 0xdc }
	__asm { jmp thunkTarget_00ac7fd2 }
}

extern "C" void thunkTarget_00ac7fed();
// FUNCTION: ROBLOXSTUDIO 0x00ac7fed
extern "C" __declspec(naked) void subThunk_00ac7fed()
{
	__asm { sub ecx, 0xdc }
	__asm { jmp thunkTarget_00ac7fed }
}

extern "C" void thunkTarget_00ae41a9();
// FUNCTION: ROBLOXSTUDIO 0x00ae41a9
extern "C" __declspec(naked) void subThunk_00ae41a9()
{
	__asm { sub ecx, 0x290 }
	__asm { jmp thunkTarget_00ae41a9 }
}

extern "C" void thunkTarget_00ca3c02();
// FUNCTION: ROBLOXSTUDIO 0x00ca3c02
extern "C" __declspec(naked) void subThunk_00ca3c02()
{
	__asm { sub ecx, 0xea0 }
	__asm { jmp thunkTarget_00ca3c02 }
}

extern "C" void thunkTarget_00ca3c1d();
// FUNCTION: ROBLOXSTUDIO 0x00ca3c1d
extern "C" __declspec(naked) void subThunk_00ca3c1d()
{
	__asm { sub ecx, 0xe94 }
	__asm { jmp thunkTarget_00ca3c1d }
}

extern "C" void thunkTarget_00ca3c28();
// FUNCTION: ROBLOXSTUDIO 0x00ca3c28
extern "C" __declspec(naked) void subThunk_00ca3c28()
{
	__asm { sub ecx, 0xea0 }
	__asm { jmp thunkTarget_00ca3c28 }
}

extern "C" void thunkTarget_00cb1e96();
// FUNCTION: ROBLOXSTUDIO 0x00cb1e96
extern "C" __declspec(naked) void subThunk_00cb1e96()
{
	__asm { sub ecx, 0xe94 }
	__asm { jmp thunkTarget_00cb1e96 }
}

extern "C" void thunkTarget_00cb1eb1();
// FUNCTION: ROBLOXSTUDIO 0x00cb1eb1
extern "C" __declspec(naked) void subThunk_00cb1eb1()
{
	__asm { sub ecx, 0xe94 }
	__asm { jmp thunkTarget_00cb1eb1 }
}

extern "C" void thunkTarget_00cb1ebc();
// FUNCTION: ROBLOXSTUDIO 0x00cb1ebc
extern "C" __declspec(naked) void subThunk_00cb1ebc()
{
	__asm { sub ecx, 0xea0 }
	__asm { jmp thunkTarget_00cb1ebc }
}
