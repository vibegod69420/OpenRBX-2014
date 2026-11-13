// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_008abae0();
// FUNCTION: ROBLOXSTUDIO 0x008aba70
extern "C" __declspec(naked) void asm_008aba70()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe6bdcc }
	__asm { mov dword ptr [edx + 4], 0xe6bedc }
	__asm { mov dword ptr [edx + 0x18], 0xe6bee4 }
	__asm { mov dword ptr [edx + 0x1c], 0xe6bef0 }
	__asm { mov dword ptr [edx + 0x64], 0xe6bf00 }
	__asm { mov dword ptr [edx + 0x70], 0xe6bf08 }
	__asm { mov dword ptr [edx + 0x98], 0xe6bf28 }
	__asm { mov dword ptr [edx + 0xb0], 0xe6bf5c }
	__asm { mov dword ptr [edx + 0xc4], 0xe6bf88 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe6bf90 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x114] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_008abae0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a8c0[];
extern "C" void fn_00419e90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008ac500
extern "C" __declspec(naked) void asm_008ac500()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008ac54d }
	__asm { cmp dword ptr [g_0131a8c0], 0x29a }
	__asm { je L_008ac54d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008ac53c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008ac54d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008ac53c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008ac54d: }
	__asm { mov ecx, 0x131d1cc }
	__asm { jmp fn_00419e90 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a8c8[];
extern "C" void fn_00419dd0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008ac560
extern "C" __declspec(naked) void asm_008ac560()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008ac5ad }
	__asm { cmp dword ptr [g_0131a8c8], 0x29a }
	__asm { je L_008ac5ad }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008ac59c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008ac5ad }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008ac59c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008ac5ad: }
	__asm { mov ecx, 0x131d1c4 }
	__asm { jmp fn_00419dd0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a8c4[];
extern "C" void fn_00419e30();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008ac5c0
extern "C" __declspec(naked) void asm_008ac5c0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008ac60d }
	__asm { cmp dword ptr [g_0131a8c4], 0x29a }
	__asm { je L_008ac60d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008ac5fc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008ac60d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008ac5fc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008ac60d: }
	__asm { mov ecx, 0x131d1c8 }
	__asm { jmp fn_00419e30 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008b19e0
extern "C" __declspec(naked) void asm_008b19e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edi + 0x14], 0 }
	__asm { je L_008b1a17 }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { L_008b1a17: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131ab80[];
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008bb4c0
extern "C" __declspec(naked) void asm_008bb4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [g_0131ab80], 0 }
	__asm { mov dword ptr [esi], 0xe6d324 }
	__asm { mov dword ptr [esi + 4], 0xe6d3a0 }
	__asm { mov dword ptr [esi + 0x18], 0xe6d3a8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6d3b4 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_008bb4ff }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bb4ff: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9d0[];
extern "C" void fn_00558fb0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008bb890
extern "C" __declspec(naked) void asm_008bb890()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008bb8dd }
	__asm { cmp dword ptr [g_0131f9d0], 0x29a }
	__asm { je L_008bb8dd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008bb8cc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008bb8dd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008bb8cc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008bb8dd: }
	__asm { mov ecx, 0x131fd4c }
	__asm { jmp fn_00558fb0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b18c[];
extern "C" void fn_00437ad0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008d8580
extern "C" __declspec(naked) void asm_008d8580()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008d85cd }
	__asm { cmp dword ptr [g_0131b18c], 0x29a }
	__asm { je L_008d85cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008d85bc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d85cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008d85bc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d85cd: }
	__asm { mov ecx, 0x131de58 }
	__asm { jmp fn_00437ad0 }
}

extern "C" char g_00e10268[];
extern "C" void fn_008e73b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e97b0
extern "C" __declspec(naked) void asm_008e97b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_008e97f3 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_008e73b0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_008e97f3: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b41c[];
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008fe940
extern "C" __declspec(naked) void asm_008fe940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [g_0131b41c], 0 }
	__asm { mov dword ptr [esi], 0xe74bbc }
	__asm { mov dword ptr [esi + 4], 0xe74c34 }
	__asm { mov dword ptr [esi + 0x18], 0xe74c3c }
	__asm { mov dword ptr [esi + 0x1c], 0xe74c48 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_008fe97f }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008fe97f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131c454[];
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008fe990
extern "C" __declspec(naked) void asm_008fe990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [g_0131c454], 0 }
	__asm { mov dword ptr [esi], 0xe74f0c }
	__asm { mov dword ptr [esi + 4], 0xe74f84 }
	__asm { mov dword ptr [esi + 0x18], 0xe74f8c }
	__asm { mov dword ptr [esi + 0x1c], 0xe74f98 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_008fe9cf }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008fe9cf: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b414[];
extern "C" void fn_00464c20();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008ff2e0
extern "C" __declspec(naked) void asm_008ff2e0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008ff32d }
	__asm { cmp dword ptr [g_0131b414], 0x29a }
	__asm { je L_008ff32d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008ff31c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008ff32d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008ff31c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008ff32d: }
	__asm { mov ecx, 0x131e034 }
	__asm { jmp fn_00464c20 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b6c0[];
extern "C" void fn_004803e0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009013a0
extern "C" __declspec(naked) void asm_009013a0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009013ed }
	__asm { cmp dword ptr [g_0131b6c0], 0x29a }
	__asm { je L_009013ed }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009013dc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009013ed }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009013dc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009013ed: }
	__asm { mov ecx, 0x131e0f4 }
	__asm { jmp fn_004803e0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b470[];
extern "C" void fn_0048ab40();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00902480
extern "C" __declspec(naked) void asm_00902480()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009024cd }
	__asm { cmp dword ptr [g_0131b470], 0x29a }
	__asm { je L_009024cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009024bc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009024cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009024bc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009024cd: }
	__asm { mov ecx, 0x131e3fc }
	__asm { jmp fn_0048ab40 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b6ac[];
extern "C" void fn_00480aa0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009033d0
extern "C" __declspec(naked) void asm_009033d0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0090341d }
	__asm { cmp dword ptr [g_0131b6ac], 0x29a }
	__asm { je L_0090341d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0090340c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0090341d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0090340c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0090341d: }
	__asm { mov ecx, 0x131e138 }
	__asm { jmp fn_00480aa0 }
}

extern "C" char g_0131b6f0[];
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009084c0
extern "C" __declspec(naked) void asm_009084c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [g_0131b6f0], 0 }
	__asm { mov dword ptr [esi], 0xe76d1c }
	__asm { mov dword ptr [esi + 4], 0xe76d94 }
	__asm { mov dword ptr [esi + 0x18], 0xe76d9c }
	__asm { mov dword ptr [esi + 0x1c], 0xe76da8 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009084ff }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009084ff: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9e4[];
extern "C" void fn_005593d0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0090b850
extern "C" __declspec(naked) void asm_0090b850()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0090b89d }
	__asm { cmp dword ptr [g_0131f9e4], 0x29a }
	__asm { je L_0090b89d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0090b88c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0090b89d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0090b88c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0090b89d: }
	__asm { mov ecx, 0x131f9fc }
	__asm { jmp fn_005593d0 }
}

extern "C" void fn_0090fc30();
// FUNCTION: ROBLOXSTUDIO 0x0090fcb0
extern "C" __declspec(naked) void asm_0090fcb0()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe7869c }
	__asm { mov dword ptr [edx + 4], 0xe787ac }
	__asm { mov dword ptr [edx + 0x18], 0xe787b4 }
	__asm { mov dword ptr [edx + 0x1c], 0xe787c0 }
	__asm { mov dword ptr [edx + 0x64], 0xe787d0 }
	__asm { mov dword ptr [edx + 0x70], 0xe787d8 }
	__asm { mov dword ptr [edx + 0x98], 0xe787f8 }
	__asm { mov dword ptr [edx + 0xb0], 0xe7882c }
	__asm { mov dword ptr [edx + 0xc4], 0xe78858 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe78860 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xbc] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0090fc30 }
}

