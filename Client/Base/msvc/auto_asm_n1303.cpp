// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_01310e0d[];
extern "C" void fn_0079ae50();
extern "C" void fn_00831da0();
extern "C" void fn_00b73d50();
// FUNCTION: ROBLOXSTUDIO 0x00c48be0
extern "C" __declspec(naked) void asm_00c48be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48ed0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { test eax, eax }
	__asm { je L_00c48c5f }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00c48c48 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00c48c5f }
	__asm { L_00c48c48: }
	__asm { mov ecx, dword ptr [ebp + 0x30] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x38] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c48c5f: }
	__asm { movzx eax, byte ptr [g_01310e0d] }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov ebx, esp }
	__asm { push eax }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00c48ccf }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00c48cb8 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00c48ccf }
	__asm { L_00c48cb8: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c48ccf: }
	__asm { push 0x841960 }
	__asm { push ebx }
	__asm { call fn_00b73d50 }
	__asm { add esp, 0x2c }
	__asm { mov ecx, esi }
	__asm { call fn_00831da0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00c48cf4 }
	__asm { add esi, -0x1c }
	__asm { jmp L_00c48cf6 }
	__asm { L_00c48cf4: }
	__asm { xor esi, esi }
	__asm { L_00c48cf6: }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0079ae50 }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c48d41 }
	__asm { test al, 1 }
	__asm { jne L_00c48d3a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c48d3a }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c48d3a: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_00c48d41: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00c48d68 }
	__asm { test al, 1 }
	__asm { jne L_00c48d68 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c48d68 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c48d68: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" char g_01310e0d[];
extern "C" void fn_00831da0();
extern "C" void fn_00b73d50();
// FUNCTION: ROBLOXSTUDIO 0x00c48d80
extern "C" __declspec(naked) void asm_00c48d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd516c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { test eax, eax }
	__asm { je L_00c48dff }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00c48de8 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00c48dff }
	__asm { L_00c48de8: }
	__asm { mov ecx, dword ptr [ebp + 0x30] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x38] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c48dff: }
	__asm { movzx eax, byte ptr [g_01310e0d] }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov ebx, esp }
	__asm { push eax }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00c48e6c }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00c48e55 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00c48e6c }
	__asm { L_00c48e55: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c48e6c: }
	__asm { push 0x841960 }
	__asm { push ebx }
	__asm { call fn_00b73d50 }
	__asm { add esp, 0x2c }
	__asm { mov ecx, edi }
	__asm { call fn_00831da0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00c48e8d }
	__asm { add eax, -0x1c }
	__asm { jmp L_00c48e8f }
	__asm { L_00c48e8d: }
	__asm { xor eax, eax }
	__asm { L_00c48e8f: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { add ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c48ec8 }
	__asm { test al, 1 }
	__asm { jne L_00c48ec1 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c48ec1 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c48ec1: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_00c48ec8: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00c48eef }
	__asm { test al, 1 }
	__asm { jne L_00c48eef }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c48eef }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c48eef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" char g_01310e0d[];
