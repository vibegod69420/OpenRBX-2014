// Frame-preserving this adjustments, virtual tails through members,
// boolean predicates and small string/pointer getters.

#include <intrin.h>

extern "C" void thunkTarget_005dfa80();
// FUNCTION: ROBLOXSTUDIO 0x005dfa80
extern "C" __declspec(naked) void frameGetTail_005dfa80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_005dfa80 }
}

extern "C" void thunkTarget_005dfa90();
// FUNCTION: ROBLOXSTUDIO 0x005dfa90
extern "C" __declspec(naked) void frameGetTail_005dfa90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_005dfa90 }
}

extern "C" void thunkTarget_00606c30();
// FUNCTION: ROBLOXSTUDIO 0x00606c30
extern "C" __declspec(naked) void frameGetTail_00606c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00606c30 }
}

extern "C" void thunkTarget_00606c40();
// FUNCTION: ROBLOXSTUDIO 0x00606c40
extern "C" __declspec(naked) void frameGetTail_00606c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00606c40 }
}

extern "C" void thunkTarget_00693780();
// FUNCTION: ROBLOXSTUDIO 0x00693780
extern "C" __declspec(naked) void frameGetTail_00693780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x8] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00693780 }
}

extern "C" void thunkTarget_008f8f80();
// FUNCTION: ROBLOXSTUDIO 0x008f8f80
extern "C" __declspec(naked) void frameGetTail_008f8f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_008f8f80 }
}

extern "C" void thunkTarget_0090a790();
// FUNCTION: ROBLOXSTUDIO 0x0090a790
extern "C" __declspec(naked) void frameGetTail_0090a790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_0090a790 }
}

extern "C" void thunkTarget_0090c530();
// FUNCTION: ROBLOXSTUDIO 0x0090c530
extern "C" __declspec(naked) void frameGetTail_0090c530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_0090c530 }
}

extern "C" void thunkTarget_0090c560();
// FUNCTION: ROBLOXSTUDIO 0x0090c560
extern "C" __declspec(naked) void frameGetTail_0090c560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_0090c560 }
}

extern "C" void thunkTarget_00a50350();
// FUNCTION: ROBLOXSTUDIO 0x00a50350
extern "C" __declspec(naked) void frameGetTail_00a50350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x24] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00a50350 }
}

extern "C" void thunkTarget_00babdd0();
// FUNCTION: ROBLOXSTUDIO 0x00babdd0
extern "C" __declspec(naked) void frameGetTail_00babdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00babdd0 }
}

// FUNCTION: ROBLOXSTUDIO 0x00407930
extern "C" __declspec(naked) void vtailMemFrame_00407930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x8] }
}

// FUNCTION: ROBLOXSTUDIO 0x004d3610
extern "C" __declspec(naked) void vtailMemFrame_004d3610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x10] }
}

// FUNCTION: ROBLOXSTUDIO 0x0059cd90
extern "C" __declspec(naked) void vtailMemFrame_0059cd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x4] }
}

// FUNCTION: ROBLOXSTUDIO 0x0059cda0
extern "C" __declspec(naked) void vtailMemFrame_0059cda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x10] }
}

// FUNCTION: ROBLOXSTUDIO 0x0059cdd0
extern "C" __declspec(naked) void vtailMemFrame_0059cdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0xc] }
}

// FUNCTION: ROBLOXSTUDIO 0x00b68f60
extern "C" __declspec(naked) void vtailMemFrame_00b68f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x20] }
}

// FUNCTION: ROBLOXSTUDIO 0x00b6a450
extern "C" __declspec(naked) void vtailMemFrame_00b6a450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x30] }
}

// FUNCTION: ROBLOXSTUDIO 0x00b6a460
extern "C" __declspec(naked) void vtailMemFrame_00b6a460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x3c] }
}

// FUNCTION: ROBLOXSTUDIO 0x00b92870
extern "C" __declspec(naked) void vtailMemFrame_00b92870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x40] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x74] }
}

// FUNCTION: ROBLOXSTUDIO 0x00d09460
extern "C" __declspec(naked) void vtailMemFrame_00d09460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x44] }
}