extern "C" void fn_0088e620();
// FUNCTION: ROBLOXSTUDIO 0x0090fd20
extern "C" __declspec(naked) void asm_0090fd20()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe780d4 }
	__asm { mov dword ptr [edx + 4], 0xe781e4 }
	__asm { mov dword ptr [edx + 0x18], 0xe781ec }
	__asm { mov dword ptr [edx + 0x1c], 0xe781f8 }
	__asm { mov dword ptr [edx + 0x64], 0xe78208 }
	__asm { mov dword ptr [edx + 0x70], 0xe78210 }
	__asm { mov dword ptr [edx + 0x98], 0xe78230 }
	__asm { mov dword ptr [edx + 0xb0], 0xe78264 }
	__asm { mov dword ptr [edx + 0xc4], 0xe78290 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe78298 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xb4] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0088e620 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b6bc[];
extern "C" void fn_00480440();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0090fe90
extern "C" __declspec(naked) void asm_0090fe90()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0090fedd }
	__asm { cmp dword ptr [g_0131b6bc], 0x29a }
	__asm { je L_0090fedd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0090fecc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0090fedd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0090fecc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0090fedd: }
	__asm { mov ecx, 0x131e0f8 }
	__asm { jmp fn_00480440 }
}

extern "C" void fn_00913030();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00913570
extern "C" __declspec(naked) void asm_00913570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi + 0x90], 0xe79fd8 }
	__asm { mov dword ptr [esi], 0xe79d1c }
	__asm { mov dword ptr [esi + 4], 0xe79d94 }
	__asm { mov dword ptr [esi + 0x18], 0xe79d9c }
	__asm { mov dword ptr [esi + 0x1c], 0xe79da8 }
	__asm { mov dword ptr [esi + 0x64], 0xe79db8 }
	__asm { call fn_00913030 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009135b6 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009135b6: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e0d4[];
extern "C" void fn_00480620();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009137b0
extern "C" __declspec(naked) void asm_009137b0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009137fd }
	__asm { cmp dword ptr [g_0131e0d4], 0x29a }
	__asm { je L_009137fd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009137ec }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009137fd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009137ec: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009137fd: }
	__asm { mov ecx, 0x131e10c }
	__asm { jmp fn_00480620 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e0d0[];
extern "C" void fn_004805c0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00913810
extern "C" __declspec(naked) void asm_00913810()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0091385d }
	__asm { cmp dword ptr [g_0131e0d0], 0x29a }
	__asm { je L_0091385d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0091384c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0091385d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0091384c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0091385d: }
	__asm { mov ecx, 0x131e108 }
	__asm { jmp fn_004805c0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e0cc[];
extern "C" void fn_00480560();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00913870
extern "C" __declspec(naked) void asm_00913870()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009138bd }
	__asm { cmp dword ptr [g_0131e0cc], 0x29a }
	__asm { je L_009138bd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009138ac }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009138bd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009138ac: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009138bd: }
	__asm { mov ecx, 0x131e104 }
	__asm { jmp fn_00480560 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e0e8[];
extern "C" void fn_00480800();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009138d0
extern "C" __declspec(naked) void asm_009138d0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0091391d }
	__asm { cmp dword ptr [g_0131e0e8], 0x29a }
	__asm { je L_0091391d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0091390c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0091391d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0091390c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0091391d: }
	__asm { mov ecx, 0x131e120 }
	__asm { jmp fn_00480800 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e0e4[];
extern "C" void fn_004807a0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00913930
extern "C" __declspec(naked) void asm_00913930()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0091397d }
	__asm { cmp dword ptr [g_0131e0e4], 0x29a }
	__asm { je L_0091397d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0091396c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0091397d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0091396c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0091397d: }
	__asm { mov ecx, 0x131e11c }
	__asm { jmp fn_004807a0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e0d8[];
extern "C" void fn_00480680();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00913990
extern "C" __declspec(naked) void asm_00913990()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009139dd }
	__asm { cmp dword ptr [g_0131e0d8], 0x29a }
	__asm { je L_009139dd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009139cc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009139dd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009139cc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009139dd: }
	__asm { mov ecx, 0x131e110 }
	__asm { jmp fn_00480680 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e0dc[];
extern "C" void fn_004806e0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009139f0
extern "C" __declspec(naked) void asm_009139f0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00913a3d }
	__asm { cmp dword ptr [g_0131e0dc], 0x29a }
	__asm { je L_00913a3d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00913a2c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00913a3d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00913a2c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00913a3d: }
	__asm { mov ecx, 0x131e114 }
	__asm { jmp fn_004806e0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e0e0[];
extern "C" void fn_00480740();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00913a50
extern "C" __declspec(naked) void asm_00913a50()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00913a9d }
	__asm { cmp dword ptr [g_0131e0e0], 0x29a }
	__asm { je L_00913a9d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00913a8c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00913a9d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00913a8c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00913a9d: }
	__asm { mov ecx, 0x131e118 }
	__asm { jmp fn_00480740 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e0c4[];
extern "C" void fn_004804a0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00913ab0
extern "C" __declspec(naked) void asm_00913ab0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00913afd }
	__asm { cmp dword ptr [g_0131e0c4], 0x29a }
	__asm { je L_00913afd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00913aec }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00913afd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00913aec: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00913afd: }
	__asm { mov ecx, 0x131e0fc }
	__asm { jmp fn_004804a0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131e0c8[];
extern "C" void fn_00480500();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00913b10
extern "C" __declspec(naked) void asm_00913b10()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00913b5d }
	__asm { cmp dword ptr [g_0131e0c8], 0x29a }
	__asm { je L_00913b5d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00913b4c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00913b5d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00913b4c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00913b5d: }
	__asm { mov ecx, 0x131e100 }
	__asm { jmp fn_00480500 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00913db0
extern "C" __declspec(naked) void asm_00913db0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00913dee }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00913ddd }
	__asm { push 0xd }
	__asm { push 0xe7a278 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00913dee }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00913ddd: }
	__asm { movzx eax, al }
	__asm { push 0xe7a2c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00913dee: }
	__asm { mov eax, 0xd }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00914e70
extern "C" __declspec(naked) void asm_00914e70()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00914eb1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00914ea0 }
	__asm { push 0xb7 }
	__asm { push 0xe66ca8 }
	__asm { push 0xe78c2c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00914eb1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00914ea0: }
	__asm { movzx eax, al }
	__asm { push 0xe78c40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00914eb1: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_00916710();
// FUNCTION: ROBLOXSTUDIO 0x009166a0
extern "C" __declspec(naked) void asm_009166a0()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe7b414 }
	__asm { mov dword ptr [edx + 4], 0xe7b530 }
	__asm { mov dword ptr [edx + 0x18], 0xe7b538 }
	__asm { mov dword ptr [edx + 0x1c], 0xe7b544 }
	__asm { mov dword ptr [edx + 0x64], 0xe7b554 }
	__asm { mov dword ptr [edx + 0x70], 0xe7b55c }
	__asm { mov dword ptr [edx + 0x98], 0xe7b57c }
	__asm { mov dword ptr [edx + 0xb0], 0xe7b5b0 }
	__asm { mov dword ptr [edx + 0xc4], 0xe7b5dc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe7b5e4 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xdc] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_00916710 }
}

extern "C" void fn_009195e0();
// FUNCTION: ROBLOXSTUDIO 0x00919570
extern "C" __declspec(naked) void asm_00919570()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe7c794 }
	__asm { mov dword ptr [edx + 4], 0xe7c8ac }
	__asm { mov dword ptr [edx + 0x18], 0xe7c8b4 }
	__asm { mov dword ptr [edx + 0x1c], 0xe7c8c0 }
	__asm { mov dword ptr [edx + 0x64], 0xe7c8d0 }
	__asm { mov dword ptr [edx + 0x70], 0xe7c8d8 }
	__asm { mov dword ptr [edx + 0x98], 0xe7c8f8 }
	__asm { mov dword ptr [edx + 0xb0], 0xe7c92c }
	__asm { mov dword ptr [edx + 0xc4], 0xe7c958 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe7c960 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xcc] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_009195e0 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0091b990
