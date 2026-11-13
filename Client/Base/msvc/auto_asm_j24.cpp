// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0097f090();
// FUNCTION: ROBLOXSTUDIO 0x008d8600
extern "C" __declspec(naked) void asm_008d8600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { call fn_0097f090 }
	__asm { add esp, 8 }
	__asm { mov ecx, 1 }
	__asm { test al, al }
	__asm { cmovne esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_008d8669 }
	__asm { cmp dword ptr [edi + esi*4 + 0x6c], 0 }
	__asm { jne L_008d8669 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008d8658 }
	__asm { push 0x223 }
	__asm { push 0xe6fcb0 }
	__asm { push 0xe702bc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d8669 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008d8658: }
	__asm { movzx eax, cl }
	__asm { push 0xe702d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d8669: }
	__asm { mov eax, dword ptr [edi + esi*4 + 0x6c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0eb0[];
extern "C" void fn_008d8600();
// FUNCTION: ROBLOXSTUDIO 0x008d8680
extern "C" __declspec(naked) void asm_008d8680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008d868f }
	__asm { lea edx, [ecx - 0x2c] }
	__asm { jmp L_008d8691 }
	__asm { L_008d868f: }
	__asm { xor edx, edx }
	__asm { L_008d8691: }
	__asm { cmp byte ptr [g_012e0eb0], 0 }
	__asm { je L_008d86c1 }
	__asm { test byte ptr [edx + 0x18], 0x1f }
	__asm { jne L_008d86c1 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [esi + 0x70] }
	__asm { test edx, edx }
	__asm { je L_008d86bb }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { cmp eax, dword ptr [ecx + 0x10] }
	__asm { jne L_008d86bb }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008d86bb: }
	__asm { mov eax, dword ptr [esi + 0x6c] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008d86c1: }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { shl eax, 0x1b }
	__asm { sar eax, 0x1b }
	__asm { push eax }
	__asm { call fn_008d8600 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a44ad0();
// FUNCTION: ROBLOXSTUDIO 0x008d9be0
extern "C" __declspec(naked) void asm_008d9be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x48] }
	__asm { add esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_008d9c32 }
	__asm { test esi, esi }
	__asm { jg L_008d9c32 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008d9c21 }
	__asm { push 0xb3 }
	__asm { push 0xe6edb0 }
	__asm { push 0xe6f880 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008d9c32 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008d9c21: }
	__asm { movzx eax, al }
	__asm { push 0xe6f890 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008d9c32: }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { call fn_00a44ad0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x008db400
extern "C" __declspec(naked) void asm_008db400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_008db448 }
	__asm { cmp eax, 1 }
	__asm { je L_008db448 }
	__asm { cmp eax, 2 }
	__asm { je L_008db45c }
	__asm { cmp eax, 3 }
	__asm { jne L_008db437 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1211678 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008db437: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1211678 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008db448: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_008db45c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_008db45c: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x008db630
extern "C" __declspec(naked) void asm_008db630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_008db678 }
	__asm { cmp eax, 1 }
	__asm { je L_008db678 }
	__asm { cmp eax, 2 }
	__asm { je L_008db692 }
	__asm { cmp eax, 3 }
	__asm { jne L_008db667 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12117d0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008db667: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12117d0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008db678: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_008db692 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { L_008db692: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b81960();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e0310
extern "C" __declspec(naked) void asm_008e0310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd30b20 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ecx + 0x264] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00b81960 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_008e0355 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e0355: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_008e0378 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e0378: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_012fd398[];
extern "C" char g_012fd39c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008e2f90
extern "C" __declspec(naked) void asm_008e2f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd30e7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fd39c] }
	__asm { test al, 1 }
	__asm { jne L_008e3003 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd39c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008e2fee }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fd398], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e2fee: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fd398], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e3003: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fd398] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd3a0[];
extern "C" char g_012fd3a4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008e3020
extern "C" __declspec(naked) void asm_008e3020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd30e9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fd3a4] }
	__asm { test al, 1 }
	__asm { jne L_008e3093 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd3a4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008e307e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fd3a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e307e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fd3a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e3093: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fd3a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd3d0[];
extern "C" char g_012fd3d4[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008e30b0
extern "C" __declspec(naked) void asm_008e30b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd30ebe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fd3d4] }
	__asm { test al, 1 }
	__asm { jne L_008e3123 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd3d4], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008e310e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fd3d0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e310e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fd3d0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e3123: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fd3d0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd3b8[];
extern "C" char g_012fd3bc[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008e3140
extern "C" __declspec(naked) void asm_008e3140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd30ede }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fd3bc] }
	__asm { test al, 1 }
	__asm { jne L_008e31b3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd3bc], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008e319e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fd3b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e319e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fd3b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e31b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fd3b8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98c0();
extern "C" void fn_00774920();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e34d0
extern "C" __declspec(naked) void asm_008e34d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0x1012c70 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_008e350e }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008e350e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0xe70440 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_008e3536 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e3536: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x008e7400
extern "C" __declspec(naked) void asm_008e7400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_008e7464 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { lea edi, [ebx + 0x10] }
	__asm { add esi, 0x10 }
	__asm { L_008e7417: }
	__asm { mov al, byte ptr [esi - 0x10] }
	__asm { mov byte ptr [ebx], al }
	__asm { mov eax, dword ptr [esi - 0xf] }
	__asm { mov dword ptr [edi - 0xf], eax }
	__asm { fld dword ptr [esi - 8] }
	__asm { fstp dword ptr [edi - 8] }
	__asm { lea eax, [esi + 8] }
	__asm { fld dword ptr [esi - 4] }
	__asm { lea ecx, [edi + 8] }
	__asm { fstp dword ptr [edi - 4] }
	__asm { fld dword ptr [esi] }
	__asm { fstp dword ptr [edi] }
	__asm { fld dword ptr [esi + 4] }
	__asm { fstp dword ptr [edi + 4] }
	__asm { cmp ecx, eax }
	__asm { je L_008e744c }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_008e744c: }
	__asm { add esi, 0x30 }
	__asm { add ebx, 0x30 }
	__asm { lea ecx, [esi - 0x10] }
	__asm { add edi, 0x30 }
	__asm { cmp ecx, dword ptr [ebp + 0xc] }
	__asm { jne L_008e7417 }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008e7464: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008e9590
extern "C" __declspec(naked) void asm_008e9590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test eax, eax }
	__asm { jne L_008e95b8 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008e95b8: }
	__asm { cmp eax, 0x3fffffff }
	__asm { jbe L_008e95ca }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_008e95ca: }
	__asm { push edi }
	__asm { lea edi, [eax*4] }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008e95f1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008e95f1: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_012fd418[];
extern "C" void fn_008e7740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008e9bd0
extern "C" __declspec(naked) void asm_008e9bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd313ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fd418] }
	__asm { test al, 1 }
	__asm { jne L_008e9c17 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd418], eax }
	__asm { mov ecx, 0x12fd3d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e7740 }
	__asm { push 0xdf0670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008e9c17: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12fd3e4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008e75e0();
extern "C" void fn_008e9d30();
extern "C" void fn_00c10260();
// FUNCTION: ROBLOXSTUDIO 0x008e9e50
extern "C" __declspec(naked) void asm_008e9e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { call fn_00c10260 }
	__asm { lea ecx, [ebx + 0x38] }
	__asm { call fn_00c10260 }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { cmp esi, edi }
	__asm { je L_008e9eb2 }
	__asm { lea eax, [ebx + 0xc] }
	__asm { L_008e9e75: }
	__asm { push dword ptr [esi] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_008e75e0 }
	__asm { lea eax, [ebx + 0x30] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008e9d30 }
	__asm { push dword ptr [esi] }
	__asm { lea eax, [ebx + 0x18] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_008e75e0 }
	__asm { lea eax, [ebx + 0x38] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008e9d30 }
	__asm { add esi, 4 }
	__asm { lea eax, [ebx + 0xc] }
	__asm { cmp esi, edi }
	__asm { jne L_008e9e75 }
	__asm { L_008e9eb2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd418[];
extern "C" void fn_008e7740();
extern "C" void fn_008e9500();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008e9ec0
extern "C" __declspec(naked) void asm_008e9ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd313ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fd418] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_008e9f11 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fd418], eax }
	__asm { mov ecx, 0x12fd3d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e7740 }
	__asm { push 0xdf0670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008e9f11: }
	__asm { push esi }
	__asm { mov ecx, 0x12fd408 }
	__asm { call fn_008e9500 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0090d510();
// FUNCTION: ROBLOXSTUDIO 0x008ea240
extern "C" __declspec(naked) void asm_008ea240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_008ea282 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_008ea282 }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_008ea26a }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0090d510 }
	__asm { L_008ea26a: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_008ea29b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008ea282: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_008ea290 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0090d510 }
	__asm { L_008ea290: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_008ea29b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008ea29b: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4ca8[];
extern "C" char g_012e5a24[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ed1c0
extern "C" __declspec(naked) void asm_008ed1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31806 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe7367c }
	__asm { mov dword ptr [esi + 4], 0xe736f4 }
	__asm { mov dword ptr [esi + 0x18], 0xe736fc }
	__asm { mov dword ptr [esi + 0x1c], 0xe73708 }
	__asm { mov eax, dword ptr [g_012e5a24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008ed259 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5a24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1032ac8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e58f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008ed259: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e58f8 }
	__asm { inc dword ptr [g_012e4ca8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008edf70
extern "C" __declspec(naked) void asm_008edf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_008edf87 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008edf87: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_008edfbe }
	__asm { test al, 1 }
	__asm { jne L_008edfb8 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008edfb8 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008edfb8: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_008edfbe: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_008edfcd }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008edfcd: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008f06f0
extern "C" __declspec(naked) void asm_008f06f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27058 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x2c] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008f074f }
	__asm { test al, 1 }
	__asm { jne L_008f074f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f074f }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f074f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f9660[];
extern "C" char g_012f9664[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x008f0e20
extern "C" __declspec(naked) void asm_008f0e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd31dce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x835310 }
	__asm { push 0x12f94b0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f9664] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008f0e82 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f9664], eax }
	__asm { push 0xe73670 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9660], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f0e82: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9660] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ebbe0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f0f70
