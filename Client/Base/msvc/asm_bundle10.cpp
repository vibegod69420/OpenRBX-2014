// Bundled inline-assembly functions (merged from the recursion output).

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x009f3be0
extern "C" __declspec(naked) void asm_009f3be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { and ecx, 0x7fffffff }
	__asm { cmp ecx, 0x7fffff }
	__asm { ja L_009f3c0f }
	__asm { neg ecx }
	__asm { sbb ecx, ecx }
	__asm { and ecx, 4 }
	__asm { xor eax, eax }
	__asm { cmp ecx, 4 }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f3c0f: }
	__asm { cmp ecx, 0x7f800000 }
	__asm { jae L_009f3c26 }
	__asm { mov ecx, 1 }
	__asm { xor eax, eax }
	__asm { cmp ecx, 4 }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f3c26: }
	__asm { and ecx, 0x7fffff }
	__asm { neg ecx }
	__asm { sbb ecx, ecx }
	__asm { neg ecx }
	__asm { add ecx, 2 }
	__asm { xor eax, eax }
	__asm { cmp ecx, 4 }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009f3c70
extern "C" __declspec(naked) void asm_009f3c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and eax, 0x7fffffff }
	__asm { cmp eax, 0x7fffff }
	__asm { ja L_009f3c96 }
	__asm { test eax, eax }
	__asm { je L_009f3c9d }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f3c96: }
	__asm { cmp eax, 0x7f800000 }
	__asm { jae L_009f3ced }
	__asm { L_009f3c9d: }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and eax, 0x7fffffff }
	__asm { cmp eax, 0x7fffff }
	__asm { ja L_009f3cbe }
	__asm { test eax, eax }
	__asm { je L_009f3cc5 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f3cbe: }
	__asm { cmp eax, 0x7f800000 }
	__asm { jae L_009f3ced }
	__asm { L_009f3cc5: }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and eax, 0x7fffffff }
	__asm { cmp eax, 0x7fffff }
	__asm { ja L_009f3ce6 }
	__asm { test eax, eax }
	__asm { jne L_009f3ced }
	__asm { L_009f3ce2: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f3ce6: }
	__asm { cmp eax, 0x7f800000 }
	__asm { jb L_009f3ce2 }
	__asm { L_009f3ced: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009f3d00
extern "C" __declspec(naked) void asm_009f3d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and eax, 0x7f800000 }
	__asm { cmp eax, 0x7f800000 }
	__asm { je L_009f3d54 }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and eax, 0x7f800000 }
	__asm { cmp eax, 0x7f800000 }
	__asm { je L_009f3d54 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and eax, 0x7f800000 }
	__asm { cmp eax, 0x7f800000 }
	__asm { je L_009f3d54 }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f3d54: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038248[];
extern "C" char g_01306190[];
extern "C" void fn_006d19c0();
// FUNCTION: ROBLOXSTUDIO 0x009f40e0
extern "C" __declspec(naked) void asm_009f40e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd42b7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01306190] }
	__asm { test al, 1 }
	__asm { jne L_009f414c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306190], eax }
	__asm { fldz }
	__asm { sub esp, 0x24 }
	__asm { mov ecx, 0x130616c }
	__asm { fst dword ptr [esp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fld1 }
	__asm { fst dword ptr [esp + 0x1c] }
	__asm { fxch st(1) }
	__asm { fst dword ptr [esp + 0x18] }
	__asm { fld dword ptr [g_01038248] }
	__asm { fstp dword ptr [esp + 0x14] }
	__asm { fst dword ptr [esp + 0x10] }
	__asm { fst dword ptr [esp + 0xc] }
	__asm { fst dword ptr [esp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006d19c0 }
	__asm { L_009f414c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130616c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_01038248[];
extern "C" char g_013061b8[];
extern "C" void fn_006d19c0();
// FUNCTION: ROBLOXSTUDIO 0x009f4160
extern "C" __declspec(naked) void asm_009f4160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd42b9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013061b8] }
	__asm { test al, 1 }
	__asm { jne L_009f41ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013061b8], eax }
	__asm { fldz }
	__asm { sub esp, 0x24 }
	__asm { mov ecx, 0x1306194 }
	__asm { fst dword ptr [esp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fst dword ptr [esp + 0x1c] }
	__asm { fld dword ptr [g_01038248] }
	__asm { fstp dword ptr [esp + 0x18] }
	__asm { fst dword ptr [esp + 0x14] }
	__asm { fld1 }
	__asm { fst dword ptr [esp + 0x10] }
	__asm { fxch st(1) }
	__asm { fst dword ptr [esp + 0xc] }
	__asm { fxch st(1) }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fst dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006d19c0 }
	__asm { L_009f41ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1306194 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038248[];
extern "C" char g_01306208[];
extern "C" void fn_006d19c0();
// FUNCTION: ROBLOXSTUDIO 0x009f41f0
extern "C" __declspec(naked) void asm_009f41f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd42bbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01306208] }
	__asm { test al, 1 }
	__asm { jne L_009f425c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306208], eax }
	__asm { fld1 }
	__asm { sub esp, 0x24 }
	__asm { mov ecx, 0x13061e4 }
	__asm { fst dword ptr [esp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fldz }
	__asm { fst dword ptr [esp + 0x1c] }
	__asm { fst dword ptr [esp + 0x18] }
	__asm { fst dword ptr [esp + 0x14] }
	__asm { fst dword ptr [esp + 0x10] }
	__asm { fxch st(1) }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fst dword ptr [esp + 8] }
	__asm { fld dword ptr [g_01038248] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006d19c0 }
	__asm { L_009f425c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x13061e4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038248[];
extern "C" char g_013061e0[];
extern "C" void fn_006d19c0();
// FUNCTION: ROBLOXSTUDIO 0x009f4380
extern "C" __declspec(naked) void asm_009f4380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd42bde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_013061e0] }
	__asm { test al, 1 }
	__asm { jne L_009f43ec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013061e0], eax }
	__asm { fld1 }
	__asm { sub esp, 0x24 }
	__asm { mov ecx, 0x13061bc }
	__asm { fst dword ptr [esp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fldz }
	__asm { fst dword ptr [esp + 0x1c] }
	__asm { fst dword ptr [esp + 0x18] }
	__asm { fst dword ptr [esp + 0x14] }
	__asm { fst dword ptr [esp + 0x10] }
	__asm { fld dword ptr [g_01038248] }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fst dword ptr [esp + 8] }
	__asm { fxch st(1) }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006d19c0 }
	__asm { L_009f43ec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x13061bc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009f44c0
extern "C" __declspec(naked) void asm_009f44c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { mulss xmm0, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [edx + 4] }
	__asm { mulss xmm0, dword ptr [ecx + 4] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [edx + 8] }
	__asm { mulss xmm0, dword ptr [ecx + 8] }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0xc] }
	__asm { mulss xmm0, dword ptr [ecx] }
	__asm { movss dword ptr [eax + 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x10] }
	__asm { mulss xmm0, dword ptr [ecx + 4] }
	__asm { movss dword ptr [eax + 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x14] }
	__asm { mulss xmm0, dword ptr [ecx + 8] }
	__asm { movss dword ptr [eax + 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x18] }
	__asm { mulss xmm0, dword ptr [ecx] }
	__asm { movss dword ptr [eax + 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x1c] }
	__asm { mulss xmm0, dword ptr [ecx + 4] }
	__asm { movss dword ptr [eax + 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x20] }
	__asm { mulss xmm0, dword ptr [ecx + 8] }
	__asm { movss dword ptr [eax + 0x20], xmm0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009f4550
extern "C" __declspec(naked) void asm_009f4550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [edx + 4] }
	__asm { mulss xmm0, dword ptr [ecx + 4] }
	__asm { movss xmm1, dword ptr [ecx] }
	__asm { mulss xmm1, dword ptr [edx] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, dword ptr [edx + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { movss xmm1, dword ptr [ecx] }
	__asm { mulss xmm1, dword ptr [edx + 0xc] }
	__asm { movss xmm0, dword ptr [edx + 0x10] }
	__asm { mulss xmm0, dword ptr [ecx + 4] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, dword ptr [edx + 0x14] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss xmm1, dword ptr [edx + 0x1c] }
	__asm { mulss xmm1, dword ptr [ecx + 4] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { mulss xmm0, dword ptr [edx + 0x18] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, dword ptr [edx + 0x20] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax + 8], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0x10] }
	__asm { mulss xmm1, dword ptr [edx + 4] }
	__asm { movss xmm0, dword ptr [ecx + 0xc] }
	__asm { mulss xmm0, dword ptr [edx] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x14] }
	__asm { mulss xmm0, dword ptr [edx + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax + 0xc], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0xc] }
	__asm { mulss xmm1, dword ptr [edx + 0xc] }
	__asm { movss xmm0, dword ptr [ecx + 0x10] }
	__asm { mulss xmm0, dword ptr [edx + 0x10] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x14] }
	__asm { mulss xmm0, dword ptr [edx + 0x14] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax + 0x10], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0xc] }
	__asm { mulss xmm1, dword ptr [edx + 0x18] }
	__asm { movss xmm0, dword ptr [edx + 0x1c] }
	__asm { mulss xmm0, dword ptr [ecx + 0x10] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x14] }
	__asm { mulss xmm0, dword ptr [edx + 0x20] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax + 0x14], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0x1c] }
	__asm { mulss xmm1, dword ptr [edx + 4] }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { mulss xmm0, dword ptr [ecx + 0x18] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edx + 8] }
	__asm { mulss xmm0, dword ptr [ecx + 0x20] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax + 0x18], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0x1c] }
	__asm { mulss xmm1, dword ptr [edx + 0x10] }
	__asm { movss xmm0, dword ptr [ecx + 0x18] }
	__asm { mulss xmm0, dword ptr [edx + 0xc] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x14] }
	__asm { mulss xmm0, dword ptr [ecx + 0x20] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax + 0x1c], xmm1 }
	__asm { movss xmm1, dword ptr [edx + 0x1c] }
	__asm { movss xmm0, dword ptr [edx + 0x18] }
	__asm { mulss xmm0, dword ptr [ecx + 0x18] }
	__asm { mulss xmm1, dword ptr [ecx + 0x1c] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x20] }
	__asm { mulss xmm0, dword ptr [ecx + 0x20] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax + 0x20], xmm1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e47fd8[];
extern "C" char g_00e99150[];
extern "C" char g_01038034[];
extern "C" char g_01038190[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf6840();
extern "C" void fn_00cf68ec();
// FUNCTION: ROBLOXSTUDIO 0x009f4b20
extern "C" __declspec(naked) void asm_009f4b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { addss xmm0, dword ptr [g_00e99150] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { test al, al }
	__asm { je L_009f4b7f }
	__asm { comiss xmm0, dword ptr [g_01038034] }
	__asm { jae L_009f4b7f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009f4b6e }
	__asm { push 0x509 }
	__asm { push 0xe98c48 }
	__asm { push 0xe98f74 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f4b7f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009f4b6e: }
	__asm { movzx eax, al }
	__asm { push 0xe98f88 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f4b7f: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fmul dword ptr [g_01038190] }
	__asm { fmul qword ptr [g_00e47fd8] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { add esp, 8 }
	__asm { call fn_00cf6840 }
	__asm { and eax, 0x80000003 }
	__asm { jns L_009f4bad }
	__asm { dec eax }
	__asm { or eax, 0xfffffffc }
	__asm { inc eax }
	__asm { L_009f4bad: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d5000();
extern "C" void fn_006deac0();
// FUNCTION: ROBLOXSTUDIO 0x009f4bb0
extern "C" __declspec(naked) void asm_009f4bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006deac0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_006d5000 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movaps xmm1, xmm4 }
	__asm { mulss xmm1, dword ptr [ebp - 0x24] }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [ebp - 0x20] }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [ebp - 0x1c] }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [ebp - 0x14] }
	__asm { mulss xmm3, dword ptr [ebp - 8] }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { movaps xmm1, xmm4 }
	__asm { mulss xmm1, dword ptr [ebp - 0x18] }
	__asm { mulss xmm4, dword ptr [ebp - 0xc] }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [ebp - 0x10] }
	__asm { mulss xmm2, dword ptr [ebp - 4] }
	__asm { addss xmm4, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm4, xmm2 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d20b0();
extern "C" void fn_006d5000();
extern "C" void fn_006deac0();
// FUNCTION: ROBLOXSTUDIO 0x009f4c50
extern "C" __declspec(naked) void asm_009f4c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006deac0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_006d5000 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push edi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_006d20b0 }
	__asm { mov ecx, 9 }
	__asm { mov esi, eax }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010380e4[];
extern "C" void fn_006d19a0();
extern "C" void fn_009f5130();
// FUNCTION: ROBLOXSTUDIO 0x009f54a0
extern "C" __declspec(naked) void asm_009f54a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { movss xmm2, dword ptr [g_010380e4] }
	__asm { movss xmm4, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { divss xmm2, xmm4 }
	__asm { movss xmm0, dword ptr [edx + 0x2c] }
	__asm { movss xmm1, dword ptr [edx + 0x28] }
	__asm { mulss xmm0, xmm2 }
	__asm { movaps xmm3, xmm2 }
	__asm { mulss xmm3, dword ptr [edx + 0x24] }
	__asm { push esi }
	__asm { mulss xmm1, xmm2 }
	__asm { movss dword ptr [ebp + 0xc], xmm0 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fistp dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [ebp + 0xc], xmm1 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fistp dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ebp + 0xc], xmm3 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fistp dword ptr [ebp - 8] }
	__asm { cvtsi2ss xmm0, dword ptr [ebp - 8] }
	__asm { cvtsi2ss xmm1, eax }
	__asm { cvtsi2ss xmm2, ecx }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm4 }
	__asm { mulss xmm2, xmm4 }
	__asm { push edx }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { movss dword ptr [ebp - 0xc], xmm2 }
	__asm { call fn_009f5130 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009f5560
extern "C" __declspec(naked) void asm_009f5560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { movss xmm0, dword ptr [edx + 8] }
	__asm { movss xmm1, dword ptr [edx + 4] }
	__asm { comiss xmm1, xmm0 }
	__asm { jbe L_009f5592 }
	__asm { movss dword ptr [edx + 8], xmm1 }
	__asm { movss dword ptr [edx + 4], xmm0 }
	__asm { L_009f5592: }
	__asm { movss xmm0, dword ptr [edx + 4] }
	__asm { movss xmm1, dword ptr [edx] }
	__asm { comiss xmm1, xmm0 }
	__asm { jbe L_009f55a9 }
	__asm { movss dword ptr [edx + 4], xmm1 }
	__asm { movss dword ptr [edx], xmm0 }
	__asm { L_009f55a9: }
	__asm { movss xmm0, dword ptr [edx + 8] }
	__asm { movss xmm1, dword ptr [edx + 4] }
	__asm { comiss xmm1, xmm0 }
	__asm { mov eax, edx }
	__asm { jbe L_009f55c4 }
	__asm { movss dword ptr [edx + 8], xmm1 }
	__asm { movss dword ptr [edx + 4], xmm0 }
	__asm { L_009f55c4: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009f62c0
extern "C" __declspec(naked) void asm_009f62c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { divss xmm0, dword ptr [edx + 8] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { divss xmm2, dword ptr [edx] }
	__asm { divss xmm1, dword ptr [edx + 4] }
	__asm { movss dword ptr [ebp + 0xc], xmm0 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fistp dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [ebp + 0xc], xmm1 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fistp dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ebp + 0xc], xmm2 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fistp dword ptr [ebp - 8] }
	__asm { cvtsi2ss xmm1, dword ptr [ebp - 8] }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { mulss xmm0, xmm1 }
	__asm { cvtsi2ss xmm2, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cvtsi2ss xmm3, ecx }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [edx + 4] }
	__asm { mulss xmm0, xmm2 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [edx + 8] }
	__asm { mulss xmm0, xmm3 }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380e4[];
// FUNCTION: ROBLOXSTUDIO 0x009f6350
extern "C" __declspec(naked) void asm_009f6350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { movss xmm4, dword ptr [ebp + 0x10] }
	__asm { movss xmm2, dword ptr [g_010380e4] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { divss xmm2, xmm4 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { mulss xmm0, xmm2 }
	__asm { mulss xmm3, xmm2 }
	__asm { mulss xmm1, xmm2 }
	__asm { movss dword ptr [ebp + 0x10], xmm0 }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fistp dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp + 0x10], xmm1 }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fistp dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ebp + 0x10], xmm3 }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fistp dword ptr [ebp - 8] }
	__asm { cvtsi2ss xmm0, dword ptr [ebp - 8] }
	__asm { cvtsi2ss xmm1, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cvtsi2ss xmm2, ecx }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm4 }
	__asm { mulss xmm2, xmm4 }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm2 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010385f0[];
extern "C" void fn_006dec80();
// FUNCTION: ROBLOXSTUDIO 0x009f6450
extern "C" __declspec(naked) void asm_009f6450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_006dec80 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { call fn_006dec80 }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [g_010385f0] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xorps xmm0, xmm1 }
	__asm { xorps xmm3, xmm1 }
	__asm { xorps xmm2, xmm1 }
	__asm { movss dword ptr [esi + 0xc], xmm0 }
	__asm { movss dword ptr [esi + 0x10], xmm3 }
	__asm { movss dword ptr [esi + 0x14], xmm2 }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { comiss xmm4, xmm0 }
	__asm { movss xmm1, dword ptr [eax + 0x14] }
	__asm { jae L_009f64c6 }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_009f64c3 }
	__asm { movaps xmm4, xmm1 }
	__asm { jmp L_009f64c6 }
	__asm { L_009f64c3: }
	__asm { movaps xmm4, xmm0 }
	__asm { L_009f64c6: }
	__asm { movss xmm0, dword ptr [edi + 4] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { comiss xmm1, xmm0 }
	__asm { movss xmm2, dword ptr [eax + 0x10] }
	__asm { jae L_009f64e7 }
	__asm { comiss xmm0, xmm2 }
	__asm { jb L_009f64e4 }
	__asm { movaps xmm1, xmm2 }
	__asm { jmp L_009f64e7 }
	__asm { L_009f64e4: }
	__asm { movaps xmm1, xmm0 }
	__asm { L_009f64e7: }
	__asm { movss xmm2, dword ptr [edi] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, xmm2 }
	__asm { movss xmm3, dword ptr [eax + 0xc] }
	__asm { jae L_009f6506 }
	__asm { comiss xmm2, xmm3 }
	__asm { jb L_009f6503 }
	__asm { movaps xmm0, xmm3 }
	__asm { jmp L_009f6506 }
	__asm { L_009f6503: }
	__asm { movaps xmm0, xmm2 }
	__asm { L_009f6506: }
	__asm { movss dword ptr [esi], xmm0 }
	__asm { movss dword ptr [esi + 4], xmm1 }
	__asm { movss dword ptr [esi + 8], xmm4 }
	__asm { movss xmm0, dword ptr [edi + 0x14] }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { comiss xmm3, xmm0 }
	__asm { movss xmm1, dword ptr [eax + 0x14] }
	__asm { jae L_009f6535 }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_009f6532 }
	__asm { movaps xmm3, xmm1 }
	__asm { jmp L_009f6535 }
	__asm { L_009f6532: }
	__asm { movaps xmm3, xmm0 }
	__asm { L_009f6535: }
	__asm { movss xmm0, dword ptr [edi + 0x10] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { comiss xmm1, xmm0 }
	__asm { movss xmm2, dword ptr [eax + 0x10] }
	__asm { jae L_009f6556 }
	__asm { comiss xmm0, xmm2 }
	__asm { jb L_009f6553 }
	__asm { movaps xmm1, xmm2 }
	__asm { jmp L_009f6556 }
	__asm { L_009f6553: }
	__asm { movaps xmm1, xmm0 }
	__asm { L_009f6556: }
	__asm { movss xmm2, dword ptr [edi + 0xc] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, xmm2 }
	__asm { movss xmm4, dword ptr [eax + 0xc] }
	__asm { jae L_009f6576 }
	__asm { comiss xmm2, xmm4 }
	__asm { jb L_009f6573 }
	__asm { movaps xmm0, xmm4 }
	__asm { jmp L_009f6576 }
	__asm { L_009f6573: }
	__asm { movaps xmm0, xmm2 }
	__asm { L_009f6576: }
	__asm { pop edi }
	__asm { movss dword ptr [esi + 0xc], xmm0 }
	__asm { movss dword ptr [esi + 0x10], xmm1 }
	__asm { movss dword ptr [esi + 0x14], xmm3 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
// FUNCTION: ROBLOXSTUDIO 0x009f6640
extern "C" __declspec(naked) void asm_009f6640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { movss xmm7, dword ptr [ecx + 0x14] }
	__asm { movss xmm6, dword ptr [ecx] }
	__asm { movss xmm5, dword ptr [ecx + 0x10] }
	__asm { addss xmm5, dword ptr [ecx + 4] }
	__asm { addss xmm6, dword ptr [ecx + 0xc] }
	__asm { movss xmm1, dword ptr [g_010380b8] }
	__asm { movss xmm3, dword ptr [ecx + 0x10] }
	__asm { subss xmm3, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movaps xmm4, xmm7 }
	__asm { addss xmm4, dword ptr [ecx + 8] }
	__asm { subss xmm7, dword ptr [ecx + 8] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { mulss xmm5, xmm1 }
	__asm { mulss xmm4, xmm1 }
	__asm { mulss xmm6, xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0xc] }
	__asm { subss xmm1, dword ptr [ecx] }
	__asm { subss xmm2, xmm4 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { movss xmm1, dword ptr [g_010380b8] }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { mulss xmm7, xmm1 }
	__asm { mulss xmm3, xmm1 }
	__asm { mulss xmm0, xmm1 }
	__asm { xorps xmm1, xmm1 }
	__asm { movss dword ptr [ebp - 0xc], xmm7 }
	__asm { movss xmm7, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 8], xmm3 }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { subss xmm7, xmm6 }
	__asm { subss xmm3, xmm5 }
	__asm { movss xmm5, dword ptr [g_010385f0] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { movaps xmm4, xmm0 }
	__asm { xorps xmm0, xmm5 }
	__asm { comiss xmm0, xmm7 }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { jbe L_009f6707 }
	__asm { movaps xmm1, xmm7 }
	__asm { addss xmm1, xmm4 }
	__asm { mulss xmm1, xmm1 }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { L_009f6707: }
	__asm { comiss xmm7, xmm4 }
	__asm { jbe L_009f671d }
	__asm { subss xmm7, xmm4 }
	__asm { mulss xmm7, xmm7 }
	__asm { addss xmm1, xmm7 }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { L_009f671d: }
	__asm { movss xmm4, dword ptr [ebp - 8] }
	__asm { movaps xmm0, xmm4 }
	__asm { xorps xmm0, xmm5 }
	__asm { comiss xmm0, xmm3 }
	__asm { jbe L_009f6741 }
	__asm { movaps xmm0, xmm3 }
	__asm { addss xmm0, xmm4 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { L_009f6741: }
	__asm { comiss xmm3, xmm4 }
	__asm { jbe L_009f675a }
	__asm { subss xmm3, xmm4 }
	__asm { mulss xmm3, xmm3 }
	__asm { addss xmm3, xmm1 }
	__asm { movaps xmm1, xmm3 }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { L_009f675a: }
	__asm { movss xmm3, dword ptr [ebp - 0xc] }
	__asm { movaps xmm0, xmm3 }
	__asm { xorps xmm0, xmm5 }
	__asm { comiss xmm0, xmm2 }
	__asm { jbe L_009f677e }
	__asm { movaps xmm0, xmm2 }
	__asm { addss xmm0, xmm3 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { L_009f677e: }
	__asm { comiss xmm2, xmm3 }
	__asm { jbe L_009f6794 }
	__asm { subss xmm2, xmm3 }
	__asm { mulss xmm2, xmm2 }
	__asm { addss xmm2, xmm1 }
	__asm { movss dword ptr [ebp + 8], xmm2 }
	__asm { L_009f6794: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
// FUNCTION: ROBLOXSTUDIO 0x009f6b70
extern "C" __declspec(naked) void asm_009f6b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov eax, 0x55555556 }
	__asm { movss xmm1, dword ptr [ebx] }
	__asm { imul esi }
	__asm { movss xmm2, dword ptr [ebx + 0x10] }
	__asm { movss xmm3, dword ptr [ebx + 0x14] }
	__asm { addss xmm1, dword ptr [ebx + 0xc] }
	__asm { addss xmm2, dword ptr [ebx + 4] }
	__asm { addss xmm3, dword ptr [ebx + 8] }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { movss dword ptr [edi], xmm1 }
	__asm { movss dword ptr [edi + 4], xmm2 }
	__asm { movss dword ptr [edi + 8], xmm3 }
	__asm { cmp esi, 3 }
	__asm { jge L_009f6be7 }
	__asm { fld dword ptr [ebx + eax*4 + 0xc] }
	__asm { fstp dword ptr [edi + eax*4] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009f6be7: }
	__asm { fld dword ptr [ebx + eax*4] }
	__asm { fstp dword ptr [edi + eax*4] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009f6c50
extern "C" __declspec(naked) void asm_009f6c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { je L_009f6cd8 }
	__asm { test esi, esi }
	__asm { jns L_009f6c97 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f6c82 }
	__asm { push 0x36 }
	__asm { push 0xe99158 }
	__asm { push 0xe99194 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f6c97 }
	__asm { L_009f6c82: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe991a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f6c97: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009f6cd8 }
	__asm { cmp esi, 7 }
	__asm { jle L_009f6cd8 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f6cc3 }
	__asm { push 0x37 }
	__asm { push 0xe99158 }
	__asm { push 0xe991f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f6cd8 }
	__asm { L_009f6cc3: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe991f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f6cd8: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { and edx, 3 }
	__asm { add eax, edx }
	__asm { sar eax, 2 }
	__asm { mov word ptr [ecx], ax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { and eax, 0x80000001 }
	__asm { jns L_009f6cfc }
	__asm { dec eax }
	__asm { or eax, 0xfffffffe }
	__asm { inc eax }
	__asm { L_009f6cfc: }
	__asm { mov word ptr [ecx + 2], ax }
	__asm { and esi, 0x80000001 }
	__asm { jns L_009f6d0d }
	__asm { dec esi }
	__asm { or esi, 0xfffffffe }
	__asm { inc esi }
	__asm { L_009f6d0d: }
	__asm { mov word ptr [ecx + 4], si }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038034[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x009f7060
extern "C" __declspec(naked) void asm_009f7060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_009f70bd }
	__asm { comiss xmm1, dword ptr [g_01038034] }
	__asm { ja L_009f70bd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009f70a7 }
	__asm { push 0xc2 }
	__asm { push 0xe99158 }
	__asm { push 0xe99294 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f70b8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009f70a7: }
	__asm { movzx eax, al }
	__asm { push 0xe992a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f70b8: }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { L_009f70bd: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { movss xmm6, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { movss xmm5, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { movss xmm3, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { movss xmm4, dword ptr [ebp - 8] }
	__asm { subss xmm0, xmm1 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm2, dword ptr [ebp - 4] }
	__asm { subss xmm6, xmm1 }
	__asm { comiss xmm0, dword ptr [eax + 0xc] }
	__asm { subss xmm5, xmm1 }
	__asm { addss xmm3, xmm1 }
	__asm { addss xmm4, xmm1 }
	__asm { addss xmm2, xmm1 }
	__asm { pop esi }
	__asm { ja L_009f7158 }
	__asm { comiss xmm6, dword ptr [eax + 0x10] }
	__asm { ja L_009f7158 }
	__asm { comiss xmm5, dword ptr [eax + 0x14] }
	__asm { ja L_009f7158 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { comiss xmm0, xmm4 }
	__asm { ja L_009f7158 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, xmm3 }
	__asm { ja L_009f7158 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { comiss xmm0, xmm2 }
	__asm { ja L_009f7158 }
	__asm { mov cl, 1 }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_009f7158: }
	__asm { xor cl, cl }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012fc96a[];
extern "C" void fn_00421060();
extern "C" void fn_004226b0();
extern "C" void fn_006b8a90();
extern "C" void fn_0088b660();
extern "C" void fn_0088e030();
extern "C" void fn_0088ea50();
extern "C" void fn_00891930();
extern "C" void fn_00891a00();
extern "C" void fn_00a8f640();
// FUNCTION: ROBLOXSTUDIO 0x009f7910
extern "C" __declspec(naked) void asm_009f7910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4dde1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov al, byte ptr [g_012fc96a] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_009f7951 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe68c08 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_009f7951: }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov edi, 0xe9a40c }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_00a8f640 }
	__asm { test al, al }
	__asm { je L_009f799c }
	__asm { or edi, 1 }
	__asm { mov dword ptr [ebp - 0x34], edi }
	__asm { jmp L_009f79a3 }
	__asm { L_009f799c: }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { L_009f79a3: }
	__asm { push dword ptr [esi + 4] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0088e030 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0088b660 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_0088ea50 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test eax, eax }
	__asm { je L_009f7a00 }
	__asm { test al, 1 }
	__asm { jne L_009f79f9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_009f79f9 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_009f79f9: }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { L_009f7a00: }
	__asm { mov al, byte ptr [g_012fc96a] }
	__asm { test al, al }
	__asm { je L_009f7a2a }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe68c38 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_00891a00 }
	__asm { mov ecx, esi }
	__asm { call fn_00891930 }
	__asm { L_009f7a2a: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi], 0 }
	__asm { test eax, eax }
	__asm { je L_009f7a5c }
	__asm { lea ecx, [eax + 5] }
	__asm { test ecx, ecx }
	__asm { je L_009f7a46 }
	__asm { lea edx, [ecx - 5] }
	__asm { jmp L_009f7a48 }
	__asm { L_009f7a46: }
	__asm { xor edx, edx }
	__asm { L_009f7a48: }
	__asm { cmp dword ptr [edx - 8], 0 }
	__asm { je L_009f7a5c }
	__asm { push ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00421060 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { L_009f7a5c: }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009f7a77 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009f7a77: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_012e4b18[];
extern "C" char g_012e660c[];
extern "C" void fn_0068a630();
extern "C" void fn_007cbf10();
extern "C" void fn_009f7ea0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009f7d90
extern "C" __declspec(naked) void asm_009f7d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42cf6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_009f7dbf }
	__asm { mov dword ptr [esi + 0x8c], 0xe9967c }
	__asm { L_009f7dbf: }
	__asm { push 0 }
	__asm { call fn_009f7ea0 }
	__asm { mov eax, dword ptr [esi + 0x8c] }
	__asm { mov dword ptr [esi], 0xe9956c }
	__asm { mov dword ptr [esi + 4], 0xe995e4 }
	__asm { mov dword ptr [esi + 0x18], 0xe995ec }
	__asm { mov dword ptr [esi + 0x1c], 0xe995f8 }
	__asm { mov dword ptr [esi + 0x64], 0xe99608 }
	__asm { mov dword ptr [esi + 0x70], 0xe99610 }
	__asm { mov dword ptr [esi + 0x88], 0xe99644 }
	__asm { mov dword ptr [esi + 0x9c], 0xe99670 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x8c], 0xe99678 }
	__asm { mov eax, dword ptr [esi + 0x8c] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x5c] }
	__asm { mov dword ptr [ecx + esi + 0x88], eax }
	__asm { mov eax, dword ptr [g_012e660c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_009f7e80 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e660c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe99300 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0068a630 }
	__asm { push eax }
	__asm { mov ecx, 0x12e64e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7930 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_009f7e80: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e64e0 }
	__asm { inc dword ptr [g_012e4b18] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01003648[];
extern "C" char g_012fc96a[];
extern "C" void fn_004038a0();
extern "C" void fn_006da0e0();
extern "C" void fn_007b5bb0();
extern "C" void fn_009f7cd0();
extern "C" void fn_00b915b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009f7ea0
extern "C" __declspec(naked) void asm_009f7ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42d50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { je L_009f7ed1 }
	__asm { mov dword ptr [edi + 0x8c], 0xe9967c }
	__asm { L_009f7ed1: }
	__asm { push esi }
	__asm { call fn_009f7cd0 }
	__asm { mov dword ptr [edi], 0xe993b4 }
	__asm { mov dword ptr [edi + 4], 0xe9942c }
	__asm { mov dword ptr [edi + 0x18], 0xe99434 }
	__asm { mov dword ptr [edi + 0x1c], 0xe99440 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b915b0 }
	__asm { mov dword ptr [edi + 0x74], 0xffffffff }
	__asm { mov dword ptr [edi + 0x78], 0xffffffff }
	__asm { mov dword ptr [edi + 0x7c], 0xffffffff }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { mov byte ptr [edi + 0x90], 0 }
	__asm { mov dword ptr [edi + 0x98], 0x41200000 }
	__asm { mov eax, dword ptr [edi + 0x8c] }
	__asm { mov dword ptr [edi], 0xe99454 }
	__asm { mov dword ptr [edi + 4], 0xe994cc }
	__asm { mov dword ptr [edi + 0x18], 0xe994d4 }
	__asm { mov dword ptr [edi + 0x1c], 0xe994e0 }
	__asm { mov dword ptr [edi + 0x64], 0xe994f0 }
	__asm { mov dword ptr [edi + 0x70], 0xe994f8 }
	__asm { mov dword ptr [edi + 0x88], 0xe9952c }
	__asm { mov dword ptr [edi + 0x9c], 0xe99558 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + edi + 0x8c], 0xe99560 }
	__asm { mov eax, dword ptr [edi + 0x8c] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x5c] }
	__asm { mov dword ptr [ecx + edi + 0x88], eax }
	__asm { lea ecx, [edi + 0xa4] }
	__asm { mov dword ptr [edi + 0xa0], 0 }
	__asm { call fn_006da0e0 }
	__asm { mov al, byte ptr [g_012fc96a] }
	__asm { test al, al }
	__asm { setne al }
	__asm { mov dword ptr [edi + 0xd4], 0 }
	__asm { mov byte ptr [edi + 0xd8], al }
	__asm { mov dword ptr [edi + 0xdc], 0 }
	__asm { mov dword ptr [edi + 0xe0], 0 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_01003648], cl }
	__asm { mov eax, 0xc }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0x1003648 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_009f803b }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009f803b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
extern "C" void fn_007b00e0();
extern "C" void fn_00923320();
extern "C" void fn_00b915d0();
extern "C" void fn_00d08530();
// FUNCTION: ROBLOXSTUDIO 0x009f8260
extern "C" __declspec(naked) void asm_009f8260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42dd8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov eax, dword ptr [edi + 0x8c] }
	__asm { mov dword ptr [edi], 0xe99454 }
	__asm { mov dword ptr [edi + 4], 0xe994cc }
	__asm { mov dword ptr [edi + 0x18], 0xe994d4 }
	__asm { mov dword ptr [edi + 0x1c], 0xe994e0 }
	__asm { mov dword ptr [edi + 0x64], 0xe994f0 }
	__asm { mov dword ptr [edi + 0x70], 0xe994f8 }
	__asm { mov dword ptr [edi + 0x88], 0xe9952c }
	__asm { mov dword ptr [edi + 0x9c], 0xe99558 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi + 0x8c], 0xe99560 }
	__asm { mov eax, dword ptr [edi + 0x8c] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x5c] }
	__asm { mov dword ptr [ecx + edi + 0x88], eax }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { je L_009f841c }
	__asm { cmp dword ptr [edi + 0x68], 0 }
	__asm { je L_009f8333 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f831e }
	__asm { push 0x2f }
	__asm { push 0xe999d8 }
	__asm { push 0xe99a20 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f8333 }
	__asm { L_009f831e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe99a28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f8333: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009f841c }
	__asm { lea ecx, [edi + 0xd4] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_009f8382 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f836d }
	__asm { push 0x30 }
	__asm { push 0xe999d8 }
	__asm { push 0xe7e418 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f8382 }
	__asm { L_009f836d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe99a88 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f8382: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009f841c }
	__asm { lea ecx, [edi + 0xdc] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_009f83d1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f83bc }
	__asm { push 0x31 }
	__asm { push 0xe999d8 }
	__asm { push 0xe7e4a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f83d1 }
	__asm { L_009f83bc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe99af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f83d1: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009f841c }
	__asm { lea ecx, [edi + 0xe0] }
	__asm { call fn_006b9da0 }
	__asm { test al, al }
	__asm { je L_009f841c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f8407 }
	__asm { push 0x32 }
	__asm { push 0xe999d8 }
	__asm { push 0xe7e538 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f841c }
	__asm { L_009f8407: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe99b70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f841c: }
	__asm { push esi }
	__asm { lea esi, [edi + 0xe0] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test eax, eax }
	__asm { je L_009f8447 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009f8447: }
	__asm { lea esi, [edi + 0xdc] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_009f8472 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009f8472: }
	__asm { lea ecx, [edi + 0xd4] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00923320 }
	__asm { lea ecx, [edi + 0x70] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00d08530 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b915d0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe99314 }
	__asm { mov dword ptr [edi + 4], 0xe9938c }
	__asm { mov dword ptr [edi + 0x18], 0xe99394 }
	__asm { mov dword ptr [edi + 0x1c], 0xe993a0 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009f84e0
extern "C" __declspec(naked) void asm_009f84e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29038 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009f8527 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009f8527: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [edx + 0x8c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 4] }
	__asm { lea ecx, [edx + 0x8c] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009f8579 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009f8579 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009f8579 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009f8579: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012fc96a[];
extern "C" void fn_004226b0();
extern "C" void fn_006b8aae();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
extern "C" void fn_00923460();
extern "C" void fn_009f7910();
extern "C" void fn_009f8cf0();
// FUNCTION: ROBLOXSTUDIO 0x009f87d0
extern "C" __declspec(naked) void asm_009f87d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2c8b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_009f8cf0 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_009f88a5 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov ecx, ebx }
	__asm { call fn_007b49a0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx], 0x9f9410 }
	__asm { mov dword ptr [ecx + 4], 0xffffff78 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], edi }
	__asm { mov dword ptr [ecx + 0x10], esi }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [edx + 0x28] }
	__asm { call fn_009f7910 }
	__asm { lea ecx, [esi + 0xd4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00923460 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_009f8869 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009f8869: }
	__asm { cmp byte ptr [g_012fc96a], 0 }
	__asm { je L_009f88d5 }
	__asm { mov ecx, ebx }
	__asm { call fn_007b4990 }
	__asm { add eax, 0x28 }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_012fc96a] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0xe99be8 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009f88a5: }
	__asm { add esi, 0xd4 }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { je L_009f88ce }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_006b9da0 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0xe7dbe0 }
	__asm { push 1 }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_009f88ce: }
	__asm { mov ecx, esi }
	__asm { call fn_006b9e50 }
	__asm { L_009f88d5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_004199f0();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009f8cf0
extern "C" __declspec(naked) void asm_009f8cf0()
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
	__asm { push edi }
	__asm { push 6 }
	__asm { mov esi, ecx }
	__asm { push 0xe7e6ec }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_009f8d66 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_009f8d66 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009f8d66 }
	__asm { lea esi, [edi - 0x1c] }
	__asm { jmp L_009f8d68 }
	__asm { L_009f8d66: }
	__asm { xor esi, esi }
	__asm { L_009f8d68: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_009f8d79 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009f8d79: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009f84e0();
// FUNCTION: ROBLOXSTUDIO 0x009f8f80
extern "C" __declspec(naked) void asm_009f8f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29038 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009f8fc5 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009f8fc5: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { call fn_009f84e0 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009f9004 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009f9004 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009f9004 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009f9004: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007b4790();
extern "C" void fn_007cd560();
extern "C" void fn_009f9690();
extern "C" void fn_009f9d90();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x009f90d0
extern "C" __declspec(naked) void asm_009f90d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov edx, dword ptr [edx + 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { test edx, edx }
	__asm { je L_009f911e }
	__asm { mov eax, dword ptr [edx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009f90f8 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009f90fa }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009f90fa }
	__asm { L_009f90f8: }
	__asm { mov eax, edx }
	__asm { L_009f90fa: }
	__asm { test eax, eax }
	__asm { je L_009f911e }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_009f911e }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009f911e }
	__asm { add edi, -0x1c }
	__asm { jne L_009f9120 }
	__asm { L_009f911e: }
	__asm { xor edi, edi }
	__asm { L_009f9120: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_009f9169 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009f913f }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009f9141 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009f9141 }
	__asm { L_009f913f: }
	__asm { mov eax, ecx }
	__asm { L_009f9141: }
	__asm { test eax, eax }
	__asm { je L_009f9169 }
	__asm { add eax, 0x1c }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_009f9169 }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009f9169 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { add esi, -0x1c }
	__asm { jne L_009f916b }
	__asm { L_009f9169: }
	__asm { xor esi, esi }
	__asm { L_009f916b: }
	__asm { test edi, edi }
	__asm { je L_009f9194 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009f918a }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_009f9d90 }
	__asm { jmp L_009f9194 }
	__asm { L_009f918a: }
	__asm { mov dword ptr [ebx + 0xa0], 0 }
	__asm { L_009f9194: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_007b4790 }
	__asm { test esi, esi }
	__asm { je L_009f91b8 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009f91b8 }
	__asm { mov ecx, ebx }
	__asm { call fn_009f9690 }
	__asm { L_009f91b8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00463db0();
extern "C" void fn_006b9740();
extern "C" void fn_009f9690();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x009f92f0
extern "C" __declspec(naked) void asm_009f92f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ebp + 8], esi }
	__asm { je L_009f93c1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009f93ba }
	__asm { push esi }
	__asm { call fn_00463db0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_009f936c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f9357 }
	__asm { push 0x189 }
	__asm { push 0xe999d8 }
	__asm { push 0xe7eb88 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f936c }
	__asm { L_009f9357: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe99ff8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f936c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009f93ba }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_009f93ba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f93a5 }
	__asm { push 0x18a }
	__asm { push 0xe999d8 }
	__asm { push 0xe7e808 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f93ba }
	__asm { L_009f93a5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9a078 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f93ba: }
	__asm { mov ecx, esi }
	__asm { call fn_009f9690 }
	__asm { L_009f93c1: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009f93f5 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009f93f5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009f93f5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009f93f5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007b5ea0();
extern "C" void fn_009d8ed0();
extern "C" void fn_009d9c50();
extern "C" void fn_009f7a90();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x009f9410
extern "C" __declspec(naked) void asm_009f9410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_009f9481 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_009f9481 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f946c }
	__asm { push 0x1b5 }
	__asm { push 0xe999d8 }
	__asm { push 0xe7e808 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f9481 }
	__asm { L_009f946c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9a2a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f9481: }
	__asm { cmp dword ptr [esi + 0xa0], 2 }
	__asm { jne L_009f94c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_009f94c0 }
	__asm { mov edi, dword ptr [edi + 0x38] }
	__asm { push edi }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009f94c0 }
	__asm { mov ecx, eax }
	__asm { call fn_009d8ed0 }
	__asm { test eax, eax }
	__asm { je L_009f94c0 }
	__asm { mov ecx, edi }
	__asm { call fn_009f7a90 }
	__asm { test eax, eax }
	__asm { jne L_009f94c0 }
	__asm { push eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_007b5ea0 }
	__asm { L_009f94c0: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009f94f4 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009f94f4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009f94f4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009f94f4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00463db0();
extern "C" void fn_006b9740();
extern "C" void fn_009f9690();
extern "C" void fn_009f9d90();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x009f9510
extern "C" __declspec(naked) void asm_009f9510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ebp + 8], esi }
	__asm { je L_009f9644 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009f95da }
	__asm { push esi }
	__asm { call fn_00463db0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_009f958c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f9577 }
	__asm { push 0x193 }
	__asm { push 0xe999d8 }
	__asm { push 0xe7eb88 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f958c }
	__asm { L_009f9577: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9a0f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f958c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009f95da }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_009f95da }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f95c5 }
	__asm { push 0x194 }
	__asm { push 0xe999d8 }
	__asm { push 0xe7e808 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f95da }
	__asm { L_009f95c5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9a178 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f95da: }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { jne L_009f963d }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009f962a }
	__asm { cmp dword ptr [esi + 0xa0], 4 }
	__asm { jge L_009f962a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f9615 }
	__asm { push 0x198 }
	__asm { push 0xe999d8 }
	__asm { push 0xe9a1f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f962a }
	__asm { L_009f9615: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9a220 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f962a: }
	__asm { push esi }
	__asm { call fn_00463db0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { push 0 }
	__asm { call fn_009f9d90 }
	__asm { L_009f963d: }
	__asm { mov ecx, esi }
	__asm { call fn_009f9690 }
	__asm { L_009f9644: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009f9678 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009f9678 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009f9678 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009f9678: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_006b9740();
extern "C" void fn_007cd560();
extern "C" void fn_009f8730();
extern "C" void fn_009f9d90();
// FUNCTION: ROBLOXSTUDIO 0x009f9690
extern "C" __declspec(naked) void asm_009f9690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_009f8730 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test edi, edi }
	__asm { je L_009f96e2 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_009f96ba }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_009f96bc }
	__asm { call fn_0043ee40 }
	__asm { jmp L_009f96bc }
	__asm { L_009f96ba: }
	__asm { mov eax, edi }
	__asm { L_009f96bc: }
	__asm { test eax, eax }
	__asm { je L_009f96e2 }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_009f96e2 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009f96e2 }
	__asm { lea esi, [ebx - 0x1c] }
	__asm { test esi, esi }
	__asm { jne L_009f96e4 }
	__asm { L_009f96e2: }
	__asm { xor esi, esi }
	__asm { L_009f96e4: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009f9729 }
	__asm { test esi, esi }
	__asm { jne L_009f9729 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009f9718 }
	__asm { push 0xa7 }
	__asm { push 0xe999d8 }
	__asm { push 0xe7e798 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f9729 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009f9718: }
	__asm { movzx eax, al }
	__asm { push 0xe99c40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f9729: }
	__asm { push esi }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov ecx, edi }
	__asm { call fn_009f9d90 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038044[];
extern "C" char g_010385f0[];
extern "C" void fn_006d19a0();
extern "C" void fn_006d1e60();
extern "C" void fn_006d1e90();
extern "C" void fn_006ddf90();
extern "C" void fn_009f4f40();
extern "C" void fn_009f9970();
// FUNCTION: ROBLOXSTUDIO 0x009f97f0
extern "C" __declspec(naked) void asm_009f97f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x6c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { lea esi, [edi + 0xa4] }
	__asm { push esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_006d1e60 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_009f4f40 }
	__asm { fld dword ptr [g_01038044] }
	__asm { movss xmm6, dword ptr [eax + 4] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm5, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { movss xmm3, dword ptr [ebp - 0x2c] }
	__asm { movss xmm2, dword ptr [ebp - 0x28] }
	__asm { xorps xmm5, xmm0 }
	__asm { xorps xmm6, xmm0 }
	__asm { xorps xmm4, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { movaps xmm1, xmm3 }
	__asm { mulss xmm1, xmm4 }
	__asm { mulss xmm0, xmm6 }
	__asm { mulss xmm2, xmm5 }
	__asm { subss xmm1, xmm0 }
	__asm { mulss xmm3, xmm5 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { movss xmm1, dword ptr [ebp - 0x30] }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm6 }
	__asm { subss xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 0x18], xmm5 }
	__asm { subss xmm1, xmm3 }
	__asm { movss dword ptr [ebp - 0x14], xmm6 }
	__asm { movss dword ptr [ebp - 0x10], xmm4 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { call fn_006ddf90 }
	__asm { fstp st(0) }
	__asm { movss xmm4, dword ptr [ebp - 4] }
	__asm { fld dword ptr [g_01038044] }
	__asm { movss xmm6, dword ptr [ebp - 8] }
	__asm { movss xmm3, dword ptr [ebp - 0xc] }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, dword ptr [ebp - 0x10] }
	__asm { mulss xmm6, dword ptr [ebp - 0x18] }
	__asm { movaps xmm2, xmm4 }
	__asm { mulss xmm2, dword ptr [ebp - 0x14] }
	__asm { mulss xmm4, dword ptr [ebp - 0x18] }
	__asm { subss xmm2, xmm0 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { fstp dword ptr [esp] }
	__asm { movss dword ptr [ebp - 0x24], xmm2 }
	__asm { movaps xmm2, xmm3 }
	__asm { mulss xmm2, dword ptr [ebp - 0x10] }
	__asm { mulss xmm3, dword ptr [ebp - 0x14] }
	__asm { subss xmm2, xmm4 }
	__asm { subss xmm6, xmm3 }
	__asm { movss dword ptr [ebp - 0x20], xmm2 }
	__asm { movss dword ptr [ebp - 0x1c], xmm6 }
	__asm { call fn_006ddf90 }
	__asm { fstp st(0) }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_006d1e90 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_006d1e90 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_006d1e90 }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_009f9970 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006d1ee0();
extern "C" void fn_007b4f50();
extern "C" void fn_00914f10();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x009f9970
extern "C" __declspec(naked) void asm_009f9970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movss xmm0, dword ptr [edx + 0x24] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0xc8] }
	__asm { lea ebx, [ecx + 0xa4] }
	__asm { lahf }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test ah, 0x44 }
	__asm { jp L_009f99c4 }
	__asm { movss xmm0, dword ptr [edx + 0x28] }
	__asm { ucomiss xmm0, dword ptr [ebx + 0x28] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_009f99c4 }
	__asm { movss xmm0, dword ptr [edx + 0x2c] }
	__asm { ucomiss xmm0, dword ptr [ebx + 0x2c] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_009f99c4 }
	__asm { push ebx }
	__asm { mov ecx, edx }
	__asm { call fn_006d1ee0 }
	__asm { test al, al }
	__asm { jne L_009f9a51 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_009f99c4: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov ecx, 9 }
	__asm { mov edi, ebx }
	__asm { rep movsd }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [ebx + 0x24] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [ebx + 0x28] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [ebx + 0x2c] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { push 0x13062ac }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { je L_009f9a4f }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009f9a46 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_009f9a46 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009f9a31 }
	__asm { push 0x1ef }
	__asm { push 0xe999d8 }
	__asm { push 0xe7e808 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009f9a46 }
	__asm { L_009f9a31: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9a320 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009f9a46: }
	__asm { mov ecx, dword ptr [esi + 0x68] }
	__asm { push ebx }
	__asm { call fn_00914f10 }
	__asm { L_009f9a4f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_009f9a51: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038044[];
extern "C" void fn_006d19a0();
extern "C" void fn_006d1e60();
extern "C" void fn_006d1e90();
extern "C" void fn_006ddf90();
extern "C" void fn_009f4f40();
extern "C" void fn_009f9970();
// FUNCTION: ROBLOXSTUDIO 0x009f9aa0
extern "C" __declspec(naked) void asm_009f9aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x60 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { lea esi, [edi + 0xa4] }
	__asm { push esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006d1e60 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_009f4f40 }
	__asm { fld dword ptr [g_01038044] }
	__asm { movss xmm2, dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { mulss xmm2, dword ptr [ebp - 0x28] }
	__asm { movss xmm0, dword ptr [ebp - 0x2c] }
	__asm { mulss xmm0, dword ptr [ebp - 4] }
	__asm { movss xmm3, dword ptr [ebp - 0x30] }
	__asm { movss xmm1, dword ptr [ebp - 0xc] }
	__asm { subss xmm2, xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [ebp - 0x28] }
	__asm { mulss xmm1, dword ptr [ebp - 0x2c] }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { movaps xmm2, xmm3 }
	__asm { mulss xmm2, dword ptr [ebp - 4] }
	__asm { mulss xmm3, dword ptr [ebp - 8] }
	__asm { subss xmm2, xmm0 }
	__asm { add esp, 4 }
	__asm { subss xmm1, xmm3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { movss dword ptr [ebp - 0x14], xmm2 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { call fn_006ddf90 }
	__asm { fstp st(0) }
	__asm { movss xmm6, dword ptr [ebp - 0x14] }
	__asm { fld dword ptr [g_01038044] }
	__asm { movss xmm4, dword ptr [ebp - 0x10] }
	__asm { movss xmm2, dword ptr [ebp - 0x18] }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [ebp - 8] }
	__asm { mulss xmm4, dword ptr [ebp - 0xc] }
	__asm { movaps xmm1, xmm6 }
	__asm { mulss xmm1, dword ptr [ebp - 4] }
	__asm { mulss xmm6, dword ptr [ebp - 0xc] }
	__asm { subss xmm1, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [ebp - 4] }
	__asm { mulss xmm2, dword ptr [ebp - 8] }
	__asm { subss xmm4, xmm0 }
	__asm { push ecx }
	__asm { subss xmm2, xmm6 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { movss dword ptr [ebp - 0x24], xmm1 }
	__asm { fstp dword ptr [esp] }
	__asm { movss dword ptr [ebp - 0x20], xmm4 }
	__asm { movss dword ptr [ebp - 0x1c], xmm2 }
	__asm { call fn_006ddf90 }
	__asm { fstp st(0) }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006d1e90 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006d1e90 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006d1e90 }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_009f9970 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_01038044[];
extern "C" void fn_006d19a0();
extern "C" void fn_006d1e60();
extern "C" void fn_006d1e90();
extern "C" void fn_006ddf90();
extern "C" void fn_009f4f40();
extern "C" void fn_009f9970();
// FUNCTION: ROBLOXSTUDIO 0x009f9c00
extern "C" __declspec(naked) void asm_009f9c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x60 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { lea esi, [edi + 0xa4] }
	__asm { push esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006d1e60 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_009f4f40 }
	__asm { fld dword ptr [g_01038044] }
	__asm { movss xmm2, dword ptr [ebp - 0x2c] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { mulss xmm2, dword ptr [ebp - 4] }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { mulss xmm0, dword ptr [ebp - 0x28] }
	__asm { movss xmm3, dword ptr [ebp - 0xc] }
	__asm { movss xmm1, dword ptr [ebp - 0x30] }
	__asm { subss xmm2, xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [ebp - 4] }
	__asm { mulss xmm1, dword ptr [ebp - 8] }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { movaps xmm2, xmm3 }
	__asm { mulss xmm2, dword ptr [ebp - 0x28] }
	__asm { mulss xmm3, dword ptr [ebp - 0x2c] }
	__asm { subss xmm2, xmm0 }
	__asm { add esp, 4 }
	__asm { subss xmm1, xmm3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { movss dword ptr [ebp - 0x14], xmm2 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { call fn_006ddf90 }
	__asm { fstp st(0) }
	__asm { movss xmm4, dword ptr [ebp - 0x10] }
	__asm { fld dword ptr [g_01038044] }
	__asm { movss xmm6, dword ptr [ebp - 0x14] }
	__asm { movss xmm3, dword ptr [ebp - 0x18] }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, dword ptr [ebp - 4] }
	__asm { mulss xmm6, dword ptr [ebp - 0xc] }
	__asm { movaps xmm2, xmm4 }
	__asm { mulss xmm2, dword ptr [ebp - 8] }
	__asm { mulss xmm4, dword ptr [ebp - 0xc] }
	__asm { subss xmm2, xmm0 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { fstp dword ptr [esp] }
	__asm { movss dword ptr [ebp - 0x24], xmm2 }
	__asm { movaps xmm2, xmm3 }
	__asm { mulss xmm2, dword ptr [ebp - 4] }
	__asm { mulss xmm3, dword ptr [ebp - 8] }
	__asm { subss xmm2, xmm4 }
	__asm { subss xmm6, xmm3 }
	__asm { movss dword ptr [ebp - 0x20], xmm2 }
	__asm { movss dword ptr [ebp - 0x1c], xmm6 }
	__asm { call fn_006ddf90 }
	__asm { fstp st(0) }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006d1e90 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006d1e90 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006d1e90 }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_009f9970 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_004039a0();
extern "C" void fn_006b8aae();
extern "C" void fn_006b9da0();
extern "C" void fn_006b9e50();
extern "C" void fn_00891470();
extern "C" void fn_009d86b0();
extern "C" void fn_009d8e80();
extern "C" void fn_009d9c50();
extern "C" void fn_009f8cf0();
extern "C" void fn_00b58c10();
extern "C" void fn_00b91680();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009f9ff0
extern "C" __declspec(naked) void asm_009f9ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd42e00 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x58 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0xd8], 0 }
	__asm { lea edi, [esi + 0xd4] }
	__asm { je L_009fa03b }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b9da0 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0xe7dbe0 }
	__asm { push 1 }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_009fa03b: }
	__asm { mov ecx, edi }
	__asm { call fn_006b9e50 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00891470 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00b58c10 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_009d9c50 }
	__asm { mov edi, eax }
	__asm { add esp, 0x10 }
	__asm { test edi, edi }
	__asm { je L_009fa0f0 }
	__asm { mov ecx, edi }
	__asm { call fn_009d86b0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_009fa0f0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_009f8cf0 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_009fa0ef }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0xe4] }
	__asm { push 0xe99fe8 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_004039a0 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea eax, [esi + 0xa4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009d8e80 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 0x64] }
	__asm { call fn_00b91680 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_009fa0ef }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fa0ef: }
	__asm { pop ebx }
	__asm { L_009fa0f0: }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_009fa140 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { cmp eax, edi }
	__asm { je L_009fa137 }
	__asm { lea esi, [eax + 4] }
	__asm { L_009fa113: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_009fa12a }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fa12a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fa12a: }
	__asm { add esi, 8 }
	__asm { lea eax, [esi - 4] }
	__asm { cmp eax, edi }
	__asm { jne L_009fa113 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { L_009fa137: }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fa140: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012dc674[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01306440[];
extern "C" char g_01306444[];
extern "C" void fn_0040bb80();
extern "C" void fn_0052c370();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
extern "C" void fn_007cbf10();
extern "C" void fn_009fa550();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fa3b0
extern "C" __declspec(naked) void asm_009fa3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42e56 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009fa550 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012dc674] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009fa46f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc674], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9a41c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052c370 }
	__asm { push eax }
	__asm { mov ecx, 0x12dc548 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfca0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009fa46f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12dc548 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9a568 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009fa4ed }
	__asm { push 0x11d7954 }
	__asm { mov ecx, 0x11d7954 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009fa4ed }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009fa4d8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fa4ed }
	__asm { L_009fa4d8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fa4ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd42e8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01306444] }
	__asm { test al, 1 }
	__asm { jne L_009fa542 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306444], eax }
	__asm { push 0xe9a418 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01306440], eax }
	__asm { L_009fa542: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e6e5c[];
extern "C" void fn_006b9740();
extern "C" void fn_007707e0();
extern "C" void fn_007cbf10();
extern "C" void fn_008841a0();
extern "C" void fn_009fb1e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fa7a0
extern "C" __declspec(naked) void asm_009fa7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42ec6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009fb1e0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e6e5c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009fa85f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6e5c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x10036d0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007707e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6d30 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009fa85f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e6d30 }
	__asm { call fn_008841a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9ab44 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009fa8dd }
	__asm { push 0x1248890 }
	__asm { mov ecx, 0x1248890 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009fa8dd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009fa8c8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fa8dd }
	__asm { L_009fa8c8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fa8dd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e6f8c[];
extern "C" void fn_006b9740();
extern "C" void fn_007707e0();
extern "C" void fn_007cbf10();
extern "C" void fn_008841a0();
extern "C" void fn_009fb240();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x009fa8f0
extern "C" __declspec(naked) void asm_009fa8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42ef6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009fb240 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e6f8c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009fa9af }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e6f8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003718 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007707e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6e60 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7dd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009fa9af: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e6e60 }
	__asm { call fn_008841a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9ace4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009faa2d }
	__asm { push 0x1248878 }
	__asm { mov ecx, 0x1248878 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009faa2d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009faa18 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009faa2d }
	__asm { L_009faa18: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009faa2d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e70bc[];
extern "C" void fn_006b9740();
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00869000();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009faa40
extern "C" __declspec(naked) void asm_009faa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42f26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [g_012e70bc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009faaec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e70bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003664 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6f90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7620 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009faaec: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e6f90 }
	__asm { call fn_00869000 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe950d4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009fab69 }
	__asm { push 0x12488c0 }
	__asm { mov ecx, 0x12488c0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009fab69 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009fab54 }
	__asm { push 0x1d6 }
	__asm { push 0xe4fb58 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fab69 }
	__asm { L_009fab54: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe728f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fab69: }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_009fab96 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe9b184 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { jmp L_009fab98 }
	__asm { L_009fab96: }
	__asm { xor edi, edi }
	__asm { L_009fab98: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp edi, eax }
	__asm { je L_009faba8 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009faba8: }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009fabbc }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_009fabbc: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_009fabcf }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_009fabcf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e0444[];
extern "C" void fn_006b9740();
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_008841a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009fabf0
extern "C" __declspec(naked) void asm_009fabf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42f56 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [g_012e0444] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009fac9c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0444], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9a60c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0318 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1530 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009fac9c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e0318 }
	__asm { call fn_008841a0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9a788 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009fad19 }
	__asm { push 0x124885c }
	__asm { mov ecx, 0x124885c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009fad19 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009fad04 }
	__asm { push 0x1d6 }
	__asm { push 0xe4fb58 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fad19 }
	__asm { L_009fad04: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe728f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fad19: }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_009fad46 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe9b15c }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { jmp L_009fad48 }
	__asm { L_009fad46: }
	__asm { xor edi, edi }
	__asm { L_009fad48: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp edi, eax }
	__asm { je L_009fad58 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fad58: }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009fad6c }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_009fad6c: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_009fad7f }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_009fad7f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e0314[];
extern "C" void fn_006b9740();
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_008841a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009fada0
extern "C" __declspec(naked) void asm_009fada0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42f86 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [g_012e0314] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009fae4c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0314], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003720 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e01e8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009fae4c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e01e8 }
	__asm { call fn_008841a0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9a788 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009faec9 }
	__asm { push 0x124883c }
	__asm { mov ecx, 0x124883c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009faec9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009faeb4 }
	__asm { push 0x1d6 }
	__asm { push 0xe4fb58 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009faec9 }
	__asm { L_009faeb4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe728f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009faec9: }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_009faef6 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe9b148 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { jmp L_009faef8 }
	__asm { L_009faef6: }
	__asm { xor edi, edi }
	__asm { L_009faef8: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp edi, eax }
	__asm { je L_009faf08 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009faf08: }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009faf1c }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_009faf1c: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_009faf2f }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_009faf2f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e71ec[];
extern "C" void fn_006b9740();
extern "C" void fn_007706e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00869000();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009faf50
extern "C" __declspec(naked) void asm_009faf50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd42fb6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [g_012e71ec] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_009faffc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e71ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003744 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007706e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e70c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_009faffc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e70c0 }
	__asm { call fn_00869000 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe950d4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_009fb079 }
	__asm { push 0x12488a8 }
	__asm { mov ecx, 0x12488a8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_009fb079 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_009fb064 }
	__asm { push 0x1d6 }
	__asm { push 0xe4fb58 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fb079 }
	__asm { L_009fb064: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe728f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fb079: }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_009fb0a6 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe9b170 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { jmp L_009fb0a8 }
	__asm { L_009fb0a6: }
	__asm { xor edi, edi }
	__asm { L_009fb0a8: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp edi, eax }
	__asm { je L_009fb0b8 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fb0b8: }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_009fb0cc }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_009fb0cc: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_009fb0df }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_009fb0df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_0130666c[];
extern "C" char g_01306670[];
extern "C" char g_01306674[];
extern "C" char g_01306678[];
extern "C" void fn_007cb250();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x009fb100
extern "C" __declspec(naked) void asm_009fb100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4318e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01306670] }
	__asm { test al, 1 }
	__asm { jne L_009fb142 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306670], eax }
	__asm { push 0xe9a628 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130666c], eax }
	__asm { L_009fb142: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd42fce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01306678] }
	__asm { test al, 1 }
	__asm { jne L_009fb192 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01306678], eax }
	__asm { push 0xe9a61c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01306674], eax }
	__asm { L_009fb192: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x11c] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x120] }
	__asm { cmp esi, edi }
	__asm { je L_009fb1d5 }
	__asm { L_009fb1b2: }
	__asm { push 0 }
	__asm { push 0x12488a8 }
	__asm { push 0x1233b8c }
	__asm { push 0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_009fb1d7 }
	__asm { add esi, 4 }
	__asm { cmp esi, edi }
	__asm { jne L_009fb1b2 }
	__asm { L_009fb1d5: }
	__asm { xor eax, eax }
	__asm { L_009fb1d7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e9a60c[];
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_007cb440();
extern "C" void fn_009fb420();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fb8b0
extern "C" __declspec(naked) void asm_009fb8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43119 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_009fb420 }
	__asm { lea esi, [edi + 0x68] }
	__asm { mov dword ptr [edi], 0xe9a924 }
	__asm { mov dword ptr [edi + 4], 0xe9a9a8 }
	__asm { mov dword ptr [edi + 0x18], 0xe9a9b0 }
	__asm { mov dword ptr [edi + 0x1c], 0xe9a9bc }
	__asm { mov dword ptr [edi + 0x64], 0xe9a9cc }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea esi, [edi + 0x84] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00e9a60c], cl }
	__asm { mov eax, 8 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe9a60c }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_009fb99d }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fb99d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_007cb440();
extern "C" void fn_009fb660();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fba10
extern "C" __declspec(naked) void asm_009fba10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43153 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_009fb660 }
	__asm { lea esi, [edi + 0x68] }
	__asm { mov dword ptr [edi], 0xe9a7c4 }
	__asm { mov dword ptr [edi + 4], 0xe9a844 }
	__asm { mov dword ptr [edi + 0x18], 0xe9a84c }
	__asm { mov dword ptr [edi + 0x1c], 0xe9a858 }
	__asm { mov dword ptr [edi + 0x64], 0xe9a868 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { push 0xd }
	__asm { push 0xe9b0c4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_009fbac8 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fbac8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00532170();
extern "C" void fn_007cd560();
extern "C" void fn_009d86b0();
extern "C" void fn_009d8730();
extern "C" void fn_009d8740();
extern "C" void fn_009d8ac0();
extern "C" void fn_009d8ad0();
extern "C" void fn_009d90c0();
extern "C" void fn_009fb1a0();
// FUNCTION: ROBLOXSTUDIO 0x009fc020
extern "C" __declspec(naked) void asm_009fc020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 0x38] }
	__asm { test ebx, ebx }
	__asm { je L_009fc056 }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_009fc056 }
	__asm { mov ecx, ebx }
	__asm { test ecx, ecx }
	__asm { je L_009fc056 }
	__asm { call fn_009fb1a0 }
	__asm { test eax, eax }
	__asm { jne L_009fc0e9 }
	__asm { L_009fc056: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_009d86b0 }
	__asm { test eax, eax }
	__asm { je L_009fc071 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x68] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc071: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8740 }
	__asm { test eax, eax }
	__asm { je L_009fc089 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x78] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc089: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8ad0 }
	__asm { test eax, eax }
	__asm { je L_009fc0a1 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x7c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc0a1: }
	__asm { mov ecx, esi }
	__asm { call fn_009d90c0 }
	__asm { test eax, eax }
	__asm { je L_009fc0b9 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x74] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc0b9: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8730 }
	__asm { test eax, eax }
	__asm { je L_009fc0d1 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x6c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc0d1: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8ac0 }
	__asm { test eax, eax }
	__asm { je L_009fc0e9 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x70] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc0e9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009d86b0();
extern "C" void fn_009d8730();
extern "C" void fn_009d8740();
extern "C" void fn_009d8ac0();
extern "C" void fn_009d8ad0();
extern "C" void fn_009d90c0();
extern "C" void fn_009d9c50();
// FUNCTION: ROBLOXSTUDIO 0x009fc1c0
extern "C" __declspec(naked) void asm_009fc1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_009d86b0 }
	__asm { test eax, eax }
	__asm { je L_009fc1e2 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x68] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc1e2: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8740 }
	__asm { test eax, eax }
	__asm { je L_009fc1fa }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x68] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc1fa: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8ad0 }
	__asm { test eax, eax }
	__asm { je L_009fc212 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x68] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc212: }
	__asm { mov ecx, esi }
	__asm { call fn_009d90c0 }
	__asm { test eax, eax }
	__asm { je L_009fc22a }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x68] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc22a: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8730 }
	__asm { test eax, eax }
	__asm { je L_009fc242 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x68] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc242: }
	__asm { mov ecx, esi }
	__asm { call fn_009d8ac0 }
	__asm { test eax, eax }
	__asm { je L_009fc25a }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edi + 0x68] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x100] }
	__asm { L_009fc25a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009fc27a }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0x78] }
	__asm { L_009fc27a: }
	__asm { pop esi }
	__asm { ret 4 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_009fd300();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fd060
extern "C" __declspec(naked) void asm_009fd060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd432b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ecx + 0x68] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_009fd0e8 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push 0xe71738 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_009fd0f4 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { jmp L_009fd0f1 }
	__asm { L_009fd0e8: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_009fd300 }
	__asm { L_009fd0f1: }
	__asm { add esp, 4 }
	__asm { L_009fd0f4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fd170
extern "C" __declspec(naked) void asm_009fd170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43288 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_009fd20c }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push 0xe71738 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_009fd22f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009fd20c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { L_009fd22f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_009fd300();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fd250
extern "C" __declspec(naked) void asm_009fd250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd432b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ecx + 0x6c] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_009fd2d8 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push 0xe71738 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_009fd2e4 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { jmp L_009fd2e1 }
	__asm { L_009fd2d8: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_009fd300 }
	__asm { L_009fd2e1: }
	__asm { add esp, 4 }
	__asm { L_009fd2e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009fda50();
// FUNCTION: ROBLOXSTUDIO 0x009fd400
extern "C" __declspec(naked) void asm_009fd400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd639e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009fd452 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fd452: }
	__asm { mov ecx, esi }
	__asm { call fn_009fda50 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009fd478 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fd478 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fd478: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_009fd400();
// FUNCTION: ROBLOXSTUDIO 0x009fd490
extern "C" __declspec(naked) void asm_009fd490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd639e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009fd4de }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fd4de: }
	__asm { mov ecx, esi }
	__asm { call fn_009fd400 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009fd504 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fd504 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fd504: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_009fdaf0();
// FUNCTION: ROBLOXSTUDIO 0x009fd520
extern "C" __declspec(naked) void asm_009fd520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd639e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009fd572 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fd572: }
	__asm { mov ecx, esi }
	__asm { call fn_009fdaf0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009fd598 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fd598 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fd598: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_009fd520();
// FUNCTION: ROBLOXSTUDIO 0x009fd5b0
extern "C" __declspec(naked) void asm_009fd5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd639e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009fd5fe }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fd5fe: }
	__asm { mov ecx, esi }
	__asm { call fn_009fd520 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009fd624 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fd624 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fd624: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
extern "C" void fn_009fdd80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fd640
extern "C" __declspec(naked) void asm_009fd640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54e80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x24 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add edx, 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { test eax, eax }
	__asm { je L_009fd697 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fd697: }
	__asm { lea ecx, [edx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009fdd80 }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_009fd6df }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fd6df: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x28], 0xf }
	__asm { mov dword ptr [ebp + 0x24], 0 }
	__asm { mov byte ptr [ebp + 0x14], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009fd709 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fd709 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fd709: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_009fd640();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fd720
extern "C" __declspec(naked) void asm_009fd720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54e80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x24 }
	__asm { mov edx, esp }
	__asm { add edx, 4 }
	__asm { mov dword ptr [edx - 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { test eax, eax }
	__asm { je L_009fd774 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fd774: }
	__asm { lea ecx, [edx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009fd640 }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_009fd7bc }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fd7bc: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x28], 0xf }
	__asm { mov dword ptr [ebp + 0x24], 0 }
	__asm { mov byte ptr [ebp + 0x14], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009fd7e6 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fd7e6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fd7e6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403160();
extern "C" void fn_009fd8a0();
// FUNCTION: ROBLOXSTUDIO 0x009fd800
extern "C" __declspec(naked) void asm_009fd800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009fd8a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_009fd877 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009fd876 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_009fd876 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fd876: }
	__asm { pop ebx }
	__asm { L_009fd877: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x009fd9c0
extern "C" __declspec(naked) void asm_009fd9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0x18 }
	__asm { mov esi, ecx }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov ecx, esp }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_009fda12 }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fda12: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_009fda36 }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_009fda36: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00c3bbb0();
// FUNCTION: ROBLOXSTUDIO 0x009fda50
extern "C" __declspec(naked) void asm_009fda50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd639e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009fdaa1 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fdaa1: }
	__asm { mov esi, 0xe9b7b4 }
	__asm { mov ecx, esi }
	__asm { call fn_00c3bbb0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009fdad5 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fdad5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fdad5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c3bbb0();
// FUNCTION: ROBLOXSTUDIO 0x009fdaf0
extern "C" __declspec(naked) void asm_009fdaf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd639e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009fdb41 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fdb41: }
	__asm { mov esi, 0xe9b7bc }
	__asm { mov ecx, esi }
	__asm { call fn_00c3bbb0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009fdb75 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fdb75 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fdb75: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_0040c260();
extern "C" void fn_00679ab0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fdb90
extern "C" __declspec(naked) void asm_009fdb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43320 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_009fdc2f }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { sub esp, 0x24 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea edx, [ecx + 4] }
	__asm { mov dword ptr [ebp + 0x2c], edx }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009fdbfb }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fdbfb: }
	__asm { lea ecx, [edx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00679ab0 }
	__asm { mov bl, 1 }
	__asm { jmp L_009fdc31 }
	__asm { L_009fdc2f: }
	__asm { xor bl, bl }
	__asm { L_009fdc31: }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_009fdc49 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fdc49: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x28], 0xf }
	__asm { mov dword ptr [ebp + 0x24], 0 }
	__asm { mov byte ptr [ebp + 0x14], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009fdc73 }
	__asm { lea edx, [ecx + 8] }
	__asm { or esi, 0xffffffff }
	__asm { lock xadd dword ptr [edx], esi }
	__asm { jne L_009fdc73 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { call dword ptr [edx + 8] }
	__asm { L_009fdc73: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00403540();
extern "C" void fn_009fdb90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fdc90
extern "C" __declspec(naked) void asm_009fdc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43320 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { sub esp, 0x24 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea edx, [ecx + 4] }
	__asm { mov dword ptr [ebp + 0x2c], edx }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_009fdcec }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fdcec: }
	__asm { lea ecx, [edx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009fdb90 }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_009fdd36 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fdd36: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x28], 0xf }
	__asm { mov dword ptr [ebp + 0x24], 0 }
	__asm { mov byte ptr [ebp + 0x14], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009fdd60 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fdd60 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fdd60: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_009fdc90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fdd80
extern "C" __declspec(naked) void asm_009fdd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54e80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x24 }
	__asm { mov edx, esp }
	__asm { add edx, 4 }
	__asm { mov dword ptr [edx - 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { test eax, eax }
	__asm { je L_009fddd7 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fddd7: }
	__asm { lea ecx, [edx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, 0xe9b7dc }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009fdc90 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_009fde2d }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fde2d: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x28], 0xf }
	__asm { mov dword ptr [ebp + 0x24], 0 }
	__asm { mov byte ptr [ebp + 0x14], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009fde57 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fde57 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fde57: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_0092eb50();
// FUNCTION: ROBLOXSTUDIO 0x009fde70
extern "C" __declspec(naked) void asm_009fde70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54b41 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov edi, 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_009fdec6 }
	__asm { add eax, 8 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fdec6: }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0092eb50 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test eax, eax }
	__asm { je L_009fdeed }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { inc edi }
	__asm { L_009fdeed: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test ecx, ecx }
	__asm { je L_009fdf0e }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fdf0e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fdf0e: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009fdf28 }
	__asm { lea edx, [ecx + 8] }
	__asm { lock xadd dword ptr [edx], edi }
	__asm { dec edi }
	__asm { jne L_009fdf28 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { call dword ptr [edx + 8] }
	__asm { L_009fdf28: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_009fe950();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fdf40
extern "C" __declspec(naked) void asm_009fdf40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43369 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, 1 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_009fdfbd }
	__asm { add eax, 8 }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fdfbd: }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_009fe950 }
	__asm { mov ebx, eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { lea edx, [edi + 4] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_009fdfeb }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { inc esi }
	__asm { L_009fdfeb: }
	__asm { lea ecx, [edx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebx + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jb L_009fe02c }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fe02c: }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009fe058 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fe058 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fe058: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_009fe072 }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_009fe072 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fe072: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { jb L_009fe083 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fe083: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004030b0();
extern "C" void fn_00403540();
extern "C" void fn_009fe3b0();
extern "C" void fn_009ff570();
extern "C" void fn_009ff660();
extern "C" void fn_00a01040();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fe110
extern "C" __declspec(naked) void asm_009fe110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd433b9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_004030b0 }
	__asm { movzx edx, byte ptr [esi] }
	__asm { lea ecx, [esi + 1] }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { add ecx, edx }
	__asm { je L_009fe14b }
	__asm { inc ecx }
	__asm { jmp L_009fe14d }
	__asm { L_009fe14b: }
	__asm { xor ecx, ecx }
	__asm { L_009fe14d: }
	__asm { push ecx }
	__asm { push edi }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009fe3b0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_009fe17e }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009fe17e: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_009fe188 }
	__asm { inc eax }
	__asm { jmp L_009fe18a }
	__asm { L_009fe188: }
	__asm { xor eax, eax }
	__asm { L_009fe18a: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009ff660 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_009fe1da }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push -1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_009fe1da: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x13], 1 }
	__asm { call fn_00a01040 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009ff570 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov byte ptr [edi + 4], 1 }
	__asm { test esi, esi }
	__asm { je L_009fe240 }
	__asm { cmp byte ptr [ebp - 0x13], 0 }
	__asm { je L_009fe237 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_009fe226 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fe226: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_009fe237: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fe240: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004030b0();
extern "C" void fn_00403540();
extern "C" void fn_0066da90();
extern "C" void fn_0066e0d0();
extern "C" void fn_0095a840();
extern "C" void fn_00b267c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fe260
extern "C" __declspec(naked) void asm_009fe260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd433e9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { call fn_004030b0 }
	__asm { movzx edx, byte ptr [ebx] }
	__asm { lea ecx, [ebx + 1] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { add ecx, edx }
	__asm { je L_009fe29b }
	__asm { inc ecx }
	__asm { jmp L_009fe29d }
	__asm { L_009fe29b: }
	__asm { xor ecx, ecx }
	__asm { L_009fe29d: }
	__asm { push ecx }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0095a840 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_009fe2cd }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009fe2cd: }
	__asm { lea eax, [ebx + 3] }
	__asm { test eax, eax }
	__asm { je L_009fe2d7 }
	__asm { inc eax }
	__asm { jmp L_009fe2d9 }
	__asm { L_009fe2d7: }
	__asm { xor eax, eax }
	__asm { L_009fe2d9: }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov word ptr [ebp - 0x18], 0 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b267c0 }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_009fe332 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push -1 }
	__asm { mov esi, dword ptr [eax] }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { L_009fe332: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x17], 1 }
	__asm { call fn_0066e0d0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0066da90 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov byte ptr [edi + 4], 1 }
	__asm { test esi, esi }
	__asm { je L_009fe39a }
	__asm { cmp byte ptr [ebp - 0x17], 0 }
	__asm { je L_009fe391 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_009fe380 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fe380: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_009fe391: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fe39a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00b23b30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fe500
extern "C" __declspec(naked) void asm_009fe500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43421 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00b23b30 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_009fe5b4 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009fe5b3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009fe5b3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fe5b3: }
	__asm { pop edi }
	__asm { L_009fe5b4: }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_009fe5c5 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fe5c5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009fd800();
// FUNCTION: ROBLOXSTUDIO 0x009fe5e0
extern "C" __declspec(naked) void asm_009fe5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_009fd800 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { je L_009fe636 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009fe636 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009fe636 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fe636: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009fd930();
extern "C" void fn_00b9e010();
// FUNCTION: ROBLOXSTUDIO 0x009fe640
extern "C" __declspec(naked) void asm_009fe640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_009fd930 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [edx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_009fe68b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009fe68a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_009fe68a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fe68a: }
	__asm { pop ebx }
	__asm { L_009fe68b: }
	__asm { test edi, edi }
	__asm { je L_009fe69f }
	__asm { lea ecx, [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_009fe69f }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b9e010 }
	__asm { L_009fe69f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009fe8c0();
extern "C" void fn_009fee10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009fe6b0
extern "C" __declspec(naked) void asm_009fe6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43467 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], ebx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp eax, 1 }
	__asm { jne L_009fe723 }
	__asm { push 0x2c }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_009fe750 }
	__asm { mov ecx, edi }
	__asm { call fn_009fe8c0 }
	__asm { mov dword ptr [edi], 0xe9b574 }
	__asm { mov dword ptr [edi + 0x28], ebx }
	__asm { jmp L_009fe752 }
	__asm { L_009fe723: }
	__asm { test eax, eax }
	__asm { jne L_009fe772 }
	__asm { push 0x2c }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test edi, edi }
	__asm { je L_009fe750 }
	__asm { mov ecx, edi }
	__asm { call fn_009fe8c0 }
	__asm { mov dword ptr [edi], 0xe9b580 }
	__asm { mov dword ptr [edi + 0x28], ebx }
	__asm { jmp L_009fe752 }
	__asm { L_009fe750: }
	__asm { xor edi, edi }
	__asm { L_009fe752: }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { test ebx, ebx }
	__asm { je L_009fe7b0 }
	__asm { mov ecx, ebx }
	__asm { call fn_009fee10 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_009fe7b0 }
	__asm { L_009fe772: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009fe7b0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009fe79f }
	__asm { push 0x19 }
	__asm { push 0xe9b588 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009fe7b0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009fe79f: }
	__asm { movzx eax, al }
	__asm { push 0xe9b5d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009fe7b0: }
	__asm { push 0x28 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test eax, eax }
	__asm { je L_009fe7ce }
	__asm { mov ecx, eax }
	__asm { call fn_009fe8c0 }
	__asm { jmp L_009fe7d0 }
	__asm { L_009fe7ce: }
	__asm { xor eax, eax }
	__asm { L_009fe7d0: }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { test edi, edi }
	__asm { je L_009fe7ea }
	__asm { mov ecx, edi }
	__asm { call fn_009fee10 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fe7ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_009fead0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fe950
extern "C" __declspec(naked) void asm_009fe950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd434b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_009fe9c2 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fe9c2: }
	__asm { mov ecx, esi }
	__asm { call fn_009fead0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009fe9e5 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fe9e5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fe9e5: }
	__asm { cmp dword ptr [ebp + 0x30], 0x10 }
	__asm { jb L_009fe9f6 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fe9f6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_009a87c0();
// FUNCTION: ROBLOXSTUDIO 0x009fea10
extern "C" __declspec(naked) void asm_009fea10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48ae0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov edx, 1 }
	__asm { test esi, esi }
	__asm { je L_009fea55 }
	__asm { lea eax, [esi + 8] }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009fea55: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { test esi, esi }
	__asm { je L_009fea72 }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_009fea72: }
	__asm { mov ecx, edi }
	__asm { call fn_009a87c0 }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009fea96 }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fea96 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fea96: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009feab3 }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_009feab3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009feab3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00403540();
extern "C" void fn_009fea10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fead0
extern "C" __declspec(naked) void asm_009fead0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd434d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_009feb24 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009feb24: }
	__asm { mov ecx, esi }
	__asm { call fn_009fea10 }
	__asm { lea ecx, [esi + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009feb6c }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009feb6c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009feb6c: }
	__asm { cmp dword ptr [ebp + 0x30], 0x10 }
	__asm { jb L_009feb7d }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009feb7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_00e10194[];
extern "C" char g_00e9b3f4[];
extern "C" void fn_00403110();
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_009fe6b0();
extern "C" void fn_009fe800();
extern "C" void fn_009fee10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009feb90
extern "C" __declspec(naked) void asm_009feb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4354b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_009fe800 }
	__asm { mov byte ptr [esi + 0x6c], 1 }
	__asm { mov dword ptr [esi + 0x64], 0xe56300 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi], 0xe9b4b4 }
	__asm { mov dword ptr [esi + 4], 0xe9b538 }
	__asm { mov dword ptr [esi + 0x18], 0xe9b540 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9b54c }
	__asm { mov dword ptr [esi + 0x64], 0xe9b55c }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_009fec5a }
	__asm { sub eax, 4 }
	__asm { L_009fec5a: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x90], eax }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov dword ptr [esi + 0x98], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], 0 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00e9b3f4], cl }
	__asm { mov eax, 0x18 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe9b3f4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { jb L_009fece2 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fece2: }
	__asm { push 0x20 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { test edi, edi }
	__asm { je L_009fed24 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_009fe6b0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0x12c }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { jmp L_009fed26 }
	__asm { L_009fed24: }
	__asm { xor edi, edi }
	__asm { L_009fed26: }
	__asm { mov ebx, dword ptr [esi + 0x80] }
	__asm { mov dword ptr [esi + 0x80], edi }
	__asm { test ebx, ebx }
	__asm { je L_009fed7f }
	__asm { xor ecx, ecx }
	__asm { lea eax, [ebx + 0x14] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_009fed48 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_009fed48: }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009fed5f }
	__asm { mov ecx, edi }
	__asm { call fn_009fee10 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fed5f: }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { test edi, edi }
	__asm { je L_009fed76 }
	__asm { mov ecx, edi }
	__asm { call fn_009fee10 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fed76: }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009fed7f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009feda0
extern "C" __declspec(naked) void asm_009feda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test eax, eax }
	__asm { je L_009fee07 }
	__asm { push edi }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { je L_009fedff }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009fedf6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_009fedf6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fedf6: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009fedff: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009fee07: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10194[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_007b00e0();
extern "C" void fn_008d4960();
extern "C" void fn_009fee10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009fef80
extern "C" __declspec(naked) void asm_009fef80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4357b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe9b4b4 }
	__asm { mov dword ptr [edi + 4], 0xe9b538 }
	__asm { mov dword ptr [edi + 0x18], 0xe9b540 }
	__asm { mov dword ptr [edi + 0x1c], 0xe9b54c }
	__asm { mov dword ptr [edi + 0x64], 0xe9b55c }
	__asm { mov ecx, dword ptr [edi + 0xa0] }
	__asm { lea esi, [edi + 0x8c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_009ff00b }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_009feff2 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008d4960 }
	__asm { L_009feff2: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_009ff00b: }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edi + 0x88] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { mov ebx, dword ptr [g_00e10194] }
	__asm { test ecx, ecx }
	__asm { je L_009ff022 }
	__asm { push ecx }
	__asm { call ebx }
	__asm { L_009ff022: }
	__asm { mov esi, dword ptr [edi + 0x80] }
	__asm { test esi, esi }
	__asm { je L_009ff071 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [esi + 0x14] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_009ff03a }
	__asm { push ecx }
	__asm { call ebx }
	__asm { L_009ff03a: }
	__asm { mov ebx, dword ptr [esi + 0xc] }
	__asm { test ebx, ebx }
	__asm { je L_009ff051 }
	__asm { mov ecx, ebx }
	__asm { call fn_009fee10 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ff051: }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { test ebx, ebx }
	__asm { je L_009ff068 }
	__asm { mov ecx, ebx }
	__asm { call fn_009fee10 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ff068: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ff071: }
	__asm { mov esi, dword ptr [edi + 0x74] }
	__asm { test esi, esi }
	__asm { je L_009ff09e }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009ff09e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_009ff09e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ff09e: }
	__asm { lea esi, [edi + 0x68] }
	__asm { mov dword ptr [edi + 0x64], 0xe56300 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_009ff0cc }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_009ff0cc: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009ff0f0
extern "C" __declspec(naked) void asm_009ff0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b9ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { test esi, esi }
	__asm { je L_009ff154 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009ff154 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009ff154 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ff154: }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009ff185 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009ff185 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009ff185 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ff185: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a5d310();
// FUNCTION: ROBLOXSTUDIO 0x009ff1b0
extern "C" __declspec(naked) void asm_009ff1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd281a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5d310 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_009ff1f1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [eax + 0x78] }
	__asm { L_009ff1f1: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009ff225 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009ff225 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009ff225 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ff225: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_009ff242 }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009ff242 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ff242: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bbda70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ff260
extern "C" __declspec(naked) void asm_009ff260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd435a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edx, ecx }
	__asm { cmp dword ptr [edx + 0x70], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_009ff2bf }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_009ff2ad }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_009ff2ad: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x70] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_00bbda70 }
	__asm { L_009ff2bf: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009ff2f0 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009ff2f0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009ff2f0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ff2f0: }
	__asm { cmp dword ptr [ebp + 0x2c], 0x10 }
	__asm { jb L_009ff301 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ff301: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_009ff260();
extern "C" void fn_00a5d310();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ff320
extern "C" __declspec(naked) void asm_009ff320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd435d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00a5d310 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_009ff3ae }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_009ff3a1 }
	__asm { add eax, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_009ff3a1: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_009ff260 }
	__asm { L_009ff3ae: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_009ff3e0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009ff3e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009ff3e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ff3e0: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_009ff3fb }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009ff3fb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ff3fb: }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_009ff429 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009ff429 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_009ff429 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ff429: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { jb L_009ff43a }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ff43a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bc920();
extern "C" void fn_009ffa10();
extern "C" void fn_00a5d310();
// FUNCTION: ROBLOXSTUDIO 0x009ff450
extern "C" __declspec(naked) void asm_009ff450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd435f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00a5d310 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_009ff4db }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_009ffa10 }
	__asm { test eax, eax }
	__asm { je L_009ff4ae }
	__asm { lea eax, [esi + 0x78] }
	__asm { push eax }
	__asm { call fn_006bc920 }
	__asm { add esp, 4 }
	__asm { mov esi, 1 }
	__asm { jmp L_009ff4db }
	__asm { L_009ff4ae: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_009ff4d1 }
	__asm { add eax, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_009ff4d1: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x74] }
	__asm { mov esi, eax }
	__asm { L_009ff4db: }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_009ff50d }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009ff50d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009ff50d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ff50d: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_009ff528 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009ff528 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ff528: }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_009ff559 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009ff559 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_009ff559 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_009ff559: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009ff570
extern "C" __declspec(naked) void asm_009ff570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x1c], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_009ff5cd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_009ff5c0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_009ff5c0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_009ff5d8 }
	__asm { L_009ff5cd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_009ff5d8: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_009ff5ee }
	__asm { add ecx, -0x18 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009ff5ee: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e1025c[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x009ff660
extern "C" __declspec(naked) void asm_009ff660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009ff6b2 }
	__asm { push 0x20 }
	__asm { mov word ptr [ebx + 8], si }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_009ff689 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_009ff689: }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, 8 }
	__asm { lea esi, [ebp - 0x20] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 8], 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009ff6b2: }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_009ff6dd }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_009ff6c8 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ff6c8: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebx + 9], 0 }
	__asm { L_009ff6dd: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004030b0();
extern "C" void fn_0057dce0();
extern "C" void fn_0095a840();
extern "C" void fn_00a00090();
extern "C" void fn_00b275d0();
// FUNCTION: ROBLOXSTUDIO 0x009ff8a0
extern "C" __declspec(naked) void asm_009ff8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea esi, [eax + 0xc] }
	__asm { push edi }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { add eax, esi }
	__asm { je L_009ff8c2 }
	__asm { inc eax }
	__asm { jmp L_009ff8c4 }
	__asm { L_009ff8c2: }
	__asm { xor eax, eax }
	__asm { L_009ff8c4: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_009ff910 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00b275d0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_009ff905 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add eax, 0x24 }
	__asm { push eax }
	__asm { call fn_0057dce0 }
	__asm { L_009ff905: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009ff910: }
	__asm { mov ebx, dword ptr [ebx + 0xc] }
	__asm { movzx eax, byte ptr [ebx + 0xc] }
	__asm { lea esi, [ebx + 0xc] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_009ff922 }
	__asm { inc eax }
	__asm { jmp L_009ff924 }
	__asm { L_009ff922: }
	__asm { xor eax, eax }
	__asm { L_009ff924: }
	__asm { push eax }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_009ff985 }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00b275d0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { test ebx, ebx }
	__asm { je L_009ff963 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add eax, 0x24 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0057dce0 }
	__asm { L_009ff963: }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { je L_009ff905 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a00090 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_009ff985: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009ff800();
// FUNCTION: ROBLOXSTUDIO 0x009ffa10
extern "C" __declspec(naked) void asm_009ffa10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x80] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009ff800 }
	__asm { test al, al }
	__asm { je L_009ffa61 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_009ffa63 }
	__asm { L_009ffa61: }
	__asm { xor esi, esi }
	__asm { L_009ffa63: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_009ffaad }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_009ffa98 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_009ffa98 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_009ffa98: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009ffaad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004030b0();
extern "C" void fn_0095a840();
extern "C" void fn_00a00ce0();
extern "C" void fn_00b28c90();
// FUNCTION: ROBLOXSTUDIO 0x009ffb70
extern "C" __declspec(naked) void asm_009ffb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea edi, [eax + 0xc] }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_009ffb8d }
	__asm { inc eax }
	__asm { jmp L_009ffb8f }
	__asm { L_009ffb8d: }
	__asm { xor eax, eax }
	__asm { L_009ffb8f: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push ebx }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je L_009ffbbb }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b28c90 }
	__asm { L_009ffbbb: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea edi, [eax + 0xc] }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_009ffbcf }
	__asm { inc eax }
	__asm { jmp L_009ffbd1 }
	__asm { L_009ffbcf: }
	__asm { xor eax, eax }
	__asm { L_009ffbd1: }
	__asm { push eax }
	__asm { push ebx }
	__asm { push ebx }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je L_009ffbfa }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b28c90 }
	__asm { L_009ffbfa: }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { jne L_009ffc13 }
	__asm { mov ecx, dword ptr [edx + 0x24] }
	__asm { add ecx, dword ptr [eax + 0x24] }
	__asm { add ecx, edi }
	__asm { jmp L_009ffc1c }
	__asm { L_009ffc13: }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { inc ecx }
	__asm { add ecx, eax }
	__asm { L_009ffc1c: }
	__asm { cmp ecx, dword ptr [esi] }
	__asm { jbe L_009ffc2d }
	__asm { cmp dword ptr [edx + 8], 0 }
	__asm { jbe L_009ffc2d }
	__asm { mov ecx, edx }
	__asm { call fn_00a00ce0 }
	__asm { L_009ffc2d: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10260[];
extern "C" char g_00e10500[];
extern "C" void fn_0095ab40();
extern "C" void fn_009fe260();
extern "C" void fn_009fe500();
extern "C" void fn_00b24220();
extern "C" void fn_00b275d0();
extern "C" void fn_00b28c90();
extern "C" void fn_00c59e20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ffc50
extern "C" __declspec(naked) void asm_009ffc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43638 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x68 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_00b275d0 }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { je L_009ffc8e }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b28c90 }
	__asm { L_009ffc8e: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00c59e20 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x74] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009fe500 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push eax }
	__asm { mov esi, dword ptr [ecx] }
	__asm { lea ecx, [edi + 4] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { call fn_00b24220 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, 0x5d1745c }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_009ffce5 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_009ffce5: }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x54] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_009ffd23 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009ffd23 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009ffd23 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ffd23: }
	__asm { cmp dword ptr [ebp - 0x60], 0x10 }
	__asm { jb L_009ffd34 }
	__asm { push dword ptr [ebp - 0x74] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ffd34: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x60], 0xf }
	__asm { mov dword ptr [ebp - 0x64], 0 }
	__asm { mov byte ptr [ebp - 0x74], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009ffd77 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009ffd77 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_009ffd77 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009ffd77: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call fn_0095ab40 }
	__asm { add esp, 0xc }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { jae L_009ffdca }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_009ffdd5 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push esi }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_009ffdd5 }
	__asm { L_009ffdca: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_009ffdd5: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_009fe260 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_009ffe27 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ffe27: }
	__asm { cmp dword ptr [ebp - 0x3c], 0x10 }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { jb L_009ffe4a }
	__asm { push dword ptr [ebp - 0x50] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_009ffe4a: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add dword ptr [edi + 0x24], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_008f6900();
extern "C" void fn_0095a840();
extern "C" void fn_009ffc50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x009ffe70
extern "C" __declspec(naked) void asm_009ffe70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd436f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ebx, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009ffc50 }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { cmp eax, dword ptr [ebx + 0x28] }
	__asm { jbe L_00a00004 }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { L_009ffeb3: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { inc eax }
	__asm { add ebx, 8 }
	__asm { add eax, ecx }
	__asm { je L_009ffeca }
	__asm { inc eax }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { jmp L_009ffed1 }
	__asm { L_009ffeca: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_009ffed1: }
	__asm { mov edx, dword ptr [ebx + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_009ffedd }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_009ffedf }
	__asm { L_009ffedd: }
	__asm { mov eax, ebx }
	__asm { L_009ffedf: }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { add ecx, eax }
	__asm { cmp edx, 0x10 }
	__asm { jb L_009ffeed }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_009ffeef }
	__asm { L_009ffeed: }
	__asm { mov eax, ebx }
	__asm { L_009ffeef: }
	__asm { xor edx, edx }
	__asm { cmp eax, ecx }
	__asm { je L_009fff13 }
	__asm { L_009ffef5: }
	__asm { mov edi, edx }
	__asm { mov esi, edx }
	__asm { shr esi, 2 }
	__asm { shl edi, 6 }
	__asm { add edi, esi }
	__asm { movsx esi, byte ptr [eax] }
	__asm { add esi, 0x9e3779b9 }
	__asm { add esi, edi }
	__asm { inc eax }
	__asm { xor edx, esi }
	__asm { cmp eax, ecx }
	__asm { jne L_009ffef5 }
	__asm { L_009fff13: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push edx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_009ffff5 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { sub dword ptr [ebx + 0x24], eax }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { cmp edi, dword ptr [ebx + 4] }
	__asm { je L_009fffcf }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_009fff98 }
	__asm { add eax, 4 }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_009fff98 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { or edx, 0xffffffff }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_009fff95 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_009fff95: }
	__asm { lea edx, [edi + 8] }
	__asm { L_009fff98: }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_009fffb2 }
	__asm { push dword ptr [edx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea edx, [edi + 8] }
	__asm { L_009fffb2: }
	__asm { mov dword ptr [edx + 0x14], 0xf }
	__asm { mov dword ptr [edx + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edx], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ebx + 8] }
	__asm { L_009fffcf: }
	__asm { lea eax, [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_009fffdb }
	__asm { add eax, -0x1c }
	__asm { jmp L_009fffdd }
	__asm { L_009fffdb: }
	__asm { xor eax, eax }
	__asm { L_009fffdd: }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_009fffe9 }
	__asm { add eax, -0x1c }
	__asm { jmp L_009fffeb }
	__asm { L_009fffe9: }
	__asm { xor eax, eax }
	__asm { L_009fffeb: }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { call fn_008f6900 }
	__asm { L_009ffff5: }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { cmp eax, dword ptr [ebx + 0x28] }
	__asm { ja L_009ffeb3 }
	__asm { L_00a00004: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004030b0();
extern "C" void fn_006b9740();
extern "C" void fn_0095a840();
extern "C" void fn_00b28c90();
// FUNCTION: ROBLOXSTUDIO 0x00a00090
extern "C" __declspec(naked) void asm_00a00090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea ebx, [eax + 0xc] }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { inc eax }
	__asm { add eax, ebx }
	__asm { je L_00a000be }
	__asm { inc eax }
	__asm { jmp L_00a000c0 }
	__asm { L_00a000be: }
	__asm { xor eax, eax }
	__asm { L_00a000c0: }
	__asm { push eax }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { je L_00a000e9 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00b28c90 }
	__asm { L_00a000e9: }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { test dl, dl }
	__asm { je L_00a0013b }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { add eax, dword ptr [ecx + 8] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jbe L_00a0013b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0012a }
	__asm { push 0x90 }
	__asm { push 0xe9b588 }
	__asm { push 0xe9b730 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0013b }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00a0012a: }
	__asm { movzx eax, dl }
	__asm { push 0xe9b748 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0013b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a00150
extern "C" __declspec(naked) void asm_00a00150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ad30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_00a00198 }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a00198: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a001bb }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_00a001bb: }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov edi, eax }
	__asm { jb L_00a001d5 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a001d5: }
	__asm { mov esi, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a0021b }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a0021b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a0021b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a0021b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a00230
extern "C" __declspec(naked) void asm_00a00230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a00276 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a00276: }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00a0028e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0028e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009fd9c0();
// FUNCTION: ROBLOXSTUDIO 0x00a002a0
extern "C" __declspec(naked) void asm_00a002a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39c88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009fd9c0 }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a00326 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a00325 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00a00325 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a00325: }
	__asm { pop edi }
	__asm { L_00a00326: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a003e0
extern "C" __declspec(naked) void asm_00a003e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { test edx, edx }
	__asm { je L_00a00446 }
	__asm { cmp edx, 1 }
	__asm { je L_00a00446 }
	__asm { cmp edx, 2 }
	__asm { jne L_00a00412 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a00431 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a00431 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_00a00412: }
	__asm { cmp edx, 3 }
	__asm { jne L_00a00434 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1249ad0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_00a00431: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a00434: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0x1249ad0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a00446: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a00470 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { test eax, eax }
	__asm { je L_00a00470 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a00470: }
	__asm { cmp edx, 1 }
	__asm { jne L_00a00431 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a00431 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a00431 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a00490
extern "C" __declspec(naked) void asm_00a00490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { test edx, edx }
	__asm { je L_00a004f6 }
	__asm { cmp edx, 1 }
	__asm { je L_00a004f6 }
	__asm { cmp edx, 2 }
	__asm { jne L_00a004c2 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a004e1 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a004e1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_00a004c2: }
	__asm { cmp edx, 3 }
	__asm { jne L_00a004e4 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1249c58 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_00a004e1: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a004e4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0x1249c58 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a004f6: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a00520 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { test eax, eax }
	__asm { je L_00a00520 }
	__asm { add eax, 8 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a00520: }
	__asm { cmp edx, 1 }
	__asm { jne L_00a004e1 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a004e1 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a004e1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
}

extern "C" char g_00e10524[];
extern "C" void fn_0067d390();
extern "C" void fn_00b13870();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a00540
extern "C" __declspec(naked) void asm_00a00540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_00a005b1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x24 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a0059b }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00b13870 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0059b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a005b1: }
	__asm { cmp eax, 1 }
	__asm { jne L_00a005d5 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a005d5: }
	__asm { cmp eax, 2 }
	__asm { jne L_00a005ff }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00a005ea }
	__asm { push 1 }
	__asm { call fn_0067d390 }
	__asm { L_00a005ea: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a005ff: }
	__asm { cmp eax, 3 }
	__asm { jne L_00a0062e }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1249d60 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a005ea }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0062e: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0x1249d60 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004030b0();
extern "C" void fn_0057dce0();
extern "C" void fn_0095a840();
extern "C" void fn_00a00090();
extern "C" void fn_00b275d0();
// FUNCTION: ROBLOXSTUDIO 0x00a007a0
extern "C" __declspec(naked) void asm_00a007a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4d6e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea esi, [eax + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00a007e9 }
	__asm { inc eax }
	__asm { jmp L_00a007eb }
	__asm { L_00a007e9: }
	__asm { xor eax, eax }
	__asm { L_00a007eb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00a0083a }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b275d0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add eax, 0x24 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0057dce0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [eax + 0x20] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a00090 }
	__asm { L_00a0083a: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a0086e }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a0086e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00a0086e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a0086e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01306758[];
extern "C" char g_01306759[];
extern "C" void fn_00421eb0();
extern "C" void fn_006beb40();
extern "C" void fn_006c0d90();
extern "C" void fn_008523c0();
extern "C" void fn_0085d4e0();
extern "C" void fn_00891b30();
extern "C" void fn_009a7290();
extern "C" void fn_009fd490();
extern "C" void fn_009fd5b0();
extern "C" void fn_009fde70();
extern "C" void fn_009fe640();
extern "C" void fn_00a46650();
extern "C" void fn_00bbd460();
extern "C" void fn_00bbda60();
extern "C" void fn_00bbe180();
extern "C" void fn_00c3ca40();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a008b0
extern "C" __declspec(naked) void asm_00a008b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4368b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 0x70] }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00a00955 }
	__asm { call fn_00bbda60 }
	__asm { mov eax, dword ptr [ebx + 0x70] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 0x74] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a00902 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a00902: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c0d90 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0085d4e0 }
	__asm { mov dword ptr [ebx + 0x70], 0 }
	__asm { mov esi, dword ptr [ebx + 0x74] }
	__asm { mov dword ptr [ebx + 0x74], 0 }
	__asm { test esi, esi }
	__asm { je L_00a00955 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a00955 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a00955 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a00955: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebx + 0x64] }
	__asm { call fn_00a46650 }
	__asm { test esi, esi }
	__asm { je L_00a00b04 }
	__asm { push 0x268 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00a00a48 }
	__asm { movzx eax, byte ptr [g_01306758] }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_009a7290 }
	__asm { add esp, 8 }
	__asm { push 0x9ff1b0 }
	__asm { push esi }
	__asm { call fn_00c3ca40 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, edi }
	__asm { call fn_009fd5b0 }
	__asm { movzx eax, byte ptr [g_01306759] }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_01306758] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_009a7290 }
	__asm { add esp, 8 }
	__asm { push 0x9ff450 }
	__asm { push esi }
	__asm { call fn_009fde70 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, edi }
	__asm { call fn_009fd490 }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00891b30 }
	__asm { add eax, 0x1c }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00a00a23 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a00a23: }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_008523c0 }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00421eb0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00bbd460 }
	__asm { or edi, 0xffffffff }
	__asm { jmp L_00a00a4a }
	__asm { L_00a00a48: }
	__asm { xor eax, eax }
	__asm { L_00a00a4a: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call fn_009fe640 }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebx + 0x70], eax }
	__asm { mov esi, dword ptr [ebx + 0x74] }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebx + 0x74], ecx }
	__asm { test esi, esi }
	__asm { je L_00a00ab7 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a00ab7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00a00ab7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a00ab7: }
	__asm { mov eax, dword ptr [ebx + 0x70] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 0x74] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a00ada }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a00ada: }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { call fn_006c0d90 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006beb40 }
	__asm { cmp byte ptr [ebx + 0x7c], 0 }
	__asm { je L_00a00b04 }
	__asm { mov ecx, dword ptr [ebx + 0x70] }
	__asm { push 1 }
	__asm { call fn_00bbe180 }
	__asm { L_00a00b04: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004030b0();
extern "C" void fn_0095a840();
extern "C" void fn_00b28c90();
// FUNCTION: ROBLOXSTUDIO 0x00a00c30
extern "C" __declspec(naked) void asm_00a00c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 8] }
	__asm { push esi }
	__asm { lea esi, [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00a00c4c }
	__asm { inc eax }
	__asm { jmp L_00a00c4e }
	__asm { L_00a00c4c: }
	__asm { xor eax, eax }
	__asm { L_00a00c4e: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je L_00a00c7e }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00b28c90 }
	__asm { mov bl, 1 }
	__asm { jmp L_00a00c80 }
	__asm { L_00a00c7e: }
	__asm { xor bl, bl }
	__asm { L_00a00c80: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { movzx eax, byte ptr [esi + 0xc] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { je L_00a00c95 }
	__asm { inc eax }
	__asm { jmp L_00a00c97 }
	__asm { L_00a00c95: }
	__asm { xor eax, eax }
	__asm { L_00a00c97: }
	__asm { push eax }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { pop edi }
	__asm { je L_00a00ccb }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b28c90 }
	__asm { L_00a00cc1: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a00ccb: }
	__asm { test bl, bl }
	__asm { jne L_00a00cc1 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008f6900();
extern "C" void fn_0095a840();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a013a0
extern "C" __declspec(naked) void asm_00a013a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43718 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { cmp dword ptr [edi + 8], eax }
	__asm { jbe L_00a0152c }
	__asm { lea ecx, [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { L_00a013d5: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { inc eax }
	__asm { add ebx, 8 }
	__asm { add eax, ecx }
	__asm { je L_00a013ec }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_00a013f3 }
	__asm { L_00a013ec: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { L_00a013f3: }
	__asm { mov edx, dword ptr [ebx + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00a013ff }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_00a01401 }
	__asm { L_00a013ff: }
	__asm { mov eax, ebx }
	__asm { L_00a01401: }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { add ecx, eax }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00a0140f }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_00a01411 }
	__asm { L_00a0140f: }
	__asm { mov eax, ebx }
	__asm { L_00a01411: }
	__asm { xor edx, edx }
	__asm { cmp eax, ecx }
	__asm { je L_00a01438 }
	__asm { L_00a01417: }
	__asm { mov edi, edx }
	__asm { mov esi, edx }
	__asm { shr esi, 2 }
	__asm { shl edi, 6 }
	__asm { add edi, esi }
	__asm { movsx esi, byte ptr [eax] }
	__asm { add esi, 0x9e3779b9 }
	__asm { add esi, edi }
	__asm { inc eax }
	__asm { xor edx, esi }
	__asm { cmp eax, ecx }
	__asm { jne L_00a01417 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { L_00a01438: }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push ebx }
	__asm { push edx }
	__asm { lea ebx, [edi + 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0095a840 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { test esi, esi }
	__asm { je L_00a0151d }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { sub dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { cmp edi, dword ptr [eax + 4] }
	__asm { je L_00a014f5 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { lea ebx, [edi + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ebp - 0x20], ebx }
	__asm { mov edx, dword ptr [ebx + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { test edx, edx }
	__asm { je L_00a014bb }
	__asm { lea eax, [edx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a014bb }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { or edx, 0xffffffff }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a014bb }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a014bb: }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00a014d2 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a014d2: }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { L_00a014f5: }
	__asm { lea eax, [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a01501 }
	__asm { add eax, -0x1c }
	__asm { jmp L_00a01503 }
	__asm { L_00a01501: }
	__asm { xor eax, eax }
	__asm { L_00a01503: }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a0150f }
	__asm { add eax, -0x1c }
	__asm { jmp L_00a01511 }
	__asm { L_00a0150f: }
	__asm { xor eax, eax }
	__asm { L_00a01511: }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_008f6900 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { L_00a0151d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 0xc] }
	__asm { cmp dword ptr [edi + 8], eax }
	__asm { ja L_00a013d5 }
	__asm { L_00a0152c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_009ffad0();
// FUNCTION: ROBLOXSTUDIO 0x00a01720
extern "C" __declspec(naked) void asm_00a01720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29038 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ecx + 0x80] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009ffad0 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a01789 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a01789 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00a01789 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a01789: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403160();
extern "C" void fn_00632d60();
// FUNCTION: ROBLOXSTUDIO 0x00a017a0
extern "C" __declspec(naked) void asm_00a017a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00632d60 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00a01817 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a01816 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a01816 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a01816: }
	__asm { pop ebx }
	__asm { L_00a01817: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4c0c[];
extern "C" char g_012ebdec[];
extern "C" void fn_007cbf10();
extern "C" void fn_0080f690();
extern "C" void fn_009feb90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a01840
extern "C" __declspec(naked) void asm_00a01840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43766 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009feb90 }
	__asm { mov dword ptr [esi], 0xe9b81c }
	__asm { mov dword ptr [esi + 4], 0xe9b8a0 }
	__asm { mov dword ptr [esi + 0x18], 0xe9b8a8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9b8b4 }
	__asm { mov dword ptr [esi + 0x64], 0xe9b8c4 }
	__asm { mov eax, dword ptr [g_012ebdec] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a018e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ebdec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9b800 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_0080f690 }
	__asm { push eax }
	__asm { mov ecx, 0x12ebcc0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ab0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a018e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ebcc0 }
	__asm { inc dword ptr [g_012e4c0c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102e0[];
extern "C" char g_00e10318[];
extern "C" void fn_00426140();
extern "C" void fn_0042cfc0();
extern "C" void fn_006bc920();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_009fd800();
extern "C" void fn_009feda0();
extern "C" void fn_00a00650();
extern "C" void fn_00a017a0();
extern "C" void fn_00cf661e();
extern "C" void fn_00d09a80();
// FUNCTION: ROBLOXSTUDIO 0x00a01a90
extern "C" __declspec(naked) void asm_00a01a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd437be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xbc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a01c56 }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc8] }
	__asm { call fn_0042cfc0 }
	__asm { push 0xc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_00a01b0e }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call fn_009feda0 }
	__asm { jmp L_00a01b10 }
	__asm { L_00a01b0e: }
	__asm { xor eax, eax }
	__asm { L_00a01b10: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009fd800 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0xc8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00d09a80 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a017a0 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { or esi, 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00a01b82 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a01b82 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a01b82 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a01b82: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { test eax, eax }
	__asm { je L_00a01bae }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a01bae: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x7c] }
	__asm { lea eax, [ebx + 0x78] }
	__asm { push eax }
	__asm { call fn_006bc920 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00a01bf3 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a01bf3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a01bf3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a01bf3: }
	__asm { mov eax, dword ptr [ebp - 0xc8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xc8], 0xe1b728 }
	__asm { mov eax, dword ptr [ebp - 0xc8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x60] }
	__asm { mov dword ptr [ebp + ecx - 0xcc], eax }
	__asm { lea ecx, [ebp - 0xb8] }
	__asm { mov dword ptr [ebp - 0xb8], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebp - 0xb8] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebp - 0xb0] }
	__asm { call dword ptr [g_00e102e0] }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { jmp L_00a01cc2 }
	__asm { L_00a01c56: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_00a01c73 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { jmp L_00a01c75 }
	__asm { L_00a01c73: }
	__asm { mov ecx, ebx }
	__asm { L_00a01c75: }
	__asm { push ecx }
	__asm { push 0xe9b988 }
	__asm { push 3 }
	__asm { push dword ptr [eax] }
	__asm { call fn_00773930 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x10 }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00a01cb9 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a01cb9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a01cb9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a01cb9: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push ebx }
	__asm { call fn_00a00650 }
	__asm { L_00a01cc2: }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00a01cf3 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a01cf3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], esi }
	__asm { dec esi }
	__asm { jne L_00a01cf3 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00a01cf3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00963570();
extern "C" void fn_009ffad0();
// FUNCTION: ROBLOXSTUDIO 0x00a01d90
extern "C" __declspec(naked) void asm_00a01d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43800 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
	__asm { or ebx, 0xffffffff }
	__asm { cmp dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00a01e5e }
	__asm { push edi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00963570 }
	__asm { add esp, 8 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { sub ecx, dword ptr [edi + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { sub ecx, dword ptr [edi + 0x10] }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { lea esi, [eax + eax*2] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { sar edx, 1 }
	__asm { mov ecx, dword ptr [ecx + 0x80] }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add esi, edx }
	__asm { add eax, esi }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009ffad0 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop edi }
	__asm { test esi, esi }
	__asm { je L_00a01e72 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a01e72 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a01e72 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_00a01e72 }
	__asm { L_00a01e5e: }
	__asm { mov ecx, dword ptr [ecx + 0x80] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009ffad0 }
	__asm { L_00a01e72: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a01ea3 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a01ea3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a01ea3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a01ea3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e83bc[];
extern "C" char g_012f4800[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_006b9740();
extern "C" void fn_00793ca0();
extern "C" void fn_007cbf10();
extern "C" void fn_00a022d0();
extern "C" void fn_00aef2d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a01ec0
extern "C" __declspec(naked) void asm_00a01ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4384d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x8229e0 }
	__asm { push 0x12f2ee0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4800] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a01f29 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4800], eax }
	__asm { mov ecx, 0x12f4778 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef2d0 }
	__asm { push 0xde8550 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a01f29: }
	__asm { mov eax, dword ptr [g_012e83bc] }
	__asm { test al, 1 }
	__asm { jne L_00a01f82 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e83bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9b9cc }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8290 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a01f82: }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { push 0x12f4778 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { push 0x12e8290 }
	__asm { mov ecx, esi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f4778 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { lea eax, [ebp + 0x34] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0xe9bd7c }
	__asm { call fn_00a022d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf6522 }
	__asm { push 0x8229e0 }
	__asm { push 0x12f2ee0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4800] }
	__asm { add esp, 0x28 }
	__asm { test al, 1 }
	__asm { jne L_00a02056 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4800], eax }
	__asm { mov ecx, 0x12f4778 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00aef2d0 }
	__asm { push 0xde8550 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { L_00a02056: }
	__asm { mov dword ptr [esi + 0x30], 0x12f4778 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a020b0 }
	__asm { push 0x124a5ec }
	__asm { mov ecx, 0x124a5ec }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a020b0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0209b }
	__asm { push 0xd4 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a020b0 }
	__asm { L_00a0209b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe56e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a020b0: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a020c1 }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_00a020c1: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_00a020d4 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_00a020d4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_012e4d60[];
extern "C" char g_012e83bc[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_0088da80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a020f0
extern "C" __declspec(naked) void asm_00a020f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43876 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_00a02128 }
	__asm { mov dword ptr [esi + 0x68], 0xe9bba8 }
	__asm { mov dword ptr [esi + 0xb4], 0xe780c8 }
	__asm { L_00a02128: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0088da80 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe9b9e4 }
	__asm { mov dword ptr [esi + 4], 0xe9baf0 }
	__asm { mov dword ptr [esi + 0x18], 0xe9baf8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9bb04 }
	__asm { mov dword ptr [esi + 0x64], 0xe9bb14 }
	__asm { mov dword ptr [esi + 0x70], 0xe9bb1c }
	__asm { mov dword ptr [esi + 0x98], 0xe9bb3c }
	__asm { mov dword ptr [esi + 0xb0], 0xe9bb70 }
	__asm { mov dword ptr [esi + 0xc4], 0xe9bb9c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe9bba4 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, dword ptr [g_012e83bc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00a02200 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e83bc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9b9cc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8290 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde77c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a02200: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12e8290 }
	__asm { inc dword ptr [g_012e4d60] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_01038120[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009004e0();
extern "C" void fn_0099d320();
// FUNCTION: ROBLOXSTUDIO 0x00a026b0
extern "C" __declspec(naked) void asm_00a026b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { push esi }
	__asm { call fn_0099d320 }
	__asm { movss xmm1, dword ptr [g_01038120] }
	__asm { mov esi, eax }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a02837 }
	__asm { movss xmm2, dword ptr [esi + 4] }
	__asm { ucomiss xmm2, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a02708 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a02708 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x3f }
	__asm { call fn_009004e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a02708: }
	__asm { ucomiss xmm2, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a02772 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a02760 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a02760 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0274f }
	__asm { push 0x85 }
	__asm { push 0xe9bfa0 }
	__asm { push 0xe9c1d8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a02760 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0274f: }
	__asm { movzx eax, al }
	__asm { push 0xe9c228 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a02760: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x12 }
	__asm { call fn_009004e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a02772: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a02825 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a027cb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a027ae }
	__asm { push 0x89 }
	__asm { push 0xe9bfa0 }
	__asm { push 0xe9c2d0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a027c3 }
	__asm { L_00a027ae: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9c2f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a027c3: }
	__asm { movss xmm1, dword ptr [g_01038120] }
	__asm { L_00a027cb: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a02825 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a027ef }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a02825 }
	__asm { L_00a027ef: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a02810 }
	__asm { push 0x8a }
	__asm { push 0xe9bfa0 }
	__asm { push 0xe9c378 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a02825 }
	__asm { L_00a02810: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9c3c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a02825: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x24 }
	__asm { call fn_009004e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a02837: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a02894 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a0285c }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a02894 }
	__asm { L_00a0285c: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a02883 }
	__asm { push 0x81 }
	__asm { push 0xe9bfa0 }
	__asm { push 0xe9c0e0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a02894 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a02883: }
	__asm { movzx eax, al }
	__asm { push 0xe9c130 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a02894: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 9 }
	__asm { call fn_009004e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e9c484[];
extern "C" char g_01038120[];
extern "C" char g_0124a5d4[];
extern "C" char g_0124a5d8[];
extern "C" char g_0124a5dc[];
extern "C" char g_0124a5e0[];
extern "C" char g_0124a5e4[];
extern "C" char g_0124a5e8[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006e81a0();
extern "C" void fn_00892db0();
extern "C" void fn_00895200();
extern "C" void fn_00898280();
// FUNCTION: ROBLOXSTUDIO 0x00a028b0
extern "C" __declspec(naked) void asm_00a028b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm5, dword ptr [g_01038120] }
	__asm { sub esp, 0xc }
	__asm { xor edx, edx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { movss xmm2, dword ptr [esi] }
	__asm { ucomiss xmm2, xmm5 }
	__asm { mov ebx, ecx }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a028da }
	__asm { mov edx, 1 }
	__asm { L_00a028da: }
	__asm { movss xmm1, dword ptr [esi + 4] }
	__asm { lea edi, [esi + 4] }
	__asm { ucomiss xmm1, xmm5 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a028ec }
	__asm { inc edx }
	__asm { L_00a028ec: }
	__asm { movss xmm3, dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { ucomiss xmm3, xmm5 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a028fe }
	__asm { inc edx }
	__asm { L_00a028fe: }
	__asm { cmp edx, 2 }
	__asm { jl L_00a02942 }
	__asm { comiss xmm2, xmm1 }
	__asm { jb L_00a02912 }
	__asm { comiss xmm2, xmm3 }
	__asm { jb L_00a02912 }
	__asm { movaps xmm4, xmm2 }
	__asm { jmp L_00a02924 }
	__asm { L_00a02912: }
	__asm { comiss xmm1, xmm2 }
	__asm { jb L_00a02921 }
	__asm { comiss xmm1, xmm3 }
	__asm { jb L_00a02921 }
	__asm { movaps xmm4, xmm1 }
	__asm { jmp L_00a02924 }
	__asm { L_00a02921: }
	__asm { movaps xmm4, xmm3 }
	__asm { L_00a02924: }
	__asm { movss xmm0, dword ptr [g_00e9c484] }
	__asm { comiss xmm0, xmm4 }
	__asm { jb L_00a02942 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00898280 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a02942: }
	__asm { movss xmm7, dword ptr [g_0124a5dc] }
	__asm { comiss xmm3, xmm7 }
	__asm { ja L_00a02954 }
	__asm { mov ecx, 0x124a5dc }
	__asm { L_00a02954: }
	__asm { movss xmm4, dword ptr [g_0124a5d8] }
	__asm { comiss xmm1, xmm4 }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { ja L_00a0296a }
	__asm { mov edi, 0x124a5d8 }
	__asm { L_00a0296a: }
	__asm { movss xmm3, dword ptr [g_0124a5d4] }
	__asm { comiss xmm2, xmm3 }
	__asm { movss xmm1, dword ptr [edi] }
	__asm { ja L_00a02980 }
	__asm { mov esi, 0x124a5d4 }
	__asm { L_00a02980: }
	__asm { movss xmm6, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { movss xmm0, dword ptr [g_0124a5e8] }
	__asm { comiss xmm0, dword ptr [ecx] }
	__asm { movss dword ptr [ebp - 0xc], xmm6 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { lea eax, [ebp - 4] }
	__asm { ja L_00a029a8 }
	__asm { mov eax, 0x124a5e8 }
	__asm { L_00a029a8: }
	__asm { movss xmm0, dword ptr [g_0124a5e4] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { ja L_00a029c1 }
	__asm { mov eax, 0x124a5e4 }
	__asm { L_00a029c1: }
	__asm { movss xmm0, dword ptr [g_0124a5e0] }
	__asm { comiss xmm0, xmm6 }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { ja L_00a029da }
	__asm { mov eax, 0x124a5e0 }
	__asm { L_00a029da: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { xor ecx, ecx }
	__asm { ucomiss xmm0, xmm5 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { lahf }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { test ah, 0x44 }
	__asm { jp L_00a029fd }
	__asm { mov ecx, 1 }
	__asm { L_00a029fd: }
	__asm { ucomiss xmm1, xmm5 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a02a07 }
	__asm { inc ecx }
	__asm { L_00a02a07: }
	__asm { ucomiss xmm2, xmm5 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a02a11 }
	__asm { inc ecx }
	__asm { L_00a02a11: }
	__asm { cmp ecx, 2 }
	__asm { jge L_00a02aad }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00a02a2b }
	__asm { comiss xmm0, xmm2 }
	__asm { jb L_00a02a2b }
	__asm { movss dword ptr [ebp - 4], xmm7 }
	__asm { jmp L_00a02aa8 }
	__asm { L_00a02a2b: }
	__asm { comiss xmm1, xmm0 }
	__asm { jb L_00a02a41 }
	__asm { comiss xmm1, xmm2 }
	__asm { jb L_00a02a41 }
	__asm { movss dword ptr [ebp - 0xc], xmm3 }
	__asm { movss dword ptr [ebp - 4], xmm7 }
	__asm { jmp L_00a02aad }
	__asm { L_00a02a41: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a02aa3 }
	__asm { comiss xmm2, xmm0 }
	__asm { jb L_00a02a54 }
	__asm { comiss xmm2, xmm1 }
	__asm { jae L_00a02aa3 }
	__asm { L_00a02a54: }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { call fn_006e81a0 }
	__asm { test al, al }
	__asm { je L_00a02a93 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a02a7e }
	__asm { push 0x66 }
	__asm { push 0xe9bfa0 }
	__asm { push 0xe9bff0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a02a93 }
	__asm { L_00a02a7e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9c038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a02a93: }
	__asm { movss xmm3, dword ptr [g_0124a5d4] }
	__asm { movss xmm4, dword ptr [g_0124a5d8] }
	__asm { L_00a02aa3: }
	__asm { movss dword ptr [ebp - 0xc], xmm3 }
	__asm { L_00a02aa8: }
	__asm { movss dword ptr [ebp - 8], xmm4 }
	__asm { L_00a02aad: }
	__asm { mov ecx, ebx }
	__asm { call fn_00892db0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov ecx, eax }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a02af2 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a02af2 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a02af2 }
	__asm { mov ecx, ebx }
	__asm { call fn_00895200 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a02af2: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00898280 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a08990();
// FUNCTION: ROBLOXSTUDIO 0x00a06710
extern "C" __declspec(naked) void asm_00a06710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_00a0675e }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jne L_00a0675e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a06749 }
	__asm { push 0x35 }
	__asm { push 0x1031768 }
	__asm { push 0x103156c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0675e }
	__asm { L_00a06749: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1031648 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0675e: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sub eax, dword ptr [esi] }
	__asm { sar eax, 2 }
	__asm { lea eax, [eax + eax*2] }
	__asm { shr eax, 2 }
	__asm { cmp dword ptr [esi + 0xc], eax }
	__asm { jb L_00a06778 }
	__asm { mov ecx, esi }
	__asm { call fn_00a08990 }
	__asm { L_00a06778: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { sub ebx, edx }
	__asm { mov eax, ecx }
	__asm { shr eax, 3 }
	__asm { sar ebx, 2 }
	__asm { dec ebx }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { and eax, ebx }
	__asm { xor ecx, ecx }
	__asm { L_00a06793: }
	__asm { mov edi, dword ptr [edx + eax*4] }
	__asm { lea edx, [edx + eax*4] }
	__asm { cmp edi, dword ptr [esi + 0x10] }
	__asm { je L_00a067f4 }
	__asm { cmp edi, dword ptr [ebp + 8] }
	__asm { je L_00a067fc }
	__asm { mov edx, dword ptr [esi] }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { inc ecx }
	__asm { and eax, ebx }
	__asm { cmp ecx, ebx }
	__asm { jbe L_00a06793 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a067eb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a067d6 }
	__asm { push 0x56 }
	__asm { push 0x1031768 }
	__asm { push 0xf14aa8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a067eb }
	__asm { L_00a067d6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x10315f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a067eb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a067f4: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { inc dword ptr [esi + 0xc] }
	__asm { L_00a067fc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, edx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
extern "C" char g_010380e4[];
extern "C" void fn_00a02eb0();
// FUNCTION: ROBLOXSTUDIO 0x00a079c0
extern "C" __declspec(naked) void asm_00a079c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { movss xmm1, dword ptr [g_010380b8] }
	__asm { movss xmm5, dword ptr [eax + 4] }
	__asm { movss xmm6, dword ptr [eax] }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movaps xmm2, xmm5 }
	__asm { mulss xmm2, xmm1 }
	__asm { movaps xmm3, xmm6 }
	__asm { mulss xmm3, xmm1 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, xmm1 }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { divss xmm1, xmm5 }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, xmm6 }
	__asm { lea edx, [ebp - 0x1c] }
	__asm { push edx }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { divss xmm0, xmm4 }
	__asm { divss xmm5, xmm6 }
	__asm { push ecx }
	__asm { mulss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 0x1c], xmm3 }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm5 }
	__asm { call fn_00a02eb0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_010380b8[];
extern "C" void fn_00a03740();
// FUNCTION: ROBLOXSTUDIO 0x00a07a60
extern "C" __declspec(naked) void asm_00a07a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { comiss xmm0, dword ptr [eax + 8] }
	__asm { lea esi, [eax + 4] }
	__asm { lea edx, [eax + 8] }
	__asm { cmovbe edx, esi }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { mulss xmm0, dword ptr [g_010380b8] }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { push ecx }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm0, dword ptr [g_010380b8] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a03740 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_010380b8[];
extern "C" void fn_00a03e90();
// FUNCTION: ROBLOXSTUDIO 0x00a07ac0
extern "C" __declspec(naked) void asm_00a07ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, dword ptr [eax + 8] }
	__asm { lea edx, [eax + 8] }
	__asm { cmovbe edx, eax }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { mulss xmm0, dword ptr [g_010380b8] }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { push ecx }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, dword ptr [g_010380b8] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a03e90 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_010380b8[];
extern "C" char g_010380e4[];
extern "C" void fn_00a045e0();
// FUNCTION: ROBLOXSTUDIO 0x00a07b20
extern "C" __declspec(naked) void asm_00a07b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm4, dword ptr [eax + 4] }
	__asm { movss xmm5, dword ptr [eax + 8] }
	__asm { movss xmm2, dword ptr [g_010380e4] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm4, xmm0 }
	__asm { mulss xmm5, xmm0 }
	__asm { movss dword ptr [ebp - 0x18], xmm3 }
	__asm { movss dword ptr [ebp - 0x14], xmm4 }
	__asm { movss dword ptr [ebp - 0x10], xmm5 }
	__asm { mulss xmm3, xmm3 }
	__asm { mulss xmm4, xmm4 }
	__asm { mulss xmm5, xmm5 }
	__asm { movaps xmm1, xmm2 }
	__asm { movaps xmm0, xmm2 }
	__asm { divss xmm1, xmm3 }
	__asm { divss xmm0, xmm4 }
	__asm { divss xmm2, xmm5 }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push ecx }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a045e0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_01038094[];
extern "C" char g_010380b8[];
extern "C" void fn_00a05470();
// FUNCTION: ROBLOXSTUDIO 0x00a08170
extern "C" __declspec(naked) void asm_00a08170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { movss xmm1, dword ptr [g_010380b8] }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { push ecx }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm4, dword ptr [g_01038094] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mulss xmm3, xmm1 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mulss xmm2, xmm1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 0x10], xmm3 }
	__asm { movss dword ptr [ebp - 0xc], xmm2 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm4 }
	__asm { call fn_00a05470 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_010380b8[];
extern "C" void fn_00a05c20();
// FUNCTION: ROBLOXSTUDIO 0x00a081e0
extern "C" __declspec(naked) void asm_00a081e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { movss xmm1, dword ptr [g_010380b8] }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm5, dword ptr [eax + 4] }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, xmm1 }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { lea edx, [ebp - 0x14] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { divss xmm0, xmm4 }
	__asm { divss xmm4, xmm5 }
	__asm { push edx }
	__asm { push ecx }
	__asm { movaps xmm2, xmm5 }
	__asm { mulss xmm3, xmm1 }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mulss xmm2, xmm1 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm4 }
	__asm { call fn_00a05c20 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_010380e4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007bd880();
extern "C" void fn_009f6450();
extern "C" void fn_00a08bf0();
// FUNCTION: ROBLOXSTUDIO 0x00a08ad0
extern "C" __declspec(naked) void asm_00a08ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x30 }
	__asm { test al, al }
	__asm { je L_00a08b1a }
	__asm { cmp dword ptr [ebp + 8], -1 }
	__asm { jne L_00a08b1a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a08b09 }
	__asm { push 0x50 }
	__asm { push 0xe9c948 }
	__asm { push 0xe9caa0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a08b1a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a08b09: }
	__asm { movzx eax, al }
	__asm { push 0xe9cab0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a08b1a: }
	__asm { call fn_007bd880 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_009f6450 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { mov eax, 8 }
	__asm { shl eax, cl }
	__asm { cvtsi2ss xmm0, eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { divss xmm1, xmm0 }
	__asm { push eax }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [ebp - 0x30] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [ebp - 0x2c] }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [ebp - 0x28] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_00a08bf0 }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [ebp - 0x20] }
	__asm { mulss xmm1, dword ptr [ebp - 0x1c] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { call fn_00a08bf0 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a08c70
extern "C" __declspec(naked) void asm_00a08c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { imul esi, esi, 0x4f9ffb7 }
	__asm { imul eax, eax, 0x127409f }
	__asm { xor esi, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { imul eax, eax, 0x466f45d }
	__asm { xor esi, eax }
	__asm { mov eax, 0xffff }
	__asm { sar eax, cl }
	__asm { and esi, eax }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a08d2f }
	__asm { test esi, esi }
	__asm { jns L_00a08ce5 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a08cd0 }
	__asm { push 0x49 }
	__asm { push 0xe9c948 }
	__asm { push 0xe9c990 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a08ce5 }
	__asm { L_00a08cd0: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9c9a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a08ce5: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a08d2f }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, 0x10000 }
	__asm { sar eax, cl }
	__asm { cmp esi, eax }
	__asm { jl L_00a08d2f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a08d1a }
	__asm { push 0x4a }
	__asm { push 0xe9c948 }
	__asm { push 0xe9ca04 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a08d2f }
	__asm { L_00a08d1a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9ca28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a08d2f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008a0c50();
extern "C" void fn_009b72b0();
extern "C" void fn_00a08d40();
extern "C" void fn_00a091a0();
extern "C" void fn_00a092b0();
extern "C" void fn_00bbe270();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a08f00
extern "C" __declspec(naked) void asm_00a08f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd43909 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movsx esi, word ptr [ebx + 4] }
	__asm { movsx eax, word ptr [ebx + 2] }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { movsx eax, word ptr [ebx] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { shl esi, 5 }
	__asm { add esi, eax }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_00a08f43 }
	__asm { inc eax }
	__asm { jmp L_00a08f45 }
	__asm { L_00a08f43: }
	__asm { xor eax, eax }
	__asm { L_00a08f45: }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00a08d40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_00a08ffa }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_00a08f66 }
	__asm { inc eax }
	__asm { jmp L_00a08f68 }
	__asm { L_00a08f66: }
	__asm { xor eax, eax }
	__asm { L_00a08f68: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov bx, word ptr [ebx + 4] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00a092b0 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00a08fa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov word ptr [ecx + 4], bx }
	__asm { L_00a08fa0: }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00a08fb4 }
	__asm { call fn_00bbe270 }
	__asm { L_00a08fb4: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x13], 1 }
	__asm { call fn_009b72b0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a091a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov edi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { je L_00a08ff8 }
	__asm { cmp byte ptr [ebp - 0x13], 0 }
	__asm { je L_00a08fef }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_008a0c50 }
	__asm { L_00a08fef: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a08ff8: }
	__asm { mov eax, edi }
	__asm { L_00a08ffa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00a33b30();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a09010
extern "C" __declspec(naked) void asm_00a09010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43920 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_00a09064 }
	__asm { cmp edi, 0x2aaaaaaa }
	__asm { ja L_00a0905e }
	__asm { lea eax, [edi + edi*2] }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00a09064 }
	__asm { L_00a0905e: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a09064: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00a33b30 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a090ae }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a090ae: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*2] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*2] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [esi + eax*2] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_00a09010();
// FUNCTION: ROBLOXSTUDIO 0x00a09100
extern "C" __declspec(naked) void asm_00a09100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00a09192 }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x2aaaaaaa }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00a0914b }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a0914b: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x2aaaaaaa }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00a0917f }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a09010 }
	__asm { L_00a0917f: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a09010 }
	__asm { L_00a09192: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a091a0
extern "C" __declspec(naked) void asm_00a091a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_00a091fd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00a091f0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00a091f0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00a09208 }
	__asm { L_00a091fd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00a09208: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00a0921e }
	__asm { add ecx, -0x2c }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a0921e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" void fn_008a0c50();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a092b0
extern "C" __declspec(naked) void asm_00a092b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { test ecx, ecx }
	__asm { jne L_00a09302 }
	__asm { push 0x34 }
	__asm { mov word ptr [ebx + 8], cx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00a092d8 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a092d8: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, 0xd }
	__asm { lea esi, [ebp - 0x34] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 8], 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a09302: }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_00a09314 }
	__asm { add ecx, 8 }
	__asm { call fn_008a0c50 }
	__asm { mov byte ptr [ebx + 9], 0 }
	__asm { L_00a09314: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a09320
extern "C" __declspec(naked) void asm_00a09320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov edx, dword ptr [edi + 0x1c] }
	__asm { cmp edx, eax }
	__asm { je L_00a09361 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00a09334: }
	__asm { cmp dword ptr [edx], esi }
	__asm { je L_00a0933f }
	__asm { add edx, 4 }
	__asm { cmp edx, eax }
	__asm { jne L_00a09334 }
	__asm { L_00a0933f: }
	__asm { pop esi }
	__asm { cmp edx, eax }
	__asm { je L_00a09361 }
	__asm { lea ecx, [edx + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [edi + 0x20], -4 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a09361: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a093a2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a09391 }
	__asm { push 0xc0 }
	__asm { push 0xe9ccdc }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a093a2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a09391: }
	__asm { movzx eax, al }
	__asm { push 0xe9ce70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a093a2: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0057db00();
extern "C" void fn_008a2cc0();
// FUNCTION: ROBLOXSTUDIO 0x00a093b0
extern "C" __declspec(naked) void asm_00a093b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { jne L_00a093c7 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a093c7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movzx edx, word ptr [eax + 4] }
	__asm { push esi }
	__asm { movzx esi, word ptr [eax + 2] }
	__asm { movsx ebx, dx }
	__asm { push edi }
	__asm { movzx edi, word ptr [eax] }
	__asm { movsx eax, si }
	__asm { shl ebx, 5 }
	__asm { add ebx, eax }
	__asm { movsx eax, di }
	__asm { shl ebx, 5 }
	__asm { add ebx, eax }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { test edi, edi }
	__asm { je L_00a09449 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00a09449 }
	__asm { L_00a09413: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_00a09449 }
	__asm { cmp esi, ebx }
	__asm { jne L_00a09441 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { cmp ax, word ptr [ecx - 0x2c] }
	__asm { jne L_00a09441 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp ax, word ptr [ecx - 0x2a] }
	__asm { jne L_00a09441 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp ax, word ptr [ecx - 0x28] }
	__asm { je L_00a09454 }
	__asm { L_00a09441: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_00a09413 }
	__asm { L_00a09449: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a09454: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00a0945f }
	__asm { add eax, -0x2c }
	__asm { jmp L_00a09461 }
	__asm { L_00a0945f: }
	__asm { xor eax, eax }
	__asm { L_00a09461: }
	__asm { push dword ptr [eax + 0x2c] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { call fn_008a2cc0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { call fn_0057db00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006f67e0();
extern "C" void fn_00a08d40();
extern "C" void fn_00a0a020();
// FUNCTION: ROBLOXSTUDIO 0x00a09490
extern "C" __declspec(naked) void asm_00a09490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movzx eax, word ptr [ebx] }
	__asm { mov dx, ax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { movzx eax, word ptr [ebx + 2] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { sar ax, 4 }
	__asm { mov word ptr [ebp - 0x20], ax }
	__asm { mov esi, ecx }
	__asm { sar dx, 5 }
	__asm { mov word ptr [ebp + 0xa], ax }
	__asm { mov word ptr [ebp - 0x22], dx }
	__asm { mov eax, dword ptr [ebp - 0x22] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { movzx eax, byte ptr [esi] }
	__asm { push edi }
	__asm { movzx edi, word ptr [ebx + 4] }
	__asm { mov cx, di }
	__asm { sar cx, 5 }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov word ptr [ebp - 0x20], cx }
	__asm { add eax, esi }
	__asm { je L_00a094e5 }
	__asm { inc eax }
	__asm { jmp L_00a094e7 }
	__asm { L_00a094e5: }
	__asm { xor eax, eax }
	__asm { L_00a094e7: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ax, word ptr [ebp + 0xa] }
	__asm { movsx ecx, cx }
	__asm { cwde }
	__asm { shl ecx, 5 }
	__asm { add ecx, eax }
	__asm { movsx eax, dx }
	__asm { shl ecx, 5 }
	__asm { add ecx, eax }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a08d40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a097fd }
	__asm { add eax, 8 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { je L_00a097fd }
	__asm { and dword ptr [ebp - 8], 0x1f }
	__asm { and dword ptr [ebp - 0xc], 0xf }
	__asm { and edi, 0x1f }
	__asm { call fn_006f67e0 }
	__asm { mov ecx, 0x1f }
	__asm { mov edx, ecx }
	__asm { sub dx, word ptr [eax] }
	__asm { sub cx, word ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov edx, 0xf }
	__asm { sub dx, word ptr [eax + 2] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { call fn_006f67e0 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { cmp word ptr [ecx], ax }
	__asm { jg L_00a096ca }
	__asm { cmp ax, word ptr [ebp - 0x10] }
	__asm { jg L_00a096ca }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp word ptr [ecx + 2], ax }
	__asm { jg L_00a096ca }
	__asm { cmp ax, word ptr [ebp - 0x14] }
	__asm { jg L_00a096ca }
	__asm { cmp word ptr [ecx + 4], di }
	__asm { jg L_00a096ca }
	__asm { cmp di, word ptr [ebp - 0x1c] }
	__asm { jg L_00a096ca }
	__asm { movzx eax, word ptr [ebx + 2] }
	__asm { and ax, 0xf }
	__asm { mov word ptr [ebp - 0x22], ax }
	__asm { movzx eax, word ptr [ebx + 4] }
	__asm { mov dx, word ptr [ebx] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { and ax, 0x1f }
	__asm { mov word ptr [ebp - 0x20], ax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { shl eax, 5 }
	__asm { mov ecx, dword ptr [ebp - 0x22] }
	__asm { cwde }
	__asm { shl ecx, 0xa }
	__asm { and dx, 0x1f }
	__asm { movsx edi, dx }
	__asm { add edi, eax }
	__asm { movsx eax, cx }
	__asm { add edi, eax }
	__asm { mov ax, word ptr [ebx + 4] }
	__asm { shl ax, 5 }
	__asm { movsx ecx, ax }
	__asm { mov edx, 0x400 }
	__asm { imul dx, word ptr [ebx + 2] }
	__asm { movsx eax, dx }
	__asm { add ecx, eax }
	__asm { movsx eax, word ptr [ebx] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { add ecx, dword ptr [eax + 8] }
	__asm { mov edx, 0x400 }
	__asm { mov esi, 0x400 }
	__asm { mov al, byte ptr [ecx + edi] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [edi], al }
	__asm { imul dx, word ptr [ebx + 8] }
	__asm { mov ax, word ptr [ebx + 0xa] }
	__asm { shl ax, 5 }
	__asm { movsx ecx, ax }
	__asm { movsx eax, dx }
	__asm { add ecx, eax }
	__asm { movsx eax, word ptr [ebx + 6] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, 0x400 }
	__asm { add ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { mov byte ptr [edi + 1], al }
	__asm { imul dx, word ptr [ebx + 0xe] }
	__asm { mov ax, word ptr [ebx + 0x10] }
	__asm { shl ax, 5 }
	__asm { movsx ecx, ax }
	__asm { movsx eax, dx }
	__asm { add ecx, eax }
	__asm { movsx eax, word ptr [ebx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, 0x400 }
	__asm { add ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { mov byte ptr [edi + 2], al }
	__asm { imul dx, word ptr [ebx + 0x14] }
	__asm { mov ax, word ptr [ebx + 0x16] }
	__asm { shl ax, 5 }
	__asm { movsx ecx, ax }
	__asm { movsx eax, dx }
	__asm { add ecx, eax }
	__asm { movsx eax, word ptr [ebx + 0x12] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { mov byte ptr [edi + 3], al }
	__asm { imul si, word ptr [ebx + 0x1a] }
	__asm { mov ax, word ptr [ebx + 0x1c] }
	__asm { shl ax, 5 }
	__asm { movsx ecx, ax }
	__asm { movsx eax, si }
	__asm { add ecx, eax }
	__asm { movsx eax, word ptr [ebx + 0x18] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { mov byte ptr [edi + 4], al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a096ca: }
	__asm { movzx eax, word ptr [ebx] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { add ax, word ptr [edi] }
	__asm { mov word ptr [ebp - 0x1c], ax }
	__asm { movzx eax, word ptr [edi + 2] }
	__asm { add ax, word ptr [ebx + 2] }
	__asm { mov word ptr [ebp - 0x1a], ax }
	__asm { movzx eax, word ptr [edi + 4] }
	__asm { add ax, word ptr [ebx + 4] }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00a0a020 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [esi], al }
	__asm { movzx eax, word ptr [ebx] }
	__asm { add ax, word ptr [edi + 6] }
	__asm { mov word ptr [ebp - 0x1c], ax }
	__asm { movzx eax, word ptr [edi + 8] }
	__asm { add ax, word ptr [ebx + 2] }
	__asm { mov word ptr [ebp - 0x1a], ax }
	__asm { movzx eax, word ptr [edi + 0xa] }
	__asm { add ax, word ptr [ebx + 4] }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00a0a020 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [esi + 1], al }
	__asm { movzx eax, word ptr [edi + 0xc] }
	__asm { add ax, word ptr [ebx] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov word ptr [ebp - 0x1c], ax }
	__asm { movzx eax, word ptr [edi + 0xe] }
	__asm { add ax, word ptr [ebx + 2] }
	__asm { mov word ptr [ebp - 0x1a], ax }
	__asm { movzx eax, word ptr [edi + 0x10] }
	__asm { add ax, word ptr [ebx + 4] }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00a0a020 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [esi + 2], al }
	__asm { movzx eax, word ptr [ebx] }
	__asm { add ax, word ptr [edi + 0x12] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov word ptr [ebp - 0x1c], ax }
	__asm { movzx eax, word ptr [edi + 0x14] }
	__asm { add ax, word ptr [ebx + 2] }
	__asm { mov word ptr [ebp - 0x1a], ax }
	__asm { movzx eax, word ptr [edi + 0x16] }
	__asm { add ax, word ptr [ebx + 4] }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00a0a020 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [esi + 3], al }
	__asm { movzx eax, word ptr [ebx] }
	__asm { add ax, word ptr [edi + 0x18] }
	__asm { mov word ptr [ebp - 0x1c], ax }
	__asm { movzx eax, word ptr [edi + 0x1a] }
	__asm { add ax, word ptr [ebx + 2] }
	__asm { mov word ptr [ebp - 0x1a], ax }
	__asm { movzx eax, word ptr [edi + 0x1c] }
	__asm { add ax, word ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00a0a020 }
	__asm { mov al, byte ptr [eax] }
	__asm { pop edi }
	__asm { mov byte ptr [esi + 4], al }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a097fd: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a0983b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0982a }
	__asm { push 0x27 }
	__asm { push 0xe9ccdc }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0983b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0982a: }
	__asm { movzx eax, al }
	__asm { push 0xe9cd18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0983b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012f8550[];
extern "C" void fn_00a08d40();
// FUNCTION: ROBLOXSTUDIO 0x00a09850
extern "C" __declspec(naked) void asm_00a09850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { movzx ebx, word ptr [eax] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { movzx ecx, word ptr [eax + 2] }
	__asm { movzx eax, word ptr [eax + 4] }
	__asm { mov si, cx }
	__asm { mov dx, bx }
	__asm { sar dx, 5 }
	__asm { sar si, 4 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov cx, ax }
	__asm { mov word ptr [ebp - 0xe], dx }
	__asm { mov word ptr [ebp - 0xc], si }
	__asm { mov eax, dword ptr [ebp - 0xe] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { movzx eax, byte ptr [edi] }
	__asm { sar cx, 5 }
	__asm { inc eax }
	__asm { mov word ptr [ebp - 0xc], cx }
	__asm { add eax, edi }
	__asm { je L_00a098a1 }
	__asm { inc eax }
	__asm { jmp L_00a098a3 }
	__asm { L_00a098a1: }
	__asm { xor eax, eax }
	__asm { L_00a098a3: }
	__asm { push eax }
	__asm { movsx ecx, cx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { shl ecx, 5 }
	__asm { movsx eax, si }
	__asm { add ecx, eax }
	__asm { movsx eax, dx }
	__asm { shl ecx, 5 }
	__asm { add ecx, eax }
	__asm { push ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a08d40 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00a09917 }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a09917 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { and eax, 0xf }
	__asm { mov word ptr [ebp - 0xe], ax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { and eax, 0x1f }
	__asm { mov word ptr [ebp - 0xc], ax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov edx, dword ptr [ebp - 0xe] }
	__asm { shl eax, 5 }
	__asm { cwde }
	__asm { add ecx, eax }
	__asm { shl edx, 0xa }
	__asm { movsx eax, dx }
	__asm { and ebx, 0x1f }
	__asm { add ecx, eax }
	__asm { movsx eax, bx }
	__asm { pop edi }
	__asm { mov cl, byte ptr [ecx + eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov byte ptr [eax], cl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a09917: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov cl, byte ptr [g_012f8550] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax], cl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a08d40();
// FUNCTION: ROBLOXSTUDIO 0x00a09930
extern "C" __declspec(naked) void asm_00a09930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { movzx ebx, word ptr [eax] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { movzx ecx, word ptr [eax + 2] }
	__asm { movzx eax, word ptr [eax + 4] }
	__asm { mov si, cx }
	__asm { mov dx, bx }
	__asm { sar dx, 5 }
	__asm { sar si, 4 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov cx, ax }
	__asm { mov word ptr [ebp - 0xe], dx }
	__asm { mov word ptr [ebp - 0xc], si }
	__asm { mov eax, dword ptr [ebp - 0xe] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { movzx eax, byte ptr [edi] }
	__asm { sar cx, 5 }
	__asm { inc eax }
	__asm { mov word ptr [ebp - 0xc], cx }
	__asm { add eax, edi }
	__asm { je L_00a09981 }
	__asm { inc eax }
	__asm { jmp L_00a09983 }
	__asm { L_00a09981: }
	__asm { xor eax, eax }
	__asm { L_00a09983: }
	__asm { push eax }
	__asm { movsx ecx, cx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { shl ecx, 5 }
	__asm { movsx eax, si }
	__asm { add ecx, eax }
	__asm { movsx eax, dx }
	__asm { shl ecx, 5 }
	__asm { add ecx, eax }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a08d40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a09a13 }
	__asm { lea esi, [eax + 8] }
	__asm { test esi, esi }
	__asm { je L_00a09a13 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { and eax, 0xf }
	__asm { mov word ptr [ebp - 0xe], ax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { and eax, 0x1f }
	__asm { mov word ptr [ebp - 0xc], ax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xe] }
	__asm { shl eax, 5 }
	__asm { movsx edx, ax }
	__asm { shl ecx, 0xa }
	__asm { movsx eax, cx }
	__asm { add edx, eax }
	__asm { and ebx, 0x1f }
	__asm { movsx eax, bx }
	__asm { add edx, eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov al, byte ptr [edx + eax] }
	__asm { and al, 0x38 }
	__asm { cmp al, 0x28 }
	__asm { je L_00a09a13 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, edx }
	__asm { shr ecx, 1 }
	__asm { pop edi }
	__asm { movzx eax, byte ptr [ecx + eax] }
	__asm { mov cl, dl }
	__asm { and cl, 1 }
	__asm { shl cl, 2 }
	__asm { shr eax, cl }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { and eax, 0xf }
	__asm { inc eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a09a13: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 0x11 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00a09010();
extern "C" void fn_00a0a3e0();
// FUNCTION: ROBLOXSTUDIO 0x00a09a30
extern "C" __declspec(naked) void asm_00a09a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43949 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { test eax, eax }
	__asm { je L_00a09a9c }
	__asm { cmp eax, 0x2aaaaaaa }
	__asm { jbe L_00a09a94 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a09a94: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a09010 }
	__asm { L_00a09a9c: }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00a09ab7 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00a09ab7 }
	__asm { add eax, -0x2c }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jmp L_00a09abe }
	__asm { L_00a09ab7: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_00a09abe: }
	__asm { lea esi, [ebp - 0x10] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_00a09adb }
	__asm { L_00a09ac7: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00a0a3e0 }
	__asm { mov esi, dword ptr [esi + 0x2c] }
	__asm { test esi, esi }
	__asm { je L_00a09adb }
	__asm { add esi, -0x2c }
	__asm { jne L_00a09ac7 }
	__asm { L_00a09adb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a08d40();
// FUNCTION: ROBLOXSTUDIO 0x00a09f00
extern "C" __declspec(naked) void asm_00a09f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov dx, word ptr [eax] }
	__asm { mov bx, word ptr [eax + 2] }
	__asm { push esi }
	__asm { mov si, word ptr [eax + 4] }
	__asm { sar dx, 5 }
	__asm { sar bx, 4 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov word ptr [ebp - 0x10], dx }
	__asm { mov word ptr [ebp - 0xe], bx }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { sar si, 5 }
	__asm { push edi }
	__asm { mov word ptr [ebp - 2], dx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov word ptr [ebp - 0xc], si }
	__asm { test cl, cl }
	__asm { je L_00a09fac }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ax, word ptr [edi] }
	__asm { mov dx, word ptr [edi + 2] }
	__asm { mov di, word ptr [edi + 4] }
	__asm { sar ax, 5 }
	__asm { sar dx, 4 }
	__asm { sar di, 5 }
	__asm { cmp word ptr [ebp - 2], ax }
	__asm { jne L_00a09f70 }
	__asm { cmp bx, dx }
	__asm { jne L_00a09f70 }
	__asm { cmp si, di }
	__asm { je L_00a09fa8 }
	__asm { L_00a09f70: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a09f97 }
	__asm { push 0x8c }
	__asm { push 0xe9ccdc }
	__asm { push 0xe9cd64 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a09fa8 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00a09f97: }
	__asm { movzx eax, cl }
	__asm { push 0xe9cda0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a09fa8: }
	__asm { mov dx, word ptr [ebp - 2] }
	__asm { L_00a09fac: }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_00a09fba }
	__asm { inc eax }
	__asm { jmp L_00a09fbc }
	__asm { L_00a09fba: }
	__asm { xor eax, eax }
	__asm { L_00a09fbc: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { movsx ecx, si }
	__asm { shl ecx, 5 }
	__asm { movsx eax, bx }
	__asm { add ecx, eax }
	__asm { movsx eax, dx }
	__asm { shl ecx, 5 }
	__asm { add ecx, eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a08d40 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { jne L_00a09fee }
	__asm { xor ecx, ecx }
	__asm { jmp L_00a09ff1 }
	__asm { L_00a09fee: }
	__asm { lea ecx, [eax + 8] }
	__asm { L_00a09ff1: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { movzx ecx, word ptr [edx + 4] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov word ptr [eax + 8], cx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax + 0xa], ecx }
	__asm { movzx ecx, word ptr [edx + 4] }
	__asm { mov word ptr [eax + 0xe], cx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a08d40();
// FUNCTION: ROBLOXSTUDIO 0x00a0a020
extern "C" __declspec(naked) void asm_00a0a020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { movzx ebx, word ptr [eax] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movzx ecx, word ptr [eax + 2] }
	__asm { movzx eax, word ptr [eax + 4] }
	__asm { push edi }
	__asm { mov dx, cx }
	__asm { mov di, bx }
	__asm { sar di, 5 }
	__asm { sar dx, 4 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov cx, ax }
	__asm { mov word ptr [ebp - 0xe], di }
	__asm { mov word ptr [ebp - 0xc], dx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0xe] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sar cx, 5 }
	__asm { mov word ptr [ebp - 0xc], cx }
	__asm { cmp di, word ptr [eax] }
	__asm { jne L_00a0a07f }
	__asm { cmp dx, word ptr [eax + 2] }
	__asm { jne L_00a0a07f }
	__asm { cmp cx, word ptr [eax + 4] }
	__asm { jne L_00a0a07f }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { jmp L_00a0a0be }
	__asm { L_00a0a07f: }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00a0a08a }
	__asm { inc eax }
	__asm { jmp L_00a0a08c }
	__asm { L_00a0a08a: }
	__asm { xor eax, eax }
	__asm { L_00a0a08c: }
	__asm { push eax }
	__asm { movsx ecx, cx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { shl ecx, 5 }
	__asm { movsx eax, dx }
	__asm { add ecx, eax }
	__asm { movsx eax, di }
	__asm { shl ecx, 5 }
	__asm { add ecx, eax }
	__asm { push ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a08d40 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00a0a0fc }
	__asm { lea esi, [eax + 8] }
	__asm { test esi, esi }
	__asm { je L_00a0a0fc }
	__asm { L_00a0a0be: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { and eax, 0xf }
	__asm { mov word ptr [ebp - 0xe], ax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { and eax, 0x1f }
	__asm { mov word ptr [ebp - 0xc], ax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov edx, dword ptr [ebp - 0xe] }
	__asm { shl eax, 5 }
	__asm { movsx ecx, ax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add eax, ecx }
	__asm { shl edx, 0xa }
	__asm { movsx ecx, dx }
	__asm { and ebx, 0x1f }
	__asm { add eax, ecx }
	__asm { movsx ecx, bx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a0a0fc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 0x12f8550 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012f8550[];
extern "C" char g_012f8551[];
extern "C" void fn_00a08d40();
extern "C" void fn_00a08e00();
// FUNCTION: ROBLOXSTUDIO 0x00a0a110
extern "C" __declspec(naked) void asm_00a0a110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { movzx edx, word ptr [edi] }
	__asm { movzx esi, word ptr [edi + 2] }
	__asm { movzx ecx, word ptr [edi + 4] }
	__asm { sar dx, 5 }
	__asm { sar si, 4 }
	__asm { mov word ptr [ebp - 6], dx }
	__asm { mov word ptr [ebp - 4], si }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { sar cx, 5 }
	__asm { inc eax }
	__asm { mov word ptr [ebp - 4], cx }
	__asm { add eax, ebx }
	__asm { je L_00a0a152 }
	__asm { inc eax }
	__asm { jmp L_00a0a154 }
	__asm { L_00a0a152: }
	__asm { xor eax, eax }
	__asm { L_00a0a154: }
	__asm { push eax }
	__asm { movsx ecx, cx }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { shl ecx, 5 }
	__asm { movsx eax, si }
	__asm { add ecx, eax }
	__asm { movsx eax, dx }
	__asm { shl ecx, 5 }
	__asm { add ecx, eax }
	__asm { push ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00a08d40 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00a0a228 }
	__asm { lea edx, [eax + 8] }
	__asm { test edx, edx }
	__asm { je L_00a0a228 }
	__asm { movzx eax, word ptr [edi + 2] }
	__asm { mov esi, dword ptr [edx + 8] }
	__asm { movzx ebx, word ptr [edi] }
	__asm { and eax, 0xf }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [edi + 4] }
	__asm { and eax, 0x1f }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp - 6] }
	__asm { shl eax, 5 }
	__asm { cwde }
	__asm { add esi, eax }
	__asm { shl ecx, 0xa }
	__asm { movsx eax, cx }
	__asm { add esi, eax }
	__asm { and ebx, 0x1f }
	__asm { movsx eax, bx }
	__asm { mov cl, byte ptr [esi + eax] }
	__asm { add esi, eax }
	__asm { mov al, byte ptr [g_012f8550] }
	__asm { cmp cl, al }
	__asm { je L_00a0a1f3 }
	__asm { shr cl, 3 }
	__asm { and cl, 7 }
	__asm { je L_00a0a1f3 }
	__asm { cmp cl, 5 }
	__asm { je L_00a0a203 }
	__asm { push edi }
	__asm { push esi }
	__asm { push edx }
	__asm { call fn_00a08e00 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0a203 }
	__asm { mov al, byte ptr [g_012f8550] }
	__asm { L_00a0a1f3: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ecx], al }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a0a203: }
	__asm { mov cl, byte ptr [esi] }
	__asm { movzx eax, byte ptr [esi] }
	__asm { movzx edx, byte ptr [g_012f8551] }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { cmove edx, eax }
	__asm { pop esi }
	__asm { mov byte ptr [ecx], dl }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a0a228: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov cl, byte ptr [g_012f8550] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax], cl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f8550[];
extern "C" void fn_00422750();
// FUNCTION: ROBLOXSTUDIO 0x00a0a250
extern "C" __declspec(naked) void asm_00a0a250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov dl, byte ptr [eax] }
	__asm { mov ah, dl }
	__asm { shr ah, 3 }
	__asm { and ah, 7 }
	__asm { cmp ah, 5 }
	__asm { je L_00a0a3cd }
	__asm { test ah, ah }
	__asm { je L_00a0a3cd }
	__asm { mov al, byte ptr [g_012f8550] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [ebx] }
	__asm { cmp cl, al }
	__asm { je L_00a0a292 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { jne L_00a0a292 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0a292: }
	__asm { mov cl, byte ptr [ebx + 1] }
	__asm { push edi }
	__asm { movzx edi, dl }
	__asm { shr edi, 6 }
	__asm { cmp ah, 1 }
	__asm { jne L_00a0a2b9 }
	__asm { cmp cl, al }
	__asm { je L_00a0a2b1 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { je L_00a0a3c2 }
	__asm { L_00a0a2b1: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0a2b9: }
	__asm { cmp cl, al }
	__asm { je L_00a0a2cb }
	__asm { mov dl, cl }
	__asm { and dl, 0x38 }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { cmp dl, 0x28 }
	__asm { je L_00a0a2cf }
	__asm { L_00a0a2cb: }
	__asm { mov byte ptr [ebp + 0xb], 0 }
	__asm { L_00a0a2cf: }
	__asm { push esi }
	__asm { cmp cl, al }
	__asm { je L_00a0a2f9 }
	__asm { movzx edx, cl }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { lea esi, [edx + edx*2] }
	__asm { mov edx, dword ptr [edi*4 + 0xe9cb2c] }
	__asm { mov edx, dword ptr [edx*4 + 0xe9cb14] }
	__asm { lea edx, [edx + esi*2] }
	__asm { cmp dword ptr [edx*4 + 0x12f6d50], 5 }
	__asm { jne L_00a0a2fd }
	__asm { L_00a0a2f9: }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { L_00a0a2fd: }
	__asm { mov edx, dword ptr [edi*4 + 0xe9cb3c] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dl, byte ptr [ebx + 2] }
	__asm { cmp dl, al }
	__asm { je L_00a0a31c }
	__asm { mov bl, dl }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_00a0a31c }
	__asm { mov bh, 1 }
	__asm { jmp L_00a0a31e }
	__asm { L_00a0a31c: }
	__asm { xor bh, bh }
	__asm { L_00a0a31e: }
	__asm { cmp dl, al }
	__asm { je L_00a0a343 }
	__asm { movzx esi, dl }
	__asm { mov byte ptr [ebp - 2], 1 }
	__asm { lea edi, [esi + esi*2] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [esi*4 + 0xe9cb14] }
	__asm { lea esi, [esi + edi*2] }
	__asm { cmp dword ptr [esi*4 + 0x12f6d50], 5 }
	__asm { jne L_00a0a347 }
	__asm { L_00a0a343: }
	__asm { mov byte ptr [ebp - 2], 0 }
	__asm { L_00a0a347: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ch, byte ptr [esi + 3] }
	__asm { cmp ch, al }
	__asm { je L_00a0a35f }
	__asm { mov bl, ch }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_00a0a35f }
	__asm { mov bl, 1 }
	__asm { jmp L_00a0a361 }
	__asm { L_00a0a35f: }
	__asm { xor bl, bl }
	__asm { L_00a0a361: }
	__asm { cmp ah, 3 }
	__asm { jne L_00a0a382 }
	__asm { cmp cl, al }
	__asm { je L_00a0a382 }
	__asm { cmp dl, al }
	__asm { je L_00a0a382 }
	__asm { cmp ch, al }
	__asm { je L_00a0a382 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00422750 }
	__asm { test al, al }
	__asm { je L_00a0a382 }
	__asm { mov dl, 1 }
	__asm { jmp L_00a0a384 }
	__asm { L_00a0a382: }
	__asm { xor dl, dl }
	__asm { L_00a0a384: }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a0a394 }
	__asm { test bh, bh }
	__asm { je L_00a0a394 }
	__asm { mov cl, 1 }
	__asm { jmp L_00a0a396 }
	__asm { L_00a0a394: }
	__asm { xor cl, cl }
	__asm { L_00a0a396: }
	__asm { test al, al }
	__asm { jne L_00a0a39f }
	__asm { cmp byte ptr [ebp - 1], al }
	__asm { je L_00a0a3a8 }
	__asm { L_00a0a39f: }
	__asm { test bh, bh }
	__asm { jne L_00a0a3ac }
	__asm { cmp byte ptr [ebp - 2], bh }
	__asm { jne L_00a0a3ac }
	__asm { L_00a0a3a8: }
	__asm { xor al, al }
	__asm { jmp L_00a0a3ae }
	__asm { L_00a0a3ac: }
	__asm { mov al, 1 }
	__asm { L_00a0a3ae: }
	__asm { test dl, dl }
	__asm { jne L_00a0a3c2 }
	__asm { test bl, bl }
	__asm { je L_00a0a3ba }
	__asm { test al, al }
	__asm { jne L_00a0a3c2 }
	__asm { L_00a0a3ba: }
	__asm { test cl, cl }
	__asm { je L_00a0a2b1 }
	__asm { L_00a0a3c2: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0a3cd: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a09100();
// FUNCTION: ROBLOXSTUDIO 0x00a0a3e0
extern "C" __declspec(naked) void asm_00a0a3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_00a0a43a }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_00a0a43a }
	__asm { sub edi, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00a0a415 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00a09100 }
	__asm { L_00a0a415: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { lea edx, [eax + ecx*2] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00a0a45b }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ax, word ptr [edx + 4] }
	__asm { mov word ptr [ecx + 4], ax }
	__asm { add dword ptr [esi + 4], 6 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a0a43a: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00a0a448 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00a09100 }
	__asm { L_00a0a448: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00a0a45b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ax, word ptr [edi + 4] }
	__asm { mov word ptr [ecx + 4], ax }
	__asm { L_00a0a45b: }
	__asm { add dword ptr [esi + 4], 6 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012f8550[];
extern "C" void fn_00a08d40();
extern "C" void fn_00a08e00();
extern "C" void fn_00a08f00();
extern "C" void fn_00a093b0();
extern "C" void fn_00a0a730();
extern "C" void fn_00a0a790();
extern "C" void fn_00bbe2b0();
// FUNCTION: ROBLOXSTUDIO 0x00a0a470
extern "C" __declspec(naked) void asm_00a0a470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movzx eax, word ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { cwde }
	__asm { add eax, 0x7d00 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0x7d007d00 }
	__asm { mov dword ptr [ebp - 0x20], 0x83008300 }
	__asm { cmp eax, 0xfa00 }
	__asm { ja L_00a0a71d }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { shr eax, 0x10 }
	__asm { movsx edx, ax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { shr eax, 0x10 }
	__asm { push edi }
	__asm { movzx edi, word ptr [ebx + 2] }
	__asm { movsx ecx, ax }
	__asm { movsx eax, di }
	__asm { sub ecx, edx }
	__asm { sub eax, edx }
	__asm { cmp eax, ecx }
	__asm { ja L_00a0a71c }
	__asm { movzx ecx, word ptr [ebx + 4] }
	__asm { movsx eax, cx }
	__asm { add eax, 0x7d00 }
	__asm { cmp eax, 0xfa00 }
	__asm { ja L_00a0a71c }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov ax, bx }
	__asm { sar ax, 5 }
	__asm { mov word ptr [ebp - 0x20], ax }
	__asm { mov word ptr [ebp - 0xc], ax }
	__asm { mov ax, di }
	__asm { sar ax, 4 }
	__asm { mov word ptr [ebp - 0x1e], ax }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dx, cx }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { and ecx, 0x1f }
	__asm { mov word ptr [ebp - 0x14], cx }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { sar dx, 5 }
	__asm { and edi, 0xf }
	__asm { shl eax, 5 }
	__asm { mov word ptr [ebp - 0x16], di }
	__asm { mov ecx, dword ptr [ebp - 0x16] }
	__asm { mov word ptr [ebp - 6], dx }
	__asm { mov word ptr [ebp - 0x1c], dx }
	__asm { movsx edx, ax }
	__asm { shl ecx, 0xa }
	__asm { movsx eax, cx }
	__asm { add edx, eax }
	__asm { and ebx, 0x1f }
	__asm { movsx eax, bx }
	__asm { add edx, eax }
	__asm { mov al, byte ptr [g_012f8550] }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { movzx eax, byte ptr [esi] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov ebx, 0x11 }
	__asm { add eax, esi }
	__asm { je L_00a0a55a }
	__asm { inc eax }
	__asm { jmp L_00a0a55c }
	__asm { L_00a0a55a: }
	__asm { xor eax, eax }
	__asm { L_00a0a55c: }
	__asm { movsx ecx, word ptr [ebp - 6] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ax, word ptr [ebp - 4] }
	__asm { cwde }
	__asm { shl ecx, 5 }
	__asm { add ecx, eax }
	__asm { mov ax, word ptr [ebp - 0xc] }
	__asm { cwde }
	__asm { shl ecx, 5 }
	__asm { add ecx, eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a08d40 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00a0a5f8 }
	__asm { xor edi, edi }
	__asm { L_00a0a58e: }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { L_00a0a591: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { cmp ecx, 0xff }
	__asm { cmove ecx, ebx }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { cmp al, byte ptr [ebp + 0xc] }
	__asm { jne L_00a0a5ad }
	__asm { cmp ebx, ecx }
	__asm { je L_00a0a71c }
	__asm { L_00a0a5ad: }
	__asm { test edi, edi }
	__asm { jne L_00a0a5ca }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a08f00 }
	__asm { lea edi, [eax + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00bbe2b0 }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { L_00a0a5ca: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp al, byte ptr [g_012f8550] }
	__asm { je L_00a0a636 }
	__asm { shr al, 3 }
	__asm { and al, 7 }
	__asm { je L_00a0a636 }
	__asm { cmp al, 5 }
	__asm { je L_00a0a5f2 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a08e00 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00a0a636 }
	__asm { L_00a0a5f2: }
	__asm { mov byte ptr [ebp - 3], 1 }
	__asm { jmp L_00a0a63a }
	__asm { L_00a0a5f8: }
	__asm { lea edi, [eax + 8] }
	__asm { test edi, edi }
	__asm { je L_00a0a58e }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov al, byte ptr [edx + eax] }
	__asm { mov cl, al }
	__asm { and cl, 0x38 }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { cmp cl, 0x28 }
	__asm { je L_00a0a591 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { shr edx, 1 }
	__asm { movzx ebx, byte ptr [edx + ecx] }
	__asm { mov cl, byte ptr [ebp - 0x14] }
	__asm { and cl, 1 }
	__asm { shl cl, 2 }
	__asm { shr ebx, cl }
	__asm { and ebx, 0xf }
	__asm { inc ebx }
	__asm { jmp L_00a0a591 }
	__asm { L_00a0a636: }
	__asm { mov byte ptr [ebp - 3], 0 }
	__asm { L_00a0a63a: }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00a0a790 }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [g_012f8550] }
	__asm { add esp, 0xc }
	__asm { cmp al, cl }
	__asm { je L_00a0a692 }
	__asm { mov dl, al }
	__asm { shr dl, 3 }
	__asm { and dl, 7 }
	__asm { je L_00a0a692 }
	__asm { cmp dl, 5 }
	__asm { je L_00a0a68c }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a08e00 }
	__asm { mov cl, byte ptr [g_012f8550] }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { je L_00a0a692 }
	__asm { L_00a0a68c: }
	__asm { mov byte ptr [ebp - 5], 1 }
	__asm { jmp L_00a0a696 }
	__asm { L_00a0a692: }
	__asm { mov byte ptr [ebp - 5], 0 }
	__asm { L_00a0a696: }
	__asm { xor ebx, ebx }
	__asm { cmp byte ptr [ebp - 1], cl }
	__asm { sete bl }
	__asm { xor edx, edx }
	__asm { cmp al, cl }
	__asm { sete dl }
	__asm { mov ecx, edi }
	__asm { sub ebx, edx }
	__asm { push ebx }
	__asm { call fn_00a0a730 }
	__asm { add dword ptr [esi + 0x18], ebx }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { jne L_00a0a6c3 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a093b0 }
	__asm { L_00a0a6c3: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor edi, edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov ax, word ptr [ecx + 4] }
	__asm { mov word ptr [ebp - 0x2c], ax }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { mov byte ptr [ebp - 0x2a], al }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 0x29], al }
	__asm { mov al, byte ptr [ebp - 3] }
	__asm { mov byte ptr [ebp - 0x28], al }
	__asm { mov al, byte ptr [ebp - 5] }
	__asm { mov byte ptr [ebp - 0x27], al }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub eax, dword ptr [esi + 0x1c] }
	__asm { sar eax, 2 }
	__asm { test eax, eax }
	__asm { je L_00a0a71c }
	__asm { L_00a0a700: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { lea edx, [ebp - 0x30] }
	__asm { mov ecx, dword ptr [eax + edi*4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub eax, dword ptr [esi + 0x1c] }
	__asm { inc edi }
	__asm { sar eax, 2 }
	__asm { cmp edi, eax }
	__asm { jb L_00a0a700 }
	__asm { L_00a0a71c: }
	__asm { pop edi }
	__asm { L_00a0a71d: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_0124aa48[];
extern "C" char g_0124aa4c[];
// FUNCTION: ROBLOXSTUDIO 0x00a0a820
extern "C" __declspec(naked) void asm_00a0a820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0124aa48] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebx], eax }
	__asm { movzx eax, word ptr [g_0124aa4c] }
	__asm { mov word ptr [ebx + 4], ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea edx, [eax + eax*2] }
	__asm { mov eax, dword ptr [edx*2 + 0x124aa50] }
	__asm { mov dword ptr [ebx + 6], eax }
	__asm { movzx eax, word ptr [edx*2 + 0x124aa54] }
	__asm { mov word ptr [ebx + 0xa], ax }
	__asm { mov eax, dword ptr [edx*2 + 0x124aa68] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { movzx eax, word ptr [edx*2 + 0x124aa6c] }
	__asm { mov word ptr [ebx + 0x10], ax }
	__asm { movzx eax, word ptr [ebx + 0xa] }
	__asm { add ax, word ptr [ebx + 0x10] }
	__asm { movzx edx, ax }
	__asm { movzx eax, word ptr [ebx + 8] }
	__asm { add ax, word ptr [ebx + 0xe] }
	__asm { movzx ecx, ax }
	__asm { movzx eax, word ptr [ebx + 0xc] }
	__asm { add ax, word ptr [ebx + 6] }
	__asm { mov word ptr [ebx + 0x14], cx }
	__asm { mov word ptr [ebx + 0x12], ax }
	__asm { mov word ptr [ebx + 0x16], dx }
	__asm { mov cx, word ptr [ebx + 0xa] }
	__asm { add cx, word ptr [ebx + 0x10] }
	__asm { movzx eax, word ptr [ebx + 4] }
	__asm { mov si, word ptr [ebx + 8] }
	__asm { add si, word ptr [ebx + 0xe] }
	__asm { mov di, word ptr [ebx + 0xc] }
	__asm { add di, word ptr [ebx + 6] }
	__asm { add ax, cx }
	__asm { movzx edx, ax }
	__asm { movzx eax, word ptr [ebx + 2] }
	__asm { add ax, si }
	__asm { movzx ecx, ax }
	__asm { movzx eax, word ptr [ebx] }
	__asm { add ax, di }
	__asm { pop edi }
	__asm { mov word ptr [ebx + 0x18], ax }
	__asm { pop esi }
	__asm { mov word ptr [ebx + 0x1a], cx }
	__asm { mov word ptr [ebx + 0x1c], dx }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012ddcd4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040bc40();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a0adf0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0a8e0
extern "C" __declspec(naked) void asm_00a0a8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd439b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a0adf0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012ddcd4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a0a99f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ddcd4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9cf04 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddba8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a0a99f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ddba8 }
	__asm { call fn_0040bc40 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9d0f8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0aa1d }
	__asm { push 0x124aa80 }
	__asm { mov ecx, 0x124aa80 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0aa1d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0aa08 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0aa1d }
	__asm { L_00a0aa08: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0aa1d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012ddcd4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040bb80();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a0ae50();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0aa30
extern "C" __declspec(naked) void asm_00a0aa30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd439b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a0ae50 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012ddcd4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a0aaef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ddcd4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9cf04 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddba8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a0aaef: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ddba8 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9d134 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0ab6d }
	__asm { push 0x124aa80 }
	__asm { mov ecx, 0x124aa80 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0ab6d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0ab58 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0ab6d }
	__asm { L_00a0ab58: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0ab6d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012ddcd4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a0ac40
extern "C" __declspec(naked) void asm_00a0ac40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43a06 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [g_012ddcd4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a0acec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ddcd4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9cf04 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddba8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a0acec: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ddba8 }
	__asm { call fn_0040ba00 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe5239c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0ad69 }
	__asm { push 0x124aa80 }
	__asm { mov ecx, 0x124aa80 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0ad69 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0ad54 }
	__asm { push 0x1df }
	__asm { push 0xe4fb58 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0ad69 }
	__asm { L_00a0ad54: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe544a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0ad69: }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00a0ad98 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe9d1b4 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { jmp L_00a0ad9a }
	__asm { L_00a0ad98: }
	__asm { xor edi, edi }
	__asm { L_00a0ad9a: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp edi, eax }
	__asm { je L_00a0adaa }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0adaa: }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a0adbe }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_00a0adbe: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_00a0add1 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_00a0add1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0b210
extern "C" __declspec(naked) void asm_00a0b210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x6c] }
	__asm { movss xmm3, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp + 0x10] }
	__asm { movss xmm2, dword ptr [ebp + 0xc] }
	__asm { ucomiss xmm0, xmm3 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a0b24c }
	__asm { movss xmm0, dword ptr [ecx + 0x70] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a0b24c }
	__asm { movss xmm0, dword ptr [ecx + 0x74] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0b265 }
	__asm { L_00a0b24c: }
	__asm { movss dword ptr [ecx + 0x6c], xmm3 }
	__asm { push 0x130689c }
	__asm { movss dword ptr [ecx + 0x70], xmm2 }
	__asm { movss dword ptr [ecx + 0x74], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_00a0b265: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_010380e4[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0b2b0
extern "C" __declspec(naked) void asm_00a0b2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xorps xmm0, xmm0 }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { comiss xmm0, xmm1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jae L_00a0b2d3 }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { comiss xmm1, xmm0 }
	__asm { jae L_00a0b2d3 }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00a0b2d3: }
	__asm { ucomiss xmm0, dword ptr [esi + 0x7c] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0b2fd }
	__asm { push 0x1306978 }
	__asm { movss dword ptr [esi + 0x7c], xmm0 }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { push 0x13068f4 }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a0b2fd: }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0b310 }
	__asm { push 0x13068f4 }
	__asm { call fn_007b4f50 }
	__asm { L_00a0b310: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e9d1ec[];
extern "C" char g_00e9d1f0[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0b360
extern "C" __declspec(naked) void asm_00a0b360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [g_00e9d1f0] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { comiss xmm0, xmm1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jae L_00a0b388 }
	__asm { movss xmm0, dword ptr [g_00e9d1ec] }
	__asm { comiss xmm1, xmm0 }
	__asm { jae L_00a0b388 }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00a0b388: }
	__asm { ucomiss xmm0, dword ptr [esi + 0x80] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0b3b8 }
	__asm { push 0x13069a4 }
	__asm { movss dword ptr [esi + 0x80], xmm0 }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { push 0x1306920 }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a0b3b8: }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0b3cb }
	__asm { push 0x1306920 }
	__asm { call fn_007b4f50 }
	__asm { L_00a0b3cb: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x78] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0b404 }
	__asm { push 0x130694c }
	__asm { movss dword ptr [esi + 0x78], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { push 0x13068c8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00a0b404: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038080[];
extern "C" char g_010381e4[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0b410
extern "C" __declspec(naked) void asm_00a0b410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [g_01038080] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { comiss xmm0, xmm1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jae L_00a0b438 }
	__asm { movss xmm0, dword ptr [g_010381e4] }
	__asm { comiss xmm1, xmm0 }
	__asm { jae L_00a0b438 }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00a0b438: }
	__asm { ucomiss xmm0, dword ptr [esi + 0x78] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0b462 }
	__asm { push 0x130694c }
	__asm { movss dword ptr [esi + 0x78], xmm0 }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { push 0x13068c8 }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a0b462: }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0b475 }
	__asm { push 0x13068c8 }
	__asm { call fn_007b4f50 }
	__asm { L_00a0b475: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012dde04[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040bc40();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a0b840();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0b480
extern "C" __declspec(naked) void asm_00a0b480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43a76 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a0b840 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012dde04] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a0b53f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dde04], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9d1f8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddcd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a0b53f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ddcd8 }
	__asm { call fn_0040bc40 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9d348 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0b5bd }
	__asm { push 0x124adb0 }
	__asm { mov ecx, 0x124adb0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0b5bd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0b5a8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0b5bd }
	__asm { L_00a0b5a8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0b5bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012dde04[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a0b690
extern "C" __declspec(naked) void asm_00a0b690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43ac6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [g_012dde04] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a0b73c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dde04], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9d1f8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddcd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a0b73c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ddcd8 }
	__asm { call fn_0040ba00 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe5239c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0b7b9 }
	__asm { push 0x124adb0 }
	__asm { mov ecx, 0x124adb0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0b7b9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0b7a4 }
	__asm { push 0x1df }
	__asm { push 0xe4fb58 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0b7b9 }
	__asm { L_00a0b7a4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe544a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0b7b9: }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00a0b7e8 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe9d438 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { jmp L_00a0b7ea }
	__asm { L_00a0b7e8: }
	__asm { xor edi, edi }
	__asm { L_00a0b7ea: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp edi, eax }
	__asm { je L_00a0b7fa }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0b7fa: }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a0b80e }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_00a0b80e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_00a0b821 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_00a0b821: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0bb80
extern "C" __declspec(naked) void asm_00a0bb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x6c] }
	__asm { movss xmm3, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp + 0x10] }
	__asm { movss xmm2, dword ptr [ebp + 0xc] }
	__asm { ucomiss xmm0, xmm3 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a0bbbc }
	__asm { movss xmm0, dword ptr [ecx + 0x70] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a0bbbc }
	__asm { movss xmm0, dword ptr [ecx + 0x74] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0bbd5 }
	__asm { L_00a0bbbc: }
	__asm { movss dword ptr [ecx + 0x6c], xmm3 }
	__asm { push 0x1306a00 }
	__asm { movss dword ptr [ecx + 0x70], xmm2 }
	__asm { movss dword ptr [ecx + 0x74], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_00a0bbd5: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e9d1ec[];
extern "C" char g_00e9d460[];
extern "C" char g_01038060[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0bbe0
extern "C" __declspec(naked) void asm_00a0bbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm2, dword ptr [ebp + 8] }
	__asm { mulss xmm2, dword ptr [g_00e9d460] }
	__asm { movss xmm0, dword ptr [ecx + 0x6c] }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { mulss xmm2, dword ptr [g_01038060] }
	__asm { mulss xmm1, dword ptr [g_00e9d1ec] }
	__asm { movss xmm3, dword ptr [ebp + 0x10] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { mulss xmm1, dword ptr [g_01038060] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a0bc3c }
	__asm { movss xmm0, dword ptr [ecx + 0x70] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a0bc3c }
	__asm { movss xmm0, dword ptr [ecx + 0x74] }
	__asm { ucomiss xmm0, xmm3 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0bc55 }
	__asm { L_00a0bc3c: }
	__asm { movss dword ptr [ecx + 0x6c], xmm2 }
	__asm { push 0x1306a00 }
	__asm { movss dword ptr [ecx + 0x70], xmm1 }
	__asm { movss dword ptr [ecx + 0x74], xmm3 }
	__asm { call fn_007b4f50 }
	__asm { L_00a0bc55: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10524[];
extern "C" char g_012ddf34[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040bc40();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a0c170();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0bc60
extern "C" __declspec(naked) void asm_00a0bc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a0c170 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012ddf34] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a0bd1f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ddf34], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9d470 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12dde08 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a0bd1f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12dde08 }
	__asm { call fn_0040bc40 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9d660 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0bd9d }
	__asm { push 0x124b05c }
	__asm { mov ecx, 0x124b05c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0bd9d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0bd88 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0bd9d }
	__asm { L_00a0bd88: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0bd9d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012ddf34[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040bb80();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a0c1d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0bdb0
extern "C" __declspec(naked) void asm_00a0bdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a0c1d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012ddf34] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a0be6f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ddf34], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9d470 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12dde08 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a0be6f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12dde08 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9d6ac }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0beed }
	__asm { push 0x124b05c }
	__asm { mov ecx, 0x124b05c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0beed }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0bed8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0beed }
	__asm { L_00a0bed8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0beed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012ddf34[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a0bfc0
extern "C" __declspec(naked) void asm_00a0bfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43b66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [g_012ddf34] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a0c06c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ddf34], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9d470 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12dde08 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a0c06c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12dde08 }
	__asm { call fn_0040ba00 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe5239c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0c0e9 }
	__asm { push 0x124b05c }
	__asm { mov ecx, 0x124b05c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0c0e9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0c0d4 }
	__asm { push 0x1df }
	__asm { push 0xe4fb58 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0c0e9 }
	__asm { L_00a0c0d4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe544a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0c0e9: }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00a0c118 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe9d6fc }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { jmp L_00a0c11a }
	__asm { L_00a0c118: }
	__asm { xor edi, edi }
	__asm { L_00a0c11a: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp edi, eax }
	__asm { je L_00a0c12a }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0c12a: }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a0c13e }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_00a0c13e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_00a0c151 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_00a0c151: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0c570
extern "C" __declspec(naked) void asm_00a0c570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x6c] }
	__asm { movss xmm3, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp + 0x10] }
	__asm { movss xmm2, dword ptr [ebp + 0xc] }
	__asm { ucomiss xmm0, xmm3 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a0c5ac }
	__asm { movss xmm0, dword ptr [ecx + 0x70] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a0c5ac }
	__asm { movss xmm0, dword ptr [ecx + 0x74] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0c5c5 }
	__asm { L_00a0c5ac: }
	__asm { movss dword ptr [ecx + 0x6c], xmm3 }
	__asm { push 0x1306a88 }
	__asm { movss dword ptr [ecx + 0x70], xmm2 }
	__asm { movss dword ptr [ecx + 0x74], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_00a0c5c5: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e9d1ec[];
extern "C" char g_00e9d1f0[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0c610
extern "C" __declspec(naked) void asm_00a0c610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [g_00e9d1f0] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { comiss xmm0, xmm1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jae L_00a0c638 }
	__asm { movss xmm0, dword ptr [g_00e9d1ec] }
	__asm { comiss xmm1, xmm0 }
	__asm { jae L_00a0c638 }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00a0c638: }
	__asm { ucomiss xmm0, dword ptr [esi + 0x88] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0c668 }
	__asm { push 0x1306b90 }
	__asm { movss dword ptr [esi + 0x88], xmm0 }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { push 0x1306b38 }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a0c668: }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0c67b }
	__asm { push 0x1306b38 }
	__asm { call fn_007b4f50 }
	__asm { L_00a0c67b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 0x78] }
	__asm { movss xmm3, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp + 0x10] }
	__asm { movss xmm2, dword ptr [ebp + 0xc] }
	__asm { ucomiss xmm0, xmm3 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a0c6bf }
	__asm { movss xmm0, dword ptr [ecx + 0x7c] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a0c6bf }
	__asm { movss xmm0, dword ptr [ecx + 0x80] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0c6db }
	__asm { L_00a0c6bf: }
	__asm { movss dword ptr [ecx + 0x78], xmm3 }
	__asm { push 0x1306ab4 }
	__asm { movss dword ptr [ecx + 0x7c], xmm2 }
	__asm { movss dword ptr [ecx + 0x80], xmm1 }
	__asm { call fn_007b4f50 }
	__asm { L_00a0c6db: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038120[];
extern "C" char g_010381c8[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a0c720
extern "C" __declspec(naked) void asm_00a0c720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [g_01038120] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { comiss xmm0, xmm1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jae L_00a0c748 }
	__asm { movss xmm0, dword ptr [g_010381c8] }
	__asm { comiss xmm1, xmm0 }
	__asm { jae L_00a0c748 }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00a0c748: }
	__asm { ucomiss xmm0, dword ptr [esi + 0x84] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0c778 }
	__asm { push 0x1306b64 }
	__asm { movss dword ptr [esi + 0x84], xmm0 }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { push 0x1306ae0 }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a0c778: }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0c78b }
	__asm { push 0x1306ae0 }
	__asm { call fn_007b4f50 }
	__asm { L_00a0c78b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00b65cd0();
extern "C" void fn_00d08530();
// FUNCTION: ROBLOXSTUDIO 0x00a0c9d0
extern "C" __declspec(naked) void asm_00a0c9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43c2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe9d88c }
	__asm { mov dword ptr [esi + 4], 0xe9d904 }
	__asm { mov dword ptr [esi + 0x18], 0xe9d90c }
	__asm { mov dword ptr [esi + 0x1c], 0xe9d918 }
	__asm { mov dword ptr [esi + 0x64], 0xe9d928 }
	__asm { mov dword ptr [esi + 0x7c], 0xe9d95c }
	__asm { mov edi, dword ptr [esi + 0x98] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_00a0ca52 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a0ca51 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a0ca51 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a0ca51: }
	__asm { pop ebx }
	__asm { L_00a0ca52: }
	__asm { lea ecx, [esi + 0x7c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b65cd0 }
	__asm { lea ecx, [esi + 0x64] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00d08530 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe9d74c }
	__asm { mov dword ptr [esi + 4], 0xe9d7c4 }
	__asm { mov dword ptr [esi + 0x18], 0xe9d7cc }
	__asm { mov dword ptr [esi + 0x1c], 0xe9d7d8 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de064[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0cc30
extern "C" __declspec(naked) void asm_00a0cc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd122de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { L_00a0cc50: }
	__asm { cmp dword ptr [ebx + 0x3c], 0 }
	__asm { je L_00a0cd48 }
	__asm { mov ecx, dword ptr [ebx + 0x3c] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { sar eax, 3 }
	__asm { cmp esi, eax }
	__asm { jae L_00a0cd48 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0ccad }
	__asm { test ecx, ecx }
	__asm { jne L_00a0ccad }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0cc98 }
	__asm { push 0x42 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0ccad }
	__asm { L_00a0cc98: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1018178 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0ccad: }
	__asm { mov eax, dword ptr [ebx + 0x3c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edi, dword ptr [eax + esi*8] }
	__asm { test edi, edi }
	__asm { je L_00a0cd2f }
	__asm { add edi, 0x1c }
	__asm { je L_00a0cd2f }
	__asm { mov eax, dword ptr [g_012de064] }
	__asm { test al, 1 }
	__asm { jne L_00a0cd17 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de064], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9d73c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ddf38 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a0cd17: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push 0x12ddf38 }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a0cd2f }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00a0cd35 }
	__asm { L_00a0cd2f: }
	__asm { inc esi }
	__asm { jmp L_00a0cc50 }
	__asm { L_00a0cd35: }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0cd48: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004038a0();
extern "C" void fn_004199f0();
extern "C" void fn_00421eb0();
extern "C" void fn_0068b030();
extern "C" void fn_006b9740();
extern "C" void fn_007b1a40();
extern "C" void fn_007cd560();
extern "C" void fn_00a0d000();
// FUNCTION: ROBLOXSTUDIO 0x00a0cdd0
extern "C" __declspec(naked) void asm_00a0cdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50c90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 0x30], 0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx - 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { jne L_00a0cf17 }
	__asm { push 1 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 5 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe3d9d0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebx - 0x2c] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_0068b030 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00a0ce5b }
	__asm { add edi, 0x1c }
	__asm { je L_00a0ce5b }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a0ce5b }
	__asm { add edi, -0x1c }
	__asm { jmp L_00a0ce5d }
	__asm { L_00a0ce5b: }
	__asm { xor edi, edi }
	__asm { L_00a0ce5d: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0x30], ecx }
	__asm { mov edi, dword ptr [ebx + 0x34] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebx + 0x34], edx }
	__asm { test edi, edi }
	__asm { je L_00a0ceb4 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a0ceb4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a0ceb4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a0ceb4: }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00a0cee3 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a0cee3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a0cee3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a0cee3: }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00a0cf14 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a0cf14 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00a0cf14 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a0cf14: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { L_00a0cf17: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0cf78 }
	__asm { test edi, edi }
	__asm { je L_00a0cf78 }
	__asm { lea eax, [edi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a0cf78 }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_007b1a40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a0cf78 }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { je L_00a0cf78 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0cf63 }
	__asm { push 0x59 }
	__asm { push 0xe9d960 }
	__asm { push 0xe9da04 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0cf78 }
	__asm { L_00a0cf63: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9da38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0cf78: }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_007b1a40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a0cf92 }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { jne L_00a0cfde }
	__asm { L_00a0cf92: }
	__asm { mov esi, dword ptr [ebx + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00a0cfde }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { inc eax }
	__asm { cdq }
	__asm { mov edi, 0x3c }
	__asm { idiv edi }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { inc eax }
	__asm { mov ecx, edx }
	__asm { cdq }
	__asm { idiv edi }
	__asm { mov dword ptr [ebx + 0x1c], ecx }
	__asm { push edx }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x20], edx }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], esi }
	__asm { mov ecx, dword ptr [ebx + 0x34] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a0cfd6 }
	__asm { lea eax, [ecx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a0cfd6: }
	__asm { call fn_00a0d000 }
	__asm { add esp, 0x14 }
	__asm { L_00a0cfde: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e339a8[];
extern "C" char g_00e36260[];
extern "C" char g_00e56ff4[];
extern "C" char g_00e9dab8[];
extern "C" char g_00e9dabc[];
extern "C" char g_00e9dac0[];
extern "C" char g_01038034[];
extern "C" char g_010380e4[];
extern "C" void fn_004199f0();
extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
extern "C" void fn_006dea00();
extern "C" void fn_007cd560();
extern "C" void fn_0088fc80();
extern "C" void fn_00891b30();
extern "C" void fn_00892db0();
// FUNCTION: ROBLOXSTUDIO 0x00a0d000
extern "C" __declspec(naked) void asm_00a0d000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43c58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00a0d2a0 }
	__asm { add edi, 0x1c }
	__asm { je L_00a0d2a0 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a0d2a0 }
	__asm { push ebx }
	__asm { lea ebx, [edi - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test ebx, ebx }
	__asm { je L_00a0d29f }
	__asm { mov ecx, ebx }
	__asm { call fn_00891b30 }
	__asm { movss xmm1, dword ptr [eax + 0x44] }
	__asm { ucomiss xmm1, dword ptr [g_01038034] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a0d29f }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov ecx, 0x3c }
	__asm { cmp edx, 0x1e }
	__asm { jl L_00a0d08f }
	__asm { mov eax, ecx }
	__asm { sub eax, edx }
	__asm { mov edx, eax }
	__asm { L_00a0d08f: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { cmp eax, 0x1e }
	__asm { jl L_00a0d09b }
	__asm { sub ecx, eax }
	__asm { mov eax, ecx }
	__asm { L_00a0d09b: }
	__asm { cvtsi2ss xmm0, edx }
	__asm { mov ecx, ebx }
	__asm { mulss xmm0, dword ptr [g_00e9dab8] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { cvtsi2ss xmm0, eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { mulss xmm0, dword ptr [g_00e56ff4] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { call fn_0088fc80 }
	__asm { mov esi, dword ptr [eax + 0x24] }
	__asm { mov edi, dword ptr [eax + 0x28] }
	__asm { mov ebx, dword ptr [eax + 0x2c] }
	__asm { call fn_006d6760 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_006d19a0 }
	__asm { mov dword ptr [ebp - 0x48], esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x44], edi }
	__asm { mov dword ptr [ebp - 0x40], ebx }
	__asm { call dword ptr [eax + 0x44] }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov ecx, edi }
	__asm { call fn_00892db0 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm2, xmm2 }
	__asm { mulss xmm1, xmm1 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm2, xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fsqrt }
	__asm { fstp dword ptr [ebp - 0x10] }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0xe32df8 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { fstp dword ptr [ebp - 0x2c] }
	__asm { movss dword ptr [ebp - 0x30], xmm0 }
	__asm { movss xmm1, dword ptr [ebp - 0x14] }
	__asm { mulss xmm1, dword ptr [g_00e339a8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mulss xmm1, dword ptr [g_00e36260] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0x3e23d70b }
	__asm { mov dword ptr [ebp - 0x20], 0x3f23d70b }
	__asm { movss dword ptr [ebp - 0x1c], xmm1 }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00892db0 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm2, xmm2 }
	__asm { mulss xmm1, xmm1 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm2, xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 0x14], xmm2 }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fsqrt }
	__asm { fstp dword ptr [ebp - 0x14] }
	__asm { call fn_006dea00 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0xe32df8 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0x30], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mulss xmm0, dword ptr [g_00e9dac0] }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { movss xmm3, dword ptr [ebp - 0x18] }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { movss xmm2, dword ptr [g_00e36260] }
	__asm { mov eax, dword ptr [esi] }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [g_00e9dabc] }
	__asm { subss xmm1, xmm3 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { mulss xmm3, xmm2 }
	__asm { mulss xmm1, xmm2 }
	__asm { mulss xmm0, xmm2 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { movss dword ptr [ebp - 0x24], xmm3 }
	__asm { movss dword ptr [ebp - 0x20], xmm1 }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe32df8 }
	__asm { L_00a0d29f: }
	__asm { pop ebx }
	__asm { L_00a0d2a0: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a0d2d4 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a0d2d4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00a0d2d4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a0d2d4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012ed47c[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00a0d7a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0d2f0
extern "C" __declspec(naked) void asm_00a0d2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43c96 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a0d7a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012ed47c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a0d3af }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed47c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe3f4e4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed350 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a0d3af: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ed350 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9dacc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0d42d }
	__asm { push 0x124b504 }
	__asm { mov ecx, 0x124b504 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0d42d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0d418 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0d42d }
	__asm { L_00a0d418: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0d42d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012ed47c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008841a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a0d440
extern "C" __declspec(naked) void asm_00a0d440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43cc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [g_012ed47c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a0d4ec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed47c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe3f4e4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed350 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a0d4ec: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ed350 }
	__asm { call fn_008841a0 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe9a788 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0d569 }
	__asm { push 0x124b504 }
	__asm { mov ecx, 0x124b504 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0d569 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0d554 }
	__asm { push 0x1df }
	__asm { push 0xe4fb58 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0d569 }
	__asm { L_00a0d554: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe544a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0d569: }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00a0d598 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe9dcbc }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { jmp L_00a0d59a }
	__asm { L_00a0d598: }
	__asm { xor edi, edi }
	__asm { L_00a0d59a: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp edi, eax }
	__asm { je L_00a0d5aa }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0d5aa: }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a0d5be }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_00a0d5be: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_00a0d5d1 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_00a0d5d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012ed47c[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a0d5f0
extern "C" __declspec(naked) void asm_00a0d5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43cf6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [g_012ed47c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00a0d69c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ed47c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe3f4e4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ed350 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00a0d69c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ed350 }
	__asm { call fn_0040ba00 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe5239c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0d719 }
	__asm { push 0x124b504 }
	__asm { mov ecx, 0x124b504 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0d719 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0d704 }
	__asm { push 0x1df }
	__asm { push 0xe4fb58 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0d719 }
	__asm { L_00a0d704: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe544a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0d719: }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00a0d748 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe9dcd0 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { jmp L_00a0d74a }
	__asm { L_00a0d748: }
	__asm { xor edi, edi }
	__asm { L_00a0d74a: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp edi, eax }
	__asm { je L_00a0d75a }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0d75a: }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a0d76e }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_00a0d76e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_00a0d781 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_00a0d781: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e3f4e4[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_007cb440();
extern "C" void fn_00826df0();
extern "C" void fn_00a0d800();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a0d8c0
extern "C" __declspec(naked) void asm_00a0d8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43e11 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00a0d800 }
	__asm { lea ebx, [edi + 0x64] }
	__asm { mov dword ptr [edi], 0xe9db0c }
	__asm { mov dword ptr [edi + 4], 0xe9db84 }
	__asm { mov dword ptr [edi + 0x18], 0xe9db8c }
	__asm { mov dword ptr [edi + 0x1c], 0xe9db98 }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov byte ptr [ebx], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { lea esi, [edi + 0x80] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea esi, [edi + 0x9c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea esi, [edi + 0xb8] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea esi, [edi + 0xd4] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea esi, [edi + 0xf0] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { xor ecx, ecx }
	__asm { mov byte ptr [edi + 0x10c], 1 }
	__asm { mov dword ptr [edi + 0x110], 0xbb8 }
	__asm { cmp byte ptr [g_00e3f4e4], cl }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov eax, 3 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe3f4e4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { jb L_00a0da54 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0da54: }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push 0xe9dc10 }
	__asm { push eax }
	__asm { call fn_00826df0 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { cmp ebx, ecx }
	__asm { je L_00a0daac }
	__asm { push -1 }
	__asm { mov eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { L_00a0daac: }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { jb L_00a0dac0 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0dac0: }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { jb L_00a0dae7 }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0dae7: }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push 0xe9dc2c }
	__asm { push eax }
	__asm { call fn_00826df0 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { lea esi, [edi + 0x80] }
	__asm { mov byte ptr [ebp - 4], 0x11 }
	__asm { cmp esi, ecx }
	__asm { je L_00a0db45 }
	__asm { push -1 }
	__asm { mov eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { L_00a0db45: }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jb L_00a0db59 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0db59: }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { jb L_00a0db80 }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0db80: }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push 0xe9dc48 }
	__asm { push eax }
	__asm { call fn_00826df0 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0x12 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { lea esi, [edi + 0x9c] }
	__asm { mov byte ptr [ebp - 4], 0x13 }
	__asm { cmp esi, ecx }
	__asm { je L_00a0dbde }
	__asm { push -1 }
	__asm { mov eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { L_00a0dbde: }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jb L_00a0dbf2 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0dbf2: }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { jb L_00a0dc19 }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0dc19: }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push 0xe9dc64 }
	__asm { push eax }
	__asm { call fn_00826df0 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0x14 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { lea esi, [edi + 0xb8] }
	__asm { mov byte ptr [ebp - 4], 0x15 }
	__asm { cmp esi, ecx }
	__asm { je L_00a0dc77 }
	__asm { push -1 }
	__asm { mov eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { L_00a0dc77: }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jb L_00a0dc8b }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0dc8b: }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { jb L_00a0dcb2 }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0dcb2: }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push 0xe9dc80 }
	__asm { push eax }
	__asm { call fn_00826df0 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0x16 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { lea esi, [edi + 0xd4] }
	__asm { mov byte ptr [ebp - 4], 0x17 }
	__asm { cmp esi, ecx }
	__asm { je L_00a0dd10 }
	__asm { push -1 }
	__asm { mov eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { L_00a0dd10: }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jb L_00a0dd24 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0dd24: }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { jb L_00a0dd4b }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0dd4b: }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push 0xe9dc9c }
	__asm { push eax }
	__asm { call fn_00826df0 }
	__asm { add esp, 8 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0x18 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { lea esi, [edi + 0xf0] }
	__asm { mov byte ptr [ebp - 4], 0x19 }
	__asm { cmp esi, ecx }
	__asm { je L_00a0dda9 }
	__asm { push -1 }
	__asm { mov eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { L_00a0dda9: }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jb L_00a0ddbd }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0ddbd: }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { jb L_00a0dde0 }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0dde0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00a0dfd0
extern "C" __declspec(naked) void asm_00a0dfd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f08e0 }
	__asm { mov edi, ecx }
	__asm { push 0xf1303c }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe598f8 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe6e758 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x1002850 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9de94 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9dea0 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9deac }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00a0e130
extern "C" __declspec(naked) void asm_00a0e130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f08b8 }
	__asm { mov edi, ecx }
	__asm { push 0xe640fc }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe598e0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe9de44 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9de4c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9de54 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9de5c }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9de64 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9de6c }
	__asm { push 5 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9de74 }
	__asm { push 6 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9de7c }
	__asm { push 7 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9de84 }
	__asm { push 8 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9de8c }
	__asm { push 9 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00a0e2d0
extern "C" __declspec(naked) void asm_00a0e2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f0860 }
	__asm { mov edi, ecx }
	__asm { push 0xe642f4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe598b0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0x1010c94 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9debc }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x1010c8c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00a0e410
extern "C" __declspec(naked) void asm_00a0e410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f088c }
	__asm { mov edi, ecx }
	__asm { push 0xe6435c }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe598c8 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0x1010c70 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe9debc }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x1010c74 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00a0e8e0
extern "C" __declspec(naked) void asm_00a0e8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43e7b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x2c }
	__asm { mov edi, ecx }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a0e934 }
	__asm { push 0x4033d0 }
	__asm { push 0x421ea0 }
	__asm { push 5 }
	__asm { lea esi, [eax + 4] }
	__asm { push 8 }
	__asm { push esi }
	__asm { mov dword ptr [eax], 5 }
	__asm { call fn_00cf676b }
	__asm { jmp L_00a0e936 }
	__asm { L_00a0e934: }
	__asm { xor esi, esi }
	__asm { L_00a0e936: }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi + 0x68], esi }
	__asm { test eax, eax }
	__asm { je L_00a0e963 }
	__asm { push 0x4033d0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00a0e963: }
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
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a0ea70
extern "C" __declspec(naked) void asm_00a0ea70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29038 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00a0eadc }
	__asm { cmp esi, 5 }
	__asm { jl L_00a0eadc }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0eacb }
	__asm { push 0x82 }
	__asm { push 0xe9dec8 }
	__asm { push 0xe9e070 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0eadc }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0eacb: }
	__asm { movzx eax, al }
	__asm { push 0xe9e088 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0eadc: }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { lea edx, [eax + esi*8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00a0eaf8 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a0eaf8: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], edi }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a0eb2b }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a0eb2b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a0eb2b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a0eb2b: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a0eb5c }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a0eb5c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00a0eb5c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a0eb5c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a0ee80();
// FUNCTION: ROBLOXSTUDIO 0x00a0eb70
extern "C" __declspec(naked) void asm_00a0eb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a0ee80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe9e2d8 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00a0ec1e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a0ec1e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00825140();
extern "C" void fn_00a0ee80();
extern "C" void fn_00b14210();
// FUNCTION: ROBLOXSTUDIO 0x00a0ec40
extern "C" __declspec(naked) void asm_00a0ec40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd536f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a0ee80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe9e314 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x1c], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b14210 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00a0ee80();
// FUNCTION: ROBLOXSTUDIO 0x00a0ecf0
extern "C" __declspec(naked) void asm_00a0ecf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00a0ee80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe9e3ac }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5d30 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00a0ed9e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00a0ed9e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e84ec[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0ee80
extern "C" __declspec(naked) void asm_00a0ee80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43ee6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e84ec] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00a0eefa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e84ec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe9e15c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e83c0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7cb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a0eefa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e83c0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe9e2b0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00a0ef72 }
	__asm { push 0x124b8c8 }
	__asm { mov ecx, 0x124b8c8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a0ef72 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0ef5d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0ef72 }
	__asm { L_00a0ef5d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0ef72: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e9e15c[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_00439d80();
extern "C" void fn_0043f5a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00a0edc0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00a0ef90
extern "C" __declspec(naked) void asm_00a0ef90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43f42 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a0edc0 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { lea eax, [esi + 0xa8] }
	__asm { mov dword ptr [esi], 0xe9e214 }
	__asm { mov dword ptr [esi + 4], 0xe9e28c }
	__asm { mov dword ptr [esi + 0x18], 0xe9e294 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9e2a0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004115f0 }
	__asm { call fn_0043f5a0 }
	__asm { lea eax, [esi + 0xac] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x439e10 }
	__asm { push 0x131b180 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { call fn_00439d80 }
	__asm { lea eax, [esi + 0xb0] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x439e10 }
	__asm { push 0x131b180 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x18 }
	__asm { call fn_00439d80 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00e9e15c], cl }
	__asm { mov eax, 0x12 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe9e15c }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00a0f0af }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0f0af: }
	__asm { push 0x38 }
	__asm { lea eax, [esi + 0x70] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf6804 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00437d00();
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x00a0f0d0
extern "C" __declspec(naked) void asm_00a0f0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43f8c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0xb0] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00437d00 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00a0f150 }
	__asm { add esi, 5 }
	__asm { je L_00a0f122 }
	__asm { add esi, -5 }
	__asm { jmp L_00a0f124 }
	__asm { L_00a0f122: }
	__asm { xor esi, esi }
	__asm { L_00a0f124: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a0f150 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a0f150 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a0f150: }
	__asm { lea esi, [edi + 0xac] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00437d00 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00a0f1a6 }
	__asm { add esi, 5 }
	__asm { je L_00a0f178 }
	__asm { add esi, -5 }
	__asm { jmp L_00a0f17a }
	__asm { L_00a0f178: }
	__asm { xor esi, esi }
	__asm { L_00a0f17a: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a0f1a6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a0f1a6 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a0f1a6: }
	__asm { lea esi, [edi + 0xa8] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a0f1fc }
	__asm { add esi, 5 }
	__asm { je L_00a0f1ce }
	__asm { add esi, -5 }
	__asm { jmp L_00a0f1d0 }
	__asm { L_00a0f1ce: }
	__asm { xor esi, esi }
	__asm { L_00a0f1d0: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a0f1fc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00a0f1fc }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00a0f1fc: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a0f600
extern "C" __declspec(naked) void asm_00a0f600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd44106 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00a0f66a }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00a0f66a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a0f659 }
	__asm { push 0x19 }
	__asm { push 0xe9e3d0 }
	__asm { push 0xe9e40c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0f66a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a0f659: }
	__asm { movzx eax, al }
	__asm { push 0xe9e420 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0f66a: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00a0f67a }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0f67a: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00a0f68b }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0f68b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a0f6a0
extern "C" __declspec(naked) void asm_00a0f6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39d5b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00a0f756 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp dword ptr [esi + 0xc], eax }
	__asm { je L_00a0f711 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0f6fc }
	__asm { push 0xab }
	__asm { push 0xe9e3d0 }
	__asm { push 0xe9e5e4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0f711 }
	__asm { L_00a0f6fc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9e600 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0f711: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a0f756 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00a0f756 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0f741 }
	__asm { push 0xac }
	__asm { push 0xe9e3d0 }
	__asm { push 0xe9e664 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0f756 }
	__asm { L_00a0f741: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9e678 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0f756: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00409af0();
extern "C" void fn_00410ef0();
extern "C" void fn_008ff0a0();
extern "C" void fn_00bbe900();
extern "C" void fn_00bff040();
// FUNCTION: ROBLOXSTUDIO 0x00a0f900
extern "C" __declspec(naked) void asm_00a0f900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a0f91c }
	__asm { call fn_00bbe900 }
	__asm { L_00a0f91c: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { je L_00a0f972 }
	__asm { push ebx }
	__asm { lea ecx, [eax + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { lea ebx, [eax + 4] }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_00a0f951 }
	__asm { cmp dword ptr [esi + 0x10], edi }
	__asm { jne L_00a0f951 }
	__asm { call fn_00409af0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00bff040 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a0f951: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00a0f972: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307014[];
extern "C" char g_01307018[];
extern "C" char g_0130701c[];
extern "C" char g_01307020[];
extern "C" char g_01307024[];
extern "C" char g_01307028[];
extern "C" char g_0130702c[];
extern "C" void fn_006da0e0();
extern "C" void fn_006dea00();
extern "C" void fn_00bbe410();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a0f980
extern "C" __declspec(naked) void asm_00a0f980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4413a }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01307014] }
	__asm { sub esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a0f9d6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01307014], eax }
	__asm { mov ecx, 0x1306fe4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006da0e0 }
	__asm { push 0xdfc6c0 }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_01307014] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a0f9d6: }
	__asm { test al, 2 }
	__asm { jne L_00a0fa31 }
	__asm { or eax, 2 }
	__asm { mov dword ptr [g_01307014], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [g_01307018], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [g_0130701c], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [g_01307020], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [g_01307024], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [g_01307028], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [g_0130702c], eax }
	__asm { mov eax, dword ptr [g_01307014] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a0fa31: }
	__asm { test al, 4 }
	__asm { jne L_00a0fa6e }
	__asm { or eax, 4 }
	__asm { mov dword ptr [g_01307014], eax }
	__asm { fldz }
	__asm { lea eax, [ebp - 0x14] }
	__asm { fstp qword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { push 0x1307018 }
	__asm { push 0x1306fe4 }
	__asm { mov ecx, 0x1307030 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00bbe410 }
	__asm { push 0xdfc6b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00a0fa6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1307030 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01210369[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00409af0();
extern "C" void fn_00410ef0();
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00a0f830();
extern "C" void fn_00bff040();
// FUNCTION: ROBLOXSTUDIO 0x00a0fb90
extern "C" __declspec(naked) void asm_00a0fb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { jbe L_00a0fbc0 }
	__asm { mov al, byte ptr [g_01210369] }
	__asm { test al, al }
	__asm { je L_00a0fbc0 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe9e6d4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00a0fbc0: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00a0fc0a }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { je L_00a0fc0a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a0fbf9 }
	__asm { push 0xc1 }
	__asm { push 0xe9e3d0 }
	__asm { push 0xe9e5e4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a0fc0a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00a0fbf9: }
	__asm { movzx eax, cl }
	__asm { push 0xe9e6e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a0fc0a: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { lea esi, [ebx + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edi, [ebx + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp eax, ecx }
	__asm { je L_00a0fcd5 }
	__asm { nop }
	__asm { L_00a0fc20: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebx, dword ptr [eax + 0x10] }
	__asm { mov ecx, ebx }
	__asm { call fn_00a0f830 }
	__asm { test al, al }
	__asm { je L_00a0fc85 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { cmp esi, dword ptr [eax + 4] }
	__asm { je L_00a0fc5d }
	__asm { cmp dword ptr [esi + 0x10], ebx }
	__asm { jne L_00a0fc5d }
	__asm { mov ecx, edi }
	__asm { call fn_00409af0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { add esi, 4 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bff040 }
	__asm { jmp L_00a0fccb }
	__asm { L_00a0fc5d: }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { add esi, 4 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008ff0a0 }
	__asm { jmp L_00a0fccb }
	__asm { L_00a0fc85: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00a0fccb }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00a0fcae }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00a0fcaa }
	__asm { mov edi, edi }
	__asm { L_00a0fca0: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00a0fca0 }
	__asm { L_00a0fcaa: }
	__asm { mov dword ptr [edi], ecx }
	__asm { jmp L_00a0fccb }
	__asm { L_00a0fcae: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00a0fcc9 }
	__asm { L_00a0fcb7: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, dword ptr [eax + 8] }
	__asm { jne L_00a0fcc9 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00a0fcb7 }
	__asm { L_00a0fcc9: }
	__asm { mov dword ptr [edi], eax }
	__asm { L_00a0fccb: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_00a0fc20 }
	__asm { L_00a0fcd5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a0fce0
extern "C" __declspec(naked) void asm_00a0fce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov edx, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { je L_00a0fd38 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, 9 }
	__asm { mov esi, eax }
	__asm { mov edi, edx }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a0fd38: }
	__asm { push 0x30 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00a0fd71 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { jmp L_00a0fd73 }
	__asm { L_00a0fd71: }
	__asm { xor edi, edi }
	__asm { L_00a0fd73: }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], edi }
	__asm { test eax, eax }
	__asm { je L_00a0fd86 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a0fd86: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00409af0();
extern "C" void fn_00410ef0();
extern "C" void fn_008ff0a0();
extern "C" void fn_00a0fad0();
extern "C" void fn_00bff040();
// FUNCTION: ROBLOXSTUDIO 0x00a0fdc0
extern "C" __declspec(naked) void asm_00a0fdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { je L_00a0fe1a }
	__asm { push ebx }
	__asm { lea ecx, [eax + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { lea ebx, [eax + 4] }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_00a0fdf9 }
	__asm { cmp dword ptr [esi + 0x10], edi }
	__asm { jne L_00a0fdf9 }
	__asm { call fn_00409af0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00bff040 }
	__asm { jmp L_00a0fe18 }
	__asm { L_00a0fdf9: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { L_00a0fe18: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00a0fe1a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { test eax, eax }
	__asm { je L_00a0fe31 }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { jle L_00a0fe31 }
	__asm { mov ecx, edi }
	__asm { call fn_00a0fad0 }
	__asm { L_00a0fe31: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e92814[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131edd0[];
extern "C" void fn_004118e0();
extern "C" void fn_0052e690();
extern "C" void fn_0063ee40();
extern "C" void fn_0063eec0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a10090
extern "C" __declspec(naked) void asm_00a10090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1059e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0xe8] }
	__asm { and esi, 2 }
	__asm { cmp dword ptr [edi + 0x3c], 0 }
	__asm { je L_00a1029f }
	__asm { xor ebx, ebx }
	__asm { L_00a100c6: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { je L_00a1010b }
	__asm { cmp dword ptr [edi + 0x3c], 0 }
	__asm { jne L_00a1010b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a100f6 }
	__asm { push 0x48 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a1010b }
	__asm { L_00a100f6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1004a10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a1010b: }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { sar eax, 3 }
	__asm { cmp ebx, eax }
	__asm { jae L_00a1029f }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a1015e }
	__asm { test ecx, ecx }
	__asm { jne L_00a1015e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a10149 }
	__asm { push 0x42 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a1015e }
	__asm { L_00a10149: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1018178 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a1015e: }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ebx, dword ptr [eax + ebx*8] }
	__asm { test ebx, ebx }
	__asm { je L_00a1021b }
	__asm { add ebx, 0x1c }
	__asm { je L_00a10261 }
	__asm { mov eax, dword ptr [g_0131edd0] }
	__asm { test al, 1 }
	__asm { jne L_00a101d1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131edd0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e92814] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131edd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde880 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a101d1: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { push 0x131edd8 }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a10261 }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a10261 }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { and esi, 0xffffffe7 }
	__asm { or esi, 4 }
	__asm { call fn_0063eec0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a10237 }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a10237 }
	__asm { mov eax, dword ptr [eax + 0xc8] }
	__asm { cmp eax, 5 }
	__asm { jne L_00a10224 }
	__asm { or esi, 8 }
	__asm { L_00a10218: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00a1021b: }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { inc ebx }
	__asm { jmp L_00a100c6 }
	__asm { L_00a10224: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_00a1021b }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { or esi, 0x10 }
	__asm { inc ebx }
	__asm { jmp L_00a100c6 }
	__asm { L_00a10237: }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { call fn_0063ee40 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a10218 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00a1021b }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { or esi, 8 }
	__asm { inc ebx }
	__asm { jmp L_00a100c6 }
	__asm { L_00a10261: }
	__asm { test ebx, ebx }
	__asm { je L_00a1021b }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { call fn_0052e690 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a10218 }
	__asm { add ebx, -0x1c }
	__asm { je L_00a10218 }
	__asm { cmp dword ptr [ebx + 0x90], 0 }
	__asm { je L_00a10218 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { or esi, 1 }
	__asm { cmp dword ptr [ebx + 0x7c], 5 }
	__asm { jne L_00a1021b }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { or esi, 0x20 }
	__asm { inc ebx }
	__asm { jmp L_00a100c6 }
	__asm { L_00a1029f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f890();
extern "C" void fn_006b98c0();
extern "C" void fn_00bbf6d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a10530
extern "C" __declspec(naked) void asm_00a10530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0xc4], 0 }
	__asm { jne L_00a105c2 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { lea ebx, [edi + 0x9c] }
	__asm { push ebx }
	__asm { mov byte ptr [edi + 0xc4], 1 }
	__asm { call fn_00bbf6d0 }
	__asm { add esp, 8 }
	__asm { xor esi, esi }
	__asm { L_00a10575: }
	__asm { movzx eax, byte ptr [ebx + esi] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xe9e928 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00a105ba }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a105ba: }
	__asm { inc esi }
	__asm { cmp esi, 0x10 }
	__asm { jb L_00a10575 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00a105c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010380e4[];
extern "C" char g_01038248[];
extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040e4d0();
extern "C" void fn_006b9740();
extern "C" void fn_006dea80();
extern "C" void fn_006deac0();
extern "C" void fn_006deb00();
// FUNCTION: ROBLOXSTUDIO 0x00a106a0
extern "C" __declspec(naked) void asm_00a106a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00a10864 }
	__asm { call fn_006dea80 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { mov ecx, eax }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a106ed }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a106ed }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a10864 }
	__asm { L_00a106ed: }
	__asm { call fn_006deac0 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { mov ecx, eax }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10723 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10723 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a10864 }
	__asm { L_00a10723: }
	__asm { call fn_006deb00 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { mov ecx, eax }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10759 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10759 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a10864 }
	__asm { L_00a10759: }
	__asm { call fn_006dea80 }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { xorps xmm1, xmm0 }
	__asm { xorps xmm3, xmm0 }
	__asm { xorps xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a107aa }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { ucomiss xmm0, xmm3 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a107aa }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a10864 }
	__asm { L_00a107aa: }
	__asm { call fn_006deac0 }
	__asm { movss xmm1, dword ptr [g_010385f0] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { xorps xmm0, xmm1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_0040e4d0 }
	__asm { test al, al }
	__asm { jne L_00a10864 }
	__asm { call fn_006deb00 }
	__asm { movss xmm1, dword ptr [g_010385f0] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { xorps xmm0, xmm1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_0040e4d0 }
	__asm { test al, al }
	__asm { jne L_00a10864 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a1084f }
	__asm { push 0x14d }
	__asm { push 0xe9e930 }
	__asm { push 0xe9ed88 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a10864 }
	__asm { L_00a1084f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9ee30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a10864: }
	__asm { movss xmm1, dword ptr [esi] }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { ucomiss xmm1, xmm0 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10880 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a10880: }
	__asm { movss xmm2, dword ptr [esi + 4] }
	__asm { ucomiss xmm2, xmm0 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10898 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a10898: }
	__asm { movss xmm3, dword ptr [esi + 8] }
	__asm { ucomiss xmm3, xmm0 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a108b0 }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a108b0: }
	__asm { movss xmm0, dword ptr [g_01038248] }
	__asm { ucomiss xmm1, xmm0 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a108cb }
	__asm { mov eax, 3 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a108cb: }
	__asm { ucomiss xmm2, xmm0 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a108de }
	__asm { mov eax, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a108de: }
	__asm { ucomiss xmm3, xmm0 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a108f1 }
	__asm { mov eax, 5 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a108f1: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a10930 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a1091b }
	__asm { push 0x162 }
	__asm { push 0xe9e930 }
	__asm { push 0x10062b8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a10930 }
	__asm { L_00a1091b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9ef20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a10930: }
	__asm { mov eax, 6 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006d19c0();
extern "C" void fn_006dea80();
extern "C" void fn_006deac0();
extern "C" void fn_006deb00();
extern "C" void fn_00a110d0();
extern "C" void fn_00a11230();
// FUNCTION: ROBLOXSTUDIO 0x00a10bc0
extern "C" __declspec(naked) void asm_00a10bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_006dea80 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00a11230 }
	__asm { add esp, 0xc }
	__asm { push esi }
	__asm { call fn_006deac0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00a11230 }
	__asm { add esp, 0xc }
	__asm { push esi }
	__asm { call fn_006deb00 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00a11230 }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a10db3 }
	__asm { push esi }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_00a110d0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00a11230 }
	__asm { movss xmm0, dword ptr [ebp - 0x24] }
	__asm { mov ecx, eax }
	__asm { add esp, 0xc }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10c5d }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10c5d }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a10c93 }
	__asm { L_00a10c5d: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a10c7e }
	__asm { push 0x119 }
	__asm { push 0xe9e930 }
	__asm { push 0xe9eab0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a10c93 }
	__asm { L_00a10c7e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9eaf8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a10c93: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a10db3 }
	__asm { push esi }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00a110d0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_00a11230 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { mov ecx, eax }
	__asm { add esp, 0xc }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10ced }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10ced }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a10d23 }
	__asm { L_00a10ced: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a10d0e }
	__asm { push 0x11a }
	__asm { push 0xe9e930 }
	__asm { push 0xe9eb88 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a10d23 }
	__asm { L_00a10d0e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9ebd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a10d23: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a10db3 }
	__asm { push esi }
	__asm { push esi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00a110d0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_00a11230 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov ecx, eax }
	__asm { add esp, 0xc }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10d7d }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a10d7d }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a10db3 }
	__asm { L_00a10d7d: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a10d9e }
	__asm { push 0x11b }
	__asm { push 0xe9e930 }
	__asm { push 0xe9ec60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a10db3 }
	__asm { L_00a10d9e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe9eca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a10db3: }
	__asm { fld dword ptr [ebp - 4] }
	__asm { sub esp, 0x24 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp + 0x20] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 0x1c] }
	__asm { fld dword ptr [ebp - 0x1c] }
	__asm { fstp dword ptr [esp + 0x18] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 0x14] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 0x10] }
	__asm { fld dword ptr [ebp - 0x20] }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x18] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x24] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006d19c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402750();
extern "C" void fn_00403540();
extern "C" void fn_00412c00();
extern "C" void fn_006b98c0();
extern "C" void fn_00a1a350();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a1a170
extern "C" __declspec(naked) void asm_00a1a170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46230 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { push edi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a1a350 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00a1a1ce }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a1a1ce: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push 0xea3bf4 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00402750 }
	__asm { lea esi, [eax + 0x18] }
	__asm { cmp esi, edi }
	__asm { je L_00a1a221 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00a1a208 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a1a208: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_00a1a221: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00a1a234 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a1a234: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00a1a245 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a1a245: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00402ae0();
extern "C" void fn_00403540();
extern "C" void fn_00a1a350();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a1a260
extern "C" __declspec(naked) void asm_00a1a260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a1a350 }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { inc eax }
	__asm { add esp, 4 }
	__asm { add eax, ebx }
	__asm { je L_00a1a2c1 }
	__asm { inc eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00a1a2c8 }
	__asm { L_00a1a2c1: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_00a1a2c8: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { cmovae ecx, dword ptr [ebp - 0x24] }
	__asm { add ecx, dword ptr [ebp - 0x14] }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp eax, ecx }
	__asm { je L_00a1a306 }
	__asm { L_00a1a2e8: }
	__asm { mov esi, edi }
	__asm { mov edx, edi }
	__asm { shr edx, 2 }
	__asm { shl esi, 6 }
	__asm { add esi, edx }
	__asm { movsx edx, byte ptr [eax] }
	__asm { add edx, 0x9e3779b9 }
	__asm { add edx, esi }
	__asm { inc eax }
	__asm { xor edi, edx }
	__asm { cmp eax, ecx }
	__asm { jne L_00a1a2e8 }
	__asm { L_00a1a306: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00402ae0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { lea esi, [ebx + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00a1a327 }
	__asm { lea esi, [eax + 0x18] }
	__asm { L_00a1a327: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00a1a338 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a1a338: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0042e3d0();
// FUNCTION: ROBLOXSTUDIO 0x00a1a350
extern "C" __declspec(naked) void asm_00a1a350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { jb L_00a1a363 }
	__asm { mov edi, dword ptr [edx] }
	__asm { jmp L_00a1a365 }
	__asm { L_00a1a363: }
	__asm { mov edi, edx }
	__asm { L_00a1a365: }
	__asm { mov ebx, dword ptr [edx + 0x10] }
	__asm { xor esi, esi }
	__asm { xor ecx, ecx }
	__asm { test ebx, ebx }
	__asm { je L_00a1a3be }
	__asm { L_00a1a370: }
	__asm { mov dl, byte ptr [ecx + edi] }
	__asm { movsx eax, dl }
	__asm { sub eax, 0x41 }
	__asm { cmp eax, 0x1a }
	__asm { jae L_00a1a387 }
	__asm { add dl, 0x20 }
	__asm { mov byte ptr [esi + edi], dl }
	__asm { inc esi }
	__asm { jmp L_00a1a3b6 }
	__asm { L_00a1a387: }
	__asm { cmp dl, 0x5c }
	__asm { je L_00a1a397 }
	__asm { cmp dl, 0x2f }
	__asm { je L_00a1a397 }
	__asm { mov byte ptr [esi + edi], dl }
	__asm { inc esi }
	__asm { jmp L_00a1a3b6 }
	__asm { L_00a1a397: }
	__asm { mov byte ptr [esi + edi], 0x2f }
	__asm { lea eax, [ecx + 1] }
	__asm { inc esi }
	__asm { cmp eax, ebx }
	__asm { jae L_00a1a3b6 }
	__asm { L_00a1a3a3: }
	__asm { mov dl, byte ptr [eax + edi] }
	__asm { cmp dl, 0x5c }
	__asm { je L_00a1a3b0 }
	__asm { cmp dl, 0x2f }
	__asm { jne L_00a1a3b6 }
	__asm { L_00a1a3b0: }
	__asm { inc eax }
	__asm { inc ecx }
	__asm { cmp eax, ebx }
	__asm { jb L_00a1a3a3 }
	__asm { L_00a1a3b6: }
	__asm { inc ecx }
	__asm { cmp ecx, ebx }
	__asm { jb L_00a1a370 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_00a1a3be: }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { cmp esi, eax }
	__asm { ja L_00a1a3d9 }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { mov dword ptr [edx + 0x10], esi }
	__asm { jb L_00a1a3d0 }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_00a1a3d0: }
	__asm { pop edi }
	__asm { mov byte ptr [edx + esi], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a1a3d9: }
	__asm { push 0 }
	__asm { sub esi, eax }
	__asm { push esi }
	__asm { mov ecx, edx }
	__asm { call fn_0042e3d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_00a1a490();
// FUNCTION: ROBLOXSTUDIO 0x00a1a3f0
extern "C" __declspec(naked) void asm_00a1a3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a1a490 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00a1a467 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a1a466 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a1a466 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1a466: }
	__asm { pop ebx }
	__asm { L_00a1a467: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1a650
extern "C" __declspec(naked) void asm_00a1a650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp esi, ebx }
	__asm { je L_00a1a6a0 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { L_00a1a663: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a1a692 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1a692: }
	__asm { mov eax, dword ptr [edi] }
	__asm { call eax }
	__asm { add esi, 8 }
	__asm { add esp, 0x10 }
	__asm { cmp esi, ebx }
	__asm { jne L_00a1a663 }
	__asm { L_00a1a6a0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e13198[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a1a6b0
extern "C" __declspec(naked) void asm_00a1a6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46269 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_00a1a73b }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { L_00a1a6d6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov dword ptr [ebx], eax }
	__asm { test esi, esi }
	__asm { je L_00a1a71d }
	__asm { lea eax, [esi + 0x10] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1a71d }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e13198] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e13198] }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a1a71d: }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { jne L_00a1a6d6 }
	__asm { mov eax, ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a1a73b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a1a5b0();
extern "C" void fn_00a1b510();
extern "C" void fn_00b2deb0();
// FUNCTION: ROBLOXSTUDIO 0x00a1a750
extern "C" __declspec(naked) void asm_00a1a750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46288 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { lea esi, [edi - 0x28] }
	__asm { push esi }
	__asm { call fn_00a1b510 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b2deb0 }
	__asm { fld dword ptr [ebx + 0x20] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { fstp dword ptr [esi + 0x20] }
	__asm { push eax }
	__asm { sub edi, ebx }
	__asm { sub edi, 0x28 }
	__asm { mov eax, 0x66666667 }
	__asm { imul edi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push 0 }
	__asm { push ebx }
	__asm { call fn_00a1a5b0 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00a1a7e5 }
	__asm { test al, 1 }
	__asm { jne L_00a1a7e5 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a1a7e5 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a1a7e5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e13198[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a1a880
extern "C" __declspec(naked) void asm_00a1a880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd462a9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, edi }
	__asm { add edi, 4 }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_00a1a907 }
	__asm { L_00a1a8a8: }
	__asm { push edi }
	__asm { call dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00a1a8ff }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { add ebx, 4 }
	__asm { mov dword ptr [ecx], eax }
	__asm { test esi, esi }
	__asm { je L_00a1a8ff }
	__asm { lea eax, [esi + 0x10] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1a8ff }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e13198] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e13198] }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a1a8ff: }
	__asm { add edi, 4 }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { jne L_00a1a8a8 }
	__asm { L_00a1a907: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b87f80();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a1a920
extern "C" __declspec(naked) void asm_00a1a920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd462d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00a1a954: }
	__asm { cmp edi, ebx }
	__asm { je L_00a1a9ec }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00a1a9a4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00a1a99e }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a1a9b3 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { L_00a1a99e: }
	__asm { fld dword ptr [edi + 0x20] }
	__asm { fstp dword ptr [esi + 0x20] }
	__asm { L_00a1a9a4: }
	__asm { add esi, 0x28 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x28 }
	__asm { jmp L_00a1a954 }
	__asm { L_00a1a9b3: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { jmp L_00a1a99e }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00a1a9e3 }
	__asm { L_00a1a9d3: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { call fn_00b87f80 }
	__asm { add esi, 0x28 }
	__asm { cmp esi, edi }
	__asm { jne L_00a1a9d3 }
	__asm { L_00a1a9e3: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00a1a9ec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a1ad40();
extern "C" void fn_00adee70();
// FUNCTION: ROBLOXSTUDIO 0x00a1aa00
extern "C" __declspec(naked) void asm_00a1aa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46309 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov edi, 1 }
	__asm { test eax, eax }
	__asm { je L_00a1aa59 }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1aa59: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00a1aa79 }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1aa79: }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_00a1ad40 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test eax, eax }
	__asm { je L_00a1aaa3 }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1aaa3: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_00a1aabb }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { inc edi }
	__asm { L_00a1aabb: }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00adee70 }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00a1ab02 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1ab02 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1ab02 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1ab02: }
	__asm { mov edi, dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00a1ab30 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1ab30 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_00a1ab30 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00a1ab30: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1ab50
extern "C" __declspec(naked) void asm_00a1ab50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov edi, 1 }
	__asm { test eax, eax }
	__asm { je L_00a1ab85 }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1ab85: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a1ab9d }
	__asm { add ecx, 4 }
	__asm { lock xadd dword ptr [ecx], edi }
	__asm { inc edi }
	__asm { L_00a1ab9d: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [edx + 0x14], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" void fn_0045f760();
extern "C" void fn_0045fe60();
extern "C" void fn_00a1b010();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a1abb0
extern "C" __declspec(naked) void asm_00a1abb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46339 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x54 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test eax, eax }
	__asm { jne L_00a1ac16 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x28], 0xe1815c }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045fe60 }
	__asm { L_00a1ac16: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a1b010 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_0045f760 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a1a800();
extern "C" void fn_00a1b510();
// FUNCTION: ROBLOXSTUDIO 0x00a1aca0
extern "C" __declspec(naked) void asm_00a1aca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46288 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, ecx }
	__asm { je L_00a1ad2e }
	__asm { sub ecx, 0x28 }
	__asm { mov edx, ecx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { test edi, edi }
	__asm { jle L_00a1ad2d }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_00a1b510 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push edi }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a1a800 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a1ad2d }
	__asm { test al, 1 }
	__asm { jne L_00a1ad2d }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a1ad2d }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a1ad2d: }
	__asm { pop edi }
	__asm { L_00a1ad2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a1af20();
// FUNCTION: ROBLOXSTUDIO 0x00a1ad40
extern "C" __declspec(naked) void asm_00a1ad40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a3a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_00a1ad8d }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1ad8d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00a1adac }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_00a1adac: }
	__asm { mov ecx, edi }
	__asm { call fn_00a1af20 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a1ade5 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1ade5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1ade5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1ade5: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a1ae16 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1ae16 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a1ae16 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1ae16: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_004677e0();
// FUNCTION: ROBLOXSTUDIO 0x00a1ae30
extern "C" __declspec(naked) void asm_00a1ae30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a3a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ebx, 1 }
	__asm { test eax, eax }
	__asm { je L_00a1ae7a }
	__asm { add eax, 4 }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1ae7a: }
	__asm { mov ecx, edi }
	__asm { call fn_004677e0 }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [edi + 0xc], esi }
	__asm { test esi, esi }
	__asm { je L_00a1ae9c }
	__asm { lea eax, [esi + 4] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { inc ebx }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { L_00a1ae9c: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { or ecx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00a1aed5 }
	__asm { lea eax, [ebx + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1aecf }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, ecx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1aed2 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1aecf: }
	__asm { or ecx, 0xffffffff }
	__asm { L_00a1aed2: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { L_00a1aed5: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a1af04 }
	__asm { lea eax, [esi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1af04 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { dec ecx }
	__asm { jne L_00a1af04 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1af04: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00a1ae30();
// FUNCTION: ROBLOXSTUDIO 0x00a1af20
extern "C" __declspec(naked) void asm_00a1af20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a3a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_00a1af6a }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1af6a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00a1af89 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_00a1af89: }
	__asm { mov ecx, edi }
	__asm { call fn_00a1ae30 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00a1afc8 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1afc8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1afc8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1afc8: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a1aff9 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1aff9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a1aff9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1aff9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e131ac[];
// FUNCTION: ROBLOXSTUDIO 0x00a1b010
extern "C" __declspec(naked) void asm_00a1b010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e131ac] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xea3d44 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov edi, 1 }
	__asm { test eax, eax }
	__asm { je L_00a1b049 }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1b049: }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { test eax, eax }
	__asm { je L_00a1b061 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { inc edi }
	__asm { L_00a1b061: }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e131b4[];
extern "C" void fn_00403160();
extern "C" void fn_008f2da0();
extern "C" void fn_00a1a3f0();
extern "C" void fn_00a1a520();
extern "C" void fn_00a1aa00();
extern "C" void fn_00a1ab50();
extern "C" void fn_00a1ac60();
extern "C" void fn_00a8b020();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a1b070
extern "C" __declspec(naked) void asm_00a1b070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd463c5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea ebx, [esi + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xea3c2c }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { lea eax, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { call fn_00a1a3f0 }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a8b020 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00a8b020 }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp + 0x14], ebx }
	__asm { test edi, edi }
	__asm { jle L_00a1b44e }
	__asm { L_00a1b121: }
	__asm { push 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00a1b136 }
	__asm { mov byte ptr [esi], 0 }
	__asm { jmp L_00a1b138 }
	__asm { L_00a1b136: }
	__asm { xor esi, esi }
	__asm { L_00a1b138: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebx*8] }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { add ebx, eax }
	__asm { mov dword ptr [ebp - 0x34], esi }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00a1a520 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x30], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { test edi, edi }
	__asm { je L_00a1b194 }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1b194 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1b194 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1b194: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00403160 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov dword ptr [ebp - 0x30], esi }
	__asm { test esi, esi }
	__asm { je L_00a1b1e6 }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1b1e6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1b1e6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1b1e6: }
	__asm { push 4 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x28], edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_00a1b2f5 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx*8] }
	__asm { add edx, eax }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a1b234 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1b234: }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a1b256 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1b256: }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push 0xa1c3f0 }
	__asm { push eax }
	__asm { call fn_00a1aa00 }
	__asm { or dword ptr [ebp - 0x10], 1 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call fn_00a1ab50 }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { call fn_00a1ac60 }
	__asm { add esp, 0x2c }
	__asm { lea eax, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov esi, dword ptr [ebp - 0x44] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { test esi, esi }
	__asm { je L_00a1b2ba }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1b2ba }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1b2ba }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1b2ba: }
	__asm { mov esi, dword ptr [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { test esi, esi }
	__asm { je L_00a1b2eb }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1b2eb }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1b2eb }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1b2eb: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e131b4] }
	__asm { jmp L_00a1b2f7 }
	__asm { L_00a1b2f5: }
	__asm { xor edi, edi }
	__asm { L_00a1b2f7: }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { lea eax, [ecx*8] }
	__asm { add ebx, eax }
	__asm { mov dword ptr [ebp - 0x3c], edi }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { call fn_008f2da0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x38], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { test esi, esi }
	__asm { je L_00a1b359 }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1b359 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1b359 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1b359: }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00403160 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebp - 0x3c] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov dword ptr [ebp - 0x38], esi }
	__asm { test esi, esi }
	__asm { je L_00a1b3ab }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1b3ab }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1b3ab }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1b3ab: }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test bl, 1 }
	__asm { je L_00a1b428 }
	__asm { and ebx, 0xfffffffe }
	__asm { lea eax, [ebp - 0x68] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov esi, dword ptr [ebp - 0x5c] }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { test esi, esi }
	__asm { je L_00a1b3f7 }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1b3f7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1b3f7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1b3f7: }
	__asm { mov esi, dword ptr [ebp - 0x64] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00a1b428 }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a1b428 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a1b428 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1b428: }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp + 0x14], ebx }
	__asm { cmp ebx, dword ptr [ebp + 8] }
	__asm { jl L_00a1b121 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00a1b44e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1b590
extern "C" __declspec(naked) void asm_00a1b590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a1b603 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_00a1b5ec }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jmp L_00a1b603 }
	__asm { L_00a1b5ec: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { L_00a1b603: }
	__asm { movss xmm0, dword ptr [ebp + 0x28] }
	__asm { movss dword ptr [esi + 0x20], xmm0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00a1b632 }
	__asm { test cl, 1 }
	__asm { jne L_00a1b632 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00a1b632 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a1b632: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00a1a920();
extern "C" void fn_00b873b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a1be90
extern "C" __declspec(naked) void asm_00a1be90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46490 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_00a1bee5 }
	__asm { cmp edi, 0x6666666 }
	__asm { ja L_00a1bedf }
	__asm { lea eax, [edi + edi*4] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00a1bee5 }
	__asm { L_00a1bedf: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a1bee5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00a1a920 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a1bf43 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_00b873b0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00a1bf43: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*4] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*4] }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00420c60();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a1bf90
extern "C" __declspec(naked) void asm_00a1bf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd464a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test ebx, ebx }
	__asm { je L_00a1bfe6 }
	__asm { cmp ebx, 0x1fffffff }
	__asm { ja L_00a1bfe0 }
	__asm { lea eax, [ebx*8] }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00a1bfe6 }
	__asm { L_00a1bfe0: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a1bfe6: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00420c60 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test ecx, ecx }
	__asm { je L_00a1c036 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00a1c036: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + ebx*8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_00a1be90();
// FUNCTION: ROBLOXSTUDIO 0x00a1c080
extern "C" __declspec(naked) void asm_00a1c080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00a1c11b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul esi }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x6666666 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00a1c0d1 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a1c0d1: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ebx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x6666666 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00a1c108 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a1be90 }
	__asm { L_00a1c108: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a1be90 }
	__asm { L_00a1c11b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00a1bf90();
// FUNCTION: ROBLOXSTUDIO 0x00a1c130
extern "C" __declspec(naked) void asm_00a1c130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 3 }
	__asm { cmp eax, edi }
	__asm { jae L_00a1c19d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x1fffffff }
	__asm { sar esi, 3 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00a1c167 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a1c167: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_00a1c18b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00a1bf90 }
	__asm { L_00a1c18b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_00a1bf90 }
	__asm { L_00a1c19d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_006ba230();
extern "C" void fn_00a1a6b0();
// FUNCTION: ROBLOXSTUDIO 0x00a1c250
extern "C" __declspec(naked) void asm_00a1c250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_00a1c294 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_00a1c294 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_006ba230 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a1c294: }
	__asm { cmp eax, edx }
	__asm { je L_00a1c2ce }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_00a1a6b0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_006ba230 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a1c2ce: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e131c8[];
// FUNCTION: ROBLOXSTUDIO 0x00a1c380
extern "C" __declspec(naked) void asm_00a1c380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e131c8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a1c3de }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a1c3de }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00a1c3de }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a1c3de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00a1a750();
extern "C" void fn_00b2deb0();
// FUNCTION: ROBLOXSTUDIO 0x00a1c8d0
extern "C" __declspec(naked) void asm_00a1c8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46508 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea edi, [ebx + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp esi, ecx }
	__asm { je L_00a1c98c }
	__asm { mov edx, ecx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_00a1c93c }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00a1a750 }
	__asm { add esp, 0xc }
	__asm { L_00a1c93c: }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub edi, 0x28 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b2deb0 }
	__asm { fld dword ptr [edi + 0x20] }
	__asm { fstp dword ptr [esi + 0x20] }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { cmp dword ptr [ebx], esi }
	__asm { je L_00a1c985 }
	__asm { mov eax, dword ptr [esi - 0x28] }
	__asm { test eax, eax }
	__asm { je L_00a1c981 }
	__asm { test al, 1 }
	__asm { jne L_00a1c97a }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi - 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a1c97a }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a1c97a: }
	__asm { mov dword ptr [esi - 0x28], 0 }
	__asm { L_00a1c981: }
	__asm { add dword ptr [ebx + 4], -0x28 }
	__asm { L_00a1c985: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov al, 1 }
	__asm { jmp L_00a1c98e }
	__asm { L_00a1c98c: }
	__asm { xor al, al }
	__asm { L_00a1c98e: }
	__asm { test edi, edi }
	__asm { je L_00a1c995 }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_00a1c995: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0042ba60();
extern "C" void fn_0049a1e0();
extern "C" void fn_00a1c880();
extern "C" void fn_00b2deb0();
// FUNCTION: ROBLOXSTUDIO 0x00a1c9b0
extern "C" __declspec(naked) void asm_00a1c9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { lea esi, [edi + 0x14] }
	__asm { push esi }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00a1ca24 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0042ba60 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00a1ca04 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a1ca04: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { push dword ptr [eax + ecx*4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b2deb0 }
	__asm { mov ecx, edi }
	__asm { call fn_00a1c880 }
	__asm { mov al, 1 }
	__asm { jmp L_00a1ca26 }
	__asm { L_00a1ca24: }
	__asm { xor al, al }
	__asm { L_00a1ca26: }
	__asm { test esi, esi }
	__asm { je L_00a1ca2d }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00a1ca2d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10338[];
extern "C" void fn_00422570();
extern "C" void fn_00a1bd10();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a1ca40
extern "C" __declspec(naked) void asm_00a1ca40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10338] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_00a1ca76 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00a1bd10 }
	__asm { L_00a1ca76: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { dec ecx }
	__asm { and dword ptr [esi + 0xc], ecx }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [ecx*4] }
	__asm { cmp dword ptr [edi + eax], 0 }
	__asm { jne L_00a1cab2 }
	__asm { push 0x20 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00a1caac }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a1caac: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + eax], ecx }
	__asm { L_00a1cab2: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edi + eax] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { pop edi }
	__asm { test ecx, ecx }
	__asm { je L_00a1cad2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00422570 }
	__asm { L_00a1cad2: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a1b510();
extern "C" void fn_00a1c080();
// FUNCTION: ROBLOXSTUDIO 0x00a1caf0
extern "C" __declspec(naked) void asm_00a1caf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_00a1cb5d }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_00a1cb5d }
	__asm { sub edi, eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul edi }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00a1cb3e }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00a1c080 }
	__asm { L_00a1cb3e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*4] }
	__asm { lea eax, [eax + ecx*8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a1cb85 }
	__asm { push eax }
	__asm { jmp L_00a1cb80 }
	__asm { L_00a1cb5d: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00a1cb6b }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00a1c080 }
	__asm { L_00a1cb6b: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00a1cb85 }
	__asm { push edi }
	__asm { L_00a1cb80: }
	__asm { call fn_00a1b510 }
	__asm { L_00a1cb85: }
	__asm { add dword ptr [esi + 4], 0x28 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1cba0
extern "C" __declspec(naked) void asm_00a1cba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x50] }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_00a1cbcc }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a1cbcc: }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a1cbe8 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_00a1cbe8: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { call eax }
	__asm { add esp, 0x14 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038034[];
extern "C" void fn_00422570();
extern "C" void fn_0049a1e0();
extern "C" void fn_00a1aca0();
extern "C" void fn_00a1b590();
extern "C" void fn_00a1caf0();
extern "C" void fn_00a1ce40();
// FUNCTION: ROBLOXSTUDIO 0x00a1cc00
extern "C" __declspec(naked) void asm_00a1cc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46558 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00a1cc3d }
	__asm { xor bl, bl }
	__asm { jmp L_00a1cceb }
	__asm { L_00a1cc3d: }
	__asm { movss xmm0, dword ptr [ebp + 0x28] }
	__asm { comiss xmm0, dword ptr [g_01038034] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { ja L_00a1cc58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { L_00a1cc58: }
	__asm { fld dword ptr [eax] }
	__asm { sub esp, 0x24 }
	__asm { lea eax, [ebp + 8] }
	__asm { fst dword ptr [ebp + 0x28] }
	__asm { fstp dword ptr [esp + 0x20] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { call fn_00a1b590 }
	__asm { mov esi, eax }
	__asm { mov edi, dword ptr [ebx + 0x28] }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push eax }
	__asm { call fn_0049a1e0 }
	__asm { lea eax, [edi + 0x3c] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a1caf0 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00a1aca0 }
	__asm { lea eax, [edi + 0x3c] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a1ccb7 }
	__asm { mov byte ptr [eax], 0 }
	__asm { L_00a1ccb7: }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a1cce2 }
	__asm { test al, 1 }
	__asm { jne L_00a1ccdb }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a1ccdb }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a1ccdb: }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { L_00a1cce2: }
	__asm { mov ecx, ebx }
	__asm { call fn_00a1ce40 }
	__asm { mov bl, 1 }
	__asm { L_00a1cceb: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a1cd12 }
	__asm { test al, 1 }
	__asm { jne L_00a1cd12 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a1cd12 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a1cd12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00a1ca40();
extern "C" void fn_00a1ce40();
// FUNCTION: ROBLOXSTUDIO 0x00a1cd30
extern "C" __declspec(naked) void asm_00a1cd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46580 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00a1cd68 }
	__asm { xor bl, bl }
	__asm { jmp L_00a1cda6 }
	__asm { L_00a1cd68: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { push edi }
	__asm { lea edi, [esi + 0x44] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a1ca40 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00a1cd9b }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_00a1cd9b: }
	__asm { mov ecx, ebx }
	__asm { call fn_00a1ce40 }
	__asm { pop edi }
	__asm { mov bl, 1 }
	__asm { pop esi }
	__asm { L_00a1cda6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a1cdcd }
	__asm { test al, 1 }
	__asm { jne L_00a1cdcd }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00a1cdcd }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00a1cdcd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_01038224[];
extern "C" char g_01038280[];
extern "C" void fn_00a1d1f0();
// FUNCTION: ROBLOXSTUDIO 0x00a1d340
extern "C" __declspec(naked) void asm_00a1d340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { L_00a1d351: }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a1d1f0 }
	__asm { movss xmm7, dword ptr [ebp - 0x20] }
	__asm { xorps xmm2, xmm2 }
	__asm { movss xmm6, dword ptr [ebp - 0x24] }
	__asm { movaps xmm1, xmm7 }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, xmm2 }
	__asm { mulss xmm1, xmm2 }
	__asm { mov dword ptr [ebp - 0xc], 0x7f7fffff }
	__asm { mov dword ptr [ebp - 0x10], 0xff7fffff }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { mulss xmm0, xmm2 }
	__asm { lea eax, [ebp - 4] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [g_01038224] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { ja L_00a1d3af }
	__asm { lea eax, [ebp - 0xc] }
	__asm { L_00a1d3af: }
	__asm { comiss xmm1, dword ptr [g_01038280] }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0xc], xmm4 }
	__asm { lea eax, [ebp - 4] }
	__asm { ja L_00a1d3c7 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { L_00a1d3c7: }
	__asm { movss xmm0, dword ptr [esi + 0x10] }
	__asm { subss xmm0, dword ptr [esi + 4] }
	__asm { movss xmm2, dword ptr [esi + 0xc] }
	__asm { subss xmm2, dword ptr [esi] }
	__asm { movss xmm1, dword ptr [esi + 0x14] }
	__asm { subss xmm1, dword ptr [esi + 8] }
	__asm { movss xmm5, dword ptr [eax] }
	__asm { movaps xmm3, xmm7 }
	__asm { mulss xmm3, xmm0 }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, xmm2 }
	__asm { movss dword ptr [ebp - 0x10], xmm5 }
	__asm { lea eax, [ebp - 4] }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { mulss xmm0, xmm1 }
	__asm { addss xmm3, xmm0 }
	__asm { comiss xmm4, xmm3 }
	__asm { movss dword ptr [ebp - 4], xmm3 }
	__asm { ja L_00a1d41c }
	__asm { lea eax, [ebp - 0xc] }
	__asm { L_00a1d41c: }
	__asm { comiss xmm3, xmm5 }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0xc], xmm4 }
	__asm { lea eax, [ebp - 4] }
	__asm { ja L_00a1d430 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { L_00a1d430: }
	__asm { movss xmm0, dword ptr [esi + 0x1c] }
	__asm { subss xmm0, dword ptr [esi + 4] }
	__asm { movss xmm2, dword ptr [esi + 0x18] }
	__asm { subss xmm2, dword ptr [esi] }
	__asm { movss xmm1, dword ptr [esi + 0x20] }
	__asm { subss xmm1, dword ptr [esi + 8] }
	__asm { movss xmm5, dword ptr [eax] }
	__asm { movaps xmm3, xmm7 }
	__asm { mulss xmm3, xmm0 }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, xmm2 }
	__asm { movss dword ptr [ebp - 0x10], xmm5 }
	__asm { lea eax, [ebp - 4] }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { mulss xmm0, xmm1 }
	__asm { addss xmm3, xmm0 }
	__asm { comiss xmm4, xmm3 }
	__asm { movss dword ptr [ebp - 4], xmm3 }
	__asm { ja L_00a1d485 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { L_00a1d485: }
	__asm { comiss xmm3, xmm5 }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0xc], xmm4 }
	__asm { lea eax, [ebp - 4] }
	__asm { ja L_00a1d499 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { L_00a1d499: }
	__asm { movss xmm0, dword ptr [esi + 0x28] }
	__asm { subss xmm0, dword ptr [esi + 4] }
	__asm { movss xmm2, dword ptr [esi + 0x24] }
	__asm { subss xmm2, dword ptr [esi] }
	__asm { movss xmm1, dword ptr [esi + 0x2c] }
	__asm { subss xmm1, dword ptr [esi + 8] }
	__asm { movss xmm5, dword ptr [eax] }
	__asm { movaps xmm3, xmm7 }
	__asm { mulss xmm3, xmm0 }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, xmm2 }
	__asm { movss dword ptr [ebp - 0x10], xmm5 }
	__asm { lea eax, [ebp - 4] }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { mulss xmm0, xmm1 }
	__asm { addss xmm3, xmm0 }
	__asm { comiss xmm4, xmm3 }
	__asm { movss dword ptr [ebp - 4], xmm3 }
	__asm { ja L_00a1d4ee }
	__asm { lea eax, [ebp - 0xc] }
	__asm { L_00a1d4ee: }
	__asm { comiss xmm3, xmm5 }
	__asm { movss xmm6, dword ptr [eax] }
	__asm { lea ecx, [ebp - 4] }
	__asm { ja L_00a1d4fd }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { L_00a1d4fd: }
	__asm { movss xmm1, dword ptr [ebx] }
	__asm { movss xmm2, dword ptr [ebx + 4] }
	__asm { subss xmm2, dword ptr [esi + 4] }
	__asm { subss xmm1, dword ptr [esi] }
	__asm { movss xmm0, dword ptr [ebx + 8] }
	__asm { movss xmm5, dword ptr [ebp - 0x24] }
	__asm { subss xmm0, dword ptr [esi + 8] }
	__asm { mulss xmm2, xmm7 }
	__asm { mulss xmm1, xmm5 }
	__asm { mulss xmm0, dword ptr [ebp - 0x1c] }
	__asm { addss xmm2, xmm1 }
	__asm { mov dword ptr [ebp - 0x14], 0x7f7fffff }
	__asm { mov dword ptr [ebp - 0x18], 0xff7fffff }
	__asm { lea eax, [ebp - 8] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [g_01038224] }
	__asm { comiss xmm0, xmm2 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { ja L_00a1d559 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { L_00a1d559: }
	__asm { comiss xmm2, dword ptr [g_01038280] }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { lea eax, [ebp - 8] }
	__asm { ja L_00a1d571 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { L_00a1d571: }
	__asm { movss xmm1, dword ptr [ebx + 0xc] }
	__asm { movss xmm2, dword ptr [ebx + 0x10] }
	__asm { subss xmm2, dword ptr [esi + 4] }
	__asm { subss xmm1, dword ptr [esi] }
	__asm { movss xmm0, dword ptr [ebx + 0x14] }
	__asm { subss xmm0, dword ptr [esi + 8] }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { mulss xmm2, xmm7 }
	__asm { mulss xmm1, xmm5 }
	__asm { mulss xmm0, dword ptr [ebp - 0x1c] }
	__asm { addss xmm2, xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm4 }
	__asm { lea eax, [ebp - 8] }
	__asm { addss xmm2, xmm0 }
	__asm { comiss xmm3, xmm2 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { ja L_00a1d5bc }
	__asm { lea eax, [ebp - 0x14] }
	__asm { L_00a1d5bc: }
	__asm { comiss xmm2, xmm4 }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { lea eax, [ebp - 8] }
	__asm { ja L_00a1d5d0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { L_00a1d5d0: }
	__asm { movss xmm1, dword ptr [ebx + 0x18] }
	__asm { movss xmm2, dword ptr [ebx + 0x1c] }
	__asm { subss xmm2, dword ptr [esi + 4] }
	__asm { subss xmm1, dword ptr [esi] }
	__asm { movss xmm0, dword ptr [ebx + 0x20] }
	__asm { subss xmm0, dword ptr [esi + 8] }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { mulss xmm2, xmm7 }
	__asm { mulss xmm1, xmm5 }
	__asm { mulss xmm0, dword ptr [ebp - 0x1c] }
	__asm { addss xmm2, xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm4 }
	__asm { lea eax, [ebp - 8] }
	__asm { addss xmm2, xmm0 }
	__asm { comiss xmm3, xmm2 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { ja L_00a1d61b }
	__asm { lea eax, [ebp - 0x14] }
	__asm { L_00a1d61b: }
	__asm { comiss xmm2, xmm4 }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { lea eax, [ebp - 8] }
	__asm { ja L_00a1d62f }
	__asm { lea eax, [ebp - 0x18] }
	__asm { L_00a1d62f: }
	__asm { movss xmm1, dword ptr [ebx + 0x24] }
	__asm { movss xmm2, dword ptr [ebx + 0x28] }
	__asm { subss xmm2, dword ptr [esi + 4] }
	__asm { subss xmm1, dword ptr [esi] }
	__asm { movss xmm0, dword ptr [ebx + 0x2c] }
	__asm { subss xmm0, dword ptr [esi + 8] }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { mulss xmm2, xmm7 }
	__asm { mulss xmm1, xmm5 }
	__asm { mulss xmm0, dword ptr [ebp - 0x1c] }
	__asm { addss xmm2, xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm4 }
	__asm { lea eax, [ebp - 8] }
	__asm { addss xmm2, xmm0 }
	__asm { comiss xmm3, xmm2 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { ja L_00a1d67a }
	__asm { lea eax, [ebp - 0x14] }
	__asm { L_00a1d67a: }
	__asm { comiss xmm2, xmm4 }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { ja L_00a1d689 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { L_00a1d689: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [ebp + 0x10] }
	__asm { subss xmm0, xmm2 }
	__asm { comiss xmm6, xmm0 }
	__asm { ja L_00a1d6b7 }
	__asm { addss xmm1, xmm2 }
	__asm { comiss xmm1, dword ptr [ecx] }
	__asm { ja L_00a1d6b7 }
	__asm { inc edi }
	__asm { cmp edi, 2 }
	__asm { jl L_00a1d351 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a1d6b7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009f6350();
// FUNCTION: ROBLOXSTUDIO 0x00a1dee0
extern "C" __declspec(naked) void asm_00a1dee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov edi, 4 }
	__asm { L_00a1def2: }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_009f6350 }
	__asm { fld dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { fstp dword ptr [esi] }
	__asm { add esi, 0xc }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi - 8] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi - 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { dec edi }
	__asm { jne L_00a1def2 }
	__asm { pop edi }
	__asm { fstp st(0) }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1df30
extern "C" __declspec(naked) void asm_00a1df30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { mov dword ptr [edx + 0x10], 0 }
	__asm { mov dword ptr [edx + 0x14], 0 }
	__asm { mov dword ptr [edx + 0x18], 0 }
	__asm { mov dword ptr [edx + 0x1c], 0 }
	__asm { mov dword ptr [edx + 0x20], 0 }
	__asm { mov dword ptr [edx + 0x24], 0 }
	__asm { mov dword ptr [edx + 0x28], 0 }
	__asm { mov dword ptr [edx + 0x2c], 0 }
	__asm { movss xmm6, dword ptr [ecx] }
	__asm { subss xmm6, dword ptr [eax + 0x24] }
	__asm { movss xmm3, dword ptr [ecx + 4] }
	__asm { subss xmm3, dword ptr [eax + 0x28] }
	__asm { movss xmm4, dword ptr [eax + 0xc] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm5, dword ptr [ecx + 8] }
	__asm { subss xmm5, dword ptr [eax + 0x2c] }
	__asm { mulss xmm0, xmm6 }
	__asm { movss xmm2, dword ptr [eax + 0x10] }
	__asm { movss xmm1, dword ptr [eax + 0x14] }
	__asm { mulss xmm4, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { mulss xmm0, xmm5 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm2, xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { mulss xmm0, dword ptr [eax + 0x1c] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, xmm5 }
	__asm { movss dword ptr [edx + 4], xmm2 }
	__asm { movss dword ptr [edx], xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [edx + 8], xmm1 }
	__asm { movss xmm6, dword ptr [ecx + 0xc] }
	__asm { subss xmm6, dword ptr [eax + 0x24] }
	__asm { movss xmm3, dword ptr [ecx + 0x10] }
	__asm { subss xmm3, dword ptr [eax + 0x28] }
	__asm { movss xmm5, dword ptr [eax + 0xc] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm4, dword ptr [ecx + 0x14] }
	__asm { subss xmm4, dword ptr [eax + 0x2c] }
	__asm { movss xmm2, dword ptr [eax + 0x10] }
	__asm { mulss xmm0, xmm6 }
	__asm { movss xmm1, dword ptr [eax + 0x14] }
	__asm { mulss xmm5, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm2, xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [eax + 0x1c] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss dword ptr [edx + 0xc], xmm5 }
	__asm { movss dword ptr [edx + 0x10], xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [edx + 0x14], xmm1 }
	__asm { movss xmm6, dword ptr [ecx + 0x18] }
	__asm { subss xmm6, dword ptr [eax + 0x24] }
	__asm { movss xmm3, dword ptr [ecx + 0x1c] }
	__asm { subss xmm3, dword ptr [eax + 0x28] }
	__asm { movss xmm5, dword ptr [eax + 0xc] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm4, dword ptr [ecx + 0x20] }
	__asm { subss xmm4, dword ptr [eax + 0x2c] }
	__asm { movss xmm2, dword ptr [eax + 0x10] }
	__asm { mulss xmm0, xmm6 }
	__asm { movss xmm1, dword ptr [eax + 0x14] }
	__asm { mulss xmm5, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm2, xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [eax + 0x1c] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss dword ptr [edx + 0x18], xmm5 }
	__asm { movss dword ptr [edx + 0x1c], xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [edx + 0x20], xmm1 }
	__asm { movss xmm6, dword ptr [ecx + 0x24] }
	__asm { subss xmm6, dword ptr [eax + 0x24] }
	__asm { movss xmm3, dword ptr [ecx + 0x28] }
	__asm { subss xmm3, dword ptr [eax + 0x28] }
	__asm { movss xmm5, dword ptr [eax + 0xc] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm4, dword ptr [ecx + 0x2c] }
	__asm { subss xmm4, dword ptr [eax + 0x2c] }
	__asm { movss xmm2, dword ptr [eax + 0x10] }
	__asm { mulss xmm0, xmm6 }
	__asm { movss xmm1, dword ptr [eax + 0x14] }
	__asm { mulss xmm5, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm2, xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [eax + 0x1c] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss dword ptr [edx + 0x24], xmm5 }
	__asm { movss dword ptr [edx + 0x28], xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { mov eax, edx }
	__asm { movss dword ptr [edx + 0x2c], xmm1 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a1e1e0
extern "C" __declspec(naked) void asm_00a1e1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [eax + 0x14], 0 }
	__asm { mov dword ptr [eax + 0x18], 0 }
	__asm { mov dword ptr [eax + 0x1c], 0 }
	__asm { mov dword ptr [eax + 0x20], 0 }
	__asm { mov dword ptr [eax + 0x24], 0 }
	__asm { mov dword ptr [eax + 0x28], 0 }
	__asm { mov dword ptr [eax + 0x2c], 0 }
	__asm { movss xmm4, dword ptr [ecx + 4] }
	__asm { movss xmm5, dword ptr [ecx] }
	__asm { movss xmm3, dword ptr [ecx + 8] }
	__asm { movss xmm1, dword ptr [edx + 0xc] }
	__asm { movaps xmm2, xmm5 }
	__asm { mulss xmm2, dword ptr [edx] }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [edx + 4] }
	__asm { mulss xmm1, xmm5 }
	__asm { mulss xmm5, dword ptr [edx + 0x18] }
	__asm { addss xmm2, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [edx + 8] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x10] }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm4, dword ptr [edx + 0x1c] }
	__asm { addss xmm2, dword ptr [edx + 0x24] }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm5, xmm4 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [edx + 0x14] }
	__asm { mulss xmm3, dword ptr [edx + 0x20] }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm5, xmm3 }
	__asm { addss xmm1, dword ptr [edx + 0x28] }
	__asm { addss xmm5, dword ptr [edx + 0x2c] }
	__asm { movss dword ptr [eax], xmm2 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm5 }
	__asm { movss xmm3, dword ptr [ecx + 0x10] }
	__asm { movss xmm5, dword ptr [ecx + 0xc] }
	__asm { movss xmm2, dword ptr [ecx + 0x14] }
	__asm { movaps xmm4, xmm5 }
	__asm { mulss xmm4, dword ptr [edx] }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [edx + 4] }
	__asm { movaps xmm1, xmm5 }
	__asm { mulss xmm1, dword ptr [edx + 0xc] }
	__asm { mulss xmm5, dword ptr [edx + 0x18] }
	__asm { addss xmm4, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [edx + 8] }
	__asm { addss xmm4, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [edx + 0x10] }
	__asm { mulss xmm3, dword ptr [edx + 0x1c] }
	__asm { addss xmm4, dword ptr [edx + 0x24] }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [edx + 0x14] }
	__asm { mulss xmm2, dword ptr [edx + 0x20] }
	__asm { addss xmm5, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm5, xmm2 }
	__asm { addss xmm1, dword ptr [edx + 0x28] }
	__asm { addss xmm5, dword ptr [edx + 0x2c] }
	__asm { movss dword ptr [eax + 0xc], xmm4 }
	__asm { movss dword ptr [eax + 0x10], xmm1 }
	__asm { movss dword ptr [eax + 0x14], xmm5 }
	__asm { movss xmm3, dword ptr [ecx + 0x1c] }
	__asm { movss xmm5, dword ptr [ecx + 0x18] }
	__asm { movss xmm2, dword ptr [ecx + 0x20] }
	__asm { movaps xmm4, xmm5 }
	__asm { mulss xmm4, dword ptr [edx] }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [edx + 4] }
	__asm { addss xmm4, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [edx + 8] }
	__asm { movaps xmm1, xmm5 }
	__asm { mulss xmm1, dword ptr [edx + 0xc] }
	__asm { mulss xmm5, dword ptr [edx + 0x18] }
	__asm { addss xmm4, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [edx + 0x10] }
	__asm { mulss xmm3, dword ptr [edx + 0x1c] }
	__asm { addss xmm4, dword ptr [edx + 0x24] }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm5, xmm3 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [edx + 0x14] }
	__asm { mulss xmm2, dword ptr [edx + 0x20] }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm5, xmm2 }
	__asm { addss xmm1, dword ptr [edx + 0x28] }
	__asm { addss xmm5, dword ptr [edx + 0x2c] }
	__asm { movss dword ptr [eax + 0x18], xmm4 }
	__asm { movss dword ptr [eax + 0x1c], xmm1 }
	__asm { movss dword ptr [eax + 0x20], xmm5 }
	__asm { movss xmm3, dword ptr [ecx + 0x28] }
	__asm { movss xmm5, dword ptr [ecx + 0x24] }
	__asm { movss xmm2, dword ptr [ecx + 0x2c] }
	__asm { movaps xmm4, xmm5 }
	__asm { mulss xmm4, dword ptr [edx] }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [edx + 4] }
	__asm { movaps xmm1, xmm5 }
	__asm { mulss xmm1, dword ptr [edx + 0xc] }
	__asm { mulss xmm5, dword ptr [edx + 0x18] }
	__asm { addss xmm4, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [edx + 8] }
	__asm { addss xmm4, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [edx + 0x10] }
	__asm { mulss xmm3, dword ptr [edx + 0x1c] }
	__asm { addss xmm4, dword ptr [edx + 0x24] }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [edx + 0x14] }
	__asm { mulss xmm2, dword ptr [edx + 0x20] }
	__asm { addss xmm5, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm5, xmm2 }
	__asm { addss xmm1, dword ptr [edx + 0x28] }
	__asm { addss xmm5, dword ptr [edx + 0x2c] }
	__asm { movss dword ptr [eax + 0x24], xmm4 }
	__asm { movss dword ptr [eax + 0x28], xmm1 }
	__asm { movss dword ptr [eax + 0x2c], xmm5 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00a1e450();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a1e4b0
extern "C" __declspec(naked) void asm_00a1e4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46590 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_00a1e505 }
	__asm { cmp edi, 0xaaaaaaa }
	__asm { ja L_00a1e4ff }
	__asm { lea eax, [edi + edi*2] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00a1e505 }
	__asm { L_00a1e4ff: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a1e505: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00a1e450 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00a1e552 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a1e552: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*2] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10260[];
extern "C" void fn_00a1e4b0();
// FUNCTION: ROBLOXSTUDIO 0x00a1e5a0
extern "C" __declspec(naked) void asm_00a1e5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00a1e63b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 2 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0xaaaaaaa }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00a1e5f1 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a1e5f1: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0xaaaaaaa }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00a1e628 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a1e4b0 }
	__asm { L_00a1e628: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00a1e4b0 }
	__asm { L_00a1e63b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
extern "C" void fn_006e85b0();
extern "C" void fn_008939b0();
// FUNCTION: ROBLOXSTUDIO 0x00a1e650
extern "C" __declspec(naked) void asm_00a1e650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd109e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_006e85b0 }
	__asm { add esp, 4 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008939b0 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a1e6be }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_00a1e6be }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_00a1e6be }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_00a1e6be: }
	__asm { xor edx, edx }
	__asm { cmp dword ptr [edi + 4], edx }
	__asm { jle L_00a1e6d5 }
	__asm { L_00a1e6c5: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ecx + edx*4], eax }
	__asm { inc edx }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jl L_00a1e6c5 }
	__asm { L_00a1e6d5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c8ec[];
extern "C" char g_0131c8f0[];
extern "C" char g_0131c8f4[];
extern "C" char g_0131c8f8[];
extern "C" char g_0131c8fc[];
extern "C" char g_0131c900[];
extern "C" char g_0131c904[];
extern "C" void fn_006b9740();
extern "C" void fn_006dec80();
extern "C" void fn_0099c980();
extern "C" void fn_009f7170();
// FUNCTION: ROBLOXSTUDIO 0x00a1f9c0
extern "C" __declspec(naked) void asm_00a1f9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd465ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x48 }
	__asm { test al, al }
	__asm { je L_00a1fa22 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { jg L_00a1fa22 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a1fa11 }
	__asm { push 0x5f }
	__asm { push 0xea41a4 }
	__asm { push 0xe90068 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a1fa22 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a1fa11: }
	__asm { movzx eax, al }
	__asm { push 0xea43c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a1fa22: }
	__asm { mov eax, dword ptr [g_0131c8ec] }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { test al, 1 }
	__asm { jne L_00a1faa3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c8ec], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006dec80 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [g_0131c8f0], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [g_0131c8f4], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [g_0131c8f8], eax }
	__asm { call fn_006dec80 }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { xorps xmm2, xmm3 }
	__asm { xorps xmm1, xmm3 }
	__asm { xorps xmm0, xmm3 }
	__asm { movss dword ptr [g_0131c8fc], xmm2 }
	__asm { movss dword ptr [g_0131c900], xmm1 }
	__asm { movss dword ptr [g_0131c904], xmm0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a1faa3: }
	__asm { mov eax, dword ptr [g_0131c8f0] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_0131c8f4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [g_0131c8f8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [g_0131c8fc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [g_0131c900] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [g_0131c904] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp dword ptr [edx + 4], ecx }
	__asm { jle L_00a1fc28 }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { push edi }
	__asm { L_00a1faf0: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [eax + ecx*4] }
	__asm { mov eax, dword ptr [ecx + 0x100] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { mulss xmm2, xmm4 }
	__asm { mulss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 0x24], xmm2 }
	__asm { mulss xmm0, xmm4 }
	__asm { xorps xmm2, xmm3 }
	__asm { movss dword ptr [ebp - 0x20], xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { xorps xmm1, xmm3 }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { xorps xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { call fn_0099c980 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_009f7170 }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { comiss xmm0, dword ptr [esi + 8] }
	__asm { lea eax, [esi + 8] }
	__asm { ja L_00a1fb84 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { L_00a1fb84: }
	__asm { movss xmm0, dword ptr [ebp - 0x38] }
	__asm { comiss xmm0, dword ptr [esi + 4] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { lea eax, [esi + 4] }
	__asm { ja L_00a1fb99 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { L_00a1fb99: }
	__asm { movss xmm0, dword ptr [ebp - 0x3c] }
	__asm { comiss xmm0, dword ptr [esi] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mov eax, esi }
	__asm { ja L_00a1fbac }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { L_00a1fbac: }
	__asm { fld dword ptr [eax] }
	__asm { lea eax, [esi + 0x14] }
	__asm { fstp dword ptr [esi] }
	__asm { movss dword ptr [esi + 4], xmm1 }
	__asm { movss dword ptr [esi + 8], xmm2 }
	__asm { movss xmm0, dword ptr [esi + 0x14] }
	__asm { comiss xmm0, dword ptr [ebp - 0x28] }
	__asm { ja L_00a1fbcb }
	__asm { lea eax, [ebp - 0x28] }
	__asm { L_00a1fbcb: }
	__asm { movss xmm0, dword ptr [esi + 0x10] }
	__asm { comiss xmm0, dword ptr [ebp - 0x2c] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { lea eax, [esi + 0x10] }
	__asm { ja L_00a1fbe0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { L_00a1fbe0: }
	__asm { movss xmm0, dword ptr [esi + 0xc] }
	__asm { comiss xmm0, dword ptr [ebp - 0x30] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { lea eax, [esi + 0xc] }
	__asm { ja L_00a1fbf5 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { L_00a1fbf5: }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { inc ecx }
	__asm { movss dword ptr [esi + 0x10], xmm1 }
	__asm { movss dword ptr [esi + 0x14], xmm2 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp ecx, dword ptr [edx + 4] }
	__asm { jl L_00a1faf0 }
	__asm { pop edi }
	__asm { L_00a1fc28: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c8ec[];
extern "C" char g_0131c8f0[];
extern "C" char g_0131c8f4[];
extern "C" char g_0131c8f8[];
extern "C" char g_0131c8fc[];
extern "C" char g_0131c900[];
extern "C" char g_0131c904[];
extern "C" void fn_006b9740();
extern "C" void fn_006dec80();
extern "C" void fn_0099c980();
extern "C" void fn_009f67a0();
// FUNCTION: ROBLOXSTUDIO 0x00a1fed0
extern "C" __declspec(naked) void asm_00a1fed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd465ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x48 }
	__asm { test al, al }
	__asm { je L_00a1ff32 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { jg L_00a1ff32 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a1ff21 }
	__asm { push 0x25 }
	__asm { push 0xea41a4 }
	__asm { push 0xe90068 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a1ff32 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a1ff21: }
	__asm { movzx eax, al }
	__asm { push 0xea4240 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a1ff32: }
	__asm { mov eax, dword ptr [g_0131c8ec] }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { test al, 1 }
	__asm { jne L_00a1ffb3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c8ec], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006dec80 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [g_0131c8f0], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [g_0131c8f4], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [g_0131c8f8], eax }
	__asm { call fn_006dec80 }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { xorps xmm2, xmm3 }
	__asm { xorps xmm1, xmm3 }
	__asm { xorps xmm0, xmm3 }
	__asm { movss dword ptr [g_0131c8fc], xmm2 }
	__asm { movss dword ptr [g_0131c900], xmm1 }
	__asm { movss dword ptr [g_0131c904], xmm0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a1ffb3: }
	__asm { mov eax, dword ptr [g_0131c8f0] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_0131c8f4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [g_0131c8f8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [g_0131c8fc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [g_0131c900] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [g_0131c904] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { cmp dword ptr [ecx + 4], edx }
	__asm { jle L_00a2013d }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { push edi }
	__asm { lea edi, [esi + 0xc] }
	__asm { L_00a20003: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx + edx*4] }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { mulss xmm2, xmm4 }
	__asm { mulss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 0x24], xmm2 }
	__asm { mulss xmm0, xmm4 }
	__asm { xorps xmm2, xmm3 }
	__asm { movss dword ptr [ebp - 0x20], xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { xorps xmm1, xmm3 }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { xorps xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov ecx, dword ptr [ecx + edx*4] }
	__asm { call fn_0099c980 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call fn_009f67a0 }
	__asm { mov ecx, eax }
	__asm { lea edx, [esi + 8] }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { comiss xmm0, dword ptr [edx] }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx + 8] }
	__asm { cmova eax, edx }
	__asm { comiss xmm0, dword ptr [esi + 4] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { lea eax, [ecx + 4] }
	__asm { lea edx, [esi + 4] }
	__asm { cmova eax, edx }
	__asm { comiss xmm0, dword ptr [esi] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mov eax, esi }
	__asm { ja L_00a200c6 }
	__asm { mov eax, ecx }
	__asm { L_00a200c6: }
	__asm { fld dword ptr [eax] }
	__asm { lea eax, [ecx + 0xc] }
	__asm { fstp dword ptr [esi] }
	__asm { movss dword ptr [edx], xmm1 }
	__asm { movss dword ptr [esi + 8], xmm2 }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { comiss xmm0, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [edi + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lea ecx, [eax + 8] }
	__asm { cmova ecx, edx }
	__asm { comiss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [ecx] }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { lea edx, [edi + 4] }
	__asm { lea ecx, [eax + 4] }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { cmova ecx, edx }
	__asm { comiss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmova eax, edi }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [edi] }
	__asm { movss dword ptr [edx], xmm1 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { inc edx }
	__asm { movss dword ptr [edi + 8], xmm2 }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jl L_00a20003 }
	__asm { pop edi }
	__asm { L_00a2013d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c8ec[];
extern "C" char g_0131c8f0[];
extern "C" char g_0131c8f4[];
extern "C" char g_0131c8f8[];
extern "C" char g_0131c8fc[];
extern "C" char g_0131c900[];
extern "C" char g_0131c904[];
extern "C" void fn_006b9740();
extern "C" void fn_006dec80();
extern "C" void fn_0099c980();
extern "C" void fn_009f67a0();
// FUNCTION: ROBLOXSTUDIO 0x00a20150
extern "C" __declspec(naked) void asm_00a20150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd465ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test cl, cl }
	__asm { je L_00a201bb }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { sar eax, 2 }
	__asm { test eax, eax }
	__asm { jne L_00a201bb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a201aa }
	__asm { push 0x18 }
	__asm { push 0xea41a4 }
	__asm { push 0xe90068 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a201bb }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00a201aa: }
	__asm { movzx eax, cl }
	__asm { push 0xea41e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a201bb: }
	__asm { mov eax, dword ptr [g_0131c8ec] }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { test al, 1 }
	__asm { jne L_00a2023c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c8ec], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006dec80 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [g_0131c8f0], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [g_0131c8f4], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [g_0131c8f8], eax }
	__asm { call fn_006dec80 }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { xorps xmm2, xmm3 }
	__asm { xorps xmm1, xmm3 }
	__asm { xorps xmm0, xmm3 }
	__asm { movss dword ptr [g_0131c8fc], xmm2 }
	__asm { movss dword ptr [g_0131c900], xmm1 }
	__asm { movss dword ptr [g_0131c904], xmm0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a2023c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_0131c8f0] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_0131c8f4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [g_0131c8f8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [g_0131c8fc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [g_0131c900] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [g_0131c904] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, edx }
	__asm { xor ecx, ecx }
	__asm { sar eax, 2 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { test eax, eax }
	__asm { je L_00a203d0 }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { lea edi, [esi + 0xc] }
	__asm { L_00a20290: }
	__asm { mov eax, dword ptr [edx + ecx*4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { mulss xmm2, xmm4 }
	__asm { mulss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 0x24], xmm2 }
	__asm { mulss xmm0, xmm4 }
	__asm { xorps xmm2, xmm3 }
	__asm { movss dword ptr [ebp - 0x20], xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { xorps xmm1, xmm3 }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { xorps xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov ecx, dword ptr [edx + ecx*4] }
	__asm { call fn_0099c980 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call fn_009f67a0 }
	__asm { mov ecx, eax }
	__asm { lea edx, [esi + 8] }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { comiss xmm0, dword ptr [edx] }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx + 8] }
	__asm { cmova eax, edx }
	__asm { comiss xmm0, dword ptr [esi + 4] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { lea eax, [ecx + 4] }
	__asm { lea edx, [esi + 4] }
	__asm { cmova eax, edx }
	__asm { comiss xmm0, dword ptr [esi] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mov eax, esi }
	__asm { ja L_00a20351 }
	__asm { mov eax, ecx }
	__asm { L_00a20351: }
	__asm { fld dword ptr [eax] }
	__asm { lea eax, [ecx + 0xc] }
	__asm { fstp dword ptr [esi] }
	__asm { movss dword ptr [edx], xmm1 }
	__asm { movss dword ptr [esi + 8], xmm2 }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { comiss xmm0, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [edi + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lea ecx, [eax + 8] }
	__asm { cmova ecx, edx }
	__asm { comiss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [ecx] }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { lea edx, [edi + 4] }
	__asm { lea ecx, [eax + 4] }
	__asm { cmova ecx, edx }
	__asm { comiss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ecx] }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { cmova eax, edi }
	__asm { inc dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [edi] }
	__asm { movss dword ptr [edx], xmm1 }
	__asm { movss dword ptr [edi + 8], xmm2 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { sub ecx, edx }
	__asm { sar ecx, 2 }
	__asm { cmp dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { jb L_00a20290 }
	__asm { L_00a203d0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038034[];
extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00891b10();
extern "C" void fn_0099c980();
extern "C" void fn_009f7170();
// FUNCTION: ROBLOXSTUDIO 0x00a203f0
extern "C" __declspec(naked) void asm_00a203f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_00a2043f }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { jg L_00a2043f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a2042e }
	__asm { push 0x42 }
	__asm { push 0xea41a4 }
	__asm { push 0xe90068 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a2043f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a2042e: }
	__asm { movzx eax, al }
	__asm { push 0xea4300 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a2043f: }
	__asm { xor ecx, ecx }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp dword ptr [edi + 4], ecx }
	__asm { jle L_00a20528 }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { nop }
	__asm { L_00a20460: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + esi*4] }
	__asm { mov eax, dword ptr [ecx + 0x100] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { mulss xmm2, xmm4 }
	__asm { mulss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { mulss xmm0, xmm4 }
	__asm { xorps xmm2, xmm3 }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss dword ptr [ebp - 0xc], xmm2 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { xorps xmm1, xmm3 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { xorps xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_0099c980 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_009f7170 }
	__asm { movss xmm1, dword ptr [ebp - 0x3c] }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { subss xmm1, dword ptr [ebp - 0x48] }
	__asm { subss xmm0, dword ptr [ebp - 0x40] }
	__asm { mulss xmm0, xmm1 }
	__asm { comiss xmm0, dword ptr [g_01038034] }
	__asm { jbe L_00a2050b }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { jmp L_00a2050e }
	__asm { L_00a2050b: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { L_00a2050e: }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jl L_00a20460 }
	__asm { L_00a20528: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [eax + ecx*4] }
	__asm { call fn_00891b10 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038034[];
extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00891b10();
extern "C" void fn_0099c980();
extern "C" void fn_009f7170();
// FUNCTION: ROBLOXSTUDIO 0x00a20540
extern "C" __declspec(naked) void asm_00a20540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test cl, cl }
	__asm { je L_00a20596 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { sar eax, 2 }
	__asm { test eax, eax }
	__asm { jne L_00a20596 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a20585 }
	__asm { push 0x31 }
	__asm { push 0xea41a4 }
	__asm { push 0xe90068 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a20596 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00a20585: }
	__asm { movzx eax, cl }
	__asm { push 0xea42a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a20596: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { xor edx, edx }
	__asm { sar eax, 2 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { test eax, eax }
	__asm { je L_00a2068f }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { nop }
	__asm { L_00a205c0: }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { mov eax, dword ptr [ecx + 0x100] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { mulss xmm2, xmm4 }
	__asm { mulss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { mulss xmm0, xmm4 }
	__asm { xorps xmm2, xmm3 }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss dword ptr [ebp - 0xc], xmm2 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { xorps xmm1, xmm3 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { xorps xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_0099c980 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_009f7170 }
	__asm { movss xmm1, dword ptr [ebp - 0x3c] }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { subss xmm1, dword ptr [ebp - 0x48] }
	__asm { subss xmm0, dword ptr [ebp - 0x40] }
	__asm { mulss xmm0, xmm1 }
	__asm { comiss xmm0, dword ptr [g_01038034] }
	__asm { jbe L_00a20669 }
	__asm { mov edx, esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { jmp L_00a2066c }
	__asm { L_00a20669: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_00a2066c: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { movss xmm3, dword ptr [g_010385f0] }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { sub eax, ecx }
	__asm { inc esi }
	__asm { sar eax, 2 }
	__asm { cmp esi, eax }
	__asm { jb L_00a205c0 }
	__asm { L_00a2068f: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [eax + edx*4] }
	__asm { call fn_00891b10 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00a206d0
extern "C" __declspec(naked) void asm_00a206d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a2078c }
	__asm { cmp eax, dword ptr [esi + 0xc] }
	__asm { je L_00a2078c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { je L_00a2077c }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { je L_00a20733 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a2071e }
	__asm { push 0x6c }
	__asm { push 0xea3f40 }
	__asm { push 0xea3fec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a20733 }
	__asm { L_00a2071e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea4000 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a20733: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a2077c }
	__asm { lea eax, [edi - 1] }
	__asm { and eax, 1 }
	__asm { cmp dword ptr [esi + eax*4 + 4], 0 }
	__asm { jne L_00a2077c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a20767 }
	__asm { push 0x6d }
	__asm { push 0xea3f40 }
	__asm { push 0xea4060 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a2077c }
	__asm { L_00a20767: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea4078 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a2077c: }
	__asm { lea eax, [edi - 1] }
	__asm { and eax, 1 }
	__asm { pop edi }
	__asm { mov eax, dword ptr [esi + eax*4 + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a2078c: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test al, al }
	__asm { je L_00a207d4 }
	__asm { cmp dword ptr [esi + edi*4 + 4], 0 }
	__asm { jne L_00a207d4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a207c3 }
	__asm { push 0x68 }
	__asm { push 0xea3f40 }
	__asm { push 0xea3f80 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a207d4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a207c3: }
	__asm { movzx ecx, al }
	__asm { push 0xea3f90 }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a207d4: }
	__asm { mov eax, dword ptr [esi + edi*4 + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0099c980();
extern "C" void fn_0099cc10();
// FUNCTION: ROBLOXSTUDIO 0x00a20800
extern "C" __declspec(naked) void asm_00a20800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { cmp dword ptr [eax + 4], ebx }
	__asm { jle L_00a20857 }
	__asm { L_00a20811: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + ebx*4] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_0099cc10 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { comiss xmm0, dword ptr [eax + 4] }
	__asm { jbe L_00a2084e }
	__asm { mov esi, dword ptr [esi + 0x100] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edi, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_0099c980 }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00a20860 }
	__asm { L_00a2084e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { inc ebx }
	__asm { cmp ebx, dword ptr [eax + 4] }
	__asm { jl L_00a20811 }
	__asm { L_00a20857: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a20860: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010380b8[];
extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
// FUNCTION: ROBLOXSTUDIO 0x00a20870
extern "C" __declspec(naked) void asm_00a20870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x40 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor ebx, ebx }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { cmp dword ptr [eax + 4], ebx }
	__asm { jle L_00a2095a }
	__asm { movss xmm3, dword ptr [g_010380b8] }
	__asm { xor esi, esi }
	__asm { L_00a20896: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { comiss xmm0, dword ptr [eax + esi + 4] }
	__asm { jbe L_00a20934 }
	__asm { movss xmm0, dword ptr [eax + esi] }
	__asm { movss xmm1, dword ptr [eax + esi + 0x10] }
	__asm { movss xmm2, dword ptr [eax + esi + 0x14] }
	__asm { addss xmm0, dword ptr [eax + esi + 0xc] }
	__asm { addss xmm1, dword ptr [eax + esi + 4] }
	__asm { addss xmm2, dword ptr [eax + esi + 8] }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { call fn_006d6760 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea edx, [ebp - 0x40] }
	__asm { mov eax, dword ptr [eax] }
	__asm { or ebx, 1 }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov ecx, dword ptr [eax + 0x100] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { fstp dword ptr [esp] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0x70] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a20934 }
	__asm { mov al, 1 }
	__asm { jmp L_00a20936 }
	__asm { L_00a20934: }
	__asm { xor al, al }
	__asm { L_00a20936: }
	__asm { test bl, 1 }
	__asm { je L_00a2093e }
	__asm { and ebx, 0xfffffffe }
	__asm { L_00a2093e: }
	__asm { test al, al }
	__asm { jne L_00a20963 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss xmm3, dword ptr [g_010380b8] }
	__asm { inc edi }
	__asm { add esi, 0x18 }
	__asm { cmp edi, dword ptr [eax + 4] }
	__asm { jl L_00a20896 }
	__asm { L_00a2095a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a20963: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006dea00();
extern "C" void fn_00a21000();
extern "C" void fn_00b589f0();
// FUNCTION: ROBLOXSTUDIO 0x00a210c0
extern "C" __declspec(naked) void asm_00a210c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { je L_00a2113c }
	__asm { call fn_006dea00 }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { mov ecx, eax }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a2113c }
	__asm { movss xmm0, dword ptr [edi + 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a2113c }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a2113c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a21127 }
	__asm { push 0xb9 }
	__asm { push 0xea41a4 }
	__asm { push 0xea4480 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a2113c }
	__asm { L_00a21127: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea44a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a2113c: }
	__asm { push 1 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a21000 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { addss xmm0, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [edi + 4] }
	__asm { addss xmm0, dword ptr [esi + 4] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { addss xmm0, dword ptr [esi + 8] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00b589f0 }
	__asm { fld dword ptr [eax] }
	__asm { add esp, 0x18 }
	__asm { fstp dword ptr [esi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { fstp dword ptr [esi + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006dea00();
extern "C" void fn_00a21000();
extern "C" void fn_00b589f0();
extern "C" void fn_00b58a70();
// FUNCTION: ROBLOXSTUDIO 0x00a211b0
extern "C" __declspec(naked) void asm_00a211b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { cmp byte ptr [ebp + 0x14], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { subss xmm0, dword ptr [edi] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { subss xmm0, dword ptr [edi + 4] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { subss xmm0, dword ptr [edi + 8] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { je L_00a21207 }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00b589f0 }
	__asm { add esp, 0xc }
	__asm { jmp L_00a21217 }
	__asm { L_00a21207: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00b58a70 }
	__asm { add esp, 8 }
	__asm { L_00a21217: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_006dea00 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov ecx, eax }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a2126f }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a2126f }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a2126f }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a2126f: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a21000 }
	__asm { fld dword ptr [esi] }
	__asm { fstp dword ptr [edi] }
	__asm { add esp, 0xc }
	__asm { fld dword ptr [esi + 4] }
	__asm { mov al, 1 }
	__asm { fstp dword ptr [edi + 4] }
	__asm { fld dword ptr [esi + 8] }
	__asm { fstp dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a1e5a0();
// FUNCTION: ROBLOXSTUDIO 0x00a212e0
extern "C" __declspec(naked) void asm_00a212e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_00a21353 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_00a21353 }
	__asm { sub edi, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { sar edx, 2 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00a21318 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00a1e5a0 }
	__asm { L_00a21318: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { lea edx, [eax + ecx*8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00a2138a }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { add dword ptr [esi + 4], 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a21353: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00a21361 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00a1e5a0 }
	__asm { L_00a21361: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00a2138a }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { L_00a2138a: }
	__asm { add dword ptr [esi + 4], 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e68f0c[];
extern "C" char g_01038064[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006dea00();
extern "C" void fn_00a20a00();
extern "C" void fn_00a21d30();
// FUNCTION: ROBLOXSTUDIO 0x00a213a0
extern "C" __declspec(naked) void asm_00a213a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00a21410 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a213f1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a213e0 }
	__asm { push 0x1a9 }
	__asm { push 0xea41a4 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a213f1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a213e0: }
	__asm { movzx eax, al }
	__asm { push 0xea4a40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a213f1: }
	__asm { call fn_006dea00 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a21410: }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, eax }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { ucomiss xmm0, dword ptr [edx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a2145f }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { ucomiss xmm0, dword ptr [edx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a2145f }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { ucomiss xmm0, dword ptr [edx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a21515 }
	__asm { L_00a2145f: }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a21d30 }
	__asm { add esp, 0x18 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a21515 }
	__asm { call fn_006dea00 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov ecx, eax }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a214b9 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a214b9 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a21515 }
	__asm { L_00a214b9: }
	__asm { fld dword ptr [g_00e68f0c] }
	__asm { sub esp, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_01038064] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { call fn_00a20a00 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00a21515 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a21500 }
	__asm { push 0x1b9 }
	__asm { push 0xea41a4 }
	__asm { push 0xea4a90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a21515 }
	__asm { L_00a21500: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea4b00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a21515: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e68f0c[];
extern "C" char g_01038064[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006dea00();
extern "C" void fn_00a20a00();
extern "C" void fn_00a21000();
extern "C" void fn_00a229a0();
// FUNCTION: ROBLOXSTUDIO 0x00a21530
extern "C" __declspec(naked) void asm_00a21530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a215b5 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a21596 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a21585 }
	__asm { push 0x1ec }
	__asm { push 0xea41a4 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a21596 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a21585: }
	__asm { movzx eax, al }
	__asm { push 0xea4c08 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a21596: }
	__asm { call fn_006dea00 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a215b5: }
	__asm { push esi }
	__asm { call fn_006dea00 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a215eb }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00a215eb }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00a21623 }
	__asm { L_00a215eb: }
	__asm { push 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a21000 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { addss xmm0, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { addss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { addss xmm0, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { L_00a21623: }
	__asm { fld dword ptr [g_00e68f0c] }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { sub esp, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_01038064] }
	__asm { fstp dword ptr [esp] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a20a00 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00a21662 }
	__asm { fld dword ptr [g_00e68f0c] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push esi }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a229a0 }
	__asm { add esp, 0x10 }
	__asm { L_00a21662: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038064[];
extern "C" char g_01038080[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006dea00();
extern "C" void fn_008bde70();
extern "C" void fn_009f6350();
extern "C" void fn_00a20a00();
extern "C" void fn_00a21000();
extern "C" void fn_00a217a0();
extern "C" void fn_00a224e0();
extern "C" void fn_00a229a0();
// FUNCTION: ROBLOXSTUDIO 0x00a21680
extern "C" __declspec(naked) void asm_00a21680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { test edi, edi }
	__asm { jne L_00a216f3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a216d3 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a216c2 }
	__asm { push 0x1cb }
	__asm { push 0xea41a4 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a216d3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a216c2: }
	__asm { movzx eax, al }
	__asm { push 0xea4bb8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a216d3: }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a216f3: }
	__asm { call fn_008bde70 }
	__asm { push ecx }
	__asm { cmp edi, dword ptr [eax + 0x94] }
	__asm { jle L_00a21722 }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a217a0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a21722: }
	__asm { fld dword ptr [g_01038080] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_009f6350 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a21000 }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { fstp dword ptr [esp + 0x14] }
	__asm { fld dword ptr [g_01038064] }
	__asm { add esp, 0x10 }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a20a00 }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { push eax }
	__asm { push esi }
	__asm { je L_00a2177b }
	__asm { call fn_00a229a0 }
	__asm { jmp L_00a21780 }
	__asm { L_00a2177b: }
	__asm { call fn_00a224e0 }
	__asm { L_00a21780: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130735e[];
extern "C" void fn_006d19a0();
extern "C" void fn_006d20b0();
extern "C" void fn_00891b10();
extern "C" void fn_00892440();
extern "C" void fn_00a22040();
// FUNCTION: ROBLOXSTUDIO 0x00a21fa0
extern "C" __declspec(naked) void asm_00a21fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x54 }
	__asm { cmp byte ptr [g_0130735e], 0 }
	__asm { jne L_00a22021 }
	__asm { cmp dword ptr [eax + 4], 1 }
	__asm { jne L_00a22021 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push ebx }
	__asm { push dword ptr [eax] }
	__asm { call fn_00891b10 }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { test ebx, ebx }
	__asm { je L_00a2201c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00892440 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x30], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { call fn_006d20b0 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, 9 }
	__asm { lea edi, [ebp - 0x54] }
	__asm { rep movsd }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0xcc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00a2201c: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a22021: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00a22040 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380b8[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130735c[];
extern "C" void fn_00626760();
extern "C" void fn_00629b70();
extern "C" void fn_006b9740();
extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
extern "C" void fn_006dea00();
extern "C" void fn_00891b10();
extern "C" void fn_00892440();
extern "C" void fn_0099c980();
extern "C" void fn_00a1f9c0();
extern "C" void fn_00a1fed0();
extern "C" void fn_00a203f0();
// FUNCTION: ROBLOXSTUDIO 0x00a22040
extern "C" __declspec(naked) void asm_00a22040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xfc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { test al, al }
	__asm { je L_00a22096 }
	__asm { cmp dword ptr [ebx + 4], 0 }
	__asm { jne L_00a22096 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a22085 }
	__asm { push 0x205 }
	__asm { push 0xea41a4 }
	__asm { push 0xea4c54 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a22096 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a22085: }
	__asm { movzx eax, al }
	__asm { push 0xea4c68 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a22096: }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00a1f9c0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 0x10] }
	__asm { movss xmm2, dword ptr [eax + 0x14] }
	__asm { addss xmm0, dword ptr [eax + 0xc] }
	__asm { addss xmm1, dword ptr [eax + 4] }
	__asm { addss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [g_010380b8] }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [g_0130735c], 0 }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { je L_00a221d5 }
	__asm { push ebx }
	__asm { call fn_00a203f0 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call fn_00892440 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00a1fed0 }
	__asm { movss xmm4, dword ptr [ebp - 0x54] }
	__asm { movss xmm5, dword ptr [ebp - 0x44] }
	__asm { addss xmm5, dword ptr [ebp - 0x50] }
	__asm { addss xmm4, dword ptr [ebp - 0x48] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm3, dword ptr [ebp - 0x40] }
	__asm { addss xmm3, dword ptr [ebp - 0x4c] }
	__asm { mulss xmm5, xmm0 }
	__asm { mulss xmm4, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { movaps xmm2, xmm5 }
	__asm { mulss xmm2, dword ptr [ebp - 0x38] }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [ebp - 0x3c] }
	__asm { movaps xmm1, xmm5 }
	__asm { mulss xmm1, dword ptr [ebp - 0x2c] }
	__asm { mulss xmm5, dword ptr [ebp - 0x20] }
	__asm { addss xmm2, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [ebp - 0x34] }
	__asm { add esp, 0xc }
	__asm { addss xmm2, xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [ebp - 0x30] }
	__asm { mulss xmm4, dword ptr [ebp - 0x24] }
	__asm { addss xmm2, dword ptr [ebp - 0x18] }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [ebp - 0x28] }
	__asm { mulss xmm3, dword ptr [ebp - 0x1c] }
	__asm { addss xmm5, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0xc], xmm2 }
	__asm { addss xmm5, xmm3 }
	__asm { addss xmm1, dword ptr [ebp - 0x14] }
	__asm { addss xmm5, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm5 }
	__asm { L_00a221d5: }
	__asm { call fn_006d6760 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x9c] }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x78], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x74], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { call fn_006dea00 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0xcc] }
	__asm { mov esi, eax }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0xa8], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0xa4], ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 0xa0], eax }
	__asm { cmp dword ptr [ebx + 4], edi }
	__asm { jle L_00a22295 }
	__asm { mov edi, edi }
	__asm { L_00a22230: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, dword ptr [eax + edi*4] }
	__asm { mov ecx, esi }
	__asm { call fn_0099c980 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x9c] }
	__asm { call fn_00629b70 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xcc] }
	__asm { call fn_00626760 }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xfc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x9c] }
	__asm { call fn_00626760 }
	__asm { push esi }
	__asm { call fn_00891b10 }
	__asm { mov edx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0xfc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0xcc] }
	__asm { inc edi }
	__asm { cmp edi, dword ptr [ebx + 4] }
	__asm { jl L_00a22230 }
	__asm { L_00a22295: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038064[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009f3d00();
extern "C" void fn_00a20a00();
extern "C" void fn_00a210c0();
extern "C" void fn_00a227a0();
// FUNCTION: ROBLOXSTUDIO 0x00a222a0
extern "C" __declspec(naked) void asm_00a222a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_00a222b2: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a222f9 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jg L_00a222f9 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a222e8 }
	__asm { push 0xf2 }
	__asm { push 0xea41a4 }
	__asm { push 0xe90068 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a222f9 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a222e8: }
	__asm { movzx eax, al }
	__asm { push 0xea4618 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a222f9: }
	__asm { push edi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0xbdcccccd }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a210c0 }
	__asm { push edi }
	__asm { call fn_009f3d00 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { jne L_00a22364 }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { sub esp, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_01038064] }
	__asm { fstp dword ptr [esp] }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00a20a00 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00a222b2 }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a227a0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a22364: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a223a5 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a22394 }
	__asm { push 0xfc }
	__asm { push 0xea41a4 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a223a5 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a22394: }
	__asm { movzx eax, al }
	__asm { push 0xea4678 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a223a5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038064[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009f3d00();
extern "C" void fn_00a20a00();
extern "C" void fn_00a210c0();
extern "C" void fn_00a227a0();
// FUNCTION: ROBLOXSTUDIO 0x00a224e0
extern "C" __declspec(naked) void asm_00a224e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { sub esp, 0xc }
	__asm { fld dword ptr [g_01038064] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { jmp L_00a22502 }
	__asm { L_00a224fd: }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { fxch st(1) }
	__asm { L_00a22502: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a225b3 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jg L_00a22558 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { fstp st(1) }
	__asm { fstp st(0) }
	__asm { test eax, eax }
	__asm { je L_00a2253a }
	__asm { push 0x14b }
	__asm { push 0xea41a4 }
	__asm { push 0xe90068 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a2254f }
	__asm { L_00a2253a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea4778 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a2254f: }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { fld dword ptr [g_01038064] }
	__asm { L_00a22558: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a225b3 }
	__asm { sub esp, 8 }
	__asm { fxch st(1) }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00a20a00 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00a225b7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a2259c }
	__asm { push 0x14c }
	__asm { push 0xea41a4 }
	__asm { push 0xea47d8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a225b7 }
	__asm { L_00a2259c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea4840 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { jmp L_00a225b7 }
	__asm { L_00a225b3: }
	__asm { fstp st(1) }
	__asm { fstp st(0) }
	__asm { L_00a225b7: }
	__asm { push edi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0xbf99999a }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a210c0 }
	__asm { push edi }
	__asm { call fn_009f3d00 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { jne L_00a2262a }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { sub esp, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_01038064] }
	__asm { fstp dword ptr [esp] }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00a20a00 }
	__asm { fld dword ptr [g_01038064] }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00a224fd }
	__asm { push ecx }
	__asm { fstp st(0) }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a227a0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a2262a: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a2266b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a2265a }
	__asm { push 0x152 }
	__asm { push 0xea41a4 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a2266b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a2265a: }
	__asm { movzx eax, al }
	__asm { push 0xea48f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a2266b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038064[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009f3d00();
extern "C" void fn_00a20a00();
extern "C" void fn_00a210c0();
// FUNCTION: ROBLOXSTUDIO 0x00a227a0
extern "C" __declspec(naked) void asm_00a227a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_00a227b2: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a227f9 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jg L_00a227f9 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a227e8 }
	__asm { push 0xd8 }
	__asm { push 0xea41a4 }
	__asm { push 0xe90068 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a227f9 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a227e8: }
	__asm { movzx eax, al }
	__asm { push 0xea4568 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a227f9: }
	__asm { push edi }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0x3dcccccd }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a210c0 }
	__asm { push edi }
	__asm { call fn_009f3d00 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { jne L_00a22852 }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { sub esp, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_01038064] }
	__asm { fstp dword ptr [esp] }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00a20a00 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { jne L_00a227b2 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a22852: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a22893 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a22882 }
	__asm { push 0xde }
	__asm { push 0xea41a4 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a22893 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a22882: }
	__asm { movzx eax, al }
	__asm { push 0xea45c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a22893: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a22bf0
extern "C" __declspec(naked) void asm_00a22bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46686 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a22c61 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a22c61: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f3968 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f3968 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea4e94 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a22cf6 }
	__asm { mov dword ptr [edx], 0xea5718 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a22cf6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a22d20
extern "C" __declspec(naked) void asm_00a22d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46686 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a22d91 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a22d91: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f3968 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f3968 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea544c }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a22e26 }
	__asm { mov dword ptr [edx], 0xea5844 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a22e26: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a22e50
extern "C" __declspec(naked) void asm_00a22e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46686 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a22ec1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a22ec1: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f3968 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f3968 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea50dc }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a22f56 }
	__asm { mov dword ptr [edx], 0xea5790 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a22f56: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a22f80
extern "C" __declspec(naked) void asm_00a22f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46686 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a22ff1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a22ff1: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f3968 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f3968 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea4fb4 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a23086 }
	__asm { mov dword ptr [edx], 0xea5754 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a23086: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a230b0
extern "C" __declspec(naked) void asm_00a230b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46686 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a23121 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a23121: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f3968 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f3968 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea532c }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a231b6 }
	__asm { mov dword ptr [edx], 0xea5808 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a231b6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a231e0
extern "C" __declspec(naked) void asm_00a231e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46686 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a23251 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a23251: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f3968 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f3968 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea5204 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a232e6 }
	__asm { mov dword ptr [edx], 0xea57cc }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a232e6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a23310
extern "C" __declspec(naked) void asm_00a23310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd466a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a23381 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a23381: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f4c88 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f4c88 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea4e34 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a23416 }
	__asm { mov dword ptr [edx], 0xea5704 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a23416: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a23440
extern "C" __declspec(naked) void asm_00a23440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd466a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a234b1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a234b1: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f4c88 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f4c88 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea53ec }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a23546 }
	__asm { mov dword ptr [edx], 0xea5830 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a23546: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a23570
extern "C" __declspec(naked) void asm_00a23570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd466a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a235e1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a235e1: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f4c88 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f4c88 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea507c }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a23676 }
	__asm { mov dword ptr [edx], 0xea577c }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a23676: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a236a0
extern "C" __declspec(naked) void asm_00a236a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd466a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a23711 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a23711: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f4c88 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f4c88 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea4f4c }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a237a6 }
	__asm { mov dword ptr [edx], 0xea5740 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a237a6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a237d0
extern "C" __declspec(naked) void asm_00a237d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd466a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a23841 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a23841: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f4c88 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f4c88 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea52c4 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a238d6 }
	__asm { mov dword ptr [edx], 0xea57f4 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a238d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_00793ca0();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a23900
extern "C" __declspec(naked) void asm_00a23900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd466a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a23971 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a23971: }
	__asm { call fn_004199f0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { push 0x12f4c88 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f4c88 }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xea519c }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a23a06 }
	__asm { mov dword ptr [edx], 0xea57b8 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
	__asm { L_00a23a06: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_0040bb80();
extern "C" void fn_004199f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a23a30
extern "C" __declspec(naked) void asm_00a23a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466c0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a23a87 }
	__asm { mov dword ptr [edx], 0xea572c }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_00a23a89 }
	__asm { L_00a23a87: }
	__asm { xor edx, edx }
	__asm { L_00a23a89: }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x2c], 0 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov dword ptr [eax], edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040bb80 }
	__asm { push 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xea4ef8 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_0040bb80();
extern "C" void fn_004199f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a23b00
extern "C" __declspec(naked) void asm_00a23b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466c0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a23b57 }
	__asm { mov dword ptr [edx], 0xea5858 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_00a23b59 }
	__asm { L_00a23b57: }
	__asm { xor edx, edx }
	__asm { L_00a23b59: }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x2c], 0 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov dword ptr [eax], edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040bb80 }
	__asm { push 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xea54b4 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_0040bb80();
extern "C" void fn_004199f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a23bd0
extern "C" __declspec(naked) void asm_00a23bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466c0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a23c27 }
	__asm { mov dword ptr [edx], 0xea57a4 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_00a23c29 }
	__asm { L_00a23c27: }
	__asm { xor edx, edx }
	__asm { L_00a23c29: }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x2c], 0 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov dword ptr [eax], edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040bb80 }
	__asm { push 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xea5144 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_0040bb80();
extern "C" void fn_004199f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a23ca0
extern "C" __declspec(naked) void asm_00a23ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466c0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a23cf7 }
	__asm { mov dword ptr [edx], 0xea5768 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_00a23cf9 }
	__asm { L_00a23cf7: }
	__asm { xor edx, edx }
	__asm { L_00a23cf9: }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x2c], 0 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov dword ptr [eax], edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040bb80 }
	__asm { push 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xea501c }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_0040bb80();
extern "C" void fn_004199f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a23d70
extern "C" __declspec(naked) void asm_00a23d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466c0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a23dc7 }
	__asm { mov dword ptr [edx], 0xea581c }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_00a23dc9 }
	__asm { L_00a23dc7: }
	__asm { xor edx, edx }
	__asm { L_00a23dc9: }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x2c], 0 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov dword ptr [eax], edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040bb80 }
	__asm { push 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xea5394 }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_0040bb80();
extern "C" void fn_004199f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a23e40
extern "C" __declspec(naked) void asm_00a23e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd466c0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00a23e97 }
	__asm { mov dword ptr [edx], 0xea57e0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { jmp L_00a23e99 }
	__asm { L_00a23e97: }
	__asm { xor edx, edx }
	__asm { L_00a23e99: }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x2c], 0 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov dword ptr [eax], edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040bb80 }
	__asm { push 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xea526c }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00a23f10
extern "C" __declspec(naked) void asm_00a23f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x124c024 }
	__asm { call fn_007cb250 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a23fb3 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00a23fb3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a23f9e }
	__asm { push 0x52 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a23fb3 }
	__asm { L_00a23f9e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe549d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a23fb3: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10524[];
extern "C" void fn_0040c5b0();
extern "C" void fn_006b98f0();
extern "C" void fn_008247c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a23fd0
extern "C" __declspec(naked) void asm_00a23fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00a2401b }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00a23feb }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a23ff0 }
	__asm { L_00a23feb: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a23ff0: }
	__asm { cmp ecx, 0x11f0904 }
	__asm { je L_00a24014 }
	__asm { test eax, eax }
	__asm { je L_00a24000 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a24005 }
	__asm { L_00a24000: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a24005: }
	__asm { push 0x11f0904 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a2401b }
	__asm { L_00a24014: }
	__asm { lea eax, [esi + 4] }
	__asm { test eax, eax }
	__asm { jne L_00a24078 }
	__asm { L_00a2401b: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_00a24037 }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a24055 }
	__asm { L_00a24037: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040c5b0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { jb L_00a24055 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a24055: }
	__asm { call fn_008247c0 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { add ecx, 4 }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_00a24068 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00a24068: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00a24080 }
	__asm { jmp L_00a2407e }
	__asm { L_00a24078: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a2407e: }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a24080: }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xf13664 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
extern "C" void fn_0040c5b0();
extern "C" void fn_006b98f0();
extern "C" void fn_007e9680();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a240b0
extern "C" __declspec(naked) void asm_00a240b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00a240fb }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00a240cb }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a240d0 }
	__asm { L_00a240cb: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a240d0: }
	__asm { cmp ecx, 0x11f0de0 }
	__asm { je L_00a240f4 }
	__asm { test eax, eax }
	__asm { je L_00a240e0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00a240e5 }
	__asm { L_00a240e0: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00a240e5: }
	__asm { push 0x11f0de0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a240fb }
	__asm { L_00a240f4: }
	__asm { lea eax, [esi + 4] }
	__asm { test eax, eax }
	__asm { jne L_00a24158 }
	__asm { L_00a240fb: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_00a24117 }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a24135 }
	__asm { L_00a24117: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040c5b0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { jb L_00a24135 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a24135: }
	__asm { call fn_007e9680 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { add ecx, 4 }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_00a24148 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00a24148: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00a24160 }
	__asm { jmp L_00a2415e }
	__asm { L_00a24158: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a2415e: }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a24160: }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xf13664 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
extern "C" void fn_007df8f0();
extern "C" void fn_00a23fd0();
// FUNCTION: ROBLOXSTUDIO 0x00a24190
extern "C" __declspec(naked) void asm_00a24190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d268 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11f0904 }
	__asm { je L_00a2422f }
	__asm { push eax }
	__asm { mov ecx, 0x11f0904 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a2422f }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a241ed }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00a241ed: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a23fd0 }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00a2421e }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00a2421e: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a2422f: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_007df8f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_007e0a60();
extern "C" void fn_00a240b0();
// FUNCTION: ROBLOXSTUDIO 0x00a24250
extern "C" __declspec(naked) void asm_00a24250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d268 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11f0de0 }
	__asm { je L_00a242ef }
	__asm { push eax }
	__asm { mov ecx, 0x11f0de0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a242ef }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a242ad }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00a242ad: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a240b0 }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00a242de }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00a242de: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a242ef: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_007e0a60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fba5c[];
extern "C" char g_012fba60[];
extern "C" char g_012fba64[];
extern "C" char g_012fba68[];
extern "C" void fn_00897f60();
extern "C" void fn_00898030();
extern "C" void fn_008986e0();
extern "C" void fn_008987e0();
// FUNCTION: ROBLOXSTUDIO 0x00a24380
extern "C" __declspec(naked) void asm_00a24380()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_008987e0 }
	__asm { mov eax, dword ptr [g_012fba68] }
	__asm { test al, 1 }
	__asm { jne L_00a243bd }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba68], eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012fba5c], eax }
	__asm { mov dword ptr [g_012fba60], 0xbf000000 }
	__asm { mov dword ptr [g_012fba64], 0x3f000000 }
	__asm { jmp L_00a243c2 }
	__asm { L_00a243bd: }
	__asm { mov eax, dword ptr [g_012fba5c] }
	__asm { L_00a243c2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_008986e0 }
	__asm { mov eax, dword ptr [g_012fba68] }
	__asm { test al, 1 }
	__asm { jne L_00a243fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba68], eax }
	__asm { mov dword ptr [g_012fba5c], 0 }
	__asm { mov dword ptr [g_012fba60], 0xbf000000 }
	__asm { mov dword ptr [g_012fba64], 0x3f000000 }
	__asm { L_00a243fc: }
	__asm { fld dword ptr [g_012fba60] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00897f60 }
	__asm { mov eax, dword ptr [g_012fba68] }
	__asm { test al, 1 }
	__asm { jne L_00a2443f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba68], eax }
	__asm { mov dword ptr [g_012fba5c], 0 }
	__asm { mov dword ptr [g_012fba60], 0xbf000000 }
	__asm { mov dword ptr [g_012fba64], 0x3f000000 }
	__asm { L_00a2443f: }
	__asm { fld dword ptr [g_012fba64] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00898030 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004028a0();
extern "C" void fn_004083f0();
extern "C" void fn_006b9740();
extern "C" void fn_007929c0();
extern "C" void fn_00792e10();
extern "C" void fn_00793050();
extern "C" void fn_00793430();
extern "C" void fn_007cb490();
extern "C" void fn_008247c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a24c80
extern "C" __declspec(naked) void asm_00a24c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3bd18 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_00a24dd6 }
	__asm { add edi, 0x10 }
	__asm { mov ecx, edi }
	__asm { call fn_007929c0 }
	__asm { test al, al }
	__asm { je L_00a24d5f }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00793050 }
	__asm { test al, al }
	__asm { je L_00a24d47 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { cmovae eax, dword ptr [ebp - 0x2c] }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_008247c0 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a24d47 }
	__asm { mov ecx, dword ptr [ebx + 0x2c] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_004028a0 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a24d47: }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00a24d5f }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a24d5f: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00792e10 }
	__asm { test al, al }
	__asm { je L_00a24d95 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebx + 0x2c] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a24d95: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a24dd6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a24dc5 }
	__asm { push 0x13a }
	__asm { push 0xea5508 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a24dd6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a24dc5: }
	__asm { movzx eax, al }
	__asm { push 0xea56a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a24dd6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004028a0();
extern "C" void fn_004083f0();
extern "C" void fn_006b9740();
extern "C" void fn_007929c0();
extern "C" void fn_00792e10();
extern "C" void fn_00793050();
extern "C" void fn_00793430();
extern "C" void fn_007cb490();
extern "C" void fn_007e9680();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a24df0
extern "C" __declspec(naked) void asm_00a24df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3bd18 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_00a24f46 }
	__asm { add edi, 0x10 }
	__asm { mov ecx, edi }
	__asm { call fn_007929c0 }
	__asm { test al, al }
	__asm { je L_00a24ecf }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00793050 }
	__asm { test al, al }
	__asm { je L_00a24eb7 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { cmovae eax, dword ptr [ebp - 0x2c] }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_007e9680 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00a24eb7 }
	__asm { mov ecx, dword ptr [ebx + 0x2c] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_004028a0 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a24eb7: }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00a24ecf }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a24ecf: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00792e10 }
	__asm { test al, al }
	__asm { je L_00a24f05 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebx + 0x2c] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a24f05: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a24f46 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a24f35 }
	__asm { push 0x13a }
	__asm { push 0xea5508 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a24f46 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a24f35: }
	__asm { movzx eax, al }
	__asm { push 0xea56a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a24f46: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012f3990[];
extern "C" char g_012f39d8[];
extern "C" char g_012f39f0[];
extern "C" void fn_004115f0();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a25120
extern "C" __declspec(naked) void asm_00a25120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24ace }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { mov esi, ecx }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a25184 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a25184: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, dword ptr [g_012f3990] }
	__asm { jae L_00a251bc }
	__asm { mov eax, dword ptr [g_012f39d8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a251bc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4cb0[];
extern "C" char g_012f4cf8[];
extern "C" char g_012f4d10[];
extern "C" void fn_004115f0();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a251d0
extern "C" __declspec(naked) void asm_00a251d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd466fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { mov esi, ecx }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a25234 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a25234: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, dword ptr [g_012f4cb0] }
	__asm { jae L_00a2526c }
	__asm { mov eax, dword ptr [g_012f4cf8] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a2526c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a252c0
extern "C" __declspec(naked) void asm_00a252c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd466fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { mov esi, ecx }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a25324 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a25324: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, 0x12f4c88 }
	__asm { call fn_004083f0 }
	__asm { test al, al }
	__asm { je L_00a2535b }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a2535b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a25370
extern "C" __declspec(naked) void asm_00a25370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24ace }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov edi, ecx }
	__asm { jb L_00a25398 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00a25398: }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a253e0 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a253e0: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f3968 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { test al, al }
	__asm { je L_00a25425 }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a25425: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f39f0[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_00aef480();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a25440
extern "C" __declspec(naked) void asm_00a25440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd24ace }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x821780 }
	__asm { push 0x12f2e18 }
	__asm { mov esi, ecx }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f39f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a254a4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f39f0], eax }
	__asm { mov ecx, 0x12f3968 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aef480 }
	__asm { push 0xde8240 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a254a4: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, 0x12f3968 }
	__asm { call fn_004083f0 }
	__asm { test al, al }
	__asm { je L_00a254db }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a254db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f4d10[];
extern "C" void fn_004083f0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb490();
extern "C" void fn_00af4710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a254f0
extern "C" __declspec(naked) void asm_00a254f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd466fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov edi, ecx }
	__asm { jb L_00a25518 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00a25518: }
	__asm { push 0x8224a0 }
	__asm { push 0x12f2f28 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4d10] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a25560 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4d10], eax }
	__asm { mov ecx, 0x12f4c88 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af4710 }
	__asm { push 0xde8470 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a25560: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { call fn_007cb490 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12f4c88 }
	__asm { push eax }
	__asm { call fn_004083f0 }
	__asm { test al, al }
	__asm { je L_00a255a5 }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a255a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e932c[];
extern "C" char g_012f4890[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_006b9740();
extern "C" void fn_00793ca0();
extern "C" void fn_007cbf10();
extern "C" void fn_00a25b90();
extern "C" void fn_00aeed90();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a25960
extern "C" __declspec(naked) void asm_00a25960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4674d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x821c60 }
	__asm { push 0x12f2ee8 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4890] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a259c9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4890], eax }
	__asm { mov ecx, 0x12f4808 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeed90 }
	__asm { push 0xde8310 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a259c9: }
	__asm { mov eax, dword ptr [g_012e932c] }
	__asm { test al, 1 }
	__asm { jne L_00a25a22 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e932c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xea586c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9200 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a25a22: }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { push 0x12f4808 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { push 0x12e9200 }
	__asm { mov ecx, esi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f4808 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { lea eax, [ebp + 0x34] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0xea587c }
	__asm { call fn_00a25b90 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf6522 }
	__asm { push 0x821c60 }
	__asm { push 0x12f2ee8 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4890] }
	__asm { add esp, 0x28 }
	__asm { test al, 1 }
	__asm { jne L_00a25af6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4890], eax }
	__asm { mov ecx, 0x12f4808 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00aeed90 }
	__asm { push 0xde8310 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { L_00a25af6: }
	__asm { mov dword ptr [esi + 0x30], 0x12f4808 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a25b50 }
	__asm { push 0x124ce64 }
	__asm { mov ecx, 0x124ce64 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a25b50 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a25b3b }
	__asm { push 0xd4 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a25b50 }
	__asm { L_00a25b3b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe56e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a25b50: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a25b61 }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_00a25b61: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_00a25b74 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_00a25b74: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_004038a0();
extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
extern "C" void fn_007b4f50();
extern "C" void fn_0099e3b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x00a25b90
extern "C" __declspec(naked) void asm_00a25b90()
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
	__asm { je L_00a25bd7 }
	__asm { mov dword ptr [edx], 0xea58f8 }
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
	__asm { jmp L_00a25bd9 }
	__asm { L_00a25bd7: }
	__asm { xor edx, edx }
	__asm { L_00a25bd9: }
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
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd467c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { push 0x13077f0 }
	__asm { mov esi, ecx }
	__asm { call fn_007b4f50 }
	__asm { push 0x1307824 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { push 8 }
	__asm { push 0xea58dc }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0099e3b0 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00a25c76 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a25c76: }
	__asm { push 9 }
	__asm { push 0xea58e8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0099e3b0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00a25cc8 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a25cc8: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_00a25cf3 }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { mov byte ptr [eax + 0xb0], 1 }
	__asm { L_00a25cf3: }
	__asm { lea ecx, [esi + 0x98] }
	__asm { call fn_00d09250 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e945c[];
extern "C" char g_012f4920[];
extern "C" void fn_004115f0();
extern "C" void fn_004199f0();
extern "C" void fn_006b9740();
extern "C" void fn_00793ca0();
extern "C" void fn_007cbf10();
extern "C" void fn_00a25f40();
extern "C" void fn_00aeeef0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00a25d10
extern "C" __declspec(naked) void asm_00a25d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4679d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x821cc0 }
	__asm { push 0x12f2ef0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4920] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a25d79 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4920], eax }
	__asm { mov ecx, 0x12f4898 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00aeeef0 }
	__asm { push 0xde8320 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a25d79: }
	__asm { mov eax, dword ptr [g_012e945c] }
	__asm { test al, 1 }
	__asm { jne L_00a25dd2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e945c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xea590c }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e9330 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7ca0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a25dd2: }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { push 0x12f4898 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { push 0x12e9330 }
	__asm { mov ecx, esi }
	__asm { call fn_00793ca0 }
	__asm { mov dword ptr [esi + 0x28], 0x12f4898 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { lea eax, [ebp + 0x34] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0xea591c }
	__asm { call fn_00a25f40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf6522 }
	__asm { push 0x821cc0 }
	__asm { push 0x12f2ef0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f4920] }
	__asm { add esp, 0x28 }
	__asm { test al, 1 }
	__asm { jne L_00a25ea6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f4920], eax }
	__asm { mov ecx, 0x12f4898 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00aeeef0 }
	__asm { push 0xde8320 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { L_00a25ea6: }
	__asm { mov dword ptr [esi + 0x30], 0x12f4898 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a25f00 }
	__asm { push 0x124d000 }
	__asm { mov ecx, 0x124d000 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a25f00 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a25eeb }
	__asm { push 0xd4 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a25f00 }
	__asm { L_00a25eeb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe56e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a25f00: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00a25f11 }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_00a25f11: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_00a25f24 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_00a25f24: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_004038a0();
extern "C" void fn_0099ce00();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a25f40
extern "C" __declspec(naked) void asm_00a25f40()
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
	__asm { je L_00a25f87 }
	__asm { mov dword ptr [edx], 0xea5970 }
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
	__asm { jmp L_00a25f89 }
	__asm { L_00a25f87: }
	__asm { xor edx, edx }
	__asm { L_00a25f89: }
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
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push 8 }
	__asm { mov esi, ecx }
	__asm { push 0xea58dc }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0099ce00 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov esi, eax }
	__asm { jb L_00a2600a }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { L_00a2600a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
extern "C" void fn_007b4f50();
extern "C" void fn_0099e3b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x00a26020
extern "C" __declspec(naked) void asm_00a26020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd467c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { push 0x130785c }
	__asm { mov esi, ecx }
	__asm { call fn_007b4f50 }
	__asm { push 0x1307890 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { push 8 }
	__asm { push 0xea58dc }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0099e3b0 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00a260a6 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a260a6: }
	__asm { push 9 }
	__asm { push 0xea58e8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0099e3b0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00a260f8 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a260f8: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_00a26123 }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { mov byte ptr [eax + 0xb0], 1 }
	__asm { L_00a26123: }
	__asm { lea ecx, [esi + 0x98] }
	__asm { call fn_00d09250 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403160();
extern "C" void fn_00a26a10();
// FUNCTION: ROBLOXSTUDIO 0x00a26970
extern "C" __declspec(naked) void asm_00a26970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a26a10 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00a269e7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a269e6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a269e6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a269e6: }
	__asm { pop ebx }
	__asm { L_00a269e7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403160();
extern "C" void fn_00a26b40();
// FUNCTION: ROBLOXSTUDIO 0x00a26aa0
extern "C" __declspec(naked) void asm_00a26aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a26b40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00a26b17 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a26b16 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a26b16 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a26b16: }
	__asm { pop ebx }
	__asm { L_00a26b17: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403160();
extern "C" void fn_00a26c70();
// FUNCTION: ROBLOXSTUDIO 0x00a26bd0
extern "C" __declspec(naked) void asm_00a26bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a26c70 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00a26c47 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a26c46 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a26c46 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a26c46: }
	__asm { pop ebx }
	__asm { L_00a26c47: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403160();
extern "C" void fn_00a26da0();
// FUNCTION: ROBLOXSTUDIO 0x00a26d00
extern "C" __declspec(naked) void asm_00a26d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a26da0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00a26d77 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a26d76 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a26d76 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a26d76: }
	__asm { pop ebx }
	__asm { L_00a26d77: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00f10dbc[];
extern "C" char g_00f10ddc[];
extern "C" void fn_00a28a60();
extern "C" void fn_00a2d9d0();
extern "C" void fn_00cf67ec();
extern "C" void fn_00d02510();
extern "C" void fn_00d02580();
extern "C" void fn_00d025b0();
extern "C" void fn_00d02750();
extern "C" void fn_00d028c0();
// FUNCTION: ROBLOXSTUDIO 0x00a271d0
extern "C" __declspec(naked) void asm_00a271d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46960 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { cmp dword ptr [ebp + 0xc], 2 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { jne L_00a272e1 }
	__asm { test byte ptr [eax + 0x38], 2 }
	__asm { jne L_00a27220 }
	__asm { or dword ptr [eax + 0x38], 2 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { mov dword ptr [edx + 0x30], eax }
	__asm { add eax, dword ptr [edx + 0x28] }
	__asm { mov dword ptr [edx + 0x34], eax }
	__asm { L_00a27220: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { mov bl, 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov byte ptr [ebp + 0xf], bl }
	__asm { L_00a27237: }
	__asm { test bl, bl }
	__asm { je L_00a272d8 }
	__asm { lea ebx, [eax + 0x30] }
	__asm { mov eax, dword ptr [eax + 0x34] }
	__asm { cmp dword ptr [ebx], eax }
	__asm { je L_00a2729b }
	__asm { mov edi, dword ptr [esi] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00d02580 }
	__asm { push dword ptr [g_00f10ddc] }
	__asm { mov ecx, edi }
	__asm { call fn_00d028c0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00d02510 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00d025b0 }
	__asm { xor eax, eax }
	__asm { add esp, 4 }
	__asm { cmp ebx, dword ptr [g_00f10dbc] }
	__asm { sete al }
	__asm { test al, al }
	__asm { sete bl }
	__asm { mov byte ptr [edi + 0x18], al }
	__asm { mov byte ptr [ebp + 0xf], bl }
	__asm { jmp L_00a2729e }
	__asm { L_00a2729b: }
	__asm { mov bl, byte ptr [ebp + 0xf] }
	__asm { L_00a2729e: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a28a60 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { jmp L_00a27237 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a2d9d0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa272c2 }
	__asm { ret }
	__asm { L_00a272d8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a272e1: }
	__asm { mov dword ptr [eax + 0x38], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { mov dword ptr [ecx + 0x30], eax }
	__asm { mov dword ptr [ecx + 0x34], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov byte ptr [ecx + 0x18], 0 }
	__asm { call fn_00d02750 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00f10dbc[];
extern "C" char g_00f10dd4[];
extern "C" void fn_00a28b00();
extern "C" void fn_00a2d9b0();
extern "C" void fn_00cf67ec();
extern "C" void fn_00d02510();
extern "C" void fn_00d02580();
extern "C" void fn_00d025b0();
extern "C" void fn_00d02750();
extern "C" void fn_00d028a0();
// FUNCTION: ROBLOXSTUDIO 0x00a27580
extern "C" __declspec(naked) void asm_00a27580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd469c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { cmp dword ptr [ebp + 0xc], 2 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { jne L_00a2767c }
	__asm { test byte ptr [eax + 0x30], 2 }
	__asm { jne L_00a275d0 }
	__asm { or dword ptr [eax + 0x30], 2 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0x24] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [edx + 0x28], eax }
	__asm { add eax, dword ptr [edx + 0x20] }
	__asm { mov dword ptr [edx + 0x2c], eax }
	__asm { L_00a275d0: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp + 0xf] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov bl, 1 }
	__asm { L_00a275e4: }
	__asm { test bl, bl }
	__asm { je L_00a27673 }
	__asm { lea edi, [eax + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { cmp dword ptr [edi], eax }
	__asm { je L_00a27639 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { push eax }
	__asm { push edi }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00d02580 }
	__asm { push dword ptr [g_00f10dd4] }
	__asm { mov ecx, ebx }
	__asm { call fn_00d028a0 }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00d02510 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { call fn_00d025b0 }
	__asm { add esp, 4 }
	__asm { cmp edi, dword ptr [g_00f10dbc] }
	__asm { setne bl }
	__asm { L_00a27639: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a28b00 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { jmp L_00a275e4 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a2d9b0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa2765d }
	__asm { ret }
	__asm { L_00a27673: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a2767c: }
	__asm { mov dword ptr [eax + 0x30], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov dword ptr [ecx + 0x2c], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 1 }
	__asm { call fn_00d02750 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00f10dbc[];
extern "C" char g_00f10ddc[];
extern "C" void fn_00a28ba0();
extern "C" void fn_00a2d9d0();
extern "C" void fn_00cf67ec();
extern "C" void fn_00d02510();
extern "C" void fn_00d02580();
extern "C" void fn_00d025b0();
extern "C" void fn_00d02750();
extern "C" void fn_00d028c0();
// FUNCTION: ROBLOXSTUDIO 0x00a276b0
extern "C" __declspec(naked) void asm_00a276b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd469d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { cmp dword ptr [ebp + 0xc], 2 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { jne L_00a277c1 }
	__asm { test byte ptr [eax + 0x38], 2 }
	__asm { jne L_00a27700 }
	__asm { or dword ptr [eax + 0x38], 2 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { mov dword ptr [edx + 0x30], eax }
	__asm { add eax, dword ptr [edx + 0x28] }
	__asm { mov dword ptr [edx + 0x34], eax }
	__asm { L_00a27700: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { mov bl, 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov byte ptr [ebp + 0xf], bl }
	__asm { L_00a27717: }
	__asm { test bl, bl }
	__asm { je L_00a277b8 }
	__asm { lea ebx, [eax + 0x30] }
	__asm { mov eax, dword ptr [eax + 0x34] }
	__asm { cmp dword ptr [ebx], eax }
	__asm { je L_00a2777b }
	__asm { mov edi, dword ptr [esi] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00d02580 }
	__asm { push dword ptr [g_00f10ddc] }
	__asm { mov ecx, edi }
	__asm { call fn_00d028c0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00d02510 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00d025b0 }
	__asm { xor eax, eax }
	__asm { add esp, 4 }
	__asm { cmp ebx, dword ptr [g_00f10dbc] }
	__asm { sete al }
	__asm { test al, al }
	__asm { sete bl }
	__asm { mov byte ptr [edi + 0x18], al }
	__asm { mov byte ptr [ebp + 0xf], bl }
	__asm { jmp L_00a2777e }
	__asm { L_00a2777b: }
	__asm { mov bl, byte ptr [ebp + 0xf] }
	__asm { L_00a2777e: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a28ba0 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { jmp L_00a27717 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a2d9d0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa277a2 }
	__asm { ret }
	__asm { L_00a277b8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00a277c1: }
	__asm { mov dword ptr [eax + 0x38], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { mov dword ptr [ecx + 0x30], eax }
	__asm { mov dword ptr [ecx + 0x34], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov byte ptr [ecx + 0x18], 0 }
	__asm { call fn_00d02750 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" char g_00e10528[];
extern "C" void fn_00a29ce0();
extern "C" void fn_00a2b760();
extern "C" void fn_00cdcc90();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a28e00
extern "C" __declspec(naked) void asm_00a28e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46b6b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi] }
	__asm { test byte ptr [edx + 0x28], 1 }
	__asm { je L_00a28e52 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp + 8], 0xea60dc }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe3b74c }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29ce0 }
	__asm { L_00a28e52: }
	__asm { cmp dword ptr [edx + 4], 0 }
	__asm { je L_00a28e62 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax + 8] }
	__asm { jmp L_00a28e64 }
	__asm { L_00a28e62: }
	__asm { xor edi, edi }
	__asm { L_00a28e64: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov eax, ebx }
	__asm { and eax, ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a28e83 }
	__asm { mov ebx, 0x80 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { L_00a28e83: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { and eax, ecx }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a28ea2 }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x24] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { L_00a28ea2: }
	__asm { push 0xa8 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00a28ed3 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a2b760 }
	__asm { jmp L_00a28ed5 }
	__asm { L_00a28ed3: }
	__asm { xor eax, eax }
	__asm { L_00a28ed5: }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { call fn_00cdcc90 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ecx, 0x15555554 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00a28f14 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a28f14: }
	__asm { inc eax }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop ebx }
	__asm { mov dword ptr [eax], edx }
	__asm { test edi, edi }
	__asm { je L_00a28f40 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call dword ptr [edx + 0x3c] }
	__asm { L_00a28f40: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop edi }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { pop esi }
	__asm { je L_00a28f52 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00a28f52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10260[];
extern "C" char g_00e10528[];
extern "C" void fn_00a29ce0();
extern "C" void fn_00a2b810();
extern "C" void fn_00cdcc90();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a28f70
extern "C" __declspec(naked) void asm_00a28f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46b6b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi] }
	__asm { test byte ptr [edx + 0x28], 1 }
	__asm { je L_00a28fc2 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp + 8], 0xea60dc }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe3b74c }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29ce0 }
	__asm { L_00a28fc2: }
	__asm { cmp dword ptr [edx + 4], 0 }
	__asm { je L_00a28fd2 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax + 8] }
	__asm { jmp L_00a28fd4 }
	__asm { L_00a28fd2: }
	__asm { xor edi, edi }
	__asm { L_00a28fd4: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov eax, ebx }
	__asm { and eax, ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a28ff3 }
	__asm { mov ebx, 0x80 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { L_00a28ff3: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { and eax, ecx }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a29012 }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x24] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { L_00a29012: }
	__asm { push 0xf8 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00a29043 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a2b810 }
	__asm { jmp L_00a29045 }
	__asm { L_00a29043: }
	__asm { xor eax, eax }
	__asm { L_00a29045: }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { call fn_00cdcc90 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ecx, 0x15555554 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00a29084 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00a29084: }
	__asm { inc eax }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop ebx }
	__asm { mov dword ptr [eax], edx }
	__asm { test edi, edi }
	__asm { je L_00a290b0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call dword ptr [edx + 0x3c] }
	__asm { L_00a290b0: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop edi }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { pop esi }
	__asm { je L_00a290c2 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00a290c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00a29a20();
extern "C" void fn_00a2a1a0();
extern "C" void fn_00a300c0();
// FUNCTION: ROBLOXSTUDIO 0x00a29480
extern "C" __declspec(naked) void asm_00a29480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { xor edx, edx }
	__asm { xor edi, edi }
	__asm { test byte ptr [ebx + 0x3c], 1 }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { jne L_00a294b6 }
	__asm { lea eax, [ebx + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { call fn_00a300c0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { L_00a294b6: }
	__asm { test byte ptr [ebx + 0x3c], 2 }
	__asm { jne L_00a29575 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { sub esi, edi }
	__asm { sbb ecx, edx }
	__asm { push ecx }
	__asm { push esi }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_00a29a20 }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov ecx, eax }
	__asm { and ecx, edx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { cmp ecx, -1 }
	__asm { je L_00a2953f }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add edi, eax }
	__asm { adc ecx, edx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { sbb dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { cmp ecx, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { jg L_00a2957b }
	__asm { jl L_00a29516 }
	__asm { cmp dword ptr [ebp - 0x10], eax }
	__asm { jae L_00a2957b }
	__asm { L_00a29516: }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29a20 }
	__asm { mov ecx, eax }
	__asm { and ecx, edx }
	__asm { cmp ecx, -1 }
	__asm { je L_00a2953f }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add edi, eax }
	__asm { adc ecx, edx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { jmp L_00a29578 }
	__asm { L_00a2953f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebx + 0x20] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_00a2a1a0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push dword ptr [eax + 0x10] }
	__asm { call fn_00a2a1a0 }
	__asm { add esp, 0x18 }
	__asm { or dword ptr [ebx + 0x3c], 2 }
	__asm { mov dword ptr [ebx + 0x38], 0 }
	__asm { L_00a29575: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { L_00a29578: }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00a2957b: }
	__asm { test byte ptr [ebx + 0x3c], 2 }
	__asm { je L_00a295a9 }
	__asm { cmp ecx, esi }
	__asm { jg L_00a295a9 }
	__asm { jl L_00a2958b }
	__asm { cmp edi, edx }
	__asm { jae L_00a295a9 }
	__asm { L_00a2958b: }
	__asm { sub edx, edi }
	__asm { lea eax, [ebx + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sbb esi, ecx }
	__asm { push esi }
	__asm { push edx }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00a300c0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add edi, eax }
	__asm { adc ecx, edx }
	__asm { L_00a295a9: }
	__asm { mov eax, edi }
	__asm { or eax, ecx }
	__asm { je L_00a295bc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov edx, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00a295bc: }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { or edx, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00f10db8[];
extern "C" void fn_00403540();
extern "C" void fn_004126a0();
extern "C" void fn_00412c00();
extern "C" void fn_00a27090();
extern "C" void fn_00a292d0();
extern "C" void fn_00a29c90();
extern "C" void fn_00a2ba10();
extern "C" void fn_00a2bb10();
extern "C" void fn_00a2fe80();
extern "C" void fn_00a2ff00();
extern "C" void fn_00a315a0();
extern "C" void fn_00a315e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d028e0();
extern "C" void fn_00d02950();
extern "C" void fn_00d02c40();
extern "C" void fn_00d02c60();
// FUNCTION: ROBLOXSTUDIO 0x00a295d0
extern "C" __declspec(naked) void asm_00a295d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46bb0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x58 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { xor edi, edi }
	__asm { push -1 }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { lea eax, [esi + 0x68] }
	__asm { push edi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x4c], 0xf }
	__asm { mov dword ptr [ebp - 0x50], ebx }
	__asm { mov byte ptr [ebp - 0x60], bl }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [ebp - 0x44], ebx }
	__asm { mov dword ptr [ebp - 0x40], ebx }
	__asm { L_00a29625: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00a2962c: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { cmp edi, edx }
	__asm { jg L_00a2977d }
	__asm { jl L_00a29644 }
	__asm { cmp ebx, ecx }
	__asm { jae L_00a2977d }
	__asm { L_00a29644: }
	__asm { mov eax, dword ptr [esi + 0x80] }
	__asm { cmp eax, 5 }
	__asm { je L_00a2977d }
	__asm { cmp eax, 1 }
	__asm { jne L_00a29678 }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [esi + 0x80], 2 }
	__asm { call fn_00d02c60 }
	__asm { lea ecx, [esi + 0x58] }
	__asm { call fn_00d02c40 }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { L_00a29678: }
	__asm { mov eax, dword ptr [esi + 0x80] }
	__asm { cmp eax, 2 }
	__asm { jne L_00a29721 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { call fn_00a2ff00 }
	__asm { cmp eax, 1 }
	__asm { jne L_00a296d4 }
	__asm { test edx, edx }
	__asm { jne L_00a296d4 }
	__asm { movzx eax, byte ptr [ebp + 0xb] }
	__asm { cmp eax, -1 }
	__asm { je L_00a296df }
	__asm { cmp eax, -2 }
	__asm { je L_00a2977d }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00d02950 }
	__asm { cmp dword ptr [esi + 0x4c], 0xd }
	__asm { jne L_00a2962c }
	__asm { mov dword ptr [esi + 0x80], 3 }
	__asm { jmp L_00a2962c }
	__asm { L_00a296d4: }
	__asm { and eax, edx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a2977d }
	__asm { L_00a296df: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push 0xea5ac8 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp + 0x10], 1 }
	__asm { mov dword ptr [ebp + 0x14], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov eax, dword ptr [g_00f10db8] }
	__asm { mov dword ptr [ebp - 0x3c], 0xea5ac0 }
	__asm { mov dword ptr [ebp - 0x28], 4 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00a29c90 }
	__asm { L_00a29721: }
	__asm { cmp eax, 3 }
	__asm { jne L_00a29870 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub ecx, ebx }
	__asm { sbb edx, edi }
	__asm { push edx }
	__asm { push ecx }
	__asm { add eax, ebx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00a292d0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { and ecx, edx }
	__asm { cmp ecx, -1 }
	__asm { je L_00a29809 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add ebx, edi }
	__asm { adc dword ptr [ebp - 0x18], edx }
	__asm { sub ecx, ebx }
	__asm { sbb eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { cmp edx, eax }
	__asm { jg L_00a29853 }
	__asm { jl L_00a29779 }
	__asm { cmp edi, ecx }
	__asm { jae L_00a29853 }
	__asm { L_00a29779: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_00a2977d: }
	__asm { cmp dword ptr [ebp - 0x40], 0 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { jg L_00a299cf }
	__asm { jl L_00a29795 }
	__asm { cmp dword ptr [ebp - 0x44], eax }
	__asm { jae L_00a299cf }
	__asm { L_00a29795: }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { call fn_00a315a0 }
	__asm { mov ebx, eax }
	__asm { lea edi, [esi + 0x68] }
	__asm { cmp edi, ebx }
	__asm { je L_00a297d3 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00a297ba }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a297ba: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00412c00 }
	__asm { L_00a297d3: }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { jb L_00a297e4 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a297e4: }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { L_00a297e7: }
	__asm { mov eax, ebx }
	__asm { or eax, dword ptr [ebp - 0x18] }
	__asm { jne L_00a299e9 }
	__asm { cmp dword ptr [esi + 0x80], 5 }
	__asm { jne L_00a299e9 }
	__asm { or ebx, 0xffffffff }
	__asm { or esi, ebx }
	__asm { jmp L_00a299ec }
	__asm { L_00a29809: }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a315e0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004126a0 }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { jb L_00a29849 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a29849: }
	__asm { mov dword ptr [esi + 0x80], 4 }
	__asm { L_00a29853: }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { jmp L_00a29625 }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_00a2bb10 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00a29c90 }
	__asm { L_00a29870: }
	__asm { push 0 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { call fn_00a2ff00 }
	__asm { cmp eax, 1 }
	__asm { jne L_00a29982 }
	__asm { test edx, edx }
	__asm { jne L_00a29982 }
	__asm { movzx eax, byte ptr [ebp - 0x11] }
	__asm { cmp eax, -1 }
	__asm { je L_00a2998d }
	__asm { cmp eax, -2 }
	__asm { je L_00a2977d }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x58] }
	__asm { call fn_00d028e0 }
	__asm { cmp dword ptr [esi + 0x60], 3 }
	__asm { je L_00a298be }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { jmp L_00a2962c }
	__asm { L_00a298be: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { cmp ecx, dword ptr [eax + 8] }
	__asm { je L_00a2990a }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push 0xea5ac8 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp + 0x10], 1 }
	__asm { mov dword ptr [ebp + 0x14], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov eax, dword ptr [g_00f10db8] }
	__asm { mov dword ptr [ebp - 0x3c], 0xea5ac0 }
	__asm { mov dword ptr [ebp - 0x28], 2 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_00a29c90 }
	__asm { L_00a2990a: }
	__asm { push 0 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x12] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { call fn_00a2ff00 }
	__asm { cmp eax, 1 }
	__asm { jne L_00a2993e }
	__asm { test edx, edx }
	__asm { jne L_00a2993e }
	__asm { movzx eax, byte ptr [ebp - 0x12] }
	__asm { cmp eax, -1 }
	__asm { jne L_00a2994a }
	__asm { L_00a2992c: }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 0x80], 5 }
	__asm { jmp L_00a2962c }
	__asm { L_00a2993e: }
	__asm { and eax, edx }
	__asm { cmp eax, -1 }
	__asm { je L_00a2992c }
	__asm { mov eax, 0xfffffffe }
	__asm { L_00a2994a: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { call fn_00a2fe80 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a27090 }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [esi + 0x80], 1 }
	__asm { call fn_00d02c60 }
	__asm { lea ecx, [esi + 0x58] }
	__asm { call fn_00d02c40 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { jmp L_00a2962c }
	__asm { L_00a29982: }
	__asm { and eax, edx }
	__asm { cmp eax, -1 }
	__asm { jne L_00a2977d }
	__asm { L_00a2998d: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push 0xea5ac8 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp + 0x10], 1 }
	__asm { mov dword ptr [ebp + 0x14], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov eax, dword ptr [g_00f10db8] }
	__asm { mov dword ptr [ebp - 0x3c], 0xea5ac0 }
	__asm { mov dword ptr [ebp - 0x28], 5 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_00a29c90 }
	__asm { L_00a299cf: }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { lea eax, [esi + 0x68] }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { jb L_00a299e1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a299e1: }
	__asm { mov byte ptr [eax], 0 }
	__asm { jmp L_00a297e7 }
	__asm { L_00a299e9: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { L_00a299ec: }
	__asm { cmp dword ptr [ebp - 0x4c], 0x10 }
	__asm { jb L_00a299fd }
	__asm { push dword ptr [ebp - 0x60] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a299fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov edx, esi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00a2a4f0
extern "C" __declspec(naked) void asm_00a2a4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46c93 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a2a52d }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a2a52d: }
	__asm { lea ecx, [esi + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00a2a5a0
extern "C" __declspec(naked) void asm_00a2a5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46cbb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a2a5e0 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a2a5e0: }
	__asm { lea edi, [ebx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { add esi, 8 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [edi + 0x44], eax }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { mov dword ptr [edi + 0x48], eax }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { mov dword ptr [edi + 0x4c], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebx + 0x68] }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { mov dword ptr [ebx + 0x58], eax }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { mov dword ptr [ebx + 0x5c], eax }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { mov dword ptr [ebx + 0x60], eax }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { mov dword ptr [ebx + 0x64], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x68] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x80] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x80], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2bde0
extern "C" __declspec(naked) void asm_00a2bde0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_00a2bdf4 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2bdf4: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_00a2be17 }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2be17: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { test esi, esi }
	__asm { je L_00a2be5a }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a2be59 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00a2be59 }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_00a2be59: }
	__asm { pop edi }
	__asm { L_00a2be5a: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2be60
extern "C" __declspec(naked) void asm_00a2be60()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { jb L_00a2be74 }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2be74: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_00a2be97 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2be97: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_00a2beba }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2beba: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { test esi, esi }
	__asm { je L_00a2befd }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a2befc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00a2befc }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_00a2befc: }
	__asm { pop edi }
	__asm { L_00a2befd: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1027c[];
extern "C" char g_00e102e0[];
extern "C" char g_00e104c4[];
// FUNCTION: ROBLOXSTUDIO 0x00a2c100
extern "C" __declspec(naked) void asm_00a2c100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4700c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xea6024 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [eax + esi + 8], 0xea6030 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 0x20] }
	__asm { mov dword ptr [edx + esi + 4], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test byte ptr [eax + 0x28], 1 }
	__asm { je L_00a2c16c }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e1027c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a2c16c: }
	__asm { mov edi, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_00a2c1a2 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a2c1a1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a2c1a1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a2c1a1: }
	__asm { pop ebx }
	__asm { L_00a2c1a2: }
	__asm { lea ecx, [esi + 0x20] }
	__asm { call dword ptr [g_00e102e0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xea5fe8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1027c[];
extern "C" char g_00e102dc[];
extern "C" char g_00e104c4[];
// FUNCTION: ROBLOXSTUDIO 0x00a2c1d0
extern "C" __declspec(naked) void asm_00a2c1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4703c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi], 0xea5dfc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [eax + esi + 8], 0xea5e08 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 0x18] }
	__asm { mov dword ptr [edx + esi + 4], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test byte ptr [eax + 0x28], 1 }
	__asm { je L_00a2c23c }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e1027c] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a2c23c: }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_00a2c272 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a2c271 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a2c271 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a2c271: }
	__asm { pop ebx }
	__asm { L_00a2c272: }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call dword ptr [g_00e102dc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xea5dc8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102e0[];
// FUNCTION: ROBLOXSTUDIO 0x00a2c2a0
extern "C" __declspec(naked) void asm_00a2c2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd471a4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov esi, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00a2c2f6 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a2c2f5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a2c2f5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a2c2f5: }
	__asm { pop ebx }
	__asm { L_00a2c2f6: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call dword ptr [g_00e102e0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xea5fe8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102dc[];
// FUNCTION: ROBLOXSTUDIO 0x00a2c320
extern "C" __declspec(naked) void asm_00a2c320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47064 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00a2c376 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a2c375 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a2c375 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a2c375: }
	__asm { pop ebx }
	__asm { L_00a2c376: }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call dword ptr [g_00e102dc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xea5dc8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102e0[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2cf00
extern "C" __declspec(naked) void asm_00a2cf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd471a4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edi, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00a2cf56 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a2cf55 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a2cf55 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a2cf55: }
	__asm { pop ebx }
	__asm { L_00a2cf56: }
	__asm { lea ecx, [esi + 0x20] }
	__asm { call dword ptr [g_00e102e0] }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xea5fe8 }
	__asm { call dword ptr [g_00e102c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a2cf7d }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2cf7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102dc[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2cfa0
extern "C" __declspec(naked) void asm_00a2cfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47064 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00a2cff6 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a2cff5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a2cff5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a2cff5: }
	__asm { pop ebx }
	__asm { L_00a2cff6: }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call dword ptr [g_00e102dc] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xea5dc8 }
	__asm { call dword ptr [g_00e102c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a2d01d }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2d01d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004039a0();
extern "C" void fn_0042e9d0();
extern "C" void fn_0077c590();
// FUNCTION: ROBLOXSTUDIO 0x00a2d2c0
extern "C" __declspec(naked) void asm_00a2d2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd471b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00a2d337 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00a2d337 }
	__asm { cmp dword ptr [ebp + 0x10], 0x6e }
	__asm { jne L_00a2d337 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_0042e9d0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004039a0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x6e }
	__asm { call fn_0077c590 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { add edx, -0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea eax, [edx + 0xc] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { dec ecx }
	__asm { test ecx, ecx }
	__asm { jg L_00a2d337 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00a2d337: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e1031c[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a285b0();
extern "C" void fn_00a287b0();
extern "C" void fn_00a2c710();
extern "C" void fn_00a2f6d0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a2d5b0
extern "C" __declspec(naked) void asm_00a2d5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd471db }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x78 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test al, 2 }
	__asm { je L_00a2d6c5 }
	__asm { and eax, 0xfffffffd }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov byte ptr [ebp - 0x47], 0 }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 4 }
	__asm { mov dword ptr [ebp - 0x84], 0xea63cc }
	__asm { test byte ptr [esi + 0x28], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a2d675 }
	__asm { push -1 }
	__asm { push -1 }
	__asm { push -1 }
	__asm { push -1 }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { mov byte ptr [ebp - 0x11], 0 }
	__asm { call fn_00a2f6d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [ebp - 0x84] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { L_00a2d675: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { call dword ptr [g_00e104c4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { push dword ptr [eax] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00a287b0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 2 }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00a285b0 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a2c710 }
	__asm { L_00a2d6c5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 2 }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00a285b0 }
	__asm { add esp, 0x10 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa2d6f3 }
	__asm { ret }
}

extern "C" char g_00e1031c[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a286b0();
extern "C" void fn_00a288b0();
extern "C" void fn_00a2c7b0();
extern "C" void fn_00a2f750();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a2d710
extern "C" __declspec(naked) void asm_00a2d710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd471fb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x78 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test al, 2 }
	__asm { je L_00a2d825 }
	__asm { and eax, 0xfffffffd }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov byte ptr [ebp - 0x47], 0 }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 4 }
	__asm { mov dword ptr [ebp - 0x84], 0xea6364 }
	__asm { test byte ptr [esi + 0x28], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00a2d7d5 }
	__asm { push -1 }
	__asm { push -1 }
	__asm { push -1 }
	__asm { push -1 }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { mov byte ptr [ebp - 0x11], 0 }
	__asm { call fn_00a2f750 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [ebp - 0x84] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { L_00a2d7d5: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { call dword ptr [g_00e104c4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { push dword ptr [eax] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00a288b0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 2 }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00a286b0 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00a2c7b0 }
	__asm { L_00a2d825: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 2 }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00a286b0 }
	__asm { add esp, 0x10 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00cf67ec }
	__asm { mov eax, 0xa2d853 }
	__asm { ret }
}

extern "C" char g_00e104c8[];
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00a2ff00
extern "C" __declspec(naked) void asm_00a2ff00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ecx, ecx }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { xor esi, esi }
	__asm { xor ebx, ebx }
	__asm { cmp dword ptr [edi + 0x24], ecx }
	__asm { jg L_00a2ff87 }
	__asm { jl L_00a2ff23 }
	__asm { cmp dword ptr [edi + 0x20], eax }
	__asm { jae L_00a2ff87 }
	__asm { L_00a2ff23: }
	__asm { sub eax, dword ptr [edi + 0x20] }
	__asm { sbb ecx, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp ecx, dword ptr [ebp + 0x10] }
	__asm { jg L_00a2ff3f }
	__asm { jl L_00a2ff3a }
	__asm { cmp eax, edx }
	__asm { jae L_00a2ff3f }
	__asm { L_00a2ff3a: }
	__asm { lea ebx, [ebp - 8] }
	__asm { jmp L_00a2ff42 }
	__asm { L_00a2ff3f: }
	__asm { lea ebx, [ebp + 0xc] }
	__asm { L_00a2ff42: }
	__asm { cmp dword ptr [edi + 0x18], 0x10 }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { lea ecx, [edi + 4] }
	__asm { jb L_00a2ff52 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00a2ff52: }
	__asm { test esi, esi }
	__asm { je L_00a2ff6b }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { push esi }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf67fe }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { L_00a2ff6b: }
	__asm { add dword ptr [edi + 0x20], esi }
	__asm { adc dword ptr [edi + 0x24], ebx }
	__asm { cmp esi, edx }
	__asm { jne L_00a2ff87 }
	__asm { cmp ebx, dword ptr [ebp + 0x10] }
	__asm { jne L_00a2ff87 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov edx, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a2ff87: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub edx, esi }
	__asm { sbb edi, ebx }
	__asm { push edi }
	__asm { push edx }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { call dword ptr [g_00e104c8] }
	__asm { mov edi, eax }
	__asm { or eax, edx }
	__asm { jne L_00a2ffb9 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov al, byte ptr [eax + 0x38] }
	__asm { and al, 1 }
	__asm { movzx eax, al }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { cdq }
	__asm { mov edi, eax }
	__asm { L_00a2ffb9: }
	__asm { mov ecx, edi }
	__asm { and ecx, edx }
	__asm { cmp ecx, -1 }
	__asm { je L_00a2ffd1 }
	__asm { add edi, esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { adc edx, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a2ffd1: }
	__asm { mov eax, esi }
	__asm { or eax, ebx }
	__asm { je L_00a2ffe6 }
	__asm { mov edi, esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov edx, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a2ffe6: }
	__asm { or edi, 0xffffffff }
	__asm { or edx, edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10304[];
extern "C" char g_00e10310[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29bb0();
extern "C" void fn_00a29be0();
// FUNCTION: ROBLOXSTUDIO 0x00a304d0
extern "C" __declspec(naked) void asm_00a304d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_00a30569 }
	__asm { cmp esi, 1 }
	__asm { jne L_00a30569 }
	__asm { cmp dword ptr [ebp + 0x18], esi }
	__asm { jne L_00a30569 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { cmp edx, dword ptr [ebp + 0x10] }
	__asm { jg L_00a30566 }
	__asm { jl L_00a3051d }
	__asm { cmp eax, ebx }
	__asm { ja L_00a30566 }
	__asm { L_00a3051d: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { cmp dword ptr [ebp + 0x10], edx }
	__asm { jg L_00a30566 }
	__asm { jl L_00a3053f }
	__asm { cmp ebx, eax }
	__asm { ja L_00a30566 }
	__asm { L_00a3053f: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10304] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0x80] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00a29be0 }
	__asm { L_00a30566: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { L_00a30569: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_00a3057d }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a3057d: }
	__asm { cmp esi, 1 }
	__asm { jne L_00a305b2 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { je L_00a305b2 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { cdq }
	__asm { sub ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sbb eax, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00a305b2: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10314] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push esi }
	__asm { push dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x80] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29bb0 }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10304[];
extern "C" char g_00e10310[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29bb0();
extern "C" void fn_00a29be0();
// FUNCTION: ROBLOXSTUDIO 0x00a305f0
extern "C" __declspec(naked) void asm_00a305f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_00a30689 }
	__asm { cmp esi, 1 }
	__asm { jne L_00a30689 }
	__asm { cmp dword ptr [ebp + 0x18], esi }
	__asm { jne L_00a30689 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { cmp edx, dword ptr [ebp + 0x10] }
	__asm { jg L_00a30686 }
	__asm { jl L_00a3063d }
	__asm { cmp eax, ebx }
	__asm { ja L_00a30686 }
	__asm { L_00a3063d: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { cmp dword ptr [ebp + 0x10], edx }
	__asm { jg L_00a30686 }
	__asm { jl L_00a3065f }
	__asm { cmp ebx, eax }
	__asm { ja L_00a30686 }
	__asm { L_00a3065f: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10304] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [edi + 0x40] }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0xd0] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00a29be0 }
	__asm { L_00a30686: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { L_00a30689: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_00a3069d }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a3069d: }
	__asm { cmp esi, 1 }
	__asm { jne L_00a306d2 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { je L_00a306d2 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { cdq }
	__asm { sub ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sbb eax, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00a306d2: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10314] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [edi + 0x40] }
	__asm { push esi }
	__asm { push dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0xd0] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29bb0 }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10304[];
extern "C" char g_00e10310[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29be0();
extern "C" void fn_00a29c20();
// FUNCTION: ROBLOXSTUDIO 0x00a30710
extern "C" __declspec(naked) void asm_00a30710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_00a307a3 }
	__asm { cmp esi, 1 }
	__asm { jne L_00a307a3 }
	__asm { cmp dword ptr [ebp + 0x18], esi }
	__asm { jne L_00a307a3 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { cmp edx, dword ptr [ebp + 0x10] }
	__asm { jg L_00a307a0 }
	__asm { jl L_00a3075d }
	__asm { cmp eax, ebx }
	__asm { ja L_00a307a0 }
	__asm { L_00a3075d: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { cmp dword ptr [ebp + 0x10], edx }
	__asm { jg L_00a307a0 }
	__asm { jl L_00a3077f }
	__asm { cmp ebx, eax }
	__asm { ja L_00a307a0 }
	__asm { L_00a3077f: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10304] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00a29be0 }
	__asm { L_00a307a0: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { L_00a307a3: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_00a307b7 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a307b7: }
	__asm { cmp esi, 1 }
	__asm { jne L_00a307ec }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { je L_00a307ec }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { cdq }
	__asm { sub ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sbb eax, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00a307ec: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10314] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push esi }
	__asm { push dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x40] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29c20 }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10304[];
extern "C" char g_00e10310[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29be0();
extern "C" void fn_00a29c20();
// FUNCTION: ROBLOXSTUDIO 0x00a30820
extern "C" __declspec(naked) void asm_00a30820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_00a308b3 }
	__asm { cmp esi, 1 }
	__asm { jne L_00a308b3 }
	__asm { cmp dword ptr [ebp + 0x18], esi }
	__asm { jne L_00a308b3 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { cmp edx, dword ptr [ebp + 0x10] }
	__asm { jg L_00a308b0 }
	__asm { jl L_00a3086d }
	__asm { cmp eax, ebx }
	__asm { ja L_00a308b0 }
	__asm { L_00a3086d: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { cmp dword ptr [ebp + 0x10], edx }
	__asm { jg L_00a308b0 }
	__asm { jl L_00a3088f }
	__asm { cmp ebx, eax }
	__asm { ja L_00a308b0 }
	__asm { L_00a3088f: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10304] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00a29be0 }
	__asm { L_00a308b0: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { L_00a308b3: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_00a308c7 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a308c7: }
	__asm { cmp esi, 1 }
	__asm { jne L_00a308fc }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { je L_00a308fc }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { cdq }
	__asm { sub ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sbb eax, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00a308fc: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10314] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push esi }
	__asm { push dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x48] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29c20 }
}

extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10310[];
extern "C" char g_00e10500[];
extern "C" void fn_00a29480();
// FUNCTION: ROBLOXSTUDIO 0x00a31700
extern "C" __declspec(naked) void asm_00a31700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { jne L_00a3171b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { L_00a3171b: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, edi }
	__asm { cmp eax, esi }
	__asm { jb L_00a31826 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { lea ebx, [edi + 0x98] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp dword ptr [ebx + 4], edx }
	__asm { jg L_00a31766 }
	__asm { jl L_00a31762 }
	__asm { cmp dword ptr [ebx], eax }
	__asm { jae L_00a31766 }
	__asm { L_00a31762: }
	__asm { mov ecx, ebx }
	__asm { jmp L_00a31769 }
	__asm { L_00a31766: }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_00a31769: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov eax, esi }
	__asm { or eax, dword ptr [ecx + 4] }
	__asm { je L_00a3179c }
	__asm { mov eax, dword ptr [edi + 0x88] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { test esi, esi }
	__asm { je L_00a3179c }
	__asm { push esi }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sub eax, esi }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { L_00a3179c: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edx, dword ptr [edi + 0x88] }
	__asm { lea eax, [edx + ecx] }
	__asm { push eax }
	__asm { sub edx, esi }
	__asm { add edx, ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { mov edx, dword ptr [edi + 0x90] }
	__asm { sub edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edi + 0x94] }
	__asm { sbb ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add eax, dword ptr [edi + 0x88] }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x80] }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { call fn_00a29480 }
	__asm { mov esi, eax }
	__asm { mov eax, edx }
	__asm { mov ecx, esi }
	__asm { and ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp ecx, -1 }
	__asm { jne L_00a317f9 }
	__asm { or dword ptr [edi + 0x38], 1 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { L_00a317f9: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add eax, esi }
	__asm { add eax, dword ptr [edi + 0x88] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { or esi, dword ptr [ebp - 4] }
	__asm { pop ebx }
	__asm { je L_00a31835 }
	__asm { mov ecx, edi }
	__asm { L_00a31826: }
	__asm { call dword ptr [g_00e102ec] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a31835: }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10310[];
extern "C" char g_00e10500[];
extern "C" void fn_00a295d0();
// FUNCTION: ROBLOXSTUDIO 0x00a31840
extern "C" __declspec(naked) void asm_00a31840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { jne L_00a3185b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { L_00a3185b: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, edi }
	__asm { cmp eax, esi }
	__asm { jb L_00a31966 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { lea ebx, [edi + 0xe8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp dword ptr [ebx + 4], edx }
	__asm { jg L_00a318a6 }
	__asm { jl L_00a318a2 }
	__asm { cmp dword ptr [ebx], eax }
	__asm { jae L_00a318a6 }
	__asm { L_00a318a2: }
	__asm { mov ecx, ebx }
	__asm { jmp L_00a318a9 }
	__asm { L_00a318a6: }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_00a318a9: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov eax, esi }
	__asm { or eax, dword ptr [ecx + 4] }
	__asm { je L_00a318dc }
	__asm { mov eax, dword ptr [edi + 0xd8] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { test esi, esi }
	__asm { je L_00a318dc }
	__asm { push esi }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sub eax, esi }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { L_00a318dc: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edx, dword ptr [edi + 0xd8] }
	__asm { lea eax, [edx + ecx] }
	__asm { push eax }
	__asm { sub edx, esi }
	__asm { add edx, ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { mov edx, dword ptr [edi + 0xe0] }
	__asm { sub edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edi + 0xe4] }
	__asm { sbb ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add eax, dword ptr [edi + 0xd8] }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0xd0] }
	__asm { lea ecx, [edi + 0x40] }
	__asm { call fn_00a295d0 }
	__asm { mov esi, eax }
	__asm { mov eax, edx }
	__asm { mov ecx, esi }
	__asm { and ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp ecx, -1 }
	__asm { jne L_00a31939 }
	__asm { or dword ptr [edi + 0x38], 1 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { L_00a31939: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add eax, esi }
	__asm { add eax, dword ptr [edi + 0xd8] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { or esi, dword ptr [ebp - 4] }
	__asm { pop ebx }
	__asm { je L_00a31975 }
	__asm { mov ecx, edi }
	__asm { L_00a31966: }
	__asm { call dword ptr [g_00e102ec] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a31975: }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10310[];
extern "C" char g_00e10500[];
extern "C" void fn_00a30000();
// FUNCTION: ROBLOXSTUDIO 0x00a31b50
extern "C" __declspec(naked) void asm_00a31b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { jne L_00a31b6b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { L_00a31b6b: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, edi }
	__asm { cmp eax, esi }
	__asm { jb L_00a31c5f }
	__asm { push ebx }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp dword ptr [edi + 0x64], edx }
	__asm { jg L_00a31bb2 }
	__asm { jl L_00a31bad }
	__asm { cmp dword ptr [edi + 0x60], eax }
	__asm { jae L_00a31bb2 }
	__asm { L_00a31bad: }
	__asm { lea ecx, [edi + 0x60] }
	__asm { jmp L_00a31bb5 }
	__asm { L_00a31bb2: }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_00a31bb5: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov eax, esi }
	__asm { or eax, dword ptr [ecx + 4] }
	__asm { je L_00a31be6 }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { test esi, esi }
	__asm { je L_00a31be6 }
	__asm { push esi }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { sub eax, esi }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { L_00a31be6: }
	__asm { mov ecx, dword ptr [edi + 0x60] }
	__asm { mov edx, dword ptr [edi + 0x50] }
	__asm { lea eax, [edx + ecx] }
	__asm { push eax }
	__asm { sub edx, esi }
	__asm { add edx, ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { mov edx, dword ptr [edi + 0x58] }
	__asm { sub edx, dword ptr [edi + 0x60] }
	__asm { mov ecx, dword ptr [edi + 0x5c] }
	__asm { sbb ecx, dword ptr [edi + 0x64] }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { add eax, dword ptr [edi + 0x50] }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { call fn_00a30000 }
	__asm { mov esi, eax }
	__asm { mov eax, edx }
	__asm { mov ecx, esi }
	__asm { and ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp ecx, -1 }
	__asm { jne L_00a31c34 }
	__asm { or dword ptr [edi + 0x38], 1 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { L_00a31c34: }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { add eax, esi }
	__asm { add eax, dword ptr [edi + 0x50] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { or esi, dword ptr [ebp - 4] }
	__asm { pop ebx }
	__asm { je L_00a31c6e }
	__asm { mov ecx, edi }
	__asm { L_00a31c5f: }
	__asm { call dword ptr [g_00e102ec] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a31c6e: }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b5580[];
extern "C" void fn_004038a0();
extern "C" void fn_0042ec70();
extern "C" void fn_0042ed90();
extern "C" void fn_0045ec90();
extern "C" void fn_0077c590();
// FUNCTION: ROBLOXSTUDIO 0x00a33600
extern "C" __declspec(naked) void asm_00a33600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47750 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012b5580] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, 0x12b5580 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { lea esi, [eax + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a33662 }
	__asm { test eax, 0xffff0000 }
	__asm { jne L_00a33662 }
	__asm { movzx edi, ax }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0042ed90 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3366e }
	__asm { push edi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_0042ec70 }
	__asm { jmp L_00a3366b }
	__asm { L_00a33662: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_0045ec90 }
	__asm { L_00a3366b: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { L_00a3366e: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00a336bc }
	__asm { sub esp, 0x18 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx + 0x14], 0xf }
	__asm { mov dword ptr [edx + 0x10], 0 }
	__asm { mov byte ptr [edx], 0 }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_00a3369b }
	__asm { xor ecx, ecx }
	__asm { jmp L_00a336a9 }
	__asm { L_00a3369b: }
	__asm { mov ecx, esi }
	__asm { lea ebx, [ecx + 1] }
	__asm { L_00a336a0: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00a336a0 }
	__asm { sub ecx, ebx }
	__asm { L_00a336a9: }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, edx }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { call fn_0077c590 }
	__asm { L_00a336bc: }
	__asm { add esi, -0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea eax, [esi + 0xc] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { dec ecx }
	__asm { test ecx, ecx }
	__asm { jg L_00a336dd }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00a336dd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10294[];
extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10304[];
extern "C" char g_00e10310[];
extern "C" char g_00e10314[];
extern "C" char g_00e104c4[];
extern "C" void fn_00a29be0();
extern "C" void fn_00a29c20();
// FUNCTION: ROBLOXSTUDIO 0x00a336f0
extern "C" __declspec(naked) void asm_00a336f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_00a33783 }
	__asm { cmp esi, 1 }
	__asm { jne L_00a33783 }
	__asm { cmp dword ptr [ebp + 0x18], esi }
	__asm { jne L_00a33783 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { cmp edx, dword ptr [ebp + 0x10] }
	__asm { jg L_00a33780 }
	__asm { jl L_00a3373d }
	__asm { cmp eax, ebx }
	__asm { ja L_00a33780 }
	__asm { L_00a3373d: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { cmp dword ptr [ebp + 0x10], edx }
	__asm { jg L_00a33780 }
	__asm { jl L_00a3375f }
	__asm { cmp ebx, eax }
	__asm { ja L_00a33780 }
	__asm { L_00a3375f: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10304] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00a29be0 }
	__asm { L_00a33780: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { L_00a33783: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_00a33797 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e104c4] }
	__asm { L_00a33797: }
	__asm { cmp esi, 1 }
	__asm { jne L_00a337cc }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { je L_00a337cc }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub esi, eax }
	__asm { mov eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { cdq }
	__asm { sub ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sbb eax, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00a337cc: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10314] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push esi }
	__asm { push dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x44] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a29c20 }
}

extern "C" char g_00e102e8[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10310[];
extern "C" char g_00e10500[];
extern "C" void fn_00a33580();
// FUNCTION: ROBLOXSTUDIO 0x00a339d0
extern "C" __declspec(naked) void asm_00a339d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { jne L_00a339eb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x58] }
	__asm { L_00a339eb: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10310] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, edi }
	__asm { cmp eax, esi }
	__asm { jb L_00a33adf }
	__asm { push ebx }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { cdq }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp dword ptr [edi + 0x5c], edx }
	__asm { jg L_00a33a32 }
	__asm { jl L_00a33a2d }
	__asm { cmp dword ptr [edi + 0x58], eax }
	__asm { jae L_00a33a32 }
	__asm { L_00a33a2d: }
	__asm { lea ecx, [edi + 0x58] }
	__asm { jmp L_00a33a35 }
	__asm { L_00a33a32: }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_00a33a35: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov eax, esi }
	__asm { or eax, dword ptr [ecx + 4] }
	__asm { je L_00a33a66 }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { sub eax, esi }
	__asm { test esi, esi }
	__asm { je L_00a33a66 }
	__asm { push esi }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { sub eax, esi }
	__asm { add eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { L_00a33a66: }
	__asm { mov ecx, dword ptr [edi + 0x58] }
	__asm { mov edx, dword ptr [edi + 0x48] }
	__asm { lea eax, [edx + ecx] }
	__asm { push eax }
	__asm { sub edx, esi }
	__asm { add edx, ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { mov edx, dword ptr [edi + 0x50] }
	__asm { sub edx, dword ptr [edi + 0x58] }
	__asm { mov ecx, dword ptr [edi + 0x54] }
	__asm { sbb ecx, dword ptr [edi + 0x5c] }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { add eax, dword ptr [edi + 0x48] }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { call fn_00a33580 }
	__asm { mov esi, eax }
	__asm { mov eax, edx }
	__asm { mov ecx, esi }
	__asm { and ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp ecx, -1 }
	__asm { jne L_00a33ab4 }
	__asm { or dword ptr [edi + 0x38], 1 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { L_00a33ab4: }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { add eax, esi }
	__asm { add eax, dword ptr [edi + 0x48] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call dword ptr [g_00e102ec] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102e8] }
	__asm { or esi, dword ptr [ebp - 4] }
	__asm { pop ebx }
	__asm { je L_00a33aee }
	__asm { mov ecx, edi }
	__asm { L_00a33adf: }
	__asm { call dword ptr [g_00e102ec] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a33aee: }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_00a33eb0();
// FUNCTION: ROBLOXSTUDIO 0x00a33e10
extern "C" __declspec(naked) void asm_00a33e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a33eb0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00a33e87 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a33e86 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a33e86 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a33e86: }
	__asm { pop ebx }
	__asm { L_00a33e87: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007a62e0();
extern "C" void fn_00a34940();
// FUNCTION: ROBLOXSTUDIO 0x00a343d0
extern "C" __declspec(naked) void asm_00a343d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [esi + 4], edi }
	__asm { je L_00a34576 }
	__asm { mov ecx, esi }
	__asm { call fn_00a34940 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a34477 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00a34432 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a3441d }
	__asm { push 0xc6 }
	__asm { push 0xe53f10 }
	__asm { push 0xea6a80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a34432 }
	__asm { L_00a3441d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea6a98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a34432: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a34477 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00a34477 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a34462 }
	__asm { push 0xc7 }
	__asm { push 0xe53f10 }
	__asm { push 0xea6b04 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a34477 }
	__asm { L_00a34462: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea6b20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a34477: }
	__asm { lea ecx, [edi + 4] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { test ebx, ebx }
	__asm { je L_00a34521 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a3451c }
	__asm { mov ecx, ebx }
	__asm { call fn_007a62e0 }
	__asm { test al, al }
	__asm { jne L_00a344d3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a344be }
	__asm { push 0xcc }
	__asm { push 0xe53f10 }
	__asm { push 0xea6b8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a344d3 }
	__asm { L_00a344be: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea6bb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a344d3: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a34519 }
	__asm { cmp dword ptr [ebx + 4], edi }
	__asm { je L_00a34519 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a34508 }
	__asm { push 0xcd }
	__asm { push 0xe53f10 }
	__asm { push 0xea6c24 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a34519 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a34508: }
	__asm { movzx eax, al }
	__asm { push 0xea6c50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a34519: }
	__asm { lea ecx, [edi + 4] }
	__asm { L_00a3451c: }
	__asm { mov dword ptr [esi], ebx }
	__asm { mov dword ptr [ebx + 8], esi }
	__asm { L_00a34521: }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { pop ebx }
	__asm { test al, al }
	__asm { je L_00a34574 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00a34574 }
	__asm { test ecx, ecx }
	__asm { jne L_00a34574 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a34563 }
	__asm { push 0xd5 }
	__asm { push 0xe53f10 }
	__asm { push 0xea6ccc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a34574 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a34563: }
	__asm { movzx eax, al }
	__asm { push 0xea6d00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a34574: }
	__asm { inc dword ptr [edi] }
	__asm { L_00a34576: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a33f60();
extern "C" void fn_00a342a0();
extern "C" void fn_00a348d0();
extern "C" void fn_00a36ae0();
// FUNCTION: ROBLOXSTUDIO 0x00a34710
extern "C" __declspec(naked) void asm_00a34710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd477d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push 0x1a4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_00a34754 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a34754: }
	__asm { push esi }
	__asm { lea esi, [eax + 0x2c] }
	__asm { lea edx, [esi + 0x78] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [esi + 4], 8 }
	__asm { push edx }
	__asm { mov byte ptr [edx + 0x14], 0x21 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 5], 0x61 }
	__asm { call fn_00a348d0 }
	__asm { mov dword ptr [edx + 0xc], ebx }
	__asm { mov dword ptr [edx + 0x10], edi }
	__asm { mov dword ptr [edx + 0x70], esi }
	__asm { mov dword ptr [edx + 0x40], 0 }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { lea eax, [edx + 0x78] }
	__asm { mov dword ptr [edx + 0x88], eax }
	__asm { mov dword ptr [edx + 0x8c], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push 0 }
	__asm { mov dword ptr [eax + 0x68], 0 }
	__asm { mov dword ptr [edx + 0x34], 0 }
	__asm { mov dword ptr [edx + 0x3c], 0 }
	__asm { mov dword ptr [edx + 0x58], 0 }
	__asm { mov byte ptr [edx + 0x15], 0 }
	__asm { mov dword ptr [edx + 0x1c], esi }
	__asm { mov dword ptr [edx + 0x18], 0 }
	__asm { mov dword ptr [edx + 0x24], 0 }
	__asm { mov dword ptr [edx + 0x28], 0 }
	__asm { mov dword ptr [edx + 0x2c], 0 }
	__asm { mov dword ptr [edx + 0x30], 0 }
	__asm { mov dword ptr [edx + 0x44], 0x178 }
	__asm { mov dword ptr [edx + 0x50], 0xc8 }
	__asm { mov dword ptr [edx + 0x54], 0xc8 }
	__asm { mov dword ptr [edx + 0x4c], 0 }
	__asm { lea eax, [edx + 0x1c] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { push 0xa34350 }
	__asm { push esi }
	__asm { mov dword ptr [edx + 0x98], 0 }
	__asm { mov dword ptr [edx + 0x9c], 0 }
	__asm { mov dword ptr [edx + 0xa0], 0 }
	__asm { mov dword ptr [edx + 0xa4], 0 }
	__asm { mov dword ptr [edx + 0xa8], 0 }
	__asm { mov dword ptr [edx + 0xac], 0 }
	__asm { mov dword ptr [edx + 0xb0], 0 }
	__asm { mov dword ptr [edx + 0xb4], 0 }
	__asm { mov dword ptr [edx + 0xb8], 0 }
	__asm { call fn_00a36ae0 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00a3489e }
	__asm { push esi }
	__asm { call fn_00a342a0 }
	__asm { add esp, 4 }
	__asm { xor esi, esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3489e: }
	__asm { lea ecx, [esi - 0x2c] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a348b7 }
	__asm { call fn_00a33f60 }
	__asm { L_00a348b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_00a343d0();
// FUNCTION: ROBLOXSTUDIO 0x00a34a60
extern "C" __declspec(naked) void asm_00a34a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47814 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov ebx, 1 }
	__asm { test eax, eax }
	__asm { je L_00a34abd }
	__asm { add eax, 4 }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00a34abd: }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a34ad2 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00a34ad2: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { xor eax, dword ptr [esi + 0x18] }
	__asm { and byte ptr [esi + 0x1c], 0xfe }
	__asm { and eax, 0x1f }
	__asm { xor dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { test eax, eax }
	__asm { je L_00a34afa }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { inc ebx }
	__asm { L_00a34afa: }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { inc dword ptr [eax] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a34b51 }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { jne L_00a34b51 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a34b40 }
	__asm { push 0x35b }
	__asm { push 0xea69a0 }
	__asm { push 0xe5bc64 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a34b51 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a34b40: }
	__asm { movzx eax, al }
	__asm { push 0xea6e30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a34b51: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { add ecx, 8 }
	__asm { call fn_00a343d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10550[];
extern "C" char g_00e10570[];
extern "C" char g_00e10654[];
extern "C" char g_00e1067c[];
extern "C" char g_00e106b4[];
extern "C" char g_00e106d4[];
extern "C" char g_00e1072c[];
extern "C" char g_00e10730[];
extern "C" char g_00e10734[];
extern "C" void fn_00a35150();
extern "C" void fn_00a35310();
extern "C" void fn_00a35620();
extern "C" void fn_00a35690();
extern "C" void fn_00a359d0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a35e70();
extern "C" void fn_00a38260();
// FUNCTION: ROBLOXSTUDIO 0x00a38c20
extern "C" __declspec(naked) void asm_00a38c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00a35150 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { lea ebx, [eax + 1] }
	__asm { mov dword ptr [ebp - 0x20c], 0 }
	__asm { test esi, esi }
	__asm { jne L_00a38cf8 }
	__asm { push 6 }
	__asm { push 0xea7158 }
	__asm { push edi }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { call dword ptr [g_00e106d4] }
	__asm { mov dword ptr [ebp - 0x208], eax }
	__asm { L_00a38c6c: }
	__asm { mov esi, dword ptr [g_00e10730] }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { cmp eax, 0x23 }
	__asm { jne L_00a38cab }
	__asm { mov dword ptr [ebp - 0x20c], 1 }
	__asm { L_00a38c87: }
	__asm { push dword ptr [ebp - 0x208] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { cmp eax, -1 }
	__asm { je L_00a38d85 }
	__asm { cmp eax, 0xa }
	__asm { jne L_00a38c87 }
	__asm { push dword ptr [ebp - 0x208] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_00a38cab: }
	__asm { cmp eax, 0x1b }
	__asm { jne L_00a38d85 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00a38d85 }
	__asm { push dword ptr [ebp - 0x208] }
	__asm { push 0xe46c4c }
	__asm { push ecx }
	__asm { call dword ptr [g_00e1072c] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 0x208], eax }
	__asm { test eax, eax }
	__asm { jne L_00a38d63 }
	__asm { push ebx }
	__asm { push 0xea716c }
	__asm { push edi }
	__asm { call fn_00a38260 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a38cf8: }
	__asm { push esi }
	__asm { push 0xea7160 }
	__asm { push edi }
	__asm { call fn_00a35620 }
	__asm { push 0x100a8bc }
	__asm { push esi }
	__asm { call dword ptr [g_00e10654] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 0x208], eax }
	__asm { test eax, eax }
	__asm { jne L_00a38c6c }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [g_00e10734] }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call fn_00a35e70 }
	__asm { push esi }
	__asm { inc eax }
	__asm { push eax }
	__asm { push 0xea7164 }
	__asm { push 0xea7144 }
	__asm { push edi }
	__asm { call fn_00a35620 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a359d0 }
	__asm { add esp, 0x2c }
	__asm { mov eax, 6 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a38d63: }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { cmp eax, -1 }
	__asm { je L_00a38d7b }
	__asm { cmp eax, 0x1b }
	__asm { je L_00a38d7b }
	__asm { mov eax, dword ptr [ebp - 0x208] }
	__asm { jmp L_00a38d63 }
	__asm { L_00a38d7b: }
	__asm { mov dword ptr [ebp - 0x20c], 0 }
	__asm { L_00a38d85: }
	__asm { push dword ptr [ebp - 0x208] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10570] }
	__asm { push 0 }
	__asm { push -1 }
	__asm { push edi }
	__asm { call fn_00a35e70 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20c] }
	__asm { push eax }
	__asm { push 0xa382b0 }
	__asm { push edi }
	__asm { call fn_00a35310 }
	__asm { push dword ptr [ebp - 0x208] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e106b4] }
	__asm { add esp, 0x28 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { mov esi, eax }
	__asm { je L_00a38dd8 }
	__asm { push dword ptr [ebp - 0x208] }
	__asm { call dword ptr [g_00e10550] }
	__asm { add esp, 4 }
	__asm { L_00a38dd8: }
	__asm { push ebx }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { je L_00a38e25 }
	__asm { call fn_00a35d10 }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [g_00e10734] }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call fn_00a35e70 }
	__asm { push esi }
	__asm { inc eax }
	__asm { push eax }
	__asm { push 0x10307cc }
	__asm { push 0xea7144 }
	__asm { push edi }
	__asm { call fn_00a35620 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00a359d0 }
	__asm { add esp, 0x34 }
	__asm { mov eax, 6 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a38e25: }
	__asm { call fn_00a359d0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012f86ac[];
extern "C" void fn_00402fd0();
extern "C" void fn_004038a0();
extern "C" void fn_00495660();
extern "C" void fn_008865d0();
extern "C" void fn_008869b0();
extern "C" void fn_00a104e0();
extern "C" void fn_00a35310();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a38e40
extern "C" __declspec(naked) void asm_00a38e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47848 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008865d0 }
	__asm { mov ecx, esi }
	__asm { call fn_00495660 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { cmovae ecx, dword ptr [ebp - 0x40] }
	__asm { push ecx }
	__asm { push dword ptr [eax + 0x10] }
	__asm { mov ecx, eax }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_00a38edf }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { or dword ptr [g_012f86ac], 0x200 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 0xa38320 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], 0xf12f2d }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00a35310 }
	__asm { add esp, 0x10 }
	__asm { mov esi, eax }
	__asm { jmp L_00a38f98 }
	__asm { L_00a38edf: }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { call fn_00a104e0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { test ecx, ecx }
	__asm { je L_00a38f0d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00a38f0d: }
	__asm { mov ecx, esi }
	__asm { call fn_008869b0 }
	__asm { mov edx, eax }
	__asm { mov dword ptr [ebp - 0x44], 0xf }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov byte ptr [ebp - 0x58], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_00a38f31 }
	__asm { xor ecx, ecx }
	__asm { jmp L_00a38f3f }
	__asm { L_00a38f31: }
	__asm { mov ecx, edx }
	__asm { lea esi, [ecx + 1] }
	__asm { L_00a38f36: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00a38f36 }
	__asm { sub ecx, esi }
	__asm { L_00a38f3f: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { lea edx, [ebp - 0x58] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [eax + 8] }
	__asm { cmp dword ptr [ebp - 0x44], 0x10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_00a38f6e }
	__asm { push dword ptr [ebp - 0x58] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a38f6e: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push 0xa393a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35310 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { add esp, 0x10 }
	__asm { mov esi, eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a38f98 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00a38f98: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { jb L_00a38fa9 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a38fa9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f86ac[];
extern "C" void fn_004028a0();
extern "C" void fn_00402f60();
extern "C" void fn_00403540();
extern "C" void fn_00495660();
extern "C" void fn_00886a60();
// FUNCTION: ROBLOXSTUDIO 0x00a393a0
extern "C" __declspec(naked) void asm_00a393a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2cec0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jle L_00a393d3 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push 1 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { call dword ptr [edx + 4] }
	__asm { L_00a393d3: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea edi, [esi + 8] }
	__asm { push edi }
	__asm { push dword ptr [esi] }
	__asm { call fn_00886a60 }
	__asm { test al, al }
	__asm { jne L_00a394de }
	__asm { cmp dword ptr [esi], 1 }
	__asm { push ebx }
	__asm { jle L_00a39485 }
	__asm { cmp byte ptr [esi + 0x10], al }
	__asm { jne L_00a39485 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { lea edx, [ebp - 0x3c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00495660 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov edi, dword ptr [ebp - 0x2c] }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { lea edx, [ebp - 0x3c] }
	__asm { cmovae edx, dword ptr [ebp - 0x3c] }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { cmovae ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, edi }
	__asm { cmp ebx, edi }
	__asm { cmovb eax, ebx }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00a394a1 }
	__asm { cmp ebx, edi }
	__asm { jb L_00a394a1 }
	__asm { cmp ebx, edi }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00a394a1 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_004028a0 }
	__asm { L_00a39485: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a394a1: }
	__asm { or dword ptr [g_012f86ac], 0x4000 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [eax], 6 }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_004028a0 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, 0xea7174 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a394de: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { inc dword ptr [esi] }
	__asm { mov dword ptr [ecx], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_0124eac4[];
extern "C" char g_0128dc7c[];
extern "C" void fn_006b98f0();
extern "C" void fn_009004e0();
extern "C" void fn_00a10960();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35150();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a39600
extern "C" __declspec(naked) void asm_00a39600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { cmp eax, 6 }
	__asm { lea ecx, [ebp - 4] }
	__asm { lea edx, [ebp - 8] }
	__asm { cmovge ecx, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp - 8], 6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea esi, [ecx + 1] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp eax, esi }
	__asm { jl L_00a396d5 }
	__asm { push ebx }
	__asm { L_00a39640: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a396c7 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a396c7 }
	__asm { push dword ptr [g_0128dc7c] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push edi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00a396bf }
	__asm { call fn_00a35d10 }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11efcf8 }
	__asm { je L_00a396aa }
	__asm { push eax }
	__asm { mov ecx, 0x11efcf8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a39718 }
	__asm { L_00a396aa: }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { call fn_00a10960 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { or ecx, eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { jmp L_00a396ca }
	__asm { L_00a396bf: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a396c7: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { L_00a396ca: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebp - 8] }
	__asm { jle L_00a39640 }
	__asm { pop ebx }
	__asm { L_00a396d5: }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_009004e0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a396f1 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00a396f1: }
	__asm { push dword ptr [g_0124eac4] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a39718: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push 0xea79ec }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
extern "C" char g_0124eac8[];
extern "C" char g_0128dc7c[];
extern "C" void fn_006b98f0();
extern "C" void fn_009004e0();
extern "C" void fn_00a35060();
extern "C" void fn_00a350c0();
extern "C" void fn_00a35150();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35810();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a360a0();
extern "C" void fn_00a56010();
extern "C" void fn_00a56420();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a39740
extern "C" __declspec(naked) void asm_00a39740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { cmp eax, 6 }
	__asm { lea ecx, [ebp - 4] }
	__asm { lea edx, [ebp - 8] }
	__asm { cmovge ecx, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp - 8], 6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea esi, [ecx + 1] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp eax, esi }
	__asm { jl L_00a3987a }
	__asm { push ebx }
	__asm { L_00a39780: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a360a0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { je L_00a3986c }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a350c0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3986c }
	__asm { push dword ptr [g_0128dc7c] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push -1 }
	__asm { push edi }
	__asm { call fn_00a35810 }
	__asm { add esp, 0x18 }
	__asm { push -3 }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00a39864 }
	__asm { call fn_00a35d10 }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11f0ae0 }
	__asm { je L_00a39817 }
	__asm { push eax }
	__asm { mov ecx, 0x11f0ae0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a39817 }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11efcf8 }
	__asm { je L_00a39817 }
	__asm { push eax }
	__asm { mov ecx, 0x11efcf8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a398bd }
	__asm { L_00a39817: }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11f0ae0 }
	__asm { je L_00a3984f }
	__asm { push eax }
	__asm { mov ecx, 0x11f0ae0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00a3984f }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { call fn_00a56420 }
	__asm { push eax }
	__asm { call fn_00a56010 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { or ecx, eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { jmp L_00a3986f }
	__asm { L_00a3984f: }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { call fn_00a56010 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { or ecx, eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { jmp L_00a3986f }
	__asm { L_00a39864: }
	__asm { call fn_00a35d10 }
	__asm { add esp, 8 }
	__asm { L_00a3986c: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { L_00a3986f: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebp - 8] }
	__asm { jle L_00a39780 }
	__asm { pop ebx }
	__asm { L_00a3987a: }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_009004e0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a39896 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00a39896: }
	__asm { push dword ptr [g_0124eac8] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a398bd: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push 0xea7a68 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

// (empty)

// (empty)

// (empty)