extern "C" __declspec(naked) void asm_0091b990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x210], eax }
	__asm { je L_0091b9d6 }
	__asm { cmp eax, -1 }
	__asm { jg L_0091b9b9 }
	__asm { or eax, 0xffffffff }
	__asm { mov dword ptr [ecx + 0x210], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fefa0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0091b9b9: }
	__asm { mov edx, 1 }
	__asm { cmp eax, edx }
	__asm { cmovge eax, edx }
	__asm { mov dword ptr [ecx + 0x210], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fefa0 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0091b9d6: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0091b9e0
extern "C" __declspec(naked) void asm_0091b9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x20c], eax }
	__asm { je L_0091ba26 }
	__asm { cmp eax, -1 }
	__asm { jg L_0091ba09 }
	__asm { or eax, 0xffffffff }
	__asm { mov dword ptr [ecx + 0x20c], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fef74 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0091ba09: }
	__asm { mov edx, 1 }
	__asm { cmp eax, edx }
	__asm { cmovge eax, edx }
	__asm { mov dword ptr [ecx + 0x20c], eax }
	__asm { mov dword ptr [ebp + 8], 0x12fef74 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_0091ba26: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b6b4[];
extern "C" void fn_00480980();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0091d2a0
extern "C" __declspec(naked) void asm_0091d2a0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0091d2ed }
	__asm { cmp dword ptr [g_0131b6b4], 0x29a }
	__asm { je L_0091d2ed }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0091d2dc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0091d2ed }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0091d2dc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0091d2ed: }
	__asm { mov ecx, 0x131e130 }
	__asm { jmp fn_00480980 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_0091ef70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0091f220
extern "C" __declspec(naked) void asm_0091f220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x64] }
	__asm { call fn_0091ef70 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0xe7d7e4 }
	__asm { mov dword ptr [esi + 4], 0xe7d85c }
	__asm { mov dword ptr [esi + 0x18], 0xe7d864 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7d870 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0091f25f }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0091f25f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b6b0[];
extern "C" void fn_004809e0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00920310
extern "C" __declspec(naked) void asm_00920310()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0092035d }
	__asm { cmp dword ptr [g_0131b6b0], 0x29a }
	__asm { je L_0092035d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0092034c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0092035d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0092034c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0092035d: }
	__asm { mov ecx, 0x131e134 }
	__asm { jmp fn_004809e0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9cc[];
extern "C" void fn_005590d0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00924510
extern "C" __declspec(naked) void asm_00924510()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0092455d }
	__asm { cmp dword ptr [g_0131f9cc], 0x29a }
	__asm { je L_0092455d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0092454c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0092455d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0092454c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0092455d: }
	__asm { mov ecx, 0x131fd38 }
	__asm { jmp fn_005590d0 }
}

extern "C" void fn_0043f040();
extern "C" void fn_007b4f50();
extern "C" void fn_00865d20();
extern "C" void fn_0096c310();
// FUNCTION: ROBLOXSTUDIO 0x009288f0
extern "C" __declspec(naked) void asm_009288f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x190], 0 }
	__asm { je L_00928938 }
	__asm { cmp dword ptr [esi + 0x194], 0 }
	__asm { jne L_00928910 }
	__asm { lea ecx, [esi + 0x1b0] }
	__asm { call fn_0043f040 }
	__asm { L_00928910: }
	__asm { push 0x12ff6c8 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x190], 0 }
	__asm { call fn_007b4f50 }
	__asm { push esi }
	__asm { call fn_00865d20 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00928938 }
	__asm { mov ecx, eax }
	__asm { pop esi }
	__asm { jmp fn_0096c310 }
	__asm { L_00928938: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f984[];
extern "C" void fn_00559010();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009289c0
extern "C" __declspec(naked) void asm_009289c0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00928a0d }
	__asm { cmp dword ptr [g_0131f984], 0x29a }
	__asm { je L_00928a0d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009289fc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00928a0d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009289fc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00928a0d: }
	__asm { mov ecx, 0x131fd54 }
	__asm { jmp fn_00559010 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9bc[];
extern "C" void fn_00559070();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00928a20
extern "C" __declspec(naked) void asm_00928a20()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00928a6d }
	__asm { cmp dword ptr [g_0131f9bc], 0x29a }
	__asm { je L_00928a6d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00928a5c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00928a6d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00928a5c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00928a6d: }
	__asm { mov ecx, 0x131f974 }
	__asm { jmp fn_00559070 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00928ec0();
extern "C" void fn_009290c0();
// FUNCTION: ROBLOXSTUDIO 0x00928e70
extern "C" __declspec(naked) void asm_00928e70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0xa0] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00928ebb }
	__asm { cmp byte ptr [esi + 0x190], 0 }
	__asm { mov ecx, esi }
	__asm { jne L_00928eb2 }
	__asm { push 0x12ff6c8 }
	__asm { mov byte ptr [esi + 0x190], 1 }
	__asm { call fn_007b4f50 }
	__asm { cmp dword ptr [esi + 0x194], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { je fn_009290c0 }
	__asm { jmp fn_00928ec0 }
	__asm { L_00928eb2: }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { jmp dword ptr [eax + 0xb0] }
	__asm { L_00928ebb: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0092a0b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0092a1c0
extern "C" __declspec(naked) void asm_0092a1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x8c], 0x10 }
	__asm { jb L_0092a1da }
	__asm { push dword ptr [esi + 0x78] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0092a1da: }
	__asm { mov dword ptr [esi + 0x8c], 0xf }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x78], 0 }
	__asm { call fn_0092a0b0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0092a208 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0092a208: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131eb34[];
extern "C" void fn_00497b40();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00938680
extern "C" __declspec(naked) void asm_00938680()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009386cd }
	__asm { cmp dword ptr [g_0131eb34], 0x29a }
	__asm { je L_009386cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009386bc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009386cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009386bc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009386cd: }
	__asm { mov ecx, 0x131eb58 }
	__asm { jmp fn_00497b40 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c43c[];
extern "C" void fn_00497a80();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00939ca0
extern "C" __declspec(naked) void asm_00939ca0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00939ced }
	__asm { cmp dword ptr [g_0131c43c], 0x29a }
	__asm { je L_00939ced }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00939cdc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00939ced }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00939cdc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00939ced: }
	__asm { mov ecx, 0x131eb50 }
	__asm { jmp fn_00497a80 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c438[];
extern "C" void fn_00497ae0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00939d00
extern "C" __declspec(naked) void asm_00939d00()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00939d4d }
	__asm { cmp dword ptr [g_0131c438], 0x29a }
	__asm { je L_00939d4d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00939d3c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00939d4d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00939d3c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00939d4d: }
	__asm { mov ecx, 0x131eb54 }
	__asm { jmp fn_00497ae0 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0093d520
extern "C" __declspec(naked) void asm_0093d520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe82ee8 }
	__asm { cmp dword ptr [esi + 0x1834], 0x10 }
	__asm { jb L_0093d543 }
	__asm { push dword ptr [esi + 0x1820] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0093d543: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x1834], 0xf }
	__asm { mov dword ptr [esi + 0x1830], 0 }
	__asm { mov byte ptr [esi + 0x1820], 0 }
	__asm { je L_0093d56d }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0093d56d: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00953210