extern "C" __declspec(naked) void asm_008f0f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69a90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_008ebbe0 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_008f0fd1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f0fd1: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { jb L_008f0ff4 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f0ff4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f1010
extern "C" __declspec(naked) void asm_008f1010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { call esi }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_008f106e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f106e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x008f1380
extern "C" __declspec(naked) void asm_008f1380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_008f1396 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f1396: }
	__asm { cmp eax, 1 }
	__asm { jne L_008f13ad }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f13ad: }
	__asm { cmp eax, 2 }
	__asm { jne L_008f13bd }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f13bd: }
	__asm { cmp eax, 3 }
	__asm { jne L_008f13e0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12145e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f13e0: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12145e0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x008f1400
extern "C" __declspec(naked) void asm_008f1400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_008f1416 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f1416: }
	__asm { cmp eax, 1 }
	__asm { jne L_008f142d }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f142d: }
	__asm { cmp eax, 2 }
	__asm { jne L_008f143d }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f143d: }
	__asm { cmp eax, 3 }
	__asm { jne L_008f1460 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1214588 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f1460: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1214588 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd638[];
extern "C" void fn_007cb250();
extern "C" void fn_008f20c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f2210
extern "C" __declspec(naked) void asm_008f2210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008f20c0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { cmovae eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [g_012fd638], eax }
	__asm { jb L_008f227d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f227d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008f2790
extern "C" __declspec(naked) void asm_008f2790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31e50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008f27e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe74b70 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008f27ea }
	__asm { L_008f27e8: }
	__asm { xor eax, eax }
	__asm { L_008f27ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008f280e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_008f280e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00422030();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008f28c0
extern "C" __declspec(naked) void asm_008f28c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31e60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008f2918 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe74b40 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008f291a }
	__asm { L_008f2918: }
	__asm { xor eax, eax }
	__asm { L_008f291a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00422030 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0047a2f0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008f2da0
extern "C" __declspec(naked) void asm_008f2da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31e70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008f2df8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe74b88 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008f2dfa }
	__asm { L_008f2df8: }
	__asm { xor eax, eax }
	__asm { L_008f2dfa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0047a2f0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1026c[];
extern "C" void fn_0042e5f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008f35f0
extern "C" __declspec(naked) void asm_008f35f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd31fb0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042e5f0 }
	__asm { test eax, eax }
	__asm { jne L_008f3637 }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 2 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e1026c] }
	__asm { L_008f3637: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e4c08[];
extern "C" char g_012e5c8c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008f40d0
extern "C" __declspec(naked) void asm_008f40d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd320e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe740ac }
	__asm { mov dword ptr [esi + 4], 0xe74124 }
	__asm { mov dword ptr [esi + 0x18], 0xe7412c }
	__asm { mov dword ptr [esi + 0x1c], 0xe74138 }
	__asm { mov eax, dword ptr [g_012e5c8c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008f4169 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5c8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe74094 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5b60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde76d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008f4169: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e5b60 }
	__asm { inc dword ptr [g_012e4c08] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403110();
extern "C" void fn_008f5380();
// FUNCTION: ROBLOXSTUDIO 0x008f42a0
extern "C" __declspec(naked) void asm_008f42a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [edi], 0xe741f4 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { call fn_008f5380 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_008f42f8 }
	__asm { sub eax, 4 }
	__asm { L_008f42f8: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f4cd0
extern "C" __declspec(naked) void asm_008f4cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32218 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008f4d1d }
	__asm { test al, 1 }
	__asm { jne L_008f4d16 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008f4d16 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008f4d16: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_008f4d1d: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008f4d2d }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f4d2d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00adee70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f4d50
extern "C" __declspec(naked) void asm_008f4d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00adee70 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008f4d8e }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f4d8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
// FUNCTION: ROBLOXSTUDIO 0x008f53c0
extern "C" __declspec(naked) void asm_008f53c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edx }
	__asm { je L_008f53f3 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { mov eax, 0x4ec4ec3 }
	__asm { sub eax, edi }
	__asm { cmp eax, esi }
	__asm { jae L_008f53e8 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_008f53e8: }
	__asm { lea eax, [edi + esi] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { sub dword ptr [edx + 4], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_008f53f3: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_005dde10();
extern "C" void fn_006b5ab0();
extern "C" void fn_007c73d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f5440
extern "C" __declspec(naked) void asm_008f5440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_005dde10 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov edx, dword ptr [ebp - 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { cmp esi, 0x10 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [eax + ecx - 1], 0x2f }
	__asm { je L_008f54b1 }
	__asm { cmp esi, 0x10 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, edx }
	__asm { cmp byte ptr [eax + ecx - 1], 0x5c }
	__asm { je L_008f54b1 }
	__asm { call fn_006b5ab0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push 0x10189d0 }
	__asm { call fn_007c73d0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov edx, dword ptr [ebp - 0x24] }
	__asm { L_008f54b1: }
	__asm { cmp esi, 0x10 }
	__asm { pop esi }
	__asm { jb L_008f54c0 }
	__asm { push edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f54c0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f6780
extern "C" __declspec(naked) void asm_008f6780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { xor ebx, ebx }
	__asm { nop }
	__asm { L_008f6790: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_008f679b }
	__asm { add esi, -0x1c }
	__asm { jmp L_008f679d }
	__asm { L_008f679b: }
	__asm { xor esi, esi }
	__asm { L_008f679d: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008f67b2 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f67b2: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_008f6790 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131b3b4[];
extern "C" char g_0131b3b8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x008f7510
extern "C" __declspec(naked) void asm_008f7510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd325ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x463cc0 }
	__asm { push 0x131b3bc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b3b4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_008f7572 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b3b4], eax }
	__asm { push 0xe74090 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b3b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f7572: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b3b8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004030b0();
extern "C" void fn_008f80c0();
extern "C" void fn_008fa0a0();
extern "C" void fn_0095a840();
// FUNCTION: ROBLOXSTUDIO 0x008f82a0
extern "C" __declspec(naked) void asm_008f82a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008f80c0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { jbe L_008f8300 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { movzx eax, byte ptr [esi + 0xc] }
	__asm { lea edi, [esi + 0xc] }
	__asm { inc eax }
	__asm { add ecx, 8 }
	__asm { add eax, edi }
	__asm { je L_008f82d5 }
	__asm { inc eax }
	__asm { jmp L_008f82d7 }
	__asm { L_008f82d5: }
	__asm { xor eax, eax }
	__asm { L_008f82d7: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { pop edi }
	__asm { je L_008f8300 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008fa0a0 }
	__asm { L_008f8300: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00426850();
// FUNCTION: ROBLOXSTUDIO 0x008f8510
extern "C" __declspec(naked) void asm_008f8510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 7 }
	__asm { push 0 }
	__asm { push 0x102fbec }
	__asm { mov ecx, esi }
	__asm { call fn_00426850 }
	__asm { test eax, eax }
	__asm { je L_008f856b }
	__asm { push 8 }
	__asm { push 0 }
	__asm { push 0xe749bc }
	__asm { mov ecx, esi }
	__asm { call fn_00426850 }
	__asm { test eax, eax }
	__asm { je L_008f856b }
	__asm { push 0xb }
	__asm { push 0 }
	__asm { push 0x10184cc }
	__asm { mov ecx, esi }
	__asm { call fn_00426850 }
	__asm { test eax, eax }
	__asm { je L_008f856b }
	__asm { push 0xd }
	__asm { push 0 }
	__asm { push 0xe3ada8 }
	__asm { mov ecx, esi }
	__asm { call fn_00426850 }
	__asm { test eax, eax }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f856b: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00826b40();
extern "C" void fn_00826c90();
extern "C" void fn_00b8a5d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f8570
extern "C" __declspec(naked) void asm_008f8570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 0x8c] }
	__asm { push esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00826b40 }
	__asm { push esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00826c90 }
	__asm { mov ecx, dword ptr [edi + 0x80] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b8a5d0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_008f85ce }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f85ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x008f8b80
extern "C" __declspec(naked) void asm_008f8b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_008f8b96 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f8b96: }
	__asm { cmp eax, 1 }
	__asm { jne L_008f8bad }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f8bad: }
	__asm { cmp eax, 2 }
	__asm { jne L_008f8bbd }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f8bbd: }
	__asm { cmp eax, 3 }
	__asm { jne L_008f8be0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12159a0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008f8be0: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12159a0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ee70();
extern "C" void fn_008f54d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f9480
extern "C" __declspec(naked) void asm_008f9480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_008f54d0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xe749d4 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008f94d6 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f94d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e74b9c[];
extern "C" void fn_008f9550();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008f94f0
extern "C" __declspec(naked) void asm_008f94f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { fld dword ptr [g_00e74b9c] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { fstp dword ptr [esp] }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008f9550 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_008f953b }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008f953b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_008f6850();
extern "C" void fn_008f6900();
// FUNCTION: ROBLOXSTUDIO 0x008fa0a0
extern "C" __declspec(naked) void asm_008fa0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { sub dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [eax + 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008f6850 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_008fa0d8 }
	__asm { lea eax, [ecx + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_008fa0d8 }
	__asm { add eax, -0x1c }
	__asm { jmp L_008fa0da }
	__asm { L_008fa0d8: }
	__asm { xor eax, eax }
	__asm { L_008fa0da: }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_008fa0f4 }
	__asm { add eax, -0x1c }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call fn_008f6900 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008fa0f4: }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea ecx, [edi + 0xc] }
	__asm { call fn_008f6900 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008fa880
extern "C" __declspec(naked) void asm_008fa880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 0x8c] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_008fa8e7 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_008fa8db }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_008fa8db: }
	__asm { push 0x12fd66c }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { L_008fa8e7: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_008fa8f8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008fa8f8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008fcd20
extern "C" __declspec(naked) void asm_008fcd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32e80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008fcd78 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe75df8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008fcd7a }
	__asm { L_008fcd78: }
	__asm { xor eax, eax }
	__asm { L_008fcd7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e4a90[];
extern "C" char g_012e802c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008fd750
extern "C" __declspec(naked) void asm_008fd750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32ed6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe74bbc }
	__asm { mov dword ptr [esi + 4], 0xe74c34 }
	__asm { mov dword ptr [esi + 0x18], 0xe74c3c }
	__asm { mov dword ptr [esi + 0x1c], 0xe74c48 }
	__asm { mov eax, dword ptr [g_012e802c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008fd7e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e802c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe74ba8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e7f00 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7780 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008fd7e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e7f00 }
	__asm { inc dword ptr [g_012e4a90] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4a98[];
extern "C" char g_012e815c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008fd810
extern "C" __declspec(naked) void asm_008fd810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32ef6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe74f0c }
	__asm { mov dword ptr [esi + 4], 0xe74f84 }
	__asm { mov dword ptr [esi + 0x18], 0xe74f8c }
	__asm { mov dword ptr [esi + 0x1c], 0xe74f98 }
	__asm { mov eax, dword ptr [g_012e815c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008fd8a9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e815c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe438c0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8030 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ed0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008fd8a9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e8030 }
	__asm { inc dword ptr [g_012e4a98] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_008fe320();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008fe5c0
extern "C" __declspec(naked) void asm_008fe5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32f90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008fe320 }
	__asm { push 0xb }
	__asm { push 0x101d9dc }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe74cfc }
	__asm { mov dword ptr [esi + 4], 0xe74d74 }
	__asm { mov dword ptr [esi + 0x18], 0xe74d7c }
	__asm { mov dword ptr [esi + 0x1c], 0xe74d88 }
	__asm { mov byte ptr [esi + 0x68], 1 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 2 }
	__asm { mov byte ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008fe66d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008fe66d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0083e550();
extern "C" void fn_0083e660();
// FUNCTION: ROBLOXSTUDIO 0x008ff170
extern "C" __declspec(naked) void asm_008ff170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0083e550 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ebx, eax }
	__asm { call fn_0083e660 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x18 }
	__asm { test ecx, ecx }
	__asm { je L_008ff1a4 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_008ff1a6 }
	__asm { L_008ff1a4: }
	__asm { xor ecx, ecx }
	__asm { L_008ff1a6: }
	__asm { add ecx, dword ptr [edi + 0x2c] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { push ebx }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_011dd2f8[];
extern "C" char g_012169c8[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00403540();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008ff660
extern "C" __declspec(naked) void asm_008ff660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_008ff6b2 }
	__asm { cmp dword ptr [g_012169c8], 0 }
	__asm { jne L_008ff6b2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008ff6a1 }
	__asm { push 0x55 }
	__asm { push 0xe74d98 }
	__asm { push 0xe74de4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008ff6b2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008ff6a1: }
	__asm { movzx eax, al }
	__asm { push 0xe74e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008ff6b2: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0x12169b8 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [g_011dd2f8] }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
extern "C" void fn_00d0c250();
// FUNCTION: ROBLOXSTUDIO 0x008ffec0
extern "C" __declspec(naked) void asm_008ffec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33088 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00d0c250 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { add eax, 0x2c }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008fff26 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008fff26: }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jb L_008fff49 }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008fff49: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fe540[];
extern "C" char g_012fe544[];
extern "C" char g_012fe548[];
extern "C" char g_012fe54c[];
extern "C" void fn_004115f0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009001f0
extern "C" __declspec(naked) void asm_009001f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd330ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x8fff60 }
	__asm { push 0x12fe538 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fe54c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00900269 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fe54c], eax }
	__asm { mov ecx, 0x12fe540 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012fe540], 0 }
	__asm { mov dword ptr [g_012fe544], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xdf1c20 }
	__asm { mov dword ptr [g_012fe540], eax }
	__asm { mov byte ptr [g_012fe548], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00900269: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12fe540 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00900a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009007b0
extern "C" __declspec(naked) void asm_009007b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d638 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00900a30 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00900825 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00900825: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00900840
extern "C" __declspec(naked) void asm_00900840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33123 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0x20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_009008a9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push -1 }
	__asm { mov dword ptr [edi], ecx }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x18], 0xf }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov byte ptr [edi + 4], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { pop esi }
	__asm { jmp L_009008ab }
	__asm { L_009008a9: }
	__asm { xor edi, edi }
	__asm { L_009008ab: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { jb L_009008c2 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009008c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012e4b78[];
extern "C" char g_012ee8ac[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00900d70
extern "C" __declspec(naked) void asm_00900d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33176 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe75e1c }
	__asm { mov dword ptr [esi + 4], 0xe75e94 }
	__asm { mov dword ptr [esi + 0x18], 0xe75e9c }
	__asm { mov dword ptr [esi + 0x1c], 0xe75ea8 }
	__asm { mov eax, dword ptr [g_012ee8ac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00900e09 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ee8ac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe75e10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ee780 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ff0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00900e09: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ee780 }
	__asm { inc dword ptr [g_012e4b78] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bb5d0();
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00901040
extern "C" __declspec(naked) void asm_00901040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd331f3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe75ebc }
	__asm { mov dword ptr [esi + 4], 0xe75f34 }
	__asm { mov dword ptr [esi + 0x18], 0xe75f3c }
	__asm { mov dword ptr [esi + 0x1c], 0xe75f48 }
	__asm { mov edi, dword ptr [esi + 0x80] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0090109c }
	__asm { mov ecx, edi }
	__asm { call fn_006bb5d0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0090109c: }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { jb L_009010ad }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009010ad: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe75e1c }
	__asm { mov dword ptr [esi + 4], 0xe75e94 }
	__asm { mov dword ptr [esi + 0x18], 0xe75e9c }
	__asm { mov dword ptr [esi + 0x1c], 0xe75ea8 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x009018c0
extern "C" __declspec(naked) void asm_009018c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_009018f5 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_009018ff }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_009018ff }
	__asm { L_009018f5: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_009018ff: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00690530();
// FUNCTION: ROBLOXSTUDIO 0x00901950
extern "C" __declspec(naked) void asm_00901950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00690530 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_009019cd }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { pop esi }
	__asm { L_009019cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [ebx + 9], 1 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e2bb4[];
extern "C" char g_012e4cbc[];
extern "C" void fn_007b1540();
extern "C" void fn_007cbf10();
extern "C" void fn_0090d160();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00901d30
extern "C" __declspec(naked) void asm_00901d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd332f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0090d160 }
	__asm { mov dword ptr [esi], 0xe760cc }
	__asm { mov dword ptr [esi + 4], 0xe76150 }
	__asm { mov dword ptr [esi + 0x18], 0xe76158 }
	__asm { mov dword ptr [esi + 0x1c], 0xe76164 }
	__asm { mov eax, dword ptr [g_012e2bb4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00901dc7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2bb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe75fd4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007b1540 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2a88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00901dc7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e2a88 }
	__asm { inc dword ptr [g_012e4cbc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00660010();
extern "C" void fn_009020d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00902030
extern "C" __declspec(naked) void asm_00902030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33338 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, dword ptr [esi + 0x9c] }
	__asm { lea edi, [esi + 0x88] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00902096 }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { je L_0090207d }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00660010 }
	__asm { L_0090207d: }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { L_00902096: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe760cc }
	__asm { mov dword ptr [esi + 4], 0xe76150 }
	__asm { mov dword ptr [esi + 0x18], 0xe76158 }
	__asm { mov dword ptr [esi + 0x1c], 0xe76164 }
	__asm { call fn_009020d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b6ec[];
extern "C" void fn_0048ba90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009024e0
extern "C" __declspec(naked) void asm_009024e0()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0090257a }
	__asm { cmp dword ptr [g_0131b6ec], 0x29a }
	__asm { je L_0090252f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0090251a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0090252f }
	__asm { L_0090251a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0090252f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0090257a }
	__asm { cmp dword ptr [g_0131b6ec], 0x29a }
	__asm { je L_0090257a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00902565 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0090257a }
	__asm { L_00902565: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0090257a: }
	__asm { jmp fn_0048ba90 }
}

extern "C" char g_012fe5f0[];
extern "C" void fn_00403540();
extern "C" void fn_008acfb0();
extern "C" void fn_0090ea20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00903150
extern "C" __declspec(naked) void asm_00903150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { cmp byte ptr [g_012fe5f0], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_009031d2 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x140] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0090ea20 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008acfb0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_009031d2 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009031d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e4cc0[];
extern "C" char g_012ec17c[];
extern "C" void fn_007b1540();
extern "C" void fn_007cbf10();
extern "C" void fn_0090d160();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009031f0
extern "C" __declspec(naked) void asm_009031f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33426 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0090d160 }
	__asm { mov dword ptr [esi], 0xe762c4 }
	__asm { mov dword ptr [esi + 4], 0xe76348 }
	__asm { mov dword ptr [esi + 0x18], 0xe76350 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7635c }
	__asm { mov eax, dword ptr [g_012ec17c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00903287 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec17c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe76298 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007b1540 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec050 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00903287: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ec050 }
	__asm { inc dword ptr [g_012e4cc0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121897c[];
extern "C" char g_012fe5f0[];
extern "C" void fn_00403540();
extern "C" void fn_008acd50();
extern "C" void fn_0090e8b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00903820
extern "C" __declspec(naked) void asm_00903820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { cmp byte ptr [g_012fe5f0], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_009038a8 }
	__asm { cmp byte ptr [g_0121897c], 0 }
	__asm { je L_009038a8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x110] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0090e8b0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008acd50 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_009038a8 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009038a8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0121897c[];
extern "C" char g_012fe5f0[];
extern "C" void fn_00403540();
extern "C" void fn_008acd50();
extern "C" void fn_0090ea20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00903a30
extern "C" __declspec(naked) void asm_00903a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { cmp byte ptr [g_012fe5f0], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00903abb }
	__asm { cmp byte ptr [g_0121897c], 0 }
	__asm { je L_00903abb }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x110] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0090ea20 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008acd50 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_00903abb }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00903abb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10340[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00903c60
extern "C" __declspec(naked) void asm_00903c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd334c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e10340] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00903cbc }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00903cbc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004270c0();
extern "C" void fn_004272a0();
extern "C" void fn_004276b0();
// FUNCTION: ROBLOXSTUDIO 0x00905920
extern "C" __declspec(naked) void asm_00905920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { jle L_00905940 }
	__asm { mov edi, edi }
	__asm { L_00905930: }
	__asm { push 9 }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { dec esi }
	__asm { jne L_00905930 }
	__asm { L_00905940: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x3e }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { push 0xe7662c }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131b4bc[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00905b30
extern "C" __declspec(naked) void asm_00905b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3366b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 5 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { cmp byte ptr [g_0131b4bc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00905ba9 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 8], 0x131b6d0 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 8], 0x48acf0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0131b4bc], 1 }
	__asm { L_00905ba9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e0e3d[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00905bc0
extern "C" __declspec(naked) void asm_00905bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3368b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 1 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { cmp byte ptr [g_012e0e3d], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00905c47 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 8], 0x131b6d8 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 8], 0x794be0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_012e0e3d], 1 }
	__asm { L_00905c47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
extern "C" void fn_00906d90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00906f60
extern "C" __declspec(naked) void asm_00906f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00906d90 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov esi, eax }
	__asm { jb L_00906fc5 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { L_00906fc5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_0048df40();
extern "C" void fn_00905cf0();
// FUNCTION: ROBLOXSTUDIO 0x009070d0
extern "C" __declspec(naked) void asm_009070d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_0048df40 }
	__asm { test al, al }
	__asm { jne L_00907136 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { call fn_00905cf0 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov ecx, 0xccccccb }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_0090712a }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0090712a: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_00907136: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012e4b00[];
extern "C" char g_012eb0dc[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00907bd0
extern "C" __declspec(naked) void asm_00907bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd338e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe76d1c }
	__asm { mov dword ptr [esi + 4], 0xe76d94 }
	__asm { mov dword ptr [esi + 0x18], 0xe76d9c }
	__asm { mov dword ptr [esi + 0x1c], 0xe76da8 }
	__asm { mov eax, dword ptr [g_012eb0dc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00907c69 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb0dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6da4c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eafb0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7880 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00907c69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12eafb0 }
	__asm { inc dword ptr [g_012e4b00] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012eb0dc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00908070
extern "C" __declspec(naked) void asm_00908070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23cae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012eb0dc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_009080e5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb0dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6da4c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eafb0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7880 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_009080e5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12eafb0 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00908e40();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00908ca0
extern "C" __declspec(naked) void asm_00908ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33a30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00908cf8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe77b00 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00908cfa }
	__asm { L_00908cf8: }
	__asm { xor eax, eax }
	__asm { L_00908cfa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00908e40 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012fe9d8[];
extern "C" char g_012fe9dc[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00908df0
extern "C" __declspec(naked) void asm_00908df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd33a4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fe9dc] }
	__asm { test al, 1 }
	__asm { jne L_00908e32 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fe9dc], eax }
	__asm { push 0xe77198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fe9d8], eax }
	__asm { L_00908e32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_0083bcd0();
// FUNCTION: ROBLOXSTUDIO 0x00908fe0
extern "C" __declspec(naked) void asm_00908fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00909031 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00909000 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00909002 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00909002 }
	__asm { L_00909000: }
	__asm { mov eax, ecx }
	__asm { L_00909002: }
	__asm { test eax, eax }
	__asm { je L_00909031 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00909031 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00909031 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00909031 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { jmp fn_0083bcd0 }
	__asm { L_00909031: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5fa0[];
extern "C" void fn_004115f0();
extern "C" void fn_00909880();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00909330
extern "C" __declspec(naked) void asm_00909330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33a6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x821060 }
	__asm { push 0x12f3030 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5fa0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00909391 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5fa0], eax }
	__asm { mov ecx, 0x12f5f18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00909880 }
	__asm { push 0xde8110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00909391: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { push 0x12f5f18 }
	__asm { push 1 }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_009093b8 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009093b8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e2e14[];
extern "C" char g_012e4d4c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00909550
extern "C" __declspec(naked) void asm_00909550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33a96 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe771c4 }
	__asm { mov dword ptr [esi + 4], 0xe7723c }
	__asm { mov dword ptr [esi + 0x18], 0xe77244 }
	__asm { mov dword ptr [esi + 0x1c], 0xe77250 }
	__asm { mov eax, dword ptr [g_012e2e14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009095e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2e14], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe771a8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2ce8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde33f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009095e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e2ce8 }
	__asm { inc dword ptr [g_012e4d4c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4b70[];
extern "C" char g_012ec9cc[];
extern "C" void fn_007b1440();
extern "C" void fn_007cbf10();
extern "C" void fn_00909cf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00909610
extern "C" __declspec(naked) void asm_00909610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33ab6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00909cf0 }
	__asm { mov dword ptr [esi], 0xe775d4 }
	__asm { mov dword ptr [esi + 4], 0xe77650 }
	__asm { mov dword ptr [esi + 0x18], 0xe77658 }
	__asm { mov dword ptr [esi + 0x1c], 0xe77664 }
	__asm { mov dword ptr [esi + 0x64], 0xe77674 }
	__asm { mov dword ptr [esi + 0x68], 0xe7767c }
	__asm { mov eax, dword ptr [g_012ec9cc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009096b5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec9cc], eax }
	__asm { push 1 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe771b8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_007b1440 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec8a0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7720 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009096b5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ec8a0 }
	__asm { inc dword ptr [g_012e4b70] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4d50[];
extern "C" char g_012ec89c[];
extern "C" void fn_007b1440();
extern "C" void fn_007cbf10();
extern "C" void fn_00909cf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009096e0
extern "C" __declspec(naked) void asm_009096e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33ad6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00909cf0 }
	__asm { mov dword ptr [esi], 0xe77314 }
	__asm { mov dword ptr [esi + 4], 0xe77390 }
	__asm { mov dword ptr [esi + 0x18], 0xe77398 }
	__asm { mov dword ptr [esi + 0x1c], 0xe773a4 }
	__asm { mov dword ptr [esi + 0x64], 0xe773b4 }
	__asm { mov dword ptr [esi + 0x68], 0xe773bc }
	__asm { mov eax, dword ptr [g_012ec89c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00909785 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ec89c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036d8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 5 }
	__asm { call fn_007b1440 }
	__asm { push eax }
	__asm { mov ecx, 0x12ec770 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00909785: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ec770 }
	__asm { inc dword ptr [g_012e4d50] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e2824[];
extern "C" char g_012e4b68[];
extern "C" void fn_007b1440();
extern "C" void fn_007cbf10();
extern "C" void fn_00909cf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009097b0
extern "C" __declspec(naked) void asm_009097b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33af6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00909cf0 }
	__asm { mov dword ptr [esi], 0xe77474 }
	__asm { mov dword ptr [esi + 4], 0xe774f0 }
	__asm { mov dword ptr [esi + 0x18], 0xe774f8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe77504 }
	__asm { mov dword ptr [esi + 0x64], 0xe77514 }
	__asm { mov dword ptr [esi + 0x68], 0xe7751c }
	__asm { mov eax, dword ptr [g_012e2824] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00909855 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe7719c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007b1440 }
	__asm { push eax }
	__asm { mov ecx, 0x12e26f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00909855: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e26f8 }
	__asm { inc dword ptr [g_012e4b68] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e2824[];
extern "C" void fn_007b1440();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00909b30
extern "C" __declspec(naked) void asm_00909b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33b0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e2824] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00909ba5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe7719c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007b1440 }
	__asm { push eax }
	__asm { mov ecx, 0x12e26f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3490 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00909ba5: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x12e26f8 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_010036d8[];
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_009096e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00909ef0
extern "C" __declspec(naked) void asm_00909ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33bd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009096e0 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xe773c4 }
	__asm { mov dword ptr [esi + 4], 0xe77440 }
	__asm { mov dword ptr [esi + 0x18], 0xe77448 }
	__asm { mov dword ptr [esi + 0x1c], 0xe77454 }
	__asm { mov dword ptr [esi + 0x64], 0xe77464 }
	__asm { mov dword ptr [esi + 0x68], 0xe7746c }
	__asm { cmp byte ptr [g_010036d8], cl }
	__asm { mov eax, 9 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0x10036d8 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00909f96 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00909f96: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_0090ad70();
// FUNCTION: ROBLOXSTUDIO 0x0090a190
extern "C" __declspec(naked) void asm_0090a190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0090ad70 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0090a202 }
	__asm { add esi, 5 }
	__asm { je L_0090a1d2 }
	__asm { add esi, -5 }
	__asm { jmp L_0090a1d4 }
	__asm { L_0090a1d2: }
	__asm { xor esi, esi }
	__asm { L_0090a1d4: }
	__asm { push edi }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090a201 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0090a201 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0090a201: }
	__asm { pop edi }
	__asm { L_0090a202: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f5fa0[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00909880();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0090aa00
extern "C" __declspec(naked) void asm_0090aa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd33a6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0090aa24 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_0090aa24: }
	__asm { push 0x821060 }
	__asm { push 0x12f3030 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f5fa0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0090aa6c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f5fa0], eax }
	__asm { mov ecx, 0x12f5f18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00909880 }
	__asm { push 0xde8110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0090aa6c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f5f18 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ae020();
extern "C" void fn_00909170();
// FUNCTION: ROBLOXSTUDIO 0x0090b5b0
extern "C" __declspec(naked) void asm_0090b5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007ae020 }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00909170 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x18 }
	__asm { mov esi, eax }
	__asm { test ecx, ecx }
	__asm { je L_0090b5f6 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [edi + 0x2c] }
	__asm { push esi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0090b5f6: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push esi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410d50();
extern "C" void fn_007d5d30();
extern "C" void fn_00909170();
// FUNCTION: ROBLOXSTUDIO 0x0090b610
extern "C" __declspec(naked) void asm_0090b610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00909170 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov ebx, eax }
	__asm { test ecx, ecx }
	__asm { je L_0090b638 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_0090b63a }
	__asm { L_0090b638: }
	__asm { xor ecx, ecx }
	__asm { L_0090b63a: }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { push ebx }
	__asm { call edx }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00410d50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131b684[];
