// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0099d320();
extern "C" void fn_00a10670();
extern "C" void fn_00a10940();
// FUNCTION: ROBLOXSTUDIO 0x00b8ebb0
extern "C" __declspec(naked) void asm_00b8ebb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call fn_0099d320 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0099d320 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { call fn_00a10670 }
	__asm { lea ecx, [esi + 0x64] }
	__asm { push ecx }
	__asm { mov edi, eax }
	__asm { call fn_00a10670 }
	__asm { push eax }
	__asm { call fn_00a10940 }
	__asm { mov ecx, eax }
	__asm { mov ebx, 3 }
	__asm { lea eax, [ecx + 1] }
	__asm { cdq }
	__asm { idiv ebx }
	__asm { lea eax, [ecx + 2] }
	__asm { mov ecx, 3 }
	__asm { add esp, 0xc }
	__asm { mov esi, edx }
	__asm { cdq }
	__asm { idiv ebx }
	__asm { lea eax, [edi + 2] }
	__asm { mov ebx, edx }
	__asm { cdq }
	__asm { idiv ecx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { lea eax, [edi + 1] }
	__asm { mov edi, 3 }
	__asm { movss xmm0, dword ptr [ecx + edx*4] }
	__asm { lea ecx, [ecx + edx*4] }
	__asm { cdq }
	__asm { idiv edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { comiss xmm0, dword ptr [eax + edx*4] }
	__asm { movss xmm0, dword ptr [ebp + ebx*4 - 0xc] }
	__asm { lea eax, [eax + edx*4] }
	__asm { cmovbe ecx, eax }
	__asm { comiss xmm0, dword ptr [ebp + esi*4 - 0xc] }
	__asm { fld dword ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { jbe L_00b8ec75 }
	__asm { fld dword ptr [ebp + ebx*4 - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { fstp dword ptr [eax] }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b8ec75: }
	__asm { fld dword ptr [ebp + esi*4 - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { fstp dword ptr [eax] }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038080[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b533d0();
extern "C" void fn_00b8c1b0();
extern "C" void fn_00b8cba0();
extern "C" void fn_00b8ebb0();
extern "C" void fn_00b8edc0();
extern "C" void fn_00b90cf0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b8ec90
extern "C" __declspec(naked) void asm_00b8ec90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd284ab }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_00b8edc0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b8ed00 }
	__asm { cmp dword ptr [ebx + 0xd0], 0 }
	__asm { je L_00b8ed00 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b8ecef }
	__asm { push 0x110 }
	__asm { push 0xed4c08 }
	__asm { push 0xed4cfc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8ed00 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b8ecef: }
	__asm { movzx eax, al }
	__asm { push 0xed4d78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8ed00: }
	__asm { push 0x98 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b8ed88 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8ebb0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { comiss xmm0, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { ja L_00b8ed3b }
	__asm { lea eax, [ebp - 0x10] }
	__asm { L_00b8ed3b: }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { fmul dword ptr [g_01038080] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x104] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push ecx }
	__asm { mov esi, dword ptr [eax + 0x104] }
	__asm { mov ecx, ebx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b8cba0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebx + 0x64] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebx + 0xcc] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebx + 0x34] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00b90cf0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp L_00b8ed8a }
	__asm { L_00b8ed88: }
	__asm { xor eax, eax }
	__asm { L_00b8ed8a: }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebx + 0xd0], eax }
	__asm { call fn_00b8c1b0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b533d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_0130ef84[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_004f4720();
// FUNCTION: ROBLOXSTUDIO 0x00b8f5e0
extern "C" __declspec(naked) void asm_00b8f5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_004f4720 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b8f629 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b8f629 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00b8f629 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b8f629: }
	__asm { add dword ptr [g_0130ef84], 0xd0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_0130ef8c[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00b8fed0();
// FUNCTION: ROBLOXSTUDIO 0x00b8fcf0
extern "C" __declspec(naked) void asm_00b8fcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00b8fed0 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b8fd39 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b8fd39 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00b8fd39 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b8fd39: }
	__asm { add dword ptr [g_0130ef8c], 0xfc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009f33e0();
extern "C" void fn_00b5e680();
// FUNCTION: ROBLOXSTUDIO 0x00b902d0
extern "C" __declspec(naked) void asm_00b902d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, 9 }
	__asm { mov esi, edx }
	__asm { lea edi, [ebx + 0xcc] }
	__asm { rep movsd }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [ebx + 0xf0] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [ebx + 0xf4] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [ebx + 0xf8] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b9034e }
	__asm { push edx }
	__asm { call fn_009f33e0 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00b9034e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b90339 }
	__asm { push 0x50 }
	__asm { push 0xed5158 }
	__asm { push 0xed5198 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b9034e }
	__asm { L_00b90339: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed51b8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b9034e: }
	__asm { mov ecx, ebx }
	__asm { call fn_00b5e680 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}