extern "C" __declspec(naked) void asm_00953210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esi], 0xe84720 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x14], 0xe8472c }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 8] }
	__asm { mov dword ptr [edx + esi + 0x10], eax }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x1c], 0xe1822c }
	__asm { je L_00953253 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00953253: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00953260
extern "C" __declspec(naked) void asm_00953260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi], 0xe84ac4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0xc], 0xe84ad0 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 8] }
	__asm { mov dword ptr [edx + esi + 8], eax }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x14], 0xe1822c }
	__asm { je L_009532a3 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009532a3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009618e0
extern "C" __declspec(naked) void asm_009618e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_0096192a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 0x18 }
	__asm { mov esi, 0xffff }
	__asm { L_009618f6: }
	__asm { lea ecx, [eax - 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00961923 }
	__asm { mov dword ptr [eax - 0x18], 0 }
	__asm { mov dword ptr [eax - 0x14], 0 }
	__asm { mov dword ptr [eax - 0x10], 0 }
	__asm { mov dword ptr [eax - 0xc], 0 }
	__asm { mov dword ptr [eax - 4], 0xffffffff }
	__asm { mov word ptr [eax], si }
	__asm { L_00961923: }
	__asm { add eax, 0x1c }
	__asm { dec edx }
	__asm { jne L_009618f6 }
	__asm { pop esi }
	__asm { L_0096192a: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_009616f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00965110
extern "C" __declspec(naked) void asm_00965110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00965153 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_009616f0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00965153: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c2020();
extern "C" void fn_0097e940();
// FUNCTION: ROBLOXSTUDIO 0x0096cad0
extern "C" __declspec(naked) void asm_0096cad0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x128] }
	__asm { lea ecx, [esi + 0x128] }
	__asm { call dword ptr [eax + 8] }
	__asm { cmp dword ptr [eax + 0x1a0], 6 }
	__asm { je L_0096cb12 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x1d5], 1 }
	__asm { call fn_007c2020 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0096cb12 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [eax + 0x120], 1 }
	__asm { call fn_0097e940 }
	__asm { L_0096cb12: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c68c[];
extern "C" void fn_004d0740();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0096fea0
extern "C" __declspec(naked) void asm_0096fea0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0096feed }
	__asm { cmp dword ptr [g_0131c68c], 0x29a }
	__asm { je L_0096feed }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0096fedc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0096feed }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0096fedc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0096feed: }
	__asm { mov ecx, 0x131ec40 }
	__asm { jmp fn_004d0740 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00971be0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00974fd0
extern "C" __declspec(naked) void asm_00974fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00975013 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00971be0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00975013: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c6e8[];
extern "C" void fn_004d1300();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0097ac40
extern "C" __declspec(naked) void asm_0097ac40()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0097ac8d }
	__asm { cmp dword ptr [g_0131c6e8], 0x29a }
	__asm { je L_0097ac8d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0097ac7c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0097ac8d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0097ac7c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0097ac8d: }
	__asm { mov ecx, 0x131ec24 }
	__asm { jmp fn_004d1300 }
}

extern "C" void fn_0043f040();
extern "C" void fn_0097d250();
extern "C" void fn_0097d470();
extern "C" void fn_0097d7b0();
extern "C" void fn_0097dc20();
extern "C" void fn_0097dd80();
// FUNCTION: ROBLOXSTUDIO 0x0097d040
extern "C" __declspec(naked) void asm_0097d040()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0097d7b0 }
	__asm { mov ecx, esi }
	__asm { call fn_0097d470 }
	__asm { mov ecx, esi }
	__asm { call fn_0097dd80 }
	__asm { mov ecx, esi }
	__asm { call fn_0097d250 }
	__asm { mov ecx, esi }
	__asm { call fn_0097dc20 }
	__asm { cmp byte ptr [esi + 0x118], 0 }
	__asm { je L_0097d07f }
	__asm { lea ecx, [esi + 0x368] }
	__asm { call fn_0043f040 }
	__asm { mov byte ptr [esi + 0x118], 0 }
	__asm { L_0097d07f: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c744[];
extern "C" void fn_004c8840();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00981080
extern "C" __declspec(naked) void asm_00981080()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009810cd }
	__asm { cmp dword ptr [g_0131c744], 0x29a }
	__asm { je L_009810cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009810bc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009810cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009810bc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009810cd: }
	__asm { mov ecx, 0x131ec0c }
	__asm { jmp fn_004c8840 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131ebf8[];
extern "C" void fn_004c8900();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00981c00
extern "C" __declspec(naked) void asm_00981c00()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00981c4d }
	__asm { cmp dword ptr [g_0131ebf8], 0x29a }
	__asm { je L_00981c4d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00981c3c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00981c4d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00981c3c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00981c4d: }
	__asm { mov ecx, 0x131ec14 }
	__asm { jmp fn_004c8900 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131ebfc[];
extern "C" void fn_004c8960();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00982680
extern "C" __declspec(naked) void asm_00982680()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009826cd }
	__asm { cmp dword ptr [g_0131ebfc], 0x29a }
	__asm { je L_009826cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009826bc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009826cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009826bc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009826cd: }
	__asm { mov ecx, 0x131ec18 }
	__asm { jmp fn_004c8960 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131ec00[];
extern "C" void fn_004c89c0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009835b0
extern "C" __declspec(naked) void asm_009835b0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009835fd }
	__asm { cmp dword ptr [g_0131ec00], 0x29a }
	__asm { je L_009835fd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009835ec }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009835fd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009835ec: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009835fd: }
	__asm { mov ecx, 0x131ec1c }
	__asm { jmp fn_004c89c0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c650[];
extern "C" void fn_004cf5d0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00983f60
extern "C" __declspec(naked) void asm_00983f60()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00983fad }
	__asm { cmp dword ptr [g_0131c650], 0x29a }
	__asm { je L_00983fad }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00983f9c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00983fad }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00983f9c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00983fad: }
	__asm { mov ecx, 0x131ec4c }
	__asm { jmp fn_004cf5d0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c678[];
extern "C" void fn_004d0170();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009842c0
extern "C" __declspec(naked) void asm_009842c0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0098430d }
	__asm { cmp dword ptr [g_0131c678], 0x29a }
	__asm { je L_0098430d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009842fc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098430d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009842fc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098430d: }
	__asm { mov ecx, 0x131ec44 }
	__asm { jmp fn_004d0170 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c664[];
extern "C" void fn_004cfba0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00984500
extern "C" __declspec(naked) void asm_00984500()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0098454d }
	__asm { cmp dword ptr [g_0131c664], 0x29a }
	__asm { je L_0098454d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0098453c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098454d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0098453c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098454d: }
	__asm { mov ecx, 0x131ec48 }
	__asm { jmp fn_004cfba0 }
}

extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00984ba0
extern "C" __declspec(naked) void asm_00984ba0()
{
	__asm { push 0x28 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00984bf1 }
	__asm { mov dword ptr [eax], 0xe89c58 }
	__asm { mov dword ptr [eax + 4], 2 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov byte ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [eax + 0x14], 0 }
	__asm { mov dword ptr [eax + 0x18], 0 }
	__asm { mov dword ptr [eax + 0x1c], 0 }
	__asm { mov dword ptr [eax + 0x20], 0 }
	__asm { mov dword ptr [eax + 0x24], 0 }
	__asm { ret }
	__asm { L_00984bf1: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9c4[];
extern "C" void fn_00559310();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0098ddd0
extern "C" __declspec(naked) void asm_0098ddd0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0098de1d }
	__asm { cmp dword ptr [g_0131f9c4], 0x29a }
	__asm { je L_0098de1d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0098de0c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098de1d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0098de0c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098de1d: }
	__asm { mov ecx, 0x131f9d4 }
	__asm { jmp fn_00559310 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c790[];
extern "C" void fn_00531ef0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0098de30
extern "C" __declspec(naked) void asm_0098de30()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0098de7d }
	__asm { cmp dword ptr [g_0131c790], 0x29a }
	__asm { je L_0098de7d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0098de6c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098de7d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0098de6c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098de7d: }
	__asm { mov ecx, 0x131ef0c }
	__asm { jmp fn_00531ef0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01302e24[];
extern "C" void fn_006b9740();
extern "C" void fn_0098def0();
// FUNCTION: ROBLOXSTUDIO 0x0098de90
extern "C" __declspec(naked) void asm_0098de90()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0098dedd }
	__asm { cmp dword ptr [g_01302e24], 0x29a }
	__asm { je L_0098dedd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0098decc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0098dedd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0098decc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0098dedd: }
	__asm { mov ecx, 0x1302e28 }
	__asm { jmp fn_0098def0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0099c1d0
extern "C" __declspec(naked) void asm_0099c1d0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0099c20e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099c1fd }
	__asm { push 0x3f }
	__asm { push 0xe909ec }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099c20e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099c1fd: }
	__asm { movzx eax, al }
	__asm { push 0xe90ad0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099c20e: }
	__asm { xor al, al }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0099c220
