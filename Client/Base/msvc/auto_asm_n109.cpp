// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c458[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00497a40();
extern "C" void fn_006b9740();
extern "C" void fn_007b5ea0();
extern "C" void fn_007c6b40();
// FUNCTION: ROBLOXSTUDIO 0x00497220
extern "C" __declspec(naked) void asm_00497220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bfb0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c458] }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_0049739a }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { call fn_007c6b40 }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0049728c }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0049728c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0049728c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0049728c: }
	__asm { lea eax, [ebx + 0xa4] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { cmp dword ptr [g_0131c458], 0 }
	__asm { jne L_00497355 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { call fn_00497a40 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { mov byte ptr [esp + 0x38], 1 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { push ebx }
	__asm { call fn_007b5ea0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00497325 }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { cmp eax, dword ptr [g_0131c458] }
	__asm { je L_00497325 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00497314 }
	__asm { push 0x8b }
	__asm { push 0x1002ed8 }
	__asm { push 0x1002f28 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00497325 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00497314: }
	__asm { movzx eax, cl }
	__asm { push 0x1002f38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00497325: }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { test esi, esi }
	__asm { je L_00497355 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00497355 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00497355 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00497355: }
	__asm { mov esi, dword ptr [g_0131c458] }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_00497398 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00497398 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00497398 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00497398 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00497398: }
	__asm { mov eax, esi }
	__asm { L_0049739a: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c454[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00497a60();
extern "C" void fn_006b9740();
extern "C" void fn_007b5ea0();
extern "C" void fn_007c6b40();
// FUNCTION: ROBLOXSTUDIO 0x004973b0
extern "C" __declspec(naked) void asm_004973b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bfd0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c454] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_00497514 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_007c6b40 }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00497417 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00497417 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00497417 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00497417: }
	__asm { lea eax, [ebx + 0xa4] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [g_0131c454], 0 }
	__asm { jne L_004974d2 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00497a60 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push ebx }
	__asm { call fn_007b5ea0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_004974a4 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { cmp eax, dword ptr [g_0131c454] }
	__asm { je L_004974a4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00497493 }
	__asm { push 0x8b }
	__asm { push 0x1002ed8 }
	__asm { push 0x1002f28 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004974a4 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00497493: }
	__asm { movzx eax, cl }
	__asm { push 0x1002f38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004974a4: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { test esi, esi }
	__asm { je L_004974d2 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_004974d2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_004974d2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_004974d2: }
	__asm { mov esi, dword ptr [g_0131c454] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00497512 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00497512 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00497512 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00497512 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00497512: }
	__asm { mov eax, esi }
	__asm { L_00497514: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
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
extern "C" void fn_0049a010();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x004985a0
extern "C" __declspec(naked) void asm_004985a0()
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
	__asm { je L_0049860b }
	__asm { test ebx, ebx }
	__asm { jne L_0049860b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004985fa }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0049860b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004985fa: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0049860b: }
	__asm { push 0x49a000 }
	__asm { push 0x131c410 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0049a010 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_0049864f }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0049870b }
	__asm { L_0049864f: }
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
	__asm { je L_004986c3 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_004986c3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_004986b2 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004986c3 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_004986b2: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004986c3: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { test esi, esi }
	__asm { je L_004986dd }
	__asm { add esi, -5 }
	__asm { jmp L_004986df }
	__asm { L_004986dd: }
	__asm { xor esi, esi }
	__asm { L_004986df: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0049870b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0049870b }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0049870b: }
	__asm { mov dword ptr [esp + 0x2c], 0xffffffff }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { je L_00498748 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00498748 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00498748 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00498748 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00498748: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00496550();
extern "C" void fn_00499eb0();
// FUNCTION: ROBLOXSTUDIO 0x00499e91
extern "C" __declspec(naked) void asm_00499e91()
{
	__asm { sub ecx, 8 }
	__asm { jmp fn_00496550 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_00499eb0 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0049a240();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0049a2d0
extern "C" __declspec(naked) void asm_0049a2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd73ad0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_0049a30c }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0049a30c: }
	__asm { push 0x49a230 }
	__asm { push 0x131c464 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0049a240 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov byte ptr [esp + 0x24], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0049a34d }
	__asm { push ebx }
	__asm { jmp L_0049a351 }
	__asm { L_0049a34d: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_0049a351: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_0049a396 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0049a396 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0049a396 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0049a396 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0049a396: }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0049a3da }
	__asm { add esi, 5 }
	__asm { je L_0049a3ac }
	__asm { add esi, -5 }
	__asm { jmp L_0049a3ae }
	__asm { L_0049a3ac: }
	__asm { xor esi, esi }
	__asm { L_0049a3ae: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0049a3da }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0049a3da }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0049a3da: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
