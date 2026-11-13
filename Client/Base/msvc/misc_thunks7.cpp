// 13-15 byte thunk variants: combined vtordisp/offset, disp32 this
// adjustments, argument pass-through and indirect calls.

extern "C" void thunkTarget_00968ccf();
// FUNCTION: ROBLOXSTUDIO 0x00968ccf
extern "C" __declspec(naked) void vtor2_00968ccf()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x130 }
	__asm { jmp thunkTarget_00968ccf }
}

extern "C" void thunkTarget_00aa879d();
// FUNCTION: ROBLOXSTUDIO 0x00aa879d
extern "C" __declspec(naked) void vtor2_00aa879d()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x188 }
	__asm { jmp thunkTarget_00aa879d }
}

extern "C" void thunkTarget_00676460();
// FUNCTION: ROBLOXSTUDIO 0x00676460
extern "C" __declspec(naked) void frameGet32_00676460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x8c] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00676460 }
}

extern "C" void thunkTarget_00897dc0();
// FUNCTION: ROBLOXSTUDIO 0x00897dc0
extern "C" __declspec(naked) void frameGet32_00897dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00897dc0 }
}

extern "C" void thunkTarget_008fa9b0();
// FUNCTION: ROBLOXSTUDIO 0x008fa9b0
extern "C" __declspec(naked) void frameGet32_008fa9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x80] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_008fa9b0 }
}

extern "C" void thunkTarget_008fa9c0();
// FUNCTION: ROBLOXSTUDIO 0x008fa9c0
extern "C" __declspec(naked) void frameGet32_008fa9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x80] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_008fa9c0 }
}

extern "C" void thunkTarget_009987e0();
// FUNCTION: ROBLOXSTUDIO 0x009987e0
extern "C" __declspec(naked) void frameGet32_009987e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xbc] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_009987e0 }
}

extern "C" void thunkTarget_009987f0();
// FUNCTION: ROBLOXSTUDIO 0x009987f0
extern "C" __declspec(naked) void frameGet32_009987f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xbc] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_009987f0 }
}

extern "C" void thunkTarget_00a01710();
// FUNCTION: ROBLOXSTUDIO 0x00a01710
extern "C" __declspec(naked) void frameGet32_00a01710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x80] }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00a01710 }
}

extern "C" void thunkTarget_006470c0();
// FUNCTION: ROBLOXSTUDIO 0x006470c0
extern "C" __declspec(naked) void frameAdd32_006470c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0x35e10 }
	__asm { pop ebp }
	__asm { jmp thunkTarget_006470c0 }
}

extern "C" void thunkTarget_00894880();
// FUNCTION: ROBLOXSTUDIO 0x00894880
extern "C" __declspec(naked) void frameAdd32_00894880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0x8c }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00894880 }
}

extern "C" void thunkTarget_009836e0();
// FUNCTION: ROBLOXSTUDIO 0x009836e0
extern "C" __declspec(naked) void frameAdd32_009836e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0x290 }
	__asm { pop ebp }
	__asm { jmp thunkTarget_009836e0 }
}

extern "C" void thunkTarget_0099c830();
// FUNCTION: ROBLOXSTUDIO 0x0099c830
extern "C" __declspec(naked) void frameAdd32_0099c830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0x94 }
	__asm { pop ebp }
	__asm { jmp thunkTarget_0099c830 }
}

extern "C" void thunkTarget_0099cef0();
// FUNCTION: ROBLOXSTUDIO 0x0099cef0
extern "C" __declspec(naked) void frameAdd32_0099cef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0xb8 }
	__asm { pop ebp }
	__asm { jmp thunkTarget_0099cef0 }
}

extern "C" void thunkTarget_00a0f2d0();
// FUNCTION: ROBLOXSTUDIO 0x00a0f2d0
extern "C" __declspec(naked) void frameAdd32_00a0f2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0xb0 }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00a0f2d0 }
}

extern "C" void thunkTarget_00a0f300();
// FUNCTION: ROBLOXSTUDIO 0x00a0f300
extern "C" __declspec(naked) void frameAdd32_00a0f300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0xac }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00a0f300 }
}

extern "C" void thunkTarget_00a577c0();
// FUNCTION: ROBLOXSTUDIO 0x00a577c0
extern "C" __declspec(naked) void frameAdd32_00a577c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0xdc }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00a577c0 }
}

extern "C" void thunkTarget_00a98ab0();
// FUNCTION: ROBLOXSTUDIO 0x00a98ab0
extern "C" __declspec(naked) void frameAdd32_00a98ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0x134 }
	__asm { pop ebp }
	__asm { jmp thunkTarget_00a98ab0 }
}

// FUNCTION: ROBLOXSTUDIO 0x00597290
extern "C" __declspec(naked) void vtailNestFrame_00597290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x4] }
	__asm { pop ebp }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x00b69110
extern "C" __declspec(naked) void vtailNestFrame_00b69110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x4c] }
	__asm { pop ebp }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x00b6c490
extern "C" __declspec(naked) void vtailNestFrame_00b6c490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x40] }
	__asm { pop ebp }
	__asm { jmp eax }
}

extern "C" void callTarget_00919bb0();
// FUNCTION: ROBLOXSTUDIO 0x00919bb0
extern "C" __declspec(naked) void addCall_00919bb0()
{
	__asm { add ecx, 0xfffffe3c }
	__asm { call callTarget_00919bb0 }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007c3d80
extern "C" __declspec(naked) void vcallArg_007c3d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0x8] }
	__asm { call dword ptr [eax + 0x18] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x007c3e00
extern "C" __declspec(naked) void vcallArg_007c3e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0x8] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void memberPushTarget_00bd96c0(int);
// FUNCTION: ROBLOXSTUDIO 0x00bd96c0
extern "C" __declspec(naked) void memberPush_00bd96c0()
{
	__asm { push dword ptr [ecx + 0x50] }
	__asm { call memberPushTarget_00bd96c0 }
	__asm { add esp, 4 }
	__asm { ret 4 }
}

struct CByteArr_00a64c50 { char pad[0x38]; char arr[8]; char get(int i); };
// FUNCTION: ROBLOXSTUDIO 0x00a64c50
char CByteArr_00a64c50::get(int i)
{
	return arr[i];
}

extern "C" int callAdd2Target_00893340();
// FUNCTION: ROBLOXSTUDIO 0x00893340
extern "C" __declspec(naked) void movCallAdd_00893340()
{
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { call callAdd2Target_00893340 }
	__asm { add eax, 0x24 }
	__asm { ret }
}

extern "C" void condTarget_00ca97e0();
// FUNCTION: ROBLOXSTUDIO 0x00ca97e0
extern "C" __declspec(naked) void condGlobalByte_00ca97e0()
{
	__asm { cmp byte ptr [ecx + 0x45dc], 0 }
	__asm { jne condTarget_00ca97e0 }
	__asm { ret }
}

extern "C" void nullTarget_00b8f1f0();
// FUNCTION: ROBLOXSTUDIO 0x00b8f1f0
extern "C" __declspec(naked) void nullCall_00b8f1f0()
{
	__asm { mov ecx, dword ptr [ecx + 0xd0] }
	__asm { test ecx, ecx }
	__asm { jne nullTarget_00b8f1f0 }
	__asm { ret }
}

extern "C" void (*gfn2_00607010)();
// FUNCTION: ROBLOXSTUDIO 0x00607010
extern "C" __declspec(naked) void globFn_00607010()
{
	__asm { mov eax, dword ptr [gfn2_00607010] }
	__asm { test eax, eax }
	__asm { je done }
	__asm { jmp eax }
	__asm { done: ret }
}