extern "C" __declspec(naked) void asm_0099c220()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0099c25e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099c24d }
	__asm { push 0x3e }
	__asm { push 0xe909ec }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099c25e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099c24d: }
	__asm { movzx eax, al }
	__asm { push 0xe90a80 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099c25e: }
	__asm { xor al, al }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0099c270
extern "C" __declspec(naked) void asm_0099c270()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0099c2ae }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099c29d }
	__asm { push 0x3d }
	__asm { push 0xe909ec }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099c2ae }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099c29d: }
	__asm { movzx eax, al }
	__asm { push 0xe90a30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099c2ae: }
	__asm { xor al, al }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0099cdb0
extern "C" __declspec(naked) void asm_0099cdb0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0099cdee }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099cddd }
	__asm { push 0x43 }
	__asm { push 0xe90448 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099cdee }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099cddd: }
	__asm { movzx eax, al }
	__asm { push 0xe904e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099cdee: }
	__asm { xor eax, eax }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0099e360
extern "C" __declspec(naked) void asm_0099e360()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0099e39e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0099e38d }
	__asm { push 0x40 }
	__asm { push 0xe90448 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0099e39e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0099e38d: }
	__asm { movzx eax, al }
	__asm { push 0xe90490 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0099e39e: }
	__asm { ret 8 }
}

extern "C" void fn_00495770();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0099fa50
extern "C" __declspec(naked) void asm_0099fa50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe91dd4 }
	__asm { mov dword ptr [esi + 4], 0xe91e5c }
	__asm { mov dword ptr [esi + 0x18], 0xe91e64 }
	__asm { mov dword ptr [esi + 0x1c], 0xe91e70 }
	__asm { mov dword ptr [esi + 0x64], 0xe91e80 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe91e88 }
	__asm { call fn_00495770 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0099fa9a }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0099fa9a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008bbcc0();
extern "C" void fn_009a18f0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x009a1270
extern "C" __declspec(naked) void asm_009a1270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0x1233b8c }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_009a12a5 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x11c] }
	__asm { call fn_008bbcc0 }
	__asm { L_009a12a5: }
	__asm { mov ecx, esi }
	__asm { call fn_009a18f0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_009a2b30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009a2ae8
extern "C" __declspec(naked) void asm_009a2ae8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp fn_009a2b30 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe92644 }
	__asm { mov dword ptr [esi + 4], 0xe926bc }
	__asm { mov dword ptr [esi + 0x18], 0xe926c4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe926d0 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009a2b25 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009a2b25: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131edc8[];
extern "C" void fn_005298c0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009a2be0
extern "C" __declspec(naked) void asm_009a2be0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009a2c2d }
	__asm { cmp dword ptr [g_0131edc8], 0x29a }
	__asm { je L_009a2c2d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009a2c1c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009a2c2d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009a2c1c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009a2c2d: }
	__asm { mov ecx, 0x131edcc }
	__asm { jmp fn_005298c0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f774[];
extern "C" void fn_00535850();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009aeb80
extern "C" __declspec(naked) void asm_009aeb80()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009aebcd }
	__asm { cmp dword ptr [g_0131f774], 0x29a }
	__asm { je L_009aebcd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009aebbc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009aebcd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009aebbc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009aebcd: }
	__asm { mov ecx, 0x131f778 }
	__asm { jmp fn_00535850 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9b0[];
extern "C" void fn_00559250();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009b5e20
extern "C" __declspec(naked) void asm_009b5e20()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009b5e6d }
	__asm { cmp dword ptr [g_0131f9b0], 0x29a }
	__asm { je L_009b5e6d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009b5e5c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009b5e6d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009b5e5c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009b5e6d: }
	__asm { mov ecx, 0x131fd30 }
	__asm { jmp fn_00559250 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9c8[];
extern "C" void fn_005592b0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009b5e80
extern "C" __declspec(naked) void asm_009b5e80()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009b5ecd }
	__asm { cmp dword ptr [g_0131f9c8], 0x29a }
	__asm { je L_009b5ecd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009b5ebc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009b5ecd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009b5ebc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009b5ecd: }
	__asm { mov ecx, 0x131f960 }
	__asm { jmp fn_005592b0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9a4[];
extern "C" void fn_005589e0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009bf300
extern "C" __declspec(naked) void asm_009bf300()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009bf34d }
	__asm { cmp dword ptr [g_0131f9a4], 0x29a }
	__asm { je L_009bf34d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009bf33c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009bf34d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009bf33c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009bf34d: }
	__asm { mov ecx, 0x131f948 }
	__asm { jmp fn_005589e0 }
}

extern "C" void fn_007a07b0();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009cb3d0
extern "C" __declspec(naked) void asm_009cb3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, dword ptr [esi + 0x68] }
	__asm { cmovl ecx, dword ptr [esi + 0x68] }
	__asm { cmp ecx, dword ptr [esi + 0x6c] }
	__asm { cmovg ecx, dword ptr [esi + 0x6c] }
	__asm { cmp dword ptr [esi + 0x64], ecx }
	__asm { je L_009cb412 }
	__asm { mov dword ptr [esi + 0x64], ecx }
	__asm { push 0x1304ad8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { push 0x1304b30 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { push dword ptr [esi + 0x64] }
	__asm { lea ecx, [esi + 0x70] }
	__asm { call fn_007a07b0 }
	__asm { L_009cb412: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099f890();
// FUNCTION: ROBLOXSTUDIO 0x009cb960
extern "C" __declspec(naked) void asm_009cb960()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe954f4 }
	__asm { mov dword ptr [edx + 4], 0xe9557c }
	__asm { mov dword ptr [edx + 0x18], 0xe95584 }
	__asm { mov dword ptr [edx + 0x1c], 0xe95590 }
	__asm { mov dword ptr [edx + 0x64], 0xe955a0 }
	__asm { mov dword ptr [edx + 0x6c], 0xe955a8 }
	__asm { mov dword ptr [edx + 0x84], 0xe955dc }
	__asm { mov dword ptr [edx + 0x98], 0xe95608 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe95610 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xc4] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0099f890 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f940[];
extern "C" void fn_00559190();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009cba10
extern "C" __declspec(naked) void asm_009cba10()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009cba5d }
	__asm { cmp dword ptr [g_0131f940], 0x29a }
	__asm { je L_009cba5d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009cba4c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009cba5d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009cba4c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009cba5d: }
	__asm { mov ecx, 0x131fe9c }
	__asm { jmp fn_00559190 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009d3e80
extern "C" __declspec(naked) void asm_009d3e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_009d3eba }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009d3eba: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9a0[];
extern "C" void fn_005591f0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009d8300
extern "C" __declspec(naked) void asm_009d8300()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009d834d }
	__asm { cmp dword ptr [g_0131f9a0], 0x29a }
	__asm { je L_009d834d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009d833c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009d834d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009d833c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009d834d: }
	__asm { mov ecx, 0x131f944 }
	__asm { jmp fn_005591f0 }
}

// FUNCTION: ROBLOXSTUDIO 0x009dc380
extern "C" __declspec(naked) void asm_009dc380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x160] }
	__asm { test ecx, ecx }
	__asm { je L_009dc3ae }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xa4] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009dc3ae: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f9c0[];