// FUNCTION: ROBLOXSTUDIO 0x00d0c040
extern "C" __declspec(naked) void vtailMemFrame_00d0c040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x28] }
}

extern "C" int gbool_0082e380;
// FUNCTION: ROBLOXSTUDIO 0x0082e380
bool globalBool_0082e380()
{
	return gbool_0082e380 == 0;
}

struct CMemberBool_00682000 { char pad[0x17c]; int m; bool test(); };
// FUNCTION: ROBLOXSTUDIO 0x00682000
bool CMemberBool_00682000::test()
{
	return m != 0;
}

struct CMemberBool_008aca00 { char pad[0x170]; int m; bool test(); };
// FUNCTION: ROBLOXSTUDIO 0x008aca00
bool CMemberBool_008aca00::test()
{
	return m != 0;
}

struct CMemberBool_009d91d0 { char pad[0x148]; int m; bool test(); };
// FUNCTION: ROBLOXSTUDIO 0x009d91d0
bool CMemberBool_009d91d0::test()
{
	return m != 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00428ac0
extern "C" __declspec(naked) void vtailMem_00428ac0()
{
	__asm { mov ecx, dword ptr [ecx + 0xc8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 0x4] }
}

// FUNCTION: ROBLOXSTUDIO 0x00913da0
extern "C" __declspec(naked) void vtailMem_00913da0()
{
	__asm { mov ecx, dword ptr [ecx + 0x8c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 0x18] }
}

// FUNCTION: ROBLOXSTUDIO 0x00997700
extern "C" __declspec(naked) void vtailMem_00997700()
{
	__asm { mov ecx, dword ptr [ecx + 0xbc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 0x8] }
}

extern "C" void __stdcall pushOneTarget_008a4290(int);
struct CPush1_008a4290 { void call(int); };
// FUNCTION: ROBLOXSTUDIO 0x008a4290
void CPush1_008a4290::call(int)
{
	pushOneTarget_008a4290(1);
}

extern "C" void __stdcall pushOneTarget_008a42a0(int);
struct CPush1_008a42a0 { void call(int); };
// FUNCTION: ROBLOXSTUDIO 0x008a42a0
void CPush1_008a42a0::call(int)
{
	pushOneTarget_008a42a0(1);
}

extern "C" void __stdcall pushOneTarget_008a44f0(int);
struct CPush1_008a44f0 { void call(int); };
// FUNCTION: ROBLOXSTUDIO 0x008a44f0
void CPush1_008a44f0::call(int)
{
	pushOneTarget_008a44f0(1);
}

extern "C" void __stdcall leaCallTarget_00bd6ee0(void*);
struct CLeaCall_00bd6ee0 { char pad[0x34]; char m; void call(); };
// FUNCTION: ROBLOXSTUDIO 0x00bd6ee0
void CLeaCall_00bd6ee0::call()
{
	leaCallTarget_00bd6ee0(&m);
}

extern "C" void __stdcall leaCallTarget_00c192e0(void*);
struct CLeaCall_00c192e0 { char pad[0x2c]; char m; void call(); };
// FUNCTION: ROBLOXSTUDIO 0x00c192e0
void CLeaCall_00c192e0::call()
{
	leaCallTarget_00c192e0(&m);
}

extern "C" void __stdcall leaCallTarget_00c1af60(void*);
struct CLeaCall_00c1af60 { char pad[0x38]; char m; void call(); };
// FUNCTION: ROBLOXSTUDIO 0x00c1af60
void CLeaCall_00c1af60::call()
{
	leaCallTarget_00c1af60(&m);
}

// FUNCTION: ROBLOXSTUDIO 0x00c72990
extern "C" __declspec(naked) void stringGet_00c72990()
{
	__asm { cmp dword ptr [ecx + 0x20], 0x10 }
	__asm { lea eax, [ecx + 0xc] }
	__asm { jb done }
	__asm { mov eax, dword ptr [eax] }
	__asm { done: ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007c2460
extern "C" __declspec(naked) void condVtail_007c2460()
{
	__asm { cmp byte ptr [ecx + 0x28], 0 }
	__asm { je done }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 0x40] }
	__asm { done: ret }
}