extern "C" char g_0131b688[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0090b8b0
extern "C" __declspec(naked) void asm_0090b8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd33d7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x48b130 }
	__asm { push 0x131b68c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b684] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0090b912 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b684], eax }
	__asm { push 0xe7718c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b688], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0090b912: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b688] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f9668[];
extern "C" char g_012f966c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0090b930
extern "C" __declspec(naked) void asm_0090b930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd268ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x835270 }
	__asm { push 0x12f94b8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f966c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0090b992 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f966c], eax }
	__asm { push 0xe77194 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9668], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0090b992: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f9668] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fe9d8[];
extern "C" char g_012fe9dc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0090b9b0
extern "C" __declspec(naked) void asm_0090b9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd33a4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x908df0 }
	__asm { push 0x12fe9d0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fe9dc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0090ba12 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fe9dc], eax }
	__asm { push 0xe77198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fe9d8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0090ba12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fe9d8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00794b70();
extern "C" void fn_009b53d0();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x0090c590
extern "C" __declspec(naked) void asm_0090c590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_0090c5c4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c876a0 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { lea edx, [ebp + 8] }
	__asm { cmovae edx, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0090c5c4: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, dword ptr [esi + 0x10] }
	__asm { jbe L_0090c5fa }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { shr ecx, 1 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { push edi }
	__asm { cmp edx, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { lea edi, [ebp + 8] }
	__asm { cmovae eax, edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { pop edi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_0090c5fa }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00794b70 }
	__asm { L_0090c5fa: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fe9b8[];
extern "C" char g_012fe9bc[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0090c610
extern "C" __declspec(naked) void asm_0090c610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd33e0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fe9bc] }
	__asm { test al, 1 }
	__asm { jne L_0090c683 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fe9bc], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0090c66e }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012fe9b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0090c66e: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fe9b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0090c683: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fe9b8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e2f44[];
extern "C" char g_012e4cb8[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0090d030
extern "C" __declspec(naked) void asm_0090d030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33ea6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe7602c }
	__asm { mov dword ptr [esi + 4], 0xe760a4 }
	__asm { mov dword ptr [esi + 0x18], 0xe760ac }
	__asm { mov dword ptr [esi + 0x1c], 0xe760b8 }
	__asm { mov eax, dword ptr [g_012e2f44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0090d0c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2f44], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe77b20 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2e18 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde3410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0090d0c9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e2e18 }
	__asm { inc dword ptr [g_012e4cb8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fe5f0[];
extern "C" void fn_008523c0();
extern "C" void fn_009023d0();
extern "C" void fn_0090d8d0();
// FUNCTION: ROBLOXSTUDIO 0x0090e7e0
extern "C" __declspec(naked) void asm_0090e7e0()
{
	__asm { cmp byte ptr [g_012fe5f0], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_0090e83b }
	__asm { cmp dword ptr [edi + 0x70], 0 }
	__asm { push esi }
	__asm { je L_0090e821 }
	__asm { mov ecx, dword ptr [edi + 0x6c] }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { push 0 }
	__asm { lea eax, [eax + ecx*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x68] }
	__asm { call fn_009023d0 }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { mov ecx, dword ptr [edi + 0x6c] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { cmp eax, ecx }
	__asm { je L_0090e821 }
	__asm { L_0090e814: }
	__asm { mov dword ptr [eax], 0 }
	__asm { add eax, 4 }
	__asm { cmp eax, ecx }
	__asm { jne L_0090e814 }
	__asm { L_0090e821: }
	__asm { mov esi, dword ptr [edi] }
	__asm { push edi }
	__asm { call fn_008523c0 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call dword ptr [esi + 0x78] }
	__asm { pop esi }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { jmp fn_0090d8d0 }
	__asm { L_0090e83b: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_009b53d0();
// FUNCTION: ROBLOXSTUDIO 0x0090e840
extern "C" __declspec(naked) void asm_0090e840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_009b53d0 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea ecx, [eax + edx*4] }
	__asm { je L_0090e8a1 }
	__asm { push esi }
	__asm { push edi }
	__asm { nop }
	__asm { L_0090e860: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_0090e86b }
	__asm { add esi, -0x24 }
	__asm { jmp L_0090e86d }
	__asm { L_0090e86b: }
	__asm { xor esi, esi }
	__asm { L_0090e86d: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + edx*4], 0 }
	__asm { lea edi, [eax + edx*4] }
	__asm { jne L_0090e888 }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [esi + 0x24] }
	__asm { jmp L_0090e89a }
	__asm { L_0090e888: }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { lea edx, [esi + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], edx }
	__asm { L_0090e89a: }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_0090e860 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0090e8a1: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012feb30[];
extern "C" char g_012feb34[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0090f5a0
extern "C" __declspec(naked) void asm_0090f5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd341ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012feb34] }
	__asm { test al, 1 }
	__asm { jne L_0090f5e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012feb34], eax }
	__asm { push 0xe77d30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012feb30], eax }
	__asm { L_0090f5e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0090f640
extern "C" __declspec(naked) void asm_0090f640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0090f687 }
	__asm { mov dword ptr [edx], 0xe78a74 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0090f689 }
	__asm { L_0090f687: }
	__asm { xor edx, edx }
	__asm { L_0090f689: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0090f6a0
extern "C" __declspec(naked) void asm_0090f6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0090f6e7 }
	__asm { mov dword ptr [edx], 0xe78a4c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_0090f6e9 }
	__asm { L_0090f6e7: }
	__asm { xor edx, edx }
	__asm { L_0090f6e9: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0090f820();
// FUNCTION: ROBLOXSTUDIO 0x0090f940
extern "C" __declspec(naked) void asm_0090f940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0090f95d }
	__asm { mov dword ptr [esi + 0x68], 0xeb6824 }
	__asm { mov dword ptr [esi + 0xb4], 0xeb682c }
	__asm { L_0090f95d: }
	__asm { push 0 }
	__asm { call fn_0090f820 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe780d4 }
	__asm { mov dword ptr [esi + 4], 0xe781e4 }
	__asm { mov dword ptr [esi + 0x18], 0xe781ec }
	__asm { mov dword ptr [esi + 0x1c], 0xe781f8 }
	__asm { mov dword ptr [esi + 0x64], 0xe78208 }
	__asm { mov dword ptr [esi + 0x70], 0xe78210 }
	__asm { mov dword ptr [esi + 0x98], 0xe78230 }
	__asm { mov dword ptr [esi + 0xb0], 0xe78264 }
	__asm { mov dword ptr [esi + 0xc4], 0xe78290 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe78298 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xb4] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi + 0x110], 1 }
	__asm { mov dword ptr [esi], 0xe782a4 }
	__asm { mov dword ptr [esi + 4], 0xe783b4 }
	__asm { mov dword ptr [esi + 0x18], 0xe783bc }
	__asm { mov dword ptr [esi + 0x1c], 0xe783c8 }
	__asm { mov dword ptr [esi + 0x64], 0xe783d8 }
	__asm { mov dword ptr [esi + 0x70], 0xe783e0 }
	__asm { mov dword ptr [esi + 0x98], 0xe78400 }
	__asm { mov dword ptr [esi + 0xb0], 0xe78434 }
	__asm { mov dword ptr [esi + 0xc4], 0xe78460 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe78468 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xb4] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0088da80();