extern "C" void fn_00559430();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009dee90
extern "C" __declspec(naked) void asm_009dee90()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009deedd }
	__asm { cmp dword ptr [g_0131f9c0], 0x29a }
	__asm { je L_009deedd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009deecc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009deedd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009deecc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009deedd: }
	__asm { mov ecx, 0x131fae4 }
	__asm { jmp fn_00559430 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f998[];
extern "C" void fn_00558980();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009df960
extern "C" __declspec(naked) void asm_009df960()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009df9ad }
	__asm { cmp dword ptr [g_0131f998], 0x29a }
	__asm { je L_009df9ad }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009df99c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009df9ad }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009df99c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009df9ad: }
	__asm { mov ecx, 0x131fadc }
	__asm { jmp fn_00558980 }
}

extern "C" char g_00e10268[];
extern "C" void fn_009e1920();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009e7760
extern "C" __declspec(naked) void asm_009e7760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009e77a3 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_009e1920 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_009e77a3: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131febc[];
extern "C" void fn_00566650();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009ec870
extern "C" __declspec(naked) void asm_009ec870()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009ec8bd }
	__asm { cmp dword ptr [g_0131febc], 0x29a }
	__asm { je L_009ec8bd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009ec8ac }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ec8bd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009ec8ac: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ec8bd: }
	__asm { mov ecx, 0x131fec4 }
	__asm { jmp fn_00566650 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131feb8[];
extern "C" void fn_005665f0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009ec8d0
extern "C" __declspec(naked) void asm_009ec8d0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009ec91d }
	__asm { cmp dword ptr [g_0131feb8], 0x29a }
	__asm { je L_009ec91d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009ec90c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009ec91d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009ec90c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009ec91d: }
	__asm { mov ecx, 0x131fec0 }
	__asm { jmp fn_005665f0 }
}

extern "C" char g_012dc250[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00628f80();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009f8c30
extern "C" __declspec(naked) void asm_009f8c30()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009f8c7d }
	__asm { cmp dword ptr [g_012dc250], 0x29a }
	__asm { je L_009f8c7d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009f8c6c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f8c7d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009f8c6c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f8c7d: }
	__asm { mov ecx, 0x12dc254 }
	__asm { jmp fn_00628f80 }
}

extern "C" char g_012dc258[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00628fe0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009f8c90
extern "C" __declspec(naked) void asm_009f8c90()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009f8cdd }
	__asm { cmp dword ptr [g_012dc258], 0x29a }
	__asm { je L_009f8cdd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009f8ccc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f8cdd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009f8ccc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f8cdd: }
	__asm { mov ecx, 0x12dc25c }
	__asm { jmp fn_00628fe0 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fbc90
extern "C" __declspec(naked) void asm_009fbc90()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x98], 0x10 }
	__asm { jb L_009fbcaa }
	__asm { push dword ptr [esi + 0x84] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fbcaa: }
	__asm { mov dword ptr [esi + 0x98], 0xf }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov byte ptr [esi + 0x84], 0 }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { jb L_009fbcd6 }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fbcd6: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007b00e0 }
}

extern "C" void fn_009fbc90();
extern "C" void fn_009fbf80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fbd98
extern "C" __declspec(naked) void asm_009fbd98()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp fn_009fbf80 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe9aa94 }
	__asm { mov dword ptr [esi + 4], 0xe9ab18 }
	__asm { mov dword ptr [esi + 0x18], 0xe9ab20 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9ab2c }
	__asm { mov dword ptr [esi + 0x64], 0xe9ab3c }
	__asm { call fn_009fbc90 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_009fbddc }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fbddc: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc878[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006406b0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009fc280
extern "C" __declspec(naked) void asm_009fc280()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009fc2cd }
	__asm { cmp dword ptr [g_012dc878], 0x29a }
	__asm { je L_009fc2cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009fc2bc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fc2cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009fc2bc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fc2cd: }
	__asm { mov ecx, 0x12dc87c }
	__asm { jmp fn_006406b0 }
}

extern "C" char g_012dc868[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006407d0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009fc2e0
extern "C" __declspec(naked) void asm_009fc2e0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009fc32d }
	__asm { cmp dword ptr [g_012dc868], 0x29a }
	__asm { je L_009fc32d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009fc31c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fc32d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009fc31c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fc32d: }
	__asm { mov ecx, 0x12dc86c }
	__asm { jmp fn_006407d0 }
}

extern "C" char g_012dc870[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00640830();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009fc340
extern "C" __declspec(naked) void asm_009fc340()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009fc38d }
	__asm { cmp dword ptr [g_012dc870], 0x29a }
	__asm { je L_009fc38d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009fc37c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fc38d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009fc37c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fc38d: }
	__asm { mov ecx, 0x12dc874 }
	__asm { jmp fn_00640830 }
}

extern "C" char g_012dc860[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00640890();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009fc3a0
extern "C" __declspec(naked) void asm_009fc3a0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009fc3ed }
	__asm { cmp dword ptr [g_012dc860], 0x29a }
	__asm { je L_009fc3ed }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009fc3dc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fc3ed }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009fc3dc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fc3ed: }
	__asm { mov ecx, 0x12dc864 }
	__asm { jmp fn_00640890 }
}

extern "C" char g_012dc880[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006408f0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009fc400
extern "C" __declspec(naked) void asm_009fc400()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009fc44d }
	__asm { cmp dword ptr [g_012dc880], 0x29a }
	__asm { je L_009fc44d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009fc43c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fc44d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009fc43c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fc44d: }
	__asm { mov ecx, 0x12dc884 }
	__asm { jmp fn_006408f0 }
}

extern "C" char g_012dc888[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00640710();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009fd110
extern "C" __declspec(naked) void asm_009fd110()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009fd15d }
	__asm { cmp dword ptr [g_012dc888], 0x29a }
	__asm { je L_009fd15d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009fd14c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fd15d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009fd14c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fd15d: }
	__asm { mov ecx, 0x12dc88c }
	__asm { jmp fn_00640710 }
}

extern "C" void fn_0088e620();
// FUNCTION: ROBLOXSTUDIO 0x00a024c0
extern "C" __declspec(naked) void asm_00a024c0()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe9b9e4 }
	__asm { mov dword ptr [edx + 4], 0xe9baf0 }
	__asm { mov dword ptr [edx + 0x18], 0xe9baf8 }
	__asm { mov dword ptr [edx + 0x1c], 0xe9bb04 }
	__asm { mov dword ptr [edx + 0x64], 0xe9bb14 }
	__asm { mov dword ptr [edx + 0x70], 0xe9bb1c }
	__asm { mov dword ptr [edx + 0x98], 0xe9bb3c }
	__asm { mov dword ptr [edx + 0xb0], 0xe9bb70 }
	__asm { mov dword ptr [edx + 0xc4], 0xe9bb9c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe9bba4 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0088e620 }
}

extern "C" void fn_00a024c0();
// FUNCTION: ROBLOXSTUDIO 0x00a02530
extern "C" __declspec(naked) void asm_00a02530()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xe9bdd4 }
	__asm { mov dword ptr [edx + 4], 0xe9bee0 }
	__asm { mov dword ptr [edx + 0x18], 0xe9bee8 }
	__asm { mov dword ptr [edx + 0x1c], 0xe9bef4 }
	__asm { mov dword ptr [edx + 0x64], 0xe9bf04 }
	__asm { mov dword ptr [edx + 0x70], 0xe9bf0c }
	__asm { mov dword ptr [edx + 0x98], 0xe9bf2c }
	__asm { mov dword ptr [edx + 0xb0], 0xe9bf60 }
	__asm { mov dword ptr [edx + 0xc4], 0xe9bf8c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xe9bf94 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xb4] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_00a024c0 }
}

extern "C" char g_012dc890[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00640770();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a02640
extern "C" __declspec(naked) void asm_00a02640()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a0268d }
	__asm { cmp dword ptr [g_012dc890], 0x29a }
	__asm { je L_00a0268d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0267c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0268d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0267c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0268d: }
	__asm { mov ecx, 0x12dc894 }
	__asm { jmp fn_00640770 }
}

