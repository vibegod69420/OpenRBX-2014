// Individually reconstructed small functions: virtual and indirect calls,
// pointer returns and argument passthroughs.

// FUNCTION: ROBLOXSTUDIO 0x00a9d6c0
extern "C" __declspec(naked) void strag_00a9d6c0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x00924ae0
extern "C" __declspec(naked) void strag_00924ae0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x008ac860
extern "C" __declspec(naked) void strag_008ac860()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x8c] }
	__asm { fld dword ptr [eax] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008ac870
extern "C" __declspec(naked) void strag_008ac870()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x8c] }
	__asm { fld dword ptr [eax + 4] }
	__asm { ret }
}

extern "C" int stragTarget_8e3c90();
// FUNCTION: ROBLOXSTUDIO 0x008e3c90
extern "C" __declspec(naked) void strag_008e3c90()
{
	__asm { push dword ptr [ecx + 0x4c] }
	__asm { call stragTarget_8e3c90 }
	__asm { add esp, 4 }
	__asm { dec eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00427a40
extern "C" __declspec(naked) void strag_00427a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp dword ptr [ecx + 0x0] }
}

// FUNCTION: ROBLOXSTUDIO 0x00427a60
extern "C" __declspec(naked) void strag_00427a60()
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
extern "C" __declspec(naked) void strag_00427a80()
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

extern "C" char gstr_7ca790[];
// FUNCTION: ROBLOXSTUDIO 0x007ca790
extern "C" __declspec(naked) void strag_007ca790()
{
	__asm { cmp dword ptr [ecx + 0x74], 0 }
	__asm { lea eax, [ecx + 0xa4] }
	__asm { je done }
	__asm { mov eax, offset gstr_7ca790 }
	__asm { done: ret }
}

extern "C" void stragTarget_6e8590(int);
// FUNCTION: ROBLOXSTUDIO 0x006e8590
extern "C" __declspec(naked) void strag_006e8590()
{
	__asm { push dword ptr [esp + 4] }
	__asm { call stragTarget_6e8590 }
	__asm { pop ecx }
	__asm { ret 4 }
}

extern "C" void stragTarget_6e86c0(int);
// FUNCTION: ROBLOXSTUDIO 0x006e86c0
extern "C" __declspec(naked) void strag_006e86c0()
{
	__asm { push dword ptr [esp + 4] }
	__asm { call stragTarget_6e86c0 }
	__asm { pop ecx }
	__asm { ret 4 }
}

extern "C" void (*pfn_6e87e0)(int);
// FUNCTION: ROBLOXSTUDIO 0x006e87e0
extern "C" __declspec(naked) void strag_006e87e0()
{
	__asm { push dword ptr [esp + 4] }
	__asm { call dword ptr [pfn_6e87e0] }
	__asm { pop ecx }
	__asm { ret 4 }
}

extern "C" void (*pfn_6e87d0)(int);
// FUNCTION: ROBLOXSTUDIO 0x006e87d0
extern "C" __declspec(naked) void strag_006e87d0()
{
	__asm { push dword ptr [esp + 4] }
	__asm { call dword ptr [pfn_6e87d0] }
	__asm { add esp, 4 }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cd8f80
extern "C" __declspec(naked) void strag_00cd8f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [eax], 1 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 0x24 }
}
