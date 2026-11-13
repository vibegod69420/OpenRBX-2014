// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_0043f5a0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0043b9c0
extern "C" __declspec(naked) void asm_0043b9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74ed8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0043ba2b }
	__asm { test ebx, ebx }
	__asm { jne L_0043ba2b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0043ba1a }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043ba2b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0043ba1a: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043ba2b: }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043f5a0 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0043ba6f }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0043bb2b }
	__asm { L_0043ba6f: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0043bae3 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0043bae3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0043bad2 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043bae3 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0043bad2: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043bae3: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0043bafd }
	__asm { add esi, -5 }
	__asm { jmp L_0043baff }
	__asm { L_0043bafd: }
	__asm { xor esi, esi }
	__asm { L_0043baff: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043bb2b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043bb2b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0043bb2b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0043bb68 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0043bb68 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0043bb68 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0043bb68 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0043bb68: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_0043d360();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0043bdb0
extern "C" __declspec(naked) void asm_0043bdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74ed8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0043be1b }
	__asm { test ebx, ebx }
	__asm { jne L_0043be1b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0043be0a }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043be1b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0043be0a: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043be1b: }
	__asm { push 0x43d3f0 }
	__asm { push 0x131abf4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043d360 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0043be5f }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0043bf1b }
	__asm { L_0043be5f: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0043bed3 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0043bed3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0043bec2 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043bed3 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0043bec2: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043bed3: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0043beed }
	__asm { add esi, -5 }
	__asm { jmp L_0043beef }
	__asm { L_0043beed: }
	__asm { xor esi, esi }
	__asm { L_0043beef: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043bf1b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043bf1b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0043bf1b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0043bf58 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0043bf58 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0043bf58 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0043bf58 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0043bf58: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_00439d80();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0043c610
extern "C" __declspec(naked) void asm_0043c610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74ed8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0043c67b }
	__asm { test ebx, ebx }
	__asm { jne L_0043c67b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0043c66a }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043c67b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0043c66a: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043c67b: }
	__asm { push 0x439e10 }
	__asm { push 0x131b180 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00439d80 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0043c6bf }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0043c77b }
	__asm { L_0043c6bf: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0043c733 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0043c733 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0043c722 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043c733 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0043c722: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043c733: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0043c74d }
	__asm { add esi, -5 }
	__asm { jmp L_0043c74f }
	__asm { L_0043c74d: }
	__asm { xor esi, esi }
	__asm { L_0043c74f: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043c77b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043c77b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0043c77b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0043c7b8 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0043c7b8 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0043c7b8 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0043c7b8 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0043c7b8: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_00439e20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0043c7d0
extern "C" __declspec(naked) void asm_0043c7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74ed8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_0043c83b }
	__asm { test ebx, ebx }
	__asm { jne L_0043c83b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0043c82a }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043c83b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0043c82a: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043c83b: }
	__asm { push 0x439eb0 }
	__asm { push 0x131b178 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00439e20 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0043c87f }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0043c93b }
	__asm { L_0043c87f: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0043c8f3 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0043c8f3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0043c8e2 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0043c8f3 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0043c8e2: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0043c8f3: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0043c90d }
	__asm { add esi, -5 }
	__asm { jmp L_0043c90f }
	__asm { L_0043c90d: }
	__asm { xor esi, esi }
	__asm { L_0043c90f: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043c93b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0043c93b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0043c93b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0043c978 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0043c978 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0043c978 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0043c978 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0043c978: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_0043d490();
// FUNCTION: ROBLOXSTUDIO 0x0043d0f0
extern "C" __declspec(naked) void asm_0043d0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_0043d19d }
	__asm { push 0x43d520 }
	__asm { push 0x131abec }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043d490 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0043d160 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_0043d160: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0043d19d }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0043d19d }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0043d19d }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0043d19d }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0043d19d: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