extern "C" char g_012ddb54[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00672b00();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a0b1b0
extern "C" __declspec(naked) void asm_00a0b1b0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a0b1fd }
	__asm { cmp dword ptr [g_012ddb54], 0x29a }
	__asm { je L_00a0b1fd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0b1ec }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0b1fd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0b1ec: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0b1fd: }
	__asm { mov ecx, 0x12ddb58 }
	__asm { jmp fn_00672b00 }
}

extern "C" char g_012ddb5c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00672b60();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a0ba90
extern "C" __declspec(naked) void asm_00a0ba90()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a0badd }
	__asm { cmp dword ptr [g_012ddb5c], 0x29a }
	__asm { je L_00a0badd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0bacc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0badd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0bacc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0badd: }
	__asm { mov ecx, 0x12ddb60 }
	__asm { jmp fn_00672b60 }
}

extern "C" char g_012ddb6c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00672aa0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a0cd60
extern "C" __declspec(naked) void asm_00a0cd60()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a0cdad }
	__asm { cmp dword ptr [g_012ddb6c], 0x29a }
	__asm { je L_00a0cdad }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0cd9c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0cdad }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0cd9c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0cdad: }
	__asm { mov ecx, 0x12ddb70 }
	__asm { jmp fn_00672aa0 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a102c0
extern "C" __declspec(naked) void asm_00a102c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe9e7b8 }
	__asm { cmp dword ptr [esi + 0xc0], 0x10 }
	__asm { jb L_00a102e3 }
	__asm { push dword ptr [esi + 0xac] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a102e3: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0xc0], 0xf }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { mov byte ptr [esi + 0xac], 0 }
	__asm { je L_00a1030d }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a1030d: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bbf800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a104e0
extern "C" __declspec(naked) void asm_00a104e0()
{
	__asm { push esi }
	__asm { push 0xc8 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00a1052c }
	__asm { mov dword ptr [esi], 0xe9e7b8 }
	__asm { mov dword ptr [esi + 0xc0], 0xf }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { lea ecx, [esi + 4] }
	__asm { mov byte ptr [esi + 0xac], 0 }
	__asm { push ecx }
	__asm { mov byte ptr [esi + 0xc4], 0 }
	__asm { call fn_00bbf800 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00a1052c: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00a35d10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a361f0
extern "C" __declspec(naked) void asm_00a361f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi], 0xea6ef0 }
	__asm { jne L_00a36219 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push -2 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a36219: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a36230 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a36230: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4808[];
extern "C" void fn_006b9740();
extern "C" void fn_0081f7c0();
// FUNCTION: ROBLOXSTUDIO 0x00a58730
extern "C" __declspec(naked) void asm_00a58730()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a5877d }
	__asm { cmp dword ptr [g_012e4808], 0x29a }
	__asm { je L_00a5877d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a5876c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5877d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a5876c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5877d: }
	__asm { mov ecx, 0x12e480c }
	__asm { jmp fn_0081f7c0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4810[];
extern "C" void fn_006b9740();
extern "C" void fn_0081f820();
// FUNCTION: ROBLOXSTUDIO 0x00a5c140
extern "C" __declspec(naked) void asm_00a5c140()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a5c18d }
	__asm { cmp dword ptr [g_012e4810], 0x29a }
	__asm { je L_00a5c18d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a5c17c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5c18d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a5c17c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5c18d: }
	__asm { mov ecx, 0x12e4814 }
	__asm { jmp fn_0081f820 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4818[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fb20();
// FUNCTION: ROBLOXSTUDIO 0x00a5fdc0
extern "C" __declspec(naked) void asm_00a5fdc0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a5fe0d }
	__asm { cmp dword ptr [g_012e4818], 0x29a }
	__asm { je L_00a5fe0d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a5fdfc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a5fe0d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a5fdfc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a5fe0d: }
	__asm { mov ecx, 0x12e481c }
	__asm { jmp fn_0081fb20 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4820[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fb80();
// FUNCTION: ROBLOXSTUDIO 0x00a612e0
extern "C" __declspec(naked) void asm_00a612e0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6132d }
	__asm { cmp dword ptr [g_012e4820], 0x29a }
	__asm { je L_00a6132d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6131c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6132d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6131c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6132d: }
	__asm { mov ecx, 0x12e4824 }
	__asm { jmp fn_0081fb80 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4838[];
extern "C" void fn_006b9740();
extern "C" void fn_008209c0();
// FUNCTION: ROBLOXSTUDIO 0x00a64a20
extern "C" __declspec(naked) void asm_00a64a20()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a64a6d }
	__asm { cmp dword ptr [g_012e4838], 0x29a }
	__asm { je L_00a64a6d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a64a5c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a64a6d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a64a5c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a64a6d: }
	__asm { mov ecx, 0x12e483c }
	__asm { jmp fn_008209c0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4840[];
extern "C" void fn_006b9740();
extern "C" void fn_00820060();
// FUNCTION: ROBLOXSTUDIO 0x00a6b5e0
extern "C" __declspec(naked) void asm_00a6b5e0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6b62d }
	__asm { cmp dword ptr [g_012e4840], 0x29a }
	__asm { je L_00a6b62d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6b61c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6b62d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6b61c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6b62d: }
	__asm { mov ecx, 0x12e4844 }
	__asm { jmp fn_00820060 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4850[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fca0();
// FUNCTION: ROBLOXSTUDIO 0x00a6fca0
extern "C" __declspec(naked) void asm_00a6fca0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a6fced }
	__asm { cmp dword ptr [g_012e4850], 0x29a }
	__asm { je L_00a6fced }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a6fcdc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a6fced }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a6fcdc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a6fced: }
	__asm { mov ecx, 0x12e4854 }
	__asm { jmp fn_0081fca0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4858[];
extern "C" void fn_006b9740();
extern "C" void fn_008202a0();
// FUNCTION: ROBLOXSTUDIO 0x00a70830
extern "C" __declspec(naked) void asm_00a70830()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a7087d }
	__asm { cmp dword ptr [g_012e4858], 0x29a }
	__asm { je L_00a7087d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a7086c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7087d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a7086c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7087d: }
	__asm { mov ecx, 0x12e485c }
	__asm { jmp fn_008202a0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4868[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fe80();
// FUNCTION: ROBLOXSTUDIO 0x00a7aad0
extern "C" __declspec(naked) void asm_00a7aad0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a7ab1d }
	__asm { cmp dword ptr [g_012e4868], 0x29a }
	__asm { je L_00a7ab1d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a7ab0c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7ab1d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a7ab0c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7ab1d: }
	__asm { mov ecx, 0x12e486c }
	__asm { jmp fn_0081fe80 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4860[];
extern "C" void fn_006b9740();
extern "C" void fn_008207e0();
// FUNCTION: ROBLOXSTUDIO 0x00a7ab30
extern "C" __declspec(naked) void asm_00a7ab30()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a7ab7d }
	__asm { cmp dword ptr [g_012e4860], 0x29a }
	__asm { je L_00a7ab7d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a7ab6c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a7ab7d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a7ab6c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a7ab7d: }
	__asm { mov ecx, 0x12e4864 }
	__asm { jmp fn_008207e0 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a7eef0
extern "C" __declspec(naked) void asm_00a7eef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00a7ef37 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 0x28 }
	__asm { L_00a7ef00: }
	__asm { lea ecx, [eax - 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_00a7ef31 }
	__asm { mov dword ptr [eax - 0x14], 0xf }
	__asm { mov dword ptr [eax - 0x18], 0 }
	__asm { mov byte ptr [eax - 0x28], 0 }
	__asm { mov dword ptr [eax + 4], 0xf }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov byte ptr [eax - 0x10], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { L_00a7ef31: }
	__asm { add eax, 0x50 }
	__asm { dec edx }
	__asm { jne L_00a7ef00 }
	__asm { L_00a7ef37: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00a7e630();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a7fba0
extern "C" __declspec(naked) void asm_00a7fba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00a7fbe3 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00a7e630 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00a7fbe3: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4870[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fc40();
// FUNCTION: ROBLOXSTUDIO 0x00a81110
extern "C" __declspec(naked) void asm_00a81110()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a8115d }
	__asm { cmp dword ptr [g_012e4870], 0x29a }
	__asm { je L_00a8115d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a8114c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8115d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a8114c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8115d: }
	__asm { mov ecx, 0x12e4874 }
	__asm { jmp fn_0081fc40 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00a82d10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a82cc8
extern "C" __declspec(naked) void asm_00a82cc8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp fn_00a82d10 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xeb005c }
	__asm { mov dword ptr [esi + 4], 0xeb00d4 }
	__asm { mov dword ptr [esi + 0x18], 0xeb00dc }
	__asm { mov dword ptr [esi + 0x1c], 0xeb00e8 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a82d05 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a82d05: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4878[];
extern "C" void fn_006b9740();
extern "C" void fn_00820780();
// FUNCTION: ROBLOXSTUDIO 0x00a837c0
extern "C" __declspec(naked) void asm_00a837c0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a8380d }
	__asm { cmp dword ptr [g_012e4878], 0x29a }
	__asm { je L_00a8380d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a837fc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8380d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a837fc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8380d: }
	__asm { mov ecx, 0x12e487c }
	__asm { jmp fn_00820780 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a862a0
extern "C" __declspec(naked) void asm_00a862a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00a862e3 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00a862e3: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4880[];
extern "C" void fn_006b9740();
extern "C" void fn_00820240();
// FUNCTION: ROBLOXSTUDIO 0x00a89ed0
extern "C" __declspec(naked) void asm_00a89ed0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a89f1d }
	__asm { cmp dword ptr [g_012e4880], 0x29a }
	__asm { je L_00a89f1d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a89f0c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a89f1d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a89f0c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a89f1d: }
	__asm { mov ecx, 0x12e4884 }
	__asm { jmp fn_00820240 }
}

extern "C" void fn_0088e620();
// FUNCTION: ROBLOXSTUDIO 0x00a8b5c0
extern "C" __declspec(naked) void asm_00a8b5c0()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xeb1514 }
	__asm { mov dword ptr [edx + 4], 0xeb1620 }
	__asm { mov dword ptr [edx + 0x18], 0xeb1628 }
	__asm { mov dword ptr [edx + 0x1c], 0xeb1634 }
	__asm { mov dword ptr [edx + 0x64], 0xeb1644 }
	__asm { mov dword ptr [edx + 0x70], 0xeb164c }
	__asm { mov dword ptr [edx + 0x98], 0xeb166c }
	__asm { mov dword ptr [edx + 0xb0], 0xeb16a0 }
	__asm { mov dword ptr [edx + 0xc4], 0xeb16cc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xeb16d4 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0088e620 }
}

extern "C" void fn_00a8b5c0();
// FUNCTION: ROBLOXSTUDIO 0x00a8b630
extern "C" __declspec(naked) void asm_00a8b630()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xeb18a4 }
	__asm { mov dword ptr [edx + 4], 0xeb19b0 }
	__asm { mov dword ptr [edx + 0x18], 0xeb19b8 }
	__asm { mov dword ptr [edx + 0x1c], 0xeb19c4 }
	__asm { mov dword ptr [edx + 0x64], 0xeb19d4 }
	__asm { mov dword ptr [edx + 0x70], 0xeb19dc }
	__asm { mov dword ptr [edx + 0x98], 0xeb19fc }
	__asm { mov dword ptr [edx + 0xb0], 0xeb1a30 }
	__asm { mov dword ptr [edx + 0xc4], 0xeb1a5c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xeb1a64 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_00a8b5c0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4888[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fbe0();
// FUNCTION: ROBLOXSTUDIO 0x00a8b740
extern "C" __declspec(naked) void asm_00a8b740()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a8b78d }
	__asm { cmp dword ptr [g_012e4888], 0x29a }
	__asm { je L_00a8b78d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a8b77c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8b78d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a8b77c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8b78d: }
	__asm { mov ecx, 0x12e488c }
	__asm { jmp fn_0081fbe0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4898[];
extern "C" void fn_006b9740();
extern "C" void fn_00820000();
// FUNCTION: ROBLOXSTUDIO 0x00a8d800
extern "C" __declspec(naked) void asm_00a8d800()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a8d84d }
	__asm { cmp dword ptr [g_012e4898], 0x29a }
	__asm { je L_00a8d84d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a8d83c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8d84d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a8d83c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8d84d: }
	__asm { mov ecx, 0x12e489c }
	__asm { jmp fn_00820000 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4890[];
extern "C" void fn_006b9740();
extern "C" void fn_008201e0();
// FUNCTION: ROBLOXSTUDIO 0x00a8d860
extern "C" __declspec(naked) void asm_00a8d860()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a8d8ad }
	__asm { cmp dword ptr [g_012e4890], 0x29a }
	__asm { je L_00a8d8ad }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a8d89c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8d8ad }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a8d89c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8d8ad: }
	__asm { mov ecx, 0x12e4894 }
	__asm { jmp fn_008201e0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48a0[];
extern "C" void fn_006b9740();
extern "C" void fn_00820960();
// FUNCTION: ROBLOXSTUDIO 0x00a8d8c0
extern "C" __declspec(naked) void asm_00a8d8c0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a8d90d }
	__asm { cmp dword ptr [g_012e48a0], 0x29a }
	__asm { je L_00a8d90d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a8d8fc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8d90d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a8d8fc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8d90d: }
	__asm { mov ecx, 0x12e48a4 }
	__asm { jmp fn_00820960 }
}