// FUNCTION: ROBLOXSTUDIO 0x0090fa40
extern "C" __declspec(naked) void asm_0090fa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0090fa60 }
	__asm { mov dword ptr [esi + 0x68], 0xe9bba8 }
	__asm { mov dword ptr [esi + 0xb4], 0xe780c8 }
	__asm { L_0090fa60: }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0x40800000 }
	__asm { mov dword ptr [ebp - 8], 0x3f99999a }
	__asm { mov dword ptr [ebp - 4], 0x40000000 }
	__asm { call fn_0088da80 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe77d3c }
	__asm { mov dword ptr [esi + 4], 0xe77e48 }
	__asm { mov dword ptr [esi + 0x18], 0xe77e50 }
	__asm { mov dword ptr [esi + 0x1c], 0xe77e5c }
	__asm { mov dword ptr [esi + 0x64], 0xe77e6c }
	__asm { mov dword ptr [esi + 0x70], 0xe77e74 }
	__asm { mov dword ptr [esi + 0x98], 0xe77e94 }
	__asm { mov dword ptr [esi + 0xb0], 0xe77ec8 }
	__asm { mov dword ptr [esi + 0xc4], 0xe77ef4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe77efc }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
extern "C" void fn_007b4f50();
extern "C" void fn_0099e410();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x009102b0
extern "C" __declspec(naked) void asm_009102b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x118], eax }
	__asm { je L_0091034f }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { mov dword ptr [esi + 0x118], eax }
	__asm { dec eax }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { add eax, 2 }
	__asm { push eax }
	__asm { call fn_0099e410 }
	__asm { cmp dword ptr [esi + 0x118], 1 }
	__asm { je L_00910313 }
	__asm { cmp dword ptr [esi + 0x110], 0 }
	__asm { je L_00910313 }
	__asm { push 0x12fea54 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x110], 0 }
	__asm { call fn_007b4f50 }
	__asm { push 0x12fe9ec }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00910313: }
	__asm { push 0x12feabc }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12feaf0 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_00910344 }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { mov byte ptr [eax + 0xb0], 1 }
	__asm { L_00910344: }
	__asm { lea ecx, [esi + 0x98] }
	__asm { call fn_00d09250 }
	__asm { L_0091034f: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4d28[];
extern "C" char g_012ea16c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00911d20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00910c20
extern "C" __declspec(naked) void asm_00910c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34306 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00911d20 }
	__asm { mov dword ptr [esi], 0xe7990c }
	__asm { mov dword ptr [esi + 4], 0xe79984 }
	__asm { mov dword ptr [esi + 0x18], 0xe7998c }
	__asm { mov dword ptr [esi + 0x1c], 0xe79998 }
	__asm { mov dword ptr [esi + 0x64], 0xe799a8 }
	__asm { mov eax, dword ptr [g_012ea16c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00910cbf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea16c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe78afc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea040 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00910cbf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ea040 }
	__asm { inc dword ptr [g_012e4d28] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4ce0[];
extern "C" char g_012e9f0c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00911d20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00910ce0
extern "C" __declspec(naked) void asm_00910ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34326 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00911d20 }
	__asm { mov dword ptr [esi], 0xe795cc }
	__asm { mov dword ptr [esi + 4], 0xe79644 }
	__asm { mov dword ptr [esi + 0x18], 0xe7964c }
	__asm { mov dword ptr [esi + 0x1c], 0xe79658 }
	__asm { mov dword ptr [esi + 0x64], 0xe79668 }
	__asm { mov eax, dword ptr [g_012e9f0c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00910d7f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e9f0c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x100369c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9de0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00910d7f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e9de0 }
	__asm { inc dword ptr [g_012e4ce0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4d00[];
extern "C" char g_012e9b7c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00911d20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00910da0
extern "C" __declspec(naked) void asm_00910da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34346 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00911d20 }
	__asm { mov dword ptr [esi], 0xe791bc }
	__asm { mov dword ptr [esi + 4], 0xe79234 }
	__asm { mov dword ptr [esi + 0x18], 0xe7923c }
	__asm { mov dword ptr [esi + 0x1c], 0xe79248 }
	__asm { mov dword ptr [esi + 0x64], 0xe79258 }
	__asm { mov eax, dword ptr [g_012e9b7c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00910e3f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e9b7c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe78ac8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9a50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00910e3f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e9a50 }
	__asm { inc dword ptr [g_012e4d00] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4ce4[];
extern "C" char g_012ea4fc[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00911d20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00910e60
extern "C" __declspec(naked) void asm_00910e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34366 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00911d20 }
	__asm { mov dword ptr [esi], 0xe79d1c }
	__asm { mov dword ptr [esi + 4], 0xe79d94 }
	__asm { mov dword ptr [esi + 0x18], 0xe79d9c }
	__asm { mov dword ptr [esi + 0x1c], 0xe79da8 }
	__asm { mov dword ptr [esi + 0x64], 0xe79db8 }
	__asm { mov eax, dword ptr [g_012ea4fc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00910eff }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea4fc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036b8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea3d0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ae0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00910eff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ea3d0 }
	__asm { inc dword ptr [g_012e4ce4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4cf4[];
extern "C" char g_012ea3cc[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810190();
extern "C" void fn_00910c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00910f20
extern "C" __declspec(naked) void asm_00910f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34386 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00910c20 }
	__asm { mov dword ptr [esi], 0xe79b7c }
	__asm { mov dword ptr [esi + 4], 0xe79bf4 }
	__asm { mov dword ptr [esi + 0x18], 0xe79bfc }
	__asm { mov dword ptr [esi + 0x1c], 0xe79c08 }
	__asm { mov dword ptr [esi + 0x64], 0xe79c18 }
	__asm { mov eax, dword ptr [g_012ea3cc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00910fbf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea3cc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003710 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810190 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea2a0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7cf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00910fbf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ea2a0 }
	__asm { inc dword ptr [g_012e4cf4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4cf8[];
extern "C" char g_012e991c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00911d20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00910fe0
extern "C" __declspec(naked) void asm_00910fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd343a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00911d20 }
	__asm { mov dword ptr [esi], 0xe78e7c }
	__asm { mov dword ptr [esi + 4], 0xe78ef4 }
	__asm { mov dword ptr [esi + 0x18], 0xe78efc }
	__asm { mov dword ptr [esi + 0x1c], 0xe78f08 }
	__asm { mov dword ptr [esi + 0x64], 0xe78f18 }
	__asm { mov eax, dword ptr [g_012e991c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0091107f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e991c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x100374c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e97f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0091107f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e97f0 }
	__asm { inc dword ptr [g_012e4cf8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4d08[];
extern "C" char g_012e9ddc[];
extern "C" void fn_007cbf10();
extern "C" void fn_00811810();
extern "C" void fn_00910da0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009110a0
extern "C" __declspec(naked) void asm_009110a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd343c6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00910da0 }
	__asm { mov dword ptr [esi], 0xe7942c }
	__asm { mov dword ptr [esi + 4], 0xe794a4 }
	__asm { mov dword ptr [esi + 0x18], 0xe794ac }
	__asm { mov dword ptr [esi + 0x1c], 0xe794b8 }
	__asm { mov dword ptr [esi + 0x64], 0xe794c8 }
	__asm { mov eax, dword ptr [g_012e9ddc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0091113f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e9ddc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe78af0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00811810 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9cb0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0091113f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e9cb0 }
	__asm { inc dword ptr [g_012e4d08] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4d04[];
extern "C" char g_012e9cac[];
extern "C" void fn_007cbf10();
extern "C" void fn_00811810();
extern "C" void fn_00910da0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00911160
extern "C" __declspec(naked) void asm_00911160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd343e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00910da0 }
	__asm { mov dword ptr [esi], 0xe7928c }
	__asm { mov dword ptr [esi + 4], 0xe79304 }
	__asm { mov dword ptr [esi + 0x18], 0xe7930c }
	__asm { mov dword ptr [esi + 0x1c], 0xe79318 }
	__asm { mov dword ptr [esi + 0x64], 0xe79328 }
	__asm { mov eax, dword ptr [g_012e9cac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009111ff }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e9cac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe78ae4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00811810 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9b80 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009111ff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e9b80 }
	__asm { inc dword ptr [g_012e4d04] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4cec[];
extern "C" char g_012ea03c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00911d20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009113c0
extern "C" __declspec(naked) void asm_009113c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34426 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00911d20 }
	__asm { mov dword ptr [esi], 0xe7976c }
	__asm { mov dword ptr [esi + 4], 0xe797e4 }
	__asm { mov dword ptr [esi + 0x18], 0xe797ec }
	__asm { mov dword ptr [esi + 0x1c], 0xe797f8 }
	__asm { mov dword ptr [esi + 0x64], 0xe79808 }
	__asm { mov eax, dword ptr [g_012ea03c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0091145f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea03c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x101d100 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9f10 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7cd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0091145f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e9f10 }
	__asm { inc dword ptr [g_012e4cec] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4cf0[];
extern "C" char g_012ea29c[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810190();
extern "C" void fn_00910c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00911480
extern "C" __declspec(naked) void asm_00911480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34446 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00910c20 }
	__asm { mov dword ptr [esi], 0xe799dc }
	__asm { mov dword ptr [esi + 4], 0xe79a54 }
	__asm { mov dword ptr [esi + 0x18], 0xe79a5c }
	__asm { mov dword ptr [esi + 0x1c], 0xe79a68 }
	__asm { mov dword ptr [esi + 0x64], 0xe79a78 }
	__asm { mov eax, dword ptr [g_012ea29c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0091151f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ea29c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003708 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810190 }
	__asm { push eax }
	__asm { mov ecx, 0x12ea170 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ce0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0091151f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ea170 }
	__asm { inc dword ptr [g_012e4cf0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4cfc[];
extern "C" char g_012e9a4c[];
extern "C" void fn_0078dbf0();
extern "C" void fn_007cbf10();
extern "C" void fn_00911d20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00911540
extern "C" __declspec(naked) void asm_00911540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34466 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00911d20 }
	__asm { mov dword ptr [esi], 0xe7901c }
	__asm { mov dword ptr [esi + 4], 0xe79094 }
	__asm { mov dword ptr [esi + 0x18], 0xe7909c }
	__asm { mov dword ptr [esi + 0x1c], 0xe790a8 }
	__asm { mov dword ptr [esi + 0x64], 0xe790b8 }
	__asm { mov eax, dword ptr [g_012e9a4c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009115df }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e9a4c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003790 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0078dbf0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9920 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde8010 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009115df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e9920 }
	__asm { inc dword ptr [g_012e4cfc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0bf4[];
extern "C" char g_012e4d2c[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00911a00
extern "C" __declspec(naked) void asm_00911a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd344c6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe78cbc }
	__asm { mov dword ptr [esi + 4], 0xe78d34 }
	__asm { mov dword ptr [esi + 0x18], 0xe78d3c }
	__asm { mov dword ptr [esi + 0x1c], 0xe78d48 }
	__asm { mov eax, dword ptr [g_012e0bf4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00911a99 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0bf4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe78ab8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0ac8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1b50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00911a99: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e0ac8 }
	__asm { inc dword ptr [g_012e4d2c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00910ce0();
extern "C" void fn_00b8d050();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00911c90
extern "C" __declspec(naked) void asm_00911c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0xfc }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00911cd0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b8d050 }
	__asm { jmp L_00911cd2 }
	__asm { L_00911cd0: }
	__asm { xor eax, eax }
	__asm { L_00911cd2: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00910ce0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe7969c }
	__asm { mov dword ptr [esi + 4], 0xe79714 }
	__asm { mov dword ptr [esi + 0x18], 0xe7971c }
	__asm { mov dword ptr [esi + 0x1c], 0xe79728 }
	__asm { mov dword ptr [esi + 0x64], 0xe79738 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009113c0();
extern "C" void fn_00b8e060();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009124d0
extern "C" __declspec(naked) void asm_009124d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0xcc }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00912510 }
	__asm { mov ecx, eax }
	__asm { call fn_00b8e060 }
	__asm { jmp L_00912512 }
	__asm { L_00912510: }
	__asm { xor eax, eax }
	__asm { L_00912512: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009113c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe7983c }
	__asm { mov dword ptr [esi + 4], 0xe798b4 }
	__asm { mov dword ptr [esi + 0x18], 0xe798bc }
	__asm { mov dword ptr [esi + 0x1c], 0xe798c8 }
	__asm { mov dword ptr [esi + 0x64], 0xe798d8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00911480();
extern "C" void fn_00b8e060();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00912620
extern "C" __declspec(naked) void asm_00912620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xd8 }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00912684 }
	__asm { mov ecx, esi }
	__asm { call fn_00b8e060 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi], 0xe7a4bc }
	__asm { mov dword ptr [esi + 0x1c], 0xe7a508 }
	__asm { jmp L_00912686 }
	__asm { L_00912684: }
	__asm { xor esi, esi }
	__asm { L_00912686: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00911480 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xe79aac }
	__asm { mov dword ptr [edi + 4], 0xe79b24 }
	__asm { mov dword ptr [edi + 0x18], 0xe79b2c }
	__asm { mov dword ptr [edi + 0x1c], 0xe79b38 }
	__asm { mov dword ptr [edi + 0x64], 0xe79b48 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00910f20();
extern "C" void fn_00b8e060();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00912790
extern "C" __declspec(naked) void asm_00912790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xd8 }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009127f4 }
	__asm { mov ecx, esi }
	__asm { call fn_00b8e060 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi], 0xe7a524 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7a570 }
	__asm { jmp L_009127f6 }
	__asm { L_009127f4: }
	__asm { xor esi, esi }
	__asm { L_009127f6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00910f20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xe79c4c }
	__asm { mov dword ptr [edi + 4], 0xe79cc4 }
	__asm { mov dword ptr [edi + 0x18], 0xe79ccc }
	__asm { mov dword ptr [edi + 0x1c], 0xe79cd8 }
	__asm { mov dword ptr [edi + 0x64], 0xe79ce8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fee4c[];
extern "C" char g_012fee50[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00913b70
extern "C" __declspec(naked) void asm_00913b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3447e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x911650 }
	__asm { push 0x12fee14 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fee50] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00913bd2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fee50], eax }
	__asm { push 0xe78a94 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fee4c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00913bd2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fee4c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fee5c[];
extern "C" char g_012fee60[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00913bf0
extern "C" __declspec(naked) void asm_00913bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3476e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x911600 }
	__asm { push 0x12fee24 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fee60] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00913c52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fee60], eax }
	__asm { push 0xe78a84 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fee5c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00913c52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fee5c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fee54[];
extern "C" char g_012fee58[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00913c70
extern "C" __declspec(naked) void asm_00913c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3449e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0x9116a0 }
	__asm { push 0x12fee1c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012fee58] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00913cd2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fee58], eax }
	__asm { push 0xe78a88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fee54], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00913cd2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012fee54] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00914160
extern "C" __declspec(naked) void asm_00914160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_009141aa }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_009141aa }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00914199 }
	__asm { push 0x2c }
	__asm { push 0xe78b18 }
	__asm { push 0xe78b60 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009141aa }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00914199: }
	__asm { movzx eax, al }
	__asm { push 0xe78b70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009141aa: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_009141c2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { jne L_009141c2 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009141c2: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00915580
extern "C" __declspec(naked) void asm_00915580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x8c] }
	__asm { test ecx, ecx }
	__asm { je L_009155ea }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 2 }
	__asm { jne L_009155c2 }
	__asm { mov eax, dword ptr [esi + 0x8c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, dword ptr [eax + 0x94] }
	__asm { je L_009155ea }
	__asm { mov dword ptr [eax + 0x94], ecx }
	__asm { push 0x12febc8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009155c2: }
	__asm { cmp eax, 0xa }
	__asm { jne L_009155ea }
	__asm { mov eax, dword ptr [esi + 0x8c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, dword ptr [eax + 0xfc] }
	__asm { je L_009155ea }
	__asm { mov dword ptr [eax + 0xfc], ecx }
	__asm { push 0x12febc8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_009155ea: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x009155f0
extern "C" __declspec(naked) void asm_009155f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x8c] }
	__asm { test ecx, ecx }
	__asm { je L_0091565a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 2 }
	__asm { jne L_00915632 }
	__asm { mov eax, dword ptr [esi + 0x8c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, dword ptr [eax + 0x98] }
	__asm { je L_0091565a }
	__asm { mov dword ptr [eax + 0x98], ecx }
	__asm { push 0x12febf4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00915632: }
	__asm { cmp eax, 0xa }
	__asm { jne L_0091565a }
	__asm { mov eax, dword ptr [esi + 0x8c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, dword ptr [eax + 0x100] }
	__asm { je L_0091565a }
	__asm { mov dword ptr [eax + 0x100], ecx }
	__asm { push 0x12febf4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0091565a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00915e00
extern "C" __declspec(naked) void asm_00915e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00915e47 }
	__asm { mov dword ptr [edx], 0xe7c0f0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_00915e49 }
	__asm { L_00915e47: }
	__asm { xor edx, edx }
	__asm { L_00915e49: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402f60();
extern "C" void fn_007cd560();
extern "C" void fn_00814490();
extern "C" void fn_00891b30();
// FUNCTION: ROBLOXSTUDIO 0x00917620
extern "C" __declspec(naked) void asm_00917620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00891b30 }
	__asm { cmp dword ptr [eax + 0x30], 0x10 }
	__asm { mov esi, dword ptr [eax + 0x2c] }
	__asm { lea ecx, [eax + 0x1c] }
	__asm { jb L_0091763d }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0091763d: }
	__asm { mov eax, 8 }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0xe7bf18 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00917683 }
	__asm { cmp esi, 8 }
	__asm { jb L_00917683 }
	__asm { cmp esi, 8 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00917683 }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_00814490 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00917683 }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { jne L_00917685 }
	__asm { L_00917683: }
	__asm { xor eax, eax }
	__asm { L_00917685: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fef28[];
extern "C" char g_012fef2c[];
extern "C" char g_012fef30[];
extern "C" char g_012fef34[];
extern "C" char g_012fef38[];
extern "C" char g_012fef3c[];
extern "C" char g_012fef40[];
extern "C" void fn_006dea00();
// FUNCTION: ROBLOXSTUDIO 0x00917b80
extern "C" __declspec(naked) void asm_00917b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3498e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fef40] }
	__asm { test al, 1 }
	__asm { jne L_00917bec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fef40], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [g_012fef28], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [g_012fef2c], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [g_012fef30], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [g_012fef34], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [g_012fef38], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [g_012fef3c], eax }
	__asm { L_00917bec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x12fef28 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00918700
extern "C" __declspec(naked) void asm_00918700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00918747 }
	__asm { mov dword ptr [edx], 0xe7d2dc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_00918749 }
	__asm { L_00918747: }
	__asm { xor edx, edx }
	__asm { L_00918749: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009187b0
extern "C" __declspec(naked) void asm_009187b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009187f7 }
	__asm { mov dword ptr [edx], 0xe7d2f0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009187f9 }
	__asm { L_009187f7: }
	__asm { xor edx, edx }
	__asm { L_009187f9: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00918810
extern "C" __declspec(naked) void asm_00918810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00918857 }
	__asm { mov dword ptr [edx], 0xe7d304 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_00918859 }
	__asm { L_00918857: }
	__asm { xor edx, edx }
	__asm { L_00918859: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00918870
extern "C" __declspec(naked) void asm_00918870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_009188b7 }
	__asm { mov dword ptr [edx], 0xe7d318 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_009188b9 }
	__asm { L_009188b7: }
	__asm { xor edx, edx }
	__asm { L_009188b9: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009189d0();
extern "C" void fn_00b5b980();
// FUNCTION: ROBLOXSTUDIO 0x009188d0
extern "C" __declspec(naked) void asm_009188d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00b5b980 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { mov esi, eax }
	__asm { test dl, dl }
	__asm { je L_00918925 }
	__asm { test esi, esi }
	__asm { jne L_00918925 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00918914 }
	__asm { push 0xd0 }
	__asm { push 0xe68b68 }
	__asm { push 0x100a87c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00918925 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00918914: }
	__asm { movzx eax, dl }
	__asm { push 0xe68bb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00918925: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009189d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0071b5e0();
// FUNCTION: ROBLOXSTUDIO 0x00919b40
extern "C" __declspec(naked) void asm_00919b40()
{
	__asm { L_00919b40: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jge L_00919b63 }
	__asm { mov edx, dword ptr [esi] }
	__asm { add edx, ecx }
	__asm { je L_00919b5b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [edx], al }
	__asm { L_00919b5b: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00919b63: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jb L_00919b89 }
	__asm { add eax, ecx }
	__asm { cmp edi, eax }
	__asm { jae L_00919b89 }
	__asm { mov al, byte ptr [edi] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call L_00919b40 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00919b89: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0071b5e0 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov al, byte ptr [edi] }
	__asm { pop edi }
	__asm { mov byte ptr [edx + ecx - 1], al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00914100();
// FUNCTION: ROBLOXSTUDIO 0x0091a5a0
extern "C" __declspec(naked) void asm_0091a5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0091a5f1 }
	__asm { lea ecx, [esi - 0x94] }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { jne L_0091a5f1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0091a5dc }
	__asm { push 0x17 }
	__asm { push 0xe7c328 }
	__asm { push 0xe7c370 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0091a5f1 }
	__asm { L_0091a5dc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe7c380 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0091a5f1: }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0091a60b }
	__asm { mov eax, dword ptr [esi - 0x94] }
	__asm { lea ecx, [esi - 0x94] }
	__asm { call dword ptr [eax + 0x48] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0091a60b: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4c84[];
extern "C" char g_012f02d4[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0091c6d0
extern "C" __declspec(naked) void asm_0091c6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34cc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe7d3a4 }
	__asm { mov dword ptr [esi + 4], 0xe7d41c }
	__asm { mov dword ptr [esi + 0x18], 0xe7d424 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7d430 }
	__asm { mov eax, dword ptr [g_012f02d4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0091c769 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f02d4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036ec }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f01a8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0091c769: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f01a8 }
	__asm { inc dword ptr [g_012e4c84] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_00811210();
extern "C" void fn_00812810();
// FUNCTION: ROBLOXSTUDIO 0x0091ca30
extern "C" __declspec(naked) void asm_0091ca30()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { L_0091ca35: }
	__asm { mov ebx, dword ptr [edi + 0x38] }
	__asm { test ebx, ebx }
	__asm { je L_0091ca5c }
	__asm { add ebx, 0x1c }
	__asm { je L_0091ca5c }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_00811210 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0091ca5c }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_0091ca83 }
	__asm { L_0091ca5c: }
	__asm { mov edi, dword ptr [edi + 0x38] }
	__asm { test edi, edi }
	__asm { je L_0091ca81 }
	__asm { add edi, 0x1c }
	__asm { je L_0091ca81 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00812810 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0091ca81 }
	__asm { add edi, -0x1c }
	__asm { jne L_0091ca35 }
	__asm { L_0091ca81: }
	__asm { xor eax, eax }
	__asm { L_0091ca83: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012e4c88[];
extern "C" char g_012f0404[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0091cef0
extern "C" __declspec(naked) void asm_0091cef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34db6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe7d5fc }
	__asm { mov dword ptr [esi + 4], 0xe7d674 }
	__asm { mov dword ptr [esi + 0x18], 0xe7d67c }
	__asm { mov dword ptr [esi + 0x1c], 0xe7d688 }
	__asm { mov eax, dword ptr [g_012f0404] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0091cf89 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0404], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe7d5e4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f02d8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde79c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0091cf89: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f02d8 }
	__asm { inc dword ptr [g_012e4c88] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c8c[];
extern "C" char g_012f0534[];
extern "C" void fn_004118e0();
extern "C" void fn_007af680();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0091eaf0
extern "C" __declspec(naked) void asm_0091eaf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34f86 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe7d7e4 }
	__asm { mov dword ptr [esi + 4], 0xe7d85c }
	__asm { mov dword ptr [esi + 0x18], 0xe7d864 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7d870 }
	__asm { mov eax, dword ptr [g_012f0534] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_0091eb89 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0534], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe7d7c8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0408 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde79d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0091eb89: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f0408 }
	__asm { inc dword ptr [g_012e4c8c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00920ff0
extern "C" __declspec(naked) void asm_00920ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35170 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00921048 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe7f730 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0092104a }
	__asm { L_00921048: }
	__asm { xor eax, eax }
	__asm { L_0092104a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00921080
extern "C" __declspec(naked) void asm_00921080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd35180 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009210d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe7f750 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_009210da }
	__asm { L_009210d8: }
	__asm { xor eax, eax }
	__asm { L_009210da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004225e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009216c0
extern "C" __declspec(naked) void asm_009216c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd351d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00921704 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_004225e0 }
	__asm { mov ecx, eax }
	__asm { jmp L_00921706 }
	__asm { L_00921704: }
	__asm { xor ecx, ecx }
	__asm { L_00921706: }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00921732 }
	__asm { test al, 1 }
	__asm { jne L_00921732 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00921732 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00921732: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012ff660[];
extern "C" char g_012ff664[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00921d10
extern "C" __declspec(naked) void asm_00921d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3525e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012ff664] }
	__asm { test al, 1 }
	__asm { jne L_00921d52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ff664], eax }
	__asm { push 0xe7f778 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012ff660], eax }
	__asm { L_00921d52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
