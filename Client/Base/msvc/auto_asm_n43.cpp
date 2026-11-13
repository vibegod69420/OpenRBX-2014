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
extern "C" void fn_00439fe0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0044bab0
extern "C" __declspec(naked) void asm_0044bab0()
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
	__asm { je L_0044bb1b }
	__asm { test ebx, ebx }
	__asm { jne L_0044bb1b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0044bb0a }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044bb1b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0044bb0a: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044bb1b: }
	__asm { push 0x43a070 }
	__asm { push 0x131b160 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00439fe0 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0044bb5f }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0044bc1b }
	__asm { L_0044bb5f: }
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
	__asm { je L_0044bbd3 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0044bbd3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0044bbc2 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044bbd3 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0044bbc2: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044bbd3: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0044bbed }
	__asm { add esi, -5 }
	__asm { jmp L_0044bbef }
	__asm { L_0044bbed: }
	__asm { xor esi, esi }
	__asm { L_0044bbef: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044bc1b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044bc1b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0044bc1b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0044bc58 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044bc58 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044bc58 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044bc58 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044bc58: }
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
extern "C" void fn_0043a080();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0044bc70
extern "C" __declspec(naked) void asm_0044bc70()
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
	__asm { je L_0044bcdb }
	__asm { test ebx, ebx }
	__asm { jne L_0044bcdb }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0044bcca }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044bcdb }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0044bcca: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044bcdb: }
	__asm { push 0x43a110 }
	__asm { push 0x131b158 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043a080 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0044bd1f }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0044bddb }
	__asm { L_0044bd1f: }
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
	__asm { je L_0044bd93 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0044bd93 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0044bd82 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044bd93 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0044bd82: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044bd93: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0044bdad }
	__asm { add esi, -5 }
	__asm { jmp L_0044bdaf }
	__asm { L_0044bdad: }
	__asm { xor esi, esi }
	__asm { L_0044bdaf: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044bddb }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044bddb }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0044bddb: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0044be18 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044be18 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044be18 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044be18 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044be18: }
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
extern "C" void fn_0043a120();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0044be30
extern "C" __declspec(naked) void asm_0044be30()
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
	__asm { je L_0044be9b }
	__asm { test ebx, ebx }
	__asm { jne L_0044be9b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0044be8a }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044be9b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0044be8a: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044be9b: }
	__asm { push 0x43a1b0 }
	__asm { push 0x131b150 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043a120 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0044bedf }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0044bf9b }
	__asm { L_0044bedf: }
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
	__asm { je L_0044bf53 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0044bf53 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0044bf42 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044bf53 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0044bf42: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044bf53: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0044bf6d }
	__asm { add esi, -5 }
	__asm { jmp L_0044bf6f }
	__asm { L_0044bf6d: }
	__asm { xor esi, esi }
	__asm { L_0044bf6f: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044bf9b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044bf9b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0044bf9b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0044bfd8 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044bfd8 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044bfd8 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044bfd8 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044bfd8: }
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
extern "C" void fn_0043a1c0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0044c000
extern "C" __declspec(naked) void asm_0044c000()
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
	__asm { je L_0044c06b }
	__asm { test ebx, ebx }
	__asm { jne L_0044c06b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0044c05a }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044c06b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0044c05a: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044c06b: }
	__asm { push 0x43a250 }
	__asm { push 0x131b148 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043a1c0 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0044c0af }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0044c16b }
	__asm { L_0044c0af: }
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
	__asm { je L_0044c123 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0044c123 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0044c112 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0044c123 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0044c112: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0044c123: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_0044c13d }
	__asm { add esi, -5 }
	__asm { jmp L_0044c13f }
	__asm { L_0044c13d: }
	__asm { xor esi, esi }
	__asm { L_0044c13f: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044c16b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0044c16b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0044c16b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_0044c1a8 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044c1a8 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044c1a8 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044c1a8 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044c1a8: }
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
extern "C" void fn_0044c770();
// FUNCTION: ROBLOXSTUDIO 0x0044c250
extern "C" __declspec(naked) void asm_0044c250()
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
	__asm { je L_0044c2fd }
	__asm { push 0x44c800 }
	__asm { push 0x131b22c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0044c770 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0044c2c0 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_0044c2c0: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0044c2fd }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044c2fd }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044c2fd }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044c2fd }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044c2fd: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_0044c810();
// FUNCTION: ROBLOXSTUDIO 0x0044c310
extern "C" __declspec(naked) void asm_0044c310()
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
	__asm { je L_0044c3bd }
	__asm { push 0x44c8a0 }
	__asm { push 0x131b224 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0044c810 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0044c380 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_0044c380: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0044c3bd }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044c3bd }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044c3bd }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044c3bd }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044c3bd: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_0044c8b0();
// FUNCTION: ROBLOXSTUDIO 0x0044c3d0
extern "C" __declspec(naked) void asm_0044c3d0()
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
	__asm { je L_0044c47d }
	__asm { push 0x44c940 }
	__asm { push 0x131b21c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0044c8b0 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0044c440 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_0044c440: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0044c47d }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044c47d }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044c47d }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044c47d }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044c47d: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_0044c950();
// FUNCTION: ROBLOXSTUDIO 0x0044c490
extern "C" __declspec(naked) void asm_0044c490()
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
	__asm { je L_0044c53d }
	__asm { push 0x44c9e0 }
	__asm { push 0x131b214 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0044c950 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0044c500 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_0044c500: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0044c53d }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044c53d }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044c53d }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044c53d }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044c53d: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0041ebc0();
extern "C" void fn_0044c9f0();
// FUNCTION: ROBLOXSTUDIO 0x0044c550
extern "C" __declspec(naked) void asm_0044c550()
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
	__asm { je L_0044c5fd }
	__asm { push 0x44ca80 }
	__asm { push 0x131b20c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0044c9f0 }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0044c5c0 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_0041ebc0 }
	__asm { L_0044c5c0: }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0xc], 0 }
	__asm { je L_0044c5fd }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0044c5fd }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0044c5fd }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0044c5fd }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0044c5fd: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