extern "C" void fn_00922f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a8eef0
extern "C" __declspec(naked) void asm_00a8eef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xeb2584 }
	__asm { mov dword ptr [esi + 4], 0xeb2644 }
	__asm { mov dword ptr [esi + 0x18], 0xeb264c }
	__asm { mov dword ptr [esi + 0x1c], 0xeb2658 }
	__asm { mov dword ptr [esi + 0x64], 0xeb2668 }
	__asm { mov dword ptr [esi + 0x190], 0xeb2670 }
	__asm { mov dword ptr [esi + 0x19c], 0xeb2678 }
	__asm { mov dword ptr [esi + 0x1b4], 0xeb26ac }
	__asm { mov dword ptr [esi + 0x1b8], 0xeb26b4 }
	__asm { call fn_00922f50 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a8ef54 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a8ef54: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48a8[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fd60();
// FUNCTION: ROBLOXSTUDIO 0x00a8efc0
extern "C" __declspec(naked) void asm_00a8efc0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a8f00d }
	__asm { cmp dword ptr [g_012e48a8], 0x29a }
	__asm { je L_00a8f00d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a8effc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8f00d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a8effc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8f00d: }
	__asm { mov ecx, 0x12e48ac }
	__asm { jmp fn_0081fd60 }
}

extern "C" void fn_0090fcb0();
// FUNCTION: ROBLOXSTUDIO 0x00a90050
extern "C" __declspec(naked) void asm_00a90050()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xeb28d4 }
	__asm { mov dword ptr [edx + 4], 0xeb29e4 }
	__asm { mov dword ptr [edx + 0x18], 0xeb29ec }
	__asm { mov dword ptr [edx + 0x1c], 0xeb29f8 }
	__asm { mov dword ptr [edx + 0x64], 0xeb2a08 }
	__asm { mov dword ptr [edx + 0x70], 0xeb2a10 }
	__asm { mov dword ptr [edx + 0x98], 0xeb2a30 }
	__asm { mov dword ptr [edx + 0xb0], 0xeb2a64 }
	__asm { mov dword ptr [edx + 0xc4], 0xeb2a90 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xeb2a98 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xbc] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0090fcb0 }
}