extern "C" void fn_0079ae50();
extern "C" void fn_00ab0560();
extern "C" void fn_00b73d50();
// FUNCTION: ROBLOXSTUDIO 0x00c48f10
extern "C" __declspec(naked) void asm_00c48f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd48ed0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { test eax, eax }
	__asm { je L_00c48f8f }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00c48f78 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00c48f8f }
	__asm { L_00c48f78: }
	__asm { mov ecx, dword ptr [ebp + 0x30] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x38] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c48f8f: }
	__asm { movzx eax, byte ptr [g_01310e0d] }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov ebx, esp }
	__asm { push eax }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00c48fff }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00c48fe8 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00c48fff }
	__asm { L_00c48fe8: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c48fff: }
	__asm { push 0xb00be0 }
	__asm { push ebx }
	__asm { call fn_00b73d50 }
	__asm { add esp, 0x2c }
	__asm { mov ecx, esi }
	__asm { call fn_00ab0560 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00c49024 }
	__asm { add esi, -0x1c }
	__asm { jmp L_00c49026 }
	__asm { L_00c49024: }
	__asm { xor esi, esi }
	__asm { L_00c49026: }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0079ae50 }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c49071 }
	__asm { test al, 1 }
	__asm { jne L_00c4906a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c4906a }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c4906a: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_00c49071: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00c49098 }
	__asm { test al, 1 }
	__asm { jne L_00c49098 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c49098 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c49098: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_009cf8f0();
extern "C" void fn_00c97430();
// FUNCTION: ROBLOXSTUDIO 0x00c4a7c0
extern "C" __declspec(naked) void asm_00c4a7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp fn_00c97430 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_009cf8f0 }
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
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00c500b0();
// FUNCTION: ROBLOXSTUDIO 0x00c4af30
extern "C" __declspec(naked) void asm_00c4af30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00c4af98 }
	__asm { test ebx, ebx }
	__asm { jne L_00c4af98 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c4af87 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c4af98 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c4af87: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c4af98: }
	__asm { push 0xc502f0 }
	__asm { push 0x1312108 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c500b0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00c4afd8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00c4b08d }
	__asm { L_00c4afd8: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c4b047 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00c4b047 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c4b036 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c4b047 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c4b036: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c4b047: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c4b05f }
	__asm { add esi, -5 }
	__asm { jmp L_00c4b061 }
	__asm { L_00c4b05f: }
	__asm { xor esi, esi }
	__asm { L_00c4b061: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4b08d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4b08d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c4b08d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00c4b0ca }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c4b0ca }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c4b0ca }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c4b0ca }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c4b0ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
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
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00c50140();
// FUNCTION: ROBLOXSTUDIO 0x00c4b0e0
extern "C" __declspec(naked) void asm_00c4b0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00c4b148 }
	__asm { test ebx, ebx }
	__asm { jne L_00c4b148 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c4b137 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c4b148 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c4b137: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c4b148: }
	__asm { push 0xc50300 }
	__asm { push 0x1312128 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c50140 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00c4b188 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00c4b23d }
	__asm { L_00c4b188: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c4b1f7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00c4b1f7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c4b1e6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c4b1f7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c4b1e6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c4b1f7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c4b20f }
	__asm { add esi, -5 }
	__asm { jmp L_00c4b211 }
	__asm { L_00c4b20f: }
	__asm { xor esi, esi }
	__asm { L_00c4b211: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4b23d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4b23d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c4b23d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00c4b27a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c4b27a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c4b27a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c4b27a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c4b27a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_004225e0();
extern "C" void fn_00427010();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_008394b0();
extern "C" void fn_00af2680();
// FUNCTION: ROBLOXSTUDIO 0x00c4b620
extern "C" __declspec(naked) void asm_00c4b620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd395b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00c4b6d0 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00c4b664 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00c4b666 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00c4b666 }
	__asm { L_00c4b664: }
	__asm { mov eax, edi }
	__asm { L_00c4b666: }
	__asm { test eax, eax }
	__asm { je L_00c4b6d0 }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00c4b6d0 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00c4b6d0 }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00c4b6d0 }
	__asm { call fn_008394b0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00c4b6d0 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { call fn_004225e0 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004225e0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [edi + 0xcc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00af2680 }
	__asm { jmp L_00c4b6fa }
	__asm { L_00c4b6d0: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0x17 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xef1f3c }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [ebp + 0x2c] }
	__asm { call fn_00427010 }
	__asm { L_00c4b6fa: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c4b725 }
	__asm { test al, 1 }
	__asm { jne L_00c4b71e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c4b71e }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c4b71e: }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { L_00c4b725: }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00c4b74c }
	__asm { test al, 1 }
	__asm { jne L_00c4b74c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c4b74c }
	__asm { lea ecx, [ebp + 0x34] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c4b74c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
	__asm { int 3 }
	__asm { mov al, byte ptr [ecx + 0x1e0] }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00c35c70();
// FUNCTION: ROBLOXSTUDIO 0x00c4e470
extern "C" __declspec(naked) void asm_00c4e470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00c4e4a8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00c4e4a8: }
	__asm { push 0xc36230 }
	__asm { push 0x1310d28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c35c70 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00c4e4e4 }
	__asm { push ebx }
	__asm { jmp L_00c4e4e8 }
	__asm { L_00c4e4e4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00c4e4e8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00c4e52a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c4e52a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c4e52a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c4e52a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c4e52a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c4e56d }
	__asm { add esi, 5 }
	__asm { je L_00c4e53f }
	__asm { add esi, -5 }
	__asm { jmp L_00c4e541 }
	__asm { L_00c4e53f: }
	__asm { xor esi, esi }
	__asm { L_00c4e541: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4e56d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4e56d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c4e56d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00c35d00();
// FUNCTION: ROBLOXSTUDIO 0x00c4e590
extern "C" __declspec(naked) void asm_00c4e590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00c4e5c8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00c4e5c8: }
	__asm { push 0xc36240 }
	__asm { push 0x1310d30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c35d00 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00c4e604 }
	__asm { push ebx }
	__asm { jmp L_00c4e608 }
	__asm { L_00c4e604: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00c4e608: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00c4e64a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c4e64a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c4e64a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c4e64a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c4e64a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c4e68d }
	__asm { add esi, 5 }
	__asm { je L_00c4e65f }
	__asm { add esi, -5 }
	__asm { jmp L_00c4e661 }
	__asm { L_00c4e65f: }
	__asm { xor esi, esi }
	__asm { L_00c4e661: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4e68d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4e68d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c4e68d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00c500b0();
// FUNCTION: ROBLOXSTUDIO 0x00c4e6b0
extern "C" __declspec(naked) void asm_00c4e6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00c4e6e8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00c4e6e8: }
	__asm { push 0xc502f0 }
	__asm { push 0x1312108 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c500b0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00c4e724 }
	__asm { push ebx }
	__asm { jmp L_00c4e728 }
	__asm { L_00c4e724: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00c4e728: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00c4e76a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c4e76a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c4e76a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c4e76a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c4e76a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c4e7ad }
	__asm { add esi, 5 }
	__asm { je L_00c4e77f }
	__asm { add esi, -5 }
	__asm { jmp L_00c4e781 }
	__asm { L_00c4e77f: }
	__asm { xor esi, esi }
	__asm { L_00c4e781: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4e7ad }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4e7ad }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c4e7ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
