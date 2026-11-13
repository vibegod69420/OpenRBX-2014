// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_007a1040();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00797c50
extern "C" __declspec(naked) void asm_00797c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d791 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a1040 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00797cd0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00797cca }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebx + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00797cca: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00797cd0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x00797f00
extern "C" __declspec(naked) void asm_00797f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, edx }
	__asm { je L_00797f6e }
	__asm { push ebx }
	__asm { push esi }
	__asm { L_00797f13: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov bl, byte ptr [edi] }
	__asm { cmp eax, 8 }
	__asm { lea esi, [ebp + 0x10] }
	__asm { cmova esi, ecx }
	__asm { add eax, esi }
	__asm { mov ecx, eax }
	__asm { sub ecx, esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { jle L_00797f59 }
	__asm { mov edi, edi }
	__asm { L_00797f30: }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edx, eax }
	__asm { sar edx, 1 }
	__asm { cmp byte ptr [edx + esi], bl }
	__asm { lea eax, [edx + esi] }
	__asm { jge L_00797f4d }
	__asm { lea esi, [eax + 1] }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edx }
	__asm { add ecx, eax }
	__asm { jmp L_00797f4f }
	__asm { L_00797f4d: }
	__asm { mov ecx, edx }
	__asm { L_00797f4f: }
	__asm { test ecx, ecx }
	__asm { jg L_00797f30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00797f59: }
	__asm { cmp esi, eax }
	__asm { je L_00797f61 }
	__asm { cmp bl, byte ptr [esi] }
	__asm { jge L_00797f69 }
	__asm { L_00797f61: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { inc edi }
	__asm { cmp edi, edx }
	__asm { jne L_00797f13 }
	__asm { L_00797f69: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00797f6e: }
	__asm { cmp dword ptr [ebp + 0x18], 8 }
	__asm { jbe L_00797f81 }
	__asm { test ecx, ecx }
	__asm { je L_00797f81 }
	__asm { push ecx }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00797f81: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797d80();
extern "C" void fn_007a13c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00798640
extern "C" __declspec(naked) void asm_00798640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d800 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00798673: }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { je L_007986e4 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00797d80 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, 0x71c71c6 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_007986a6 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_007986a6: }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_00798673 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_007986db }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { L_007986c7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_007a13c0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_007986c7 }
	__asm { L_007986db: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_007986e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00798790
extern "C" __declspec(naked) void asm_00798790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub eax, esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ebx, eax }
	__asm { sar ebx, 1 }
	__asm { test ebx, ebx }
	__asm { jle L_00798821 }
	__asm { lea eax, [ebx*2 + 2] }
	__asm { push edi }
	__asm { L_007987b3: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ch, byte ptr [ebx + esi - 1] }
	__asm { dec ebx }
	__asm { sub eax, 2 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov edi, ebx }
	__asm { cmp eax, edx }
	__asm { jge L_007987e4 }
	__asm { L_007987c7: }
	__asm { mov cl, byte ptr [eax + esi] }
	__asm { cmp cl, byte ptr [esi + eax - 1] }
	__asm { jge L_007987d1 }
	__asm { dec eax }
	__asm { L_007987d1: }
	__asm { mov cl, byte ptr [eax + esi] }
	__asm { mov byte ptr [edi + esi], cl }
	__asm { mov edi, eax }
	__asm { lea eax, [eax*2 + 2] }
	__asm { cmp eax, edx }
	__asm { jl L_007987c7 }
	__asm { L_007987e4: }
	__asm { cmp eax, edx }
	__asm { jne L_007987f2 }
	__asm { mov al, byte ptr [edx + esi - 1] }
	__asm { mov byte ptr [edi + esi], al }
	__asm { lea edi, [edx - 1] }
	__asm { L_007987f2: }
	__asm { lea eax, [edi - 1] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { cmp ebx, edi }
	__asm { jge L_00798816 }
	__asm { mov edi, edi }
	__asm { L_00798800: }
	__asm { mov cl, byte ptr [eax + esi] }
	__asm { cmp cl, ch }
	__asm { jge L_00798816 }
	__asm { mov byte ptr [edi + esi], cl }
	__asm { mov edi, eax }
	__asm { dec eax }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { cmp ebx, edi }
	__asm { jl L_00798800 }
	__asm { L_00798816: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [edi + esi], ch }
	__asm { test ebx, ebx }
	__asm { jg L_007987b3 }
	__asm { pop edi }
	__asm { L_00798821: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00798cf0
extern "C" __declspec(naked) void asm_00798cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d849 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00798d58 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { cmp eax, 8 }
	__asm { ja L_00798d37 }
	__asm { mov eax, esi }
	__asm { lea ecx, [ebp + 8] }
	__asm { jmp L_00798d45 }
	__asm { L_00798d37: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00798d45: }
	__asm { push dword ptr [esi + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00798d58: }
	__asm { cmp dword ptr [ebp + 0x10], 8 }
	__asm { pop esi }
	__asm { jbe L_00798d6f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00798d6f }
	__asm { push eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00798d6f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00b25b30();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00798e60
extern "C" __declspec(naked) void asm_00798e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d8a3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00798ebf }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00b25b30 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { pop esi }
	__asm { jmp L_00798ec1 }
	__asm { L_00798ebf: }
	__asm { xor edi, edi }
	__asm { L_00798ec1: }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_00798eee }
	__asm { test al, 1 }
	__asm { jne L_00798eee }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00798eee }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00798eee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00798f00
extern "C" __declspec(naked) void asm_00798f00()
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
	__asm { push 0x24 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00798f6f }
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
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { pop esi }
	__asm { jmp L_00798f71 }
	__asm { L_00798f6f: }
	__asm { xor edi, edi }
	__asm { L_00798f71: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { jb L_00798f88 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00798f88: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00403540();
extern "C" void fn_00900990();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00798fa0
extern "C" __declspec(naked) void asm_00798fa0()
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
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { push -1 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
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
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov esi, 0xe54a9c }
	__asm { mov ecx, esi }
	__asm { call fn_00900990 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { jb L_00799021 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00799021: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00798e60();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00799490
extern "C" __declspec(naked) void asm_00799490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d8e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00799503 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x48] }
	__asm { sub esp, 0x40 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b25b30 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_00798e60 }
	__asm { mov bl, 1 }
	__asm { jmp L_00799505 }
	__asm { L_00799503: }
	__asm { xor bl, bl }
	__asm { L_00799505: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0079952c }
	__asm { test al, 1 }
	__asm { jne L_0079952c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0079952c }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079952c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_00799490();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00799550
extern "C" __declspec(naked) void asm_00799550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d8e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x48] }
	__asm { sub esp, 0x40 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b25b30 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_00799490 }
	__asm { mov bl, al }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007995d9 }
	__asm { test al, 1 }
	__asm { jne L_007995d9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007995d9 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007995d9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00799550();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x007995f0
extern "C" __declspec(naked) void asm_007995f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d8e8 }
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
	__asm { sub esp, 0x40 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b25b30 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov esi, 0xe54b5c }
	__asm { mov ecx, esi }
	__asm { call fn_00799550 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { cmove esi, ecx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0079967e }
	__asm { test al, 1 }
	__asm { jne L_0079967e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0079967e }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079967e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_00799550();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00799690
extern "C" __declspec(naked) void asm_00799690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d8e8 }
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
	__asm { sub esp, 0x40 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b25b30 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov esi, 0xe54b54 }
	__asm { mov ecx, esi }
	__asm { call fn_00799550 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { cmove esi, ecx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0079971e }
	__asm { test al, 1 }
	__asm { jne L_0079971e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0079971e }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079971e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_00799550();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00799730
extern "C" __declspec(naked) void asm_00799730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d8e8 }
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
	__asm { sub esp, 0x40 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b25b30 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov esi, 0xe54b64 }
	__asm { mov ecx, esi }
	__asm { call fn_00799550 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { cmove esi, ecx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007997be }
	__asm { test al, 1 }
	__asm { jne L_007997be }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007997be }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007997be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_00403540();
extern "C" void fn_0040c260();
extern "C" void fn_00798f00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007997d0
extern "C" __declspec(naked) void asm_007997d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d638 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00799852 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { sub esp, 0x24 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { call fn_00798f00 }
	__asm { mov bl, 1 }
	__asm { jmp L_00799854 }
	__asm { L_00799852: }
	__asm { xor bl, bl }
	__asm { L_00799854: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00799865 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00799865: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00403540();
extern "C" void fn_007997d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00799880
extern "C" __declspec(naked) void asm_00799880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d638 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { sub esp, 0x24 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { call fn_007997d0 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_00799902 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00799902: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_00799880();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00799920
extern "C" __declspec(naked) void asm_00799920()
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
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x24 }
	__asm { mov edx, esp }
	__asm { push -1 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
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
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov esi, 0xe54ae4 }
	__asm { mov ecx, esi }
	__asm { call fn_00799880 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { jb L_007999a7 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007999a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00403540();
extern "C" void fn_00900990();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007999c0
extern "C" __declspec(naked) void asm_007999c0()
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
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { push -1 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
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
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov esi, 0xe54aec }
	__asm { mov ecx, esi }
	__asm { call fn_00900990 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { jb L_00799a41 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00799a41: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00403540();
extern "C" void fn_0079e240();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00799ac0
extern "C" __declspec(naked) void asm_00799ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d9d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_0079e240 }
	__asm { mov edi, eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x18], 0xf }
	__asm { mov dword ptr [ebx + 0x14], 0 }
	__asm { push edi }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebx + 4], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebx + 0x1c], eax }
	__asm { jb L_00799b66 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00799b66: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { jb L_00799b89 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00799b89: }
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

extern "C" void fn_00403540();
extern "C" void fn_0079e610();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00799e10
extern "C" __declspec(naked) void asm_00799e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d9a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_0079e610 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00799ea6 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00799ea6: }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { mov dword ptr [edi + 0x18], 0xf }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [edi + 4], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { jb L_00799f03 }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00799f03: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 0x34], 0xf }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov byte ptr [ebp - 0x48], 0 }
	__asm { jb L_00799f26 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00799f26: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0079e240();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00799f40
extern "C" __declspec(naked) void asm_00799f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d9d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_0079e240 }
	__asm { mov edi, eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x18], 0xf }
	__asm { mov dword ptr [ebx + 0x14], 0 }
	__asm { push edi }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebx + 4], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebx + 0x1c], eax }
	__asm { jb L_00799fe1 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00799fe1: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { jb L_0079a004 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079a004: }
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

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
// FUNCTION: ROBLOXSTUDIO 0x0079a0a0
extern "C" __declspec(naked) void asm_0079a0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0079a0eb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0079a0eb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0079a13e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe39c70 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe54648 }
	__asm { mov dword ptr [esi + 8], 0xe54658 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe54660 }
	__asm { mov dword ptr [esi + 8], 0xe54670 }
	__asm { jmp L_0079a140 }
	__asm { L_0079a13e: }
	__asm { xor esi, esi }
	__asm { L_0079a140: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0079a15d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0079a15d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_007a5d00();
// FUNCTION: ROBLOXSTUDIO 0x0079a180
extern "C" __declspec(naked) void asm_0079a180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0079a1cb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0079a1cb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0079a21e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe5456c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe54574 }
	__asm { mov dword ptr [esi + 8], 0xe54584 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe5458c }
	__asm { mov dword ptr [esi + 8], 0xe5459c }
	__asm { jmp L_0079a220 }
	__asm { L_0079a21e: }
	__asm { xor esi, esi }
	__asm { L_0079a220: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_007a5d00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0079a23d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0079a23d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_007a5d00();
// FUNCTION: ROBLOXSTUDIO 0x0079a260
extern "C" __declspec(naked) void asm_0079a260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0079a2ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0079a2ab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0079a2fe }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe5456c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe54618 }
	__asm { mov dword ptr [esi + 8], 0xe54628 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe54630 }
	__asm { mov dword ptr [esi + 8], 0xe54640 }
	__asm { jmp L_0079a300 }
	__asm { L_0079a2fe: }
	__asm { xor esi, esi }
	__asm { L_0079a300: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_007a5d00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0079a31d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0079a31d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_004cab00();
// FUNCTION: ROBLOXSTUDIO 0x0079a340
extern "C" __declspec(naked) void asm_0079a340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0079a38b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0079a38b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0079a3de }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3a38c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe54678 }
	__asm { mov dword ptr [esi + 8], 0xe54688 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe54690 }
	__asm { mov dword ptr [esi + 8], 0xe546a0 }
	__asm { jmp L_0079a3e0 }
	__asm { L_0079a3de: }
	__asm { xor esi, esi }
	__asm { L_0079a3e0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004cab00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0079a3fd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0079a3fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043c610();
extern "C" void fn_007956f0();
// FUNCTION: ROBLOXSTUDIO 0x0079a420
extern "C" __declspec(naked) void asm_0079a420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0079a46b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0079a46b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0079a494 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_007956f0 }
	__asm { mov dword ptr [esi], 0xe546f0 }
	__asm { mov dword ptr [esi + 8], 0xe54700 }
	__asm { jmp L_0079a496 }
	__asm { L_0079a494: }
	__asm { xor esi, esi }
	__asm { L_0079a496: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0043c610 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0079a4ba }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0079a4ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
extern "C" void fn_007957b0();
// FUNCTION: ROBLOXSTUDIO 0x0079a4d0
extern "C" __declspec(naked) void asm_0079a4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0079a51b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0079a51b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0079a544 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_007957b0 }
	__asm { mov dword ptr [esi], 0xe546c0 }
	__asm { mov dword ptr [esi + 8], 0xe546d0 }
	__asm { jmp L_0079a546 }
	__asm { L_0079a544: }
	__asm { xor esi, esi }
	__asm { L_0079a546: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0079a56a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0079a56a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043b9c0();
extern "C" void fn_00795870();
// FUNCTION: ROBLOXSTUDIO 0x0079a580
extern "C" __declspec(naked) void asm_0079a580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0079a5cb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0079a5cb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0079a5f4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00795870 }
	__asm { mov dword ptr [esi], 0xe54720 }
	__asm { mov dword ptr [esi + 8], 0xe54730 }
	__asm { jmp L_0079a5f6 }
	__asm { L_0079a5f4: }
	__asm { xor esi, esi }
	__asm { L_0079a5f6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0043b9c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0079a61a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0079a61a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040e0a0();
extern "C" void fn_0043e1f0();
extern "C" void fn_0079e920();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079a630
extern "C" __declspec(naked) void asm_0079a630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x84 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0079a681 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_0079e920 }
	__asm { mov esi, eax }
	__asm { jmp L_0079a683 }
	__asm { L_0079a681: }
	__asm { xor esi, esi }
	__asm { L_0079a683: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0043e1f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0079a6b4 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0079a6b4 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0079a6b4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0040e0a0();
extern "C" void fn_0043e280();
extern "C" void fn_0079ecc0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079a770
extern "C" __declspec(naked) void asm_0079a770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f50e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x7c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0079a7e4 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_0079ecc0 }
	__asm { mov esi, eax }
	__asm { jmp L_0079a7e6 }
	__asm { L_0079a7e4: }
	__asm { xor esi, esi }
	__asm { L_0079a7e6: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0043e280 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0079a811 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0079a811 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0079a811: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_0079a822 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079a822: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040e0a0();
extern "C" void fn_0043e030();
extern "C" void fn_0079ee20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079a840
extern "C" __declspec(naked) void asm_0079a840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x170 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0079a891 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_0079ee20 }
	__asm { mov esi, eax }
	__asm { jmp L_0079a893 }
	__asm { L_0079a891: }
	__asm { xor esi, esi }
	__asm { L_0079a893: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0043e030 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0079a8c4 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0079a8c4 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0079a8c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00797f00();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x0079aa00
extern "C" __declspec(naked) void asm_0079aa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1da08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea edi, [esi + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp eax, 8 }
	__asm { ja L_0079aa3f }
	__asm { lea eax, [ebp + 0x14] }
	__asm { jmp L_0079aa4f }
	__asm { L_0079aa3f: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 4 }
	__asm { L_0079aa4f: }
	__asm { push dword ptr [edi] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00797f00 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp + 0x1c], 8 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [esi], eax }
	__asm { jbe L_0079aa87 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_0079aa87 }
	__asm { push eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_0079aa87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_006bc920();
extern "C" void fn_007a6350();
extern "C" void fn_008c03b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0079aaa0
extern "C" __declspec(naked) void asm_0079aaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1da30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { test edi, edi }
	__asm { je L_0079ab85 }
	__asm { push esi }
	__asm { L_0079aac6: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007a6350 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0079aae3 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0079aae5 }
	__asm { L_0079aae3: }
	__asm { xor eax, eax }
	__asm { L_0079aae5: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0079ab65 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0079ab46 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jg L_0079ab46 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0079ab35 }
	__asm { push 0x9b }
	__asm { push 0x10027e0 }
	__asm { push 0x1007e84 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0079ab46 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0079ab35: }
	__asm { movzx eax, al }
	__asm { push 0x1007e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0079ab46: }
	__asm { mov ecx, esi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0079ab65 }
	__asm { test esi, esi }
	__asm { je L_0079ab65 }
	__asm { mov ecx, esi }
	__asm { call fn_008c03b0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079ab65: }
	__asm { push 0x12e171c }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006bc920 }
	__asm { mov edi, dword ptr [edi + 0x10] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { jne L_0079aac6 }
	__asm { pop esi }
	__asm { L_0079ab85: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_006bc920();
extern "C" void fn_007a6350();
extern "C" void fn_008c03b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0079aba0
extern "C" __declspec(naked) void asm_0079aba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1da30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { test edi, edi }
	__asm { je L_0079ac82 }
	__asm { push esi }
	__asm { L_0079abc6: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007a6350 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0079abe3 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0079abe5 }
	__asm { L_0079abe3: }
	__asm { xor eax, eax }
	__asm { L_0079abe5: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0079ac62 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0079ac43 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jg L_0079ac43 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0079ac32 }
	__asm { push 0x9b }
	__asm { push 0x10027e0 }
	__asm { push 0x1007e84 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0079ac43 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0079ac32: }
	__asm { movzx eax, al }
	__asm { push 0x1007e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0079ac43: }
	__asm { mov ecx, esi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0079ac62 }
	__asm { test esi, esi }
	__asm { je L_0079ac62 }
	__asm { mov ecx, esi }
	__asm { call fn_008c03b0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079ac62: }
	__asm { push 0x12e171c }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006bc920 }
	__asm { mov edi, dword ptr [edi + 0x10] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { jne L_0079abc6 }
	__asm { pop esi }
	__asm { L_0079ac82: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d1960();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0079ae50
extern "C" __declspec(naked) void asm_0079ae50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 1 }
	__asm { jb L_0079af1b }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0079aea3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0079aea3: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0079af01 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d1960 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0079aef0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0079aef0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0079af01: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0079af1b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079af1b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0079af35 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0079af35: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d1960();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0079af60
extern "C" __declspec(naked) void asm_0079af60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 3 }
	__asm { jb L_0079b02b }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push ecx }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0079afb3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0079afb3: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0079b011 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d1960 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0079b000 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0079b000: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0079b011: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0079b02b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079b02b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0079b045 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0079b045: }
	__asm { push 3 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10500[];
extern "C" void fn_00798950();
extern "C" void fn_00cf64a0();
// FUNCTION: ROBLOXSTUDIO 0x0079b560
extern "C" __declspec(naked) void asm_0079b560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [ecx + 1] }
	__asm { L_0079b576: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0079b576 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sub ecx, esi }
	__asm { mov dword ptr [edi], 0 }
	__asm { lea ebx, [ecx + edx] }
	__asm { sub ebx, edx }
	__asm { mov dword ptr [edi + 8], ebx }
	__asm { cmp ebx, 8 }
	__asm { ja L_0079b599 }
	__asm { mov esi, edi }
	__asm { jmp L_0079b5a9 }
	__asm { L_0079b599: }
	__asm { push ebx }
	__asm { call fn_00cf64a0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], esi }
	__asm { L_0079b5a9: }
	__asm { push ebx }
	__asm { push edx }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { add edx, esi }
	__asm { mov ecx, edx }
	__asm { sub ecx, esi }
	__asm { push ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_00798950 }
	__asm { add esp, 0x18 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079b5d0();
extern "C" void fn_0079be80();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x0079bdd0
extern "C" __declspec(naked) void asm_0079bdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1db98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { sub esp, 0x10 }
	__asm { mov ebx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { lea edi, [esi + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp eax, 8 }
	__asm { ja L_0079be18 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { jmp L_0079be28 }
	__asm { L_0079be18: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { L_0079be28: }
	__asm { push dword ptr [edi] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { push ebx }
	__asm { call fn_0079be80 }
	__asm { add esp, 0x14 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0079b5d0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp + 0x18], 8 }
	__asm { mov esi, eax }
	__asm { jbe L_0079be63 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0079be63 }
	__asm { push eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_0079be63: }
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

extern "C" void fn_0079de50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0079d2b0
extern "C" __declspec(naked) void asm_0079d2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52aeb }
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
	__asm { call fn_0079de50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe52cd8 }
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
	__asm { call fn_007d5710 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5710 }
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
	__asm { je L_0079d35e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079d35e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_0131a54c[];
extern "C" char g_0131a550[];
extern "C" char g_0131a554[];
extern "C" char g_0131a558[];
extern "C" void fn_0079e070();
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00824f80();
extern "C" void fn_00825670();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079d380
extern "C" __declspec(naked) void asm_0079d380()
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
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_0079e070 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe52ea8 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0079d3e1 }
	__asm { mov dword ptr [eax], esi }
	__asm { jmp L_0079d3e3 }
	__asm { L_0079d3e1: }
	__asm { xor eax, eax }
	__asm { L_0079d3e3: }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_0131a54c] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x4c], esi }
	__asm { test al, 1 }
	__asm { jne L_0079d438 }
	__asm { or eax, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], eax }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0079d438: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0x131a550 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00824f80 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_0079d487 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079d487: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_0079e070();
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0079d4a0
extern "C" __declspec(naked) void asm_0079d4a0()
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
	__asm { call fn_0079e070 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe52df0 }
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
	__asm { call fn_007d5710 }
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
	__asm { je L_0079d54e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079d54e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_0079e070();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0079d570
extern "C" __declspec(naked) void asm_0079d570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a7ab }
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
	__asm { call fn_0079e070 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe52e30 }
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
	__asm { call fn_007d5710 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
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
	__asm { je L_0079d61e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079d61e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_0079e070();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008250d0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0079d640
extern "C" __declspec(naked) void asm_0079d640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52aeb }
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
	__asm { call fn_0079e070 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe52e60 }
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
	__asm { call fn_008250d0 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5710 }
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
	__asm { je L_0079d6ee }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079d6ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_0079e070();
extern "C" void fn_00825140();
extern "C" void fn_00be76a0();
// FUNCTION: ROBLOXSTUDIO 0x0079d710
extern "C" __declspec(naked) void asm_0079d710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37536 }
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
	__asm { call fn_0079e070 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe52f14 }
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
	__asm { call fn_00be76a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_0131a54c[];
extern "C" char g_0131a550[];
extern "C" char g_0131a554[];
extern "C" char g_0131a558[];
extern "C" void fn_0079e070();
extern "C" void fn_007a2770();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079d7c0
extern "C" __declspec(naked) void asm_0079d7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1de69 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_0079e070 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe52ef0 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { push 4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf661e }
	__asm { mov ebx, dword ptr [ebp + 0x20] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0079d832 }
	__asm { mov dword ptr [eax], ebx }
	__asm { jmp L_0079d834 }
	__asm { L_0079d832: }
	__asm { xor eax, eax }
	__asm { L_0079d834: }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0079d85a }
	__asm { mov dword ptr [eax], ebx }
	__asm { L_0079d85a: }
	__asm { mov eax, dword ptr [g_0131a54c] }
	__asm { test al, 1 }
	__asm { jne L_0079d896 }
	__asm { or eax, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], eax }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0079d896: }
	__asm { mov dword ptr [esi + 4], 0x131a550 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007a2770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_0079dcf0();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
// FUNCTION: ROBLOXSTUDIO 0x0079da80
extern "C" __declspec(naked) void asm_0079da80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0079dcf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe52da4 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_0079db12 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0079db12: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_0079db35 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079db35: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_0079dda0();
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_008251b0();
// FUNCTION: ROBLOXSTUDIO 0x0079db50
extern "C" __declspec(naked) void asm_0079db50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0079dda0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe53060 }
	__asm { call fn_007d5390 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_0079dbe2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0079dbe2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_0079dc05 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079dc05: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_0079dda0();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
// FUNCTION: ROBLOXSTUDIO 0x0079dc20
extern "C" __declspec(naked) void asm_0079dc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0079dda0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe530c0 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_0079dcb2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0079dcb2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_0079dcd5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079dcd5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e1864[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0079de50
extern "C" __declspec(naked) void asm_0079de50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1df16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e1864] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0079deca }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e1864], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5221c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e1738 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde22e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0079deca: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e1738 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe52ccc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0079df42 }
	__asm { push 0x11e6860 }
	__asm { mov ecx, 0x11e6860 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0079df42 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0079df2d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0079df42 }
	__asm { L_0079df2d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0079df42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b004[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0079df60
extern "C" __declspec(naked) void asm_0079df60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1df36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131b004] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0079dfda }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b004], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe52250 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131aed8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc630 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0079dfda: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131aed8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe53180 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0079e052 }
	__asm { push 0x12c2d74 }
	__asm { mov ecx, 0x12c2d74 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0079e052 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0079e03d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0079e052 }
	__asm { L_0079e03d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0079e052: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b144[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0079e070
extern "C" __declspec(naked) void asm_0079e070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1df56 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131b144] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0079e0ea }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b144], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5222c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131b018 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc640 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0079e0ea: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131b018 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe52de4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0079e162 }
	__asm { push 0x12c2f58 }
	__asm { mov ecx, 0x12c2f58 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0079e162 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0079e14d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0079e162 }
	__asm { L_0079e14d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0079e162: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
extern "C" void fn_0079e3e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0079e240
extern "C" __declspec(naked) void asm_0079e240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_0079e3e0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0079e2c9 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079e2c9: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_0079e2da }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079e2da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_0079e7a0();
// FUNCTION: ROBLOXSTUDIO 0x0079e2f0
extern "C" __declspec(naked) void asm_0079e2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e578 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_0079e36e }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_0079e357 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_0079e36e }
	__asm { L_0079e357: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079e36e: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0079e7a0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0079e3a5 }
	__asm { test al, 1 }
	__asm { jne L_0079e3a5 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0079e3a5 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079e3a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0079e3e0
extern "C" __declspec(naked) void asm_0079e3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1df90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0079e45c }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079e45c: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jb L_0079e473 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079e473: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

// FUNCTION: ROBLOXSTUDIO 0x0079e550
extern "C" __declspec(naked) void asm_0079e550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1e578 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0079e5ca }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { test cl, 1 }
	__asm { je L_0079e5b3 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { jmp L_0079e5ca }
	__asm { L_0079e5b3: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { L_0079e5ca: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0079e5ef }
	__asm { test cl, 1 }
	__asm { jne L_0079e5ef }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_0079e5ef }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079e5ef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00403540();
extern "C" void fn_0079e3e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0079e610
extern "C" __declspec(naked) void asm_0079e610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_0079e3e0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jb L_0079e69f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079e69f: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_0079e6b0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079e6b0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_0079e550();
// FUNCTION: ROBLOXSTUDIO 0x0079e6d0
extern "C" __declspec(naked) void asm_0079e6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e578 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_0079e748 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_0079e731 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_0079e748 }
	__asm { L_0079e731: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079e748: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0079e550 }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0079e785 }
	__asm { test al, 1 }
	__asm { jne L_0079e785 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0079e785 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079e785: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_0079e6d0();
// FUNCTION: ROBLOXSTUDIO 0x0079e7a0
extern "C" __declspec(naked) void asm_0079e7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e578 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_0079e81b }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_0079e804 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_0079e81b }
	__asm { L_0079e804: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079e81b: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0079e6d0 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0079e858 }
	__asm { test al, 1 }
	__asm { jne L_0079e858 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0079e858 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079e858: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00426f50();
extern "C" void fn_00798b60();
extern "C" void fn_007a0fa0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0079e870
extern "C" __declspec(naked) void asm_0079e870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1dfd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_007a0fa0 }
	__asm { test al, al }
	__asm { je L_0079e8ed }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00798b60 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_0079e8ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00426f50 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b98c0();
extern "C" void fn_0079d900();
extern "C" void fn_007b5bb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0079e920
extern "C" __declspec(naked) void asm_0079e920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1dffb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0079d900 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe527c4 }
	__asm { mov dword ptr [esi + 4], 0xe5283c }
	__asm { mov dword ptr [esi + 0x18], 0xe52844 }
	__asm { mov dword ptr [esi + 0x1c], 0xe52850 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { mov dword ptr [esi + 0x68], edi }
	__asm { mov dword ptr [esi + 0x80], 0xf }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi + 0x6c], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_0079e9d1 }
	__asm { test edi, edi }
	__asm { jg L_0079e9d1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0079e9c0 }
	__asm { push 0x88d }
	__asm { push 0xe52b38 }
	__asm { push 0xe53e14 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0079e9d1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0079e9c0: }
	__asm { movzx eax, al }
	__asm { push 0xe53e20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0079e9d1: }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push 0xe53e80 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0079ea00 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079ea00: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e52250[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_004383c0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0079ecc0
extern "C" __declspec(naked) void asm_0079ecc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e0d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004383c0 }
	__asm { lea ecx, [esi + 0x64] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], 0xe52934 }
	__asm { mov dword ptr [esi + 4], 0xe529ac }
	__asm { mov dword ptr [esi + 0x18], 0xe529b4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe529c0 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00e52250], cl }
	__asm { mov eax, 0xd }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe52250 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0079ed81 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079ed81: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_0079ed92 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079ed92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00513a40();
extern "C" void fn_00795dc0();
extern "C" void fn_00797d00();
extern "C" void fn_00798200();
extern "C" void fn_00825140();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0079feb0
extern "C" __declspec(naked) void asm_0079feb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1e49b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xa0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_0079ff06 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_0079fef0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0079fef0: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_0079ffae }
	__asm { L_0079ff06: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0xac], eax }
	__asm { mov dword ptr [ebp - 0xa8], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xac] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00795dc0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797d00 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00798200 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0079ff6b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079ff6b: }
	__asm { cmp dword ptr [ebp - 0x54], 0x10 }
	__asm { jb L_0079ff7c }
	__asm { push dword ptr [ebp - 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079ff7c: }
	__asm { mov eax, dword ptr [ebp - 0xa8] }
	__asm { mov dword ptr [ebp - 0x54], 0xf }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov byte ptr [ebp - 0x68], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0079ffae }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0079ffae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x28] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_007a99c0();
extern "C" void fn_00a4a760();
extern "C" void fn_00c6f2b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0079ffd0
extern "C" __declspec(naked) void asm_0079ffd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1e4b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [edi] }
	__asm { mov esi, dword ptr [ecx] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_0079ffff }
	__asm { inc eax }
	__asm { jmp L_007a0001 }
	__asm { L_0079ffff: }
	__asm { xor eax, eax }
	__asm { L_007a0001: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6f2b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_007a00af }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_007a0024 }
	__asm { inc eax }
	__asm { jmp L_007a0026 }
	__asm { L_007a0024: }
	__asm { xor eax, eax }
	__asm { L_007a0026: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_007a0053 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_007a0053: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov byte ptr [ebp - 0x10], 1 }
	__asm { add ecx, 4 }
	__asm { je L_007a007b }
	__asm { mov dword ptr [ecx], 0 }
	__asm { L_007a007b: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_007a99c0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a4a760 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_007a00ad }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a00ad: }
	__asm { mov eax, esi }
	__asm { L_007a00af: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043db60();
extern "C" void fn_0043dd30();
extern "C" void fn_004fff60();
extern "C" void fn_0079edb0();
extern "C" void fn_007a22d0();
extern "C" void fn_007a9940();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a00d0
extern "C" __declspec(naked) void asm_007a00d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1e4e9 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [edi] }
	__asm { mov esi, dword ptr [ecx] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_007a00ff }
	__asm { inc eax }
	__asm { jmp L_007a0101 }
	__asm { L_007a00ff: }
	__asm { xor eax, eax }
	__asm { L_007a0101: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0043db60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_007a01b3 }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_007a0124 }
	__asm { inc eax }
	__asm { jmp L_007a0126 }
	__asm { L_007a0124: }
	__asm { xor eax, eax }
	__asm { L_007a0126: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007a22d0 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_007a014e }
	__asm { mov dword ptr [ecx], esi }
	__asm { L_007a014e: }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_007a0162 }
	__asm { call fn_0079edb0 }
	__asm { L_007a0162: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x13], 1 }
	__asm { call fn_007a9940 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004fff60 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007a01b1 }
	__asm { cmp byte ptr [ebp - 0x13], 0 }
	__asm { je L_007a01a8 }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_0043dd30 }
	__asm { add esp, 8 }
	__asm { L_007a01a8: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a01b1: }
	__asm { mov eax, edi }
	__asm { L_007a01b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_0090c590();
extern "C" void fn_00a4a760();
extern "C" void fn_00c6f2b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007a01d0
extern "C" __declspec(naked) void asm_007a01d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c408 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [edi] }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov ebx, esi }
	__asm { shr ebx, 3 }
	__asm { inc eax }
	__asm { add ebx, esi }
	__asm { add eax, edi }
	__asm { je L_007a0207 }
	__asm { inc eax }
	__asm { jmp L_007a0209 }
	__asm { L_007a0207: }
	__asm { xor eax, eax }
	__asm { L_007a0209: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00c6f2b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_007a02b7 }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_007a022c }
	__asm { inc eax }
	__asm { jmp L_007a022e }
	__asm { L_007a022c: }
	__asm { xor eax, eax }
	__asm { L_007a022e: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_007a025b }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_007a025b: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov byte ptr [ebp - 0x10], 1 }
	__asm { add ecx, 4 }
	__asm { je L_007a0283 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { L_007a0283: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_0090c590 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a4a760 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_007a02b5 }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a02b5: }
	__asm { mov eax, esi }
	__asm { L_007a02b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x007a0600
extern "C" __declspec(naked) void asm_007a0600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e559 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { test edx, edx }
	__asm { jne L_007a0653 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp + 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_007a0653: }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ecx + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov edi, eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007a069c }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_007a069c: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007a06c0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_007a06c0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x007a06e0
extern "C" __declspec(naked) void asm_007a06e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1e578 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_007a075d }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_007a0746 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_007a075d }
	__asm { L_007a0746: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007a075d: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007a0794 }
	__asm { test al, 1 }
	__asm { jne L_007a0794 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007a0794 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007a0794: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_012de6b9[];
extern "C" void fn_004028a0();
extern "C" void fn_00402ec0();
extern "C" void fn_0040fc60();
extern "C" void fn_00436bf0();
extern "C" void fn_00436ca0();
extern "C" void fn_004c8700();
extern "C" void fn_006b8a90();
extern "C" void fn_007a3ad0();
extern "C" void fn_007a7580();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a0990
extern "C" __declspec(naked) void asm_007a0990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e5f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jne L_007a0a07 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_007a09d3 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a09d3: }
	__asm { mov dword ptr [ebp + 0x20], 0xf }
	__asm { mov dword ptr [ebp + 0x1c], 0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { L_007a09e5: }
	__asm { lea ecx, [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00436ca0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
	__asm { L_007a0a07: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov al, byte ptr [g_012de6b9] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test al, al }
	__asm { je L_007a0a30 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe53ef0 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { mov edi, edi }
	__asm { L_007a0a30: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { L_007a0a37: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007a7580 }
	__asm { test al, al }
	__asm { je L_007a0a7b }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x1c], esp }
	__asm { push eax }
	__asm { call fn_00436bf0 }
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00402ec0 }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007a3ad0 }
	__asm { add esp, 0x2c }
	__asm { jmp L_007a0a37 }
	__asm { L_007a0a7b: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0040fc60 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_004028a0 }
	__asm { jmp L_007a09e5 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_004c8700 }
	__asm { mov eax, 0x7a0aa8 }
	__asm { ret }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { jmp L_007a0a30 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x007a1be0
extern "C" __declspec(naked) void asm_007a1be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5f028 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x1c] }
	__asm { sub esp, 0x44 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007a1c28 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_007a1c28: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x007a1c80
extern "C" __declspec(naked) void asm_007a1c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1e8d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [eax] }
	__asm { mov edi, dword ptr [ebp + 0x1c] }
	__asm { sub esp, 0x44 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007a1ccc }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_007a1ccc: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_008250d0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x007a2770
extern "C" __declspec(naked) void asm_007a2770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4f1cb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_008250d0 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp + 0x9c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x98] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007a2811 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007a2811: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007a2828 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007a2828: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007a2848 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007a2848: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_0043d400();
extern "C" void fn_0057db00();
// FUNCTION: ROBLOXSTUDIO 0x007a33d0
extern "C" __declspec(naked) void asm_007a33d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { jne L_007a33e7 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a33e7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { test edi, edi }
	__asm { je L_007a343b }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_007a343b }
	__asm { L_007a340e: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_007a343b }
	__asm { cmp esi, ebx }
	__asm { jne L_007a3433 }
	__asm { test ecx, ecx }
	__asm { je L_007a342d }
	__asm { lea eax, [ecx - 8] }
	__asm { jmp L_007a342f }
	__asm { L_007a342d: }
	__asm { xor eax, eax }
	__asm { L_007a342f: }
	__asm { cmp ebx, dword ptr [eax] }
	__asm { je L_007a3446 }
	__asm { L_007a3433: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_007a340e }
	__asm { L_007a343b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a3446: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_007a3451 }
	__asm { add eax, -8 }
	__asm { jmp L_007a3453 }
	__asm { L_007a3451: }
	__asm { xor eax, eax }
	__asm { L_007a3453: }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push edi }
	__asm { call fn_0043d400 }
	__asm { mov ecx, dword ptr [ebp - 8] }
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

extern "C" void fn_0043d440();
extern "C" void fn_0057db00();
// FUNCTION: ROBLOXSTUDIO 0x007a3480
extern "C" __declspec(naked) void asm_007a3480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { jne L_007a3497 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a3497: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { test edi, edi }
	__asm { je L_007a34eb }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_007a34eb }
	__asm { L_007a34be: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 0x4c] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_007a34eb }
	__asm { cmp esi, ebx }
	__asm { jne L_007a34e3 }
	__asm { test ecx, ecx }
	__asm { je L_007a34dd }
	__asm { lea eax, [ecx - 0x4c] }
	__asm { jmp L_007a34df }
	__asm { L_007a34dd: }
	__asm { xor eax, eax }
	__asm { L_007a34df: }
	__asm { cmp ebx, dword ptr [eax] }
	__asm { je L_007a34f6 }
	__asm { L_007a34e3: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_007a34be }
	__asm { L_007a34eb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a34f6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_007a3501 }
	__asm { add eax, -0x4c }
	__asm { jmp L_007a3503 }
	__asm { L_007a3501: }
	__asm { xor eax, eax }
	__asm { L_007a3503: }
	__asm { push dword ptr [eax + 0x4c] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push edi }
	__asm { call fn_0043d440 }
	__asm { mov ecx, dword ptr [ebp - 8] }
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

extern "C" void fn_0043d400();
extern "C" void fn_0057db00();
// FUNCTION: ROBLOXSTUDIO 0x007a3530
extern "C" __declspec(naked) void asm_007a3530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { jne L_007a3547 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a3547: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ebx, eax }
	__asm { shr ebx, 3 }
	__asm { add ebx, eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { test edi, edi }
	__asm { je L_007a35a8 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_007a35a8 }
	__asm { L_007a3578: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_007a35a8 }
	__asm { cmp esi, ebx }
	__asm { jne L_007a35a0 }
	__asm { test ecx, ecx }
	__asm { je L_007a3597 }
	__asm { lea eax, [ecx - 8] }
	__asm { jmp L_007a3599 }
	__asm { L_007a3597: }
	__asm { xor eax, eax }
	__asm { L_007a3599: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { cmp edx, dword ptr [eax] }
	__asm { je L_007a35b3 }
	__asm { L_007a35a0: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_007a3578 }
	__asm { L_007a35a8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a35b3: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_007a35be }
	__asm { add eax, -8 }
	__asm { jmp L_007a35c0 }
	__asm { L_007a35be: }
	__asm { xor eax, eax }
	__asm { L_007a35c0: }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { call fn_0043d400 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
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

extern "C" void fn_0078a6b0();
extern "C" void fn_0079af60();
extern "C" void fn_0079b1f0();
extern "C" void fn_007a1c80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a3850
extern "C" __declspec(naked) void asm_007a3850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e990 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x38] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0079af60 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0079b1f0 }
	__asm { mov ebx, eax }
	__asm { push 0 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x2c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_007a38be }
	__asm { add ecx, -0x1c }
	__asm { jmp L_007a38c0 }
	__asm { L_007a38be: }
	__asm { xor ecx, ecx }
	__asm { L_007a38c0: }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push ebx }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_007a1c80 }
	__asm { add esp, 0x1c }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_007a38ed }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a38ed: }
	__asm { mov eax, dword ptr [ebp - 0x64] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007a3919 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007a3919: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00436bf0();
extern "C" void fn_00436ca0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a3ad0
extern "C" __declspec(naked) void asm_007a3ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e9b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_007a3b41 }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { push eax }
	__asm { call fn_00436bf0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007a3b41: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_007a3b52 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a3b52: }
	__asm { lea ecx, [ebp + 0x28] }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00436ca0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0041bea0();
extern "C" void fn_0045a890();
extern "C" void fn_007cd560();
extern "C" void fn_008265f0();
// FUNCTION: ROBLOXSTUDIO 0x007a4030
extern "C" __declspec(naked) void asm_007a4030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_007a40c8 }
	__asm { add edi, 0x1c }
	__asm { je L_007a4098 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041bea0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_007a4098 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_007a4098 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x80] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a4098: }
	__asm { test edi, edi }
	__asm { je L_007a40c8 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0045a890 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_007a40c8 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_007a40c8 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_008265f0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a40c8: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0x14], 0xf }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_0043fa70();
extern "C" void fn_006bc920();
extern "C" void fn_007a6350();
extern "C" void fn_007a8d50();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007a49a0
extern "C" __declspec(naked) void asm_007a49a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1eb19 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { add ecx, 0xe0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_007a6350 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007a4a34 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_007a4a34 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a8d50 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_007a4a10 }
	__asm { push ecx }
	__asm { call fn_0043fa70 }
	__asm { add esp, 4 }
	__asm { L_007a4a10: }
	__asm { push 0x12e171c }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006bc920 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a4a34: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x18], 0xe53cc0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x007a5b40
extern "C" __declspec(naked) void asm_007a5b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { test eax, eax }
	__asm { je L_007a5b53 }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { jne L_007a5be9 }
	__asm { L_007a5b53: }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { jne L_007a5b6b }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax], 2 }
	__asm { sete al }
	__asm { mov byte ptr [ecx + 0xc], al }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007a5b6b: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jne L_007a5b82 }
	__asm { cmp dword ptr [edx], 2 }
	__asm { jne L_007a5b80 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007a5b80: }
	__asm { test eax, eax }
	__asm { L_007a5b82: }
	__asm { jns L_007a5b90 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [edx], 2 }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007a5b90: }
	__asm { mov edx, dword ptr [edx] }
	__asm { cmp edx, 1 }
	__asm { jne L_007a5b9a }
	__asm { dec eax }
	__asm { jmp L_007a5b9f }
	__asm { L_007a5b9a: }
	__asm { test edx, edx }
	__asm { jne L_007a5ba2 }
	__asm { inc eax }
	__asm { L_007a5b9f: }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_007a5ba2: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007a5be9 }
	__asm { cmp dword ptr [ecx + 8], -1 }
	__asm { jge L_007a5be9 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007a5bd8 }
	__asm { push 0x98 }
	__asm { push 0xe52b38 }
	__asm { push 0xe52be8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007a5be9 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007a5bd8: }
	__asm { movzx eax, al }
	__asm { push 0xe52c68 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007a5be9: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043fa70();
extern "C" void fn_006bc920();
extern "C" void fn_007a6350();
// FUNCTION: ROBLOXSTUDIO 0x007a6230
extern "C" __declspec(naked) void asm_007a6230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ed18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { xor edx, edx }
	__asm { add ecx, 0xa0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov esi, dword ptr [ecx + 0x14] }
	__asm { test esi, esi }
	__asm { je L_007a628d }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { sete al }
	__asm { test al, al }
	__asm { jne L_007a628d }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_007a6350 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_007a6282 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_007a6284 }
	__asm { L_007a6282: }
	__asm { xor eax, eax }
	__asm { L_007a6284: }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { jne L_007a628d }
	__asm { mov bl, dl }
	__asm { jmp L_007a628f }
	__asm { L_007a628d: }
	__asm { xor bl, bl }
	__asm { L_007a628f: }
	__asm { test dl, 1 }
	__asm { je L_007a62bf }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007a62ab }
	__asm { push eax }
	__asm { call fn_0043fa70 }
	__asm { add esp, 4 }
	__asm { L_007a62ab: }
	__asm { push 0x12e171c }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006bc920 }
	__asm { add esp, 4 }
	__asm { L_007a62bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { test bl, bl }
	__asm { pop esi }
	__asm { setne al }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x007a6660
extern "C" __declspec(naked) void asm_007a6660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ed61 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { test edi, edi }
	__asm { je L_007a66f0 }
	__asm { cmp edi, 1 }
	__asm { je L_007a66f0 }
	__asm { cmp edi, 2 }
	__asm { jne L_007a66a0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 8], 8 }
	__asm { jbe L_007a6755 }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_007a6748 }
	__asm { L_007a66a0: }
	__asm { cmp edi, 3 }
	__asm { jne L_007a66d0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11e81a8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a66d0: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e81a8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a66f0: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_007a673b }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { cmp eax, 8 }
	__asm { ja L_007a671b }
	__asm { mov eax, esi }
	__asm { mov ecx, ebx }
	__asm { jmp L_007a6728 }
	__asm { L_007a671b: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { add esp, 4 }
	__asm { L_007a6728: }
	__asm { push dword ptr [esi + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_007a673b: }
	__asm { cmp edi, 1 }
	__asm { jne L_007a6755 }
	__asm { cmp dword ptr [ebx + 8], 8 }
	__asm { jbe L_007a6755 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { L_007a6748: }
	__asm { test eax, eax }
	__asm { je L_007a6755 }
	__asm { push eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_007a6755: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0eb8[];
extern "C" void fn_007a2340();
extern "C" void fn_007a3930();
extern "C" void fn_007a3a80();
extern "C" void fn_007a4580();
extern "C" void fn_007a5960();
extern "C" void fn_007abaa0();
extern "C" void fn_00a37ab0();
extern "C" void fn_00c6f2b0();
// FUNCTION: ROBLOXSTUDIO 0x007a82e0
extern "C" __declspec(naked) void asm_007a82e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x128], 0 }
	__asm { jle L_007a8313 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x1032868 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a37ab0 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x128], 0 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007a8313: }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_007a5960 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { test al, al }
	__asm { je L_007a835a }
	__asm { push ebx }
	__asm { push 0xe3aeac }
	__asm { push edi }
	__asm { call fn_00a37ab0 }
	__asm { push edi }
	__asm { call fn_007a4580 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_007a83b5 }
	__asm { mov ecx, dword ptr [g_012e0eb8] }
	__asm { push eax }
	__asm { call fn_007a3a80 }
	__asm { test eax, eax }
	__asm { je L_007a83b5 }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { mov ecx, eax }
	__asm { call fn_007a3930 }
	__asm { jmp L_007a8392 }
	__asm { L_007a835a: }
	__asm { cmp dword ptr [esi + 0x6c], 0 }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { je L_007a83b5 }
	__asm { movzx eax, byte ptr [esi + 0x64] }
	__asm { lea edx, [esi + 0x64] }
	__asm { inc eax }
	__asm { add eax, edx }
	__asm { je L_007a8375 }
	__asm { inc eax }
	__asm { jmp L_007a8377 }
	__asm { L_007a8375: }
	__asm { xor eax, eax }
	__asm { L_007a8377: }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00c6f2b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_007a83b5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { L_007a8392: }
	__asm { test eax, eax }
	__asm { je L_007a83b5 }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007abaa0 }
	__asm { test al, al }
	__asm { je L_007a83b5 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_007a2340 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007a83b5: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043e6e0();
extern "C" void fn_007a1350();
// FUNCTION: ROBLOXSTUDIO 0x007a8760
extern "C" __declspec(naked) void asm_007a8760()
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
	__asm { jae L_007a87d3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_007a87d3 }
	__asm { sub edi, eax }
	__asm { mov eax, 0x88888889 }
	__asm { imul edi }
	__asm { add edx, edi }
	__asm { sar edx, 6 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_007a87b0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_007a1350 }
	__asm { L_007a87b0: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { shl ecx, 4 }
	__asm { sub ecx, edi }
	__asm { lea eax, [eax + ecx*8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007a87fb }
	__asm { push eax }
	__asm { jmp L_007a87f6 }
	__asm { L_007a87d3: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_007a87e1 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_007a1350 }
	__asm { L_007a87e1: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_007a87fb }
	__asm { push edi }
	__asm { L_007a87f6: }
	__asm { call fn_0043e6e0 }
	__asm { L_007a87fb: }
	__asm { add dword ptr [esi + 4], 0x78 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00418980();
extern "C" void fn_00419970();
extern "C" void fn_0041ff40();
extern "C" void fn_00624200();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007a9aa0
extern "C" __declspec(naked) void asm_007a9aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1eff0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, edx }
	__asm { sub ecx, eax }
	__asm { sar ecx, 3 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp ecx, edi }
	__asm { jbe L_007a9afc }
	__asm { lea eax, [eax + edi*8] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0041ff40 }
	__asm { L_007a9ae9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a9afc: }
	__asm { jae L_007a9ae9 }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00419970 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { sar eax, 3 }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00624200 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [esi] }
	__asm { add esp, 0x14 }
	__asm { sar eax, 3 }
	__asm { sub edi, eax }
	__asm { lea eax, [ecx + edi*8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00418980 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e0eb2[];
extern "C" void fn_004226b0();
extern "C" void fn_004cce40();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9e50();
extern "C" void fn_0079a180();
extern "C" void fn_007a1a40();
extern "C" void fn_007ac110();
// FUNCTION: ROBLOXSTUDIO 0x007aa2a0
extern "C" __declspec(naked) void asm_007aa2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd47a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012e0eb2], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { je L_007aa389 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [esi + 0xa0] }
	__asm { je L_007aa389 }
	__asm { cmp dword ptr [esi + 0x9c], 0 }
	__asm { je L_007aa389 }
	__asm { lea ecx, [esi + 0x80] }
	__asm { call fn_006b9e50 }
	__asm { mov dword ptr [esi + 0xa0], edi }
	__asm { test edi, edi }
	__asm { je L_007aa362 }
	__asm { mov ecx, dword ptr [esi + 0x9c] }
	__asm { test ecx, ecx }
	__asm { je L_007aa362 }
	__asm { call fn_004cce40 }
	__asm { test eax, eax }
	__asm { je L_007aa362 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x260] }
	__asm { mov dword ptr [ebp - 0x1c], 0x7a7e50 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_0079a180 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x80] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9b80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007aa362 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_007aa362: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x68] }
	__asm { call fn_007a1a40 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_007aa389 }
	__asm { L_007aa375: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { call fn_007ac110 }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { test esi, esi }
	__asm { je L_007aa389 }
	__asm { add esi, -8 }
	__asm { jne L_007aa375 }
	__asm { L_007aa389: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00436bf0();
extern "C" void fn_00436ca0();
extern "C" void fn_0043db60();
extern "C" void fn_008c00e0();
extern "C" void fn_008c0570();
extern "C" void fn_008c0750();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007aa590
extern "C" __declspec(naked) void asm_007aa590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1f130 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { movzx eax, byte ptr [edi + 0x134] }
	__asm { lea ecx, [edi + 0x134] }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { je L_007aa5c5 }
	__asm { inc eax }
	__asm { jmp L_007aa5c7 }
	__asm { L_007aa5c5: }
	__asm { xor eax, eax }
	__asm { L_007aa5c7: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0043db60 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_007aa6a7 }
	__asm { mov dword ptr [edi + 0x130], ebx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { call fn_008c00e0 }
	__asm { mov al, byte ptr [esi + 0x24] }
	__asm { mov byte ptr [ebp - 0x38], al }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00436bf0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { add esi, 0x34 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { cmp byte ptr [ebp - 0x38], 0 }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [edi + 0x128], eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xfc] }
	__asm { jne L_007aa661 }
	__asm { lea ecx, [edi + 0xe0] }
	__asm { L_007aa661: }
	__asm { call fn_008c0750 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { jb L_007aa67e }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007aa67e: }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00436ca0 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { L_007aa6a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" char g_012e0ebf[];
extern "C" void fn_00403540();
extern "C" void fn_006b98c0();
extern "C" void fn_00796820();
extern "C" void fn_00799e10();
extern "C" void fn_0079c730();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007aab10
extern "C" __declspec(naked) void asm_007aab10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f158 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { movzx eax, byte ptr [g_012e0ebf] }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { push 0 }
	__asm { sub esp, 0x24 }
	__asm { mov esi, esp }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x64] }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x7a2aa0 }
	__asm { push esi }
	__asm { call fn_00799e10 }
	__asm { add esp, 0x2c }
	__asm { mov ecx, edi }
	__asm { call fn_00796820 }
	__asm { mov ecx, ebx }
	__asm { call fn_0079c730 }
	__asm { test al, al }
	__asm { jne L_007aabe3 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push 0xe53b60 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jb L_007aabbe }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_007aabbe: }
	__asm { mov dword ptr [ebp + 0x64], eax }
	__asm { lea eax, [ebp + 0x64] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_007aabe3: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_007aabf4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007aabf4: }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007aac20 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x28] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007aac20: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x60 }
}

extern "C" char g_00e6f664[];
extern "C" char g_012e0eb4[];
extern "C" void fn_004033d0();
extern "C" void fn_00458fa0();
extern "C" void fn_00a37c30();
extern "C" void fn_00a5d310();
// FUNCTION: ROBLOXSTUDIO 0x007aac40
extern "C" __declspec(naked) void asm_007aac40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1f180 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { test esi, esi }
	__asm { je L_007aad2d }
	__asm { movzx eax, byte ptr [esi + 0x38] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp eax, edi }
	__asm { je L_007aad2c }
	__asm { lea ecx, [esi - 0x2c] }
	__asm { test ecx, ecx }
	__asm { je L_007aad2c }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { add ecx, 0x20 }
	__asm { call fn_00a5d310 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007aacd7 }
	__asm { cmp dword ptr [eax + 0x8c], ecx }
	__asm { jne L_007aacd7 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { push dword ptr [g_00e6f664] }
	__asm { push edi }
	__asm { je L_007aacc7 }
	__asm { push 0x7a5bf0 }
	__asm { push esi }
	__asm { call fn_00a37c30 }
	__asm { add esp, 0x10 }
	__asm { jmp L_007aad1d }
	__asm { L_007aacc7: }
	__asm { push 0x7a5c20 }
	__asm { push esi }
	__asm { call fn_00a37c30 }
	__asm { add esp, 0x10 }
	__asm { jmp L_007aad1d }
	__asm { L_007aacd7: }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { je L_007aad1d }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00458fa0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_007aad11 }
	__asm { push dword ptr [g_00e6f664] }
	__asm { push edi }
	__asm { push 0x7a5bf0 }
	__asm { push esi }
	__asm { call fn_00a37c30 }
	__asm { add esp, 0x10 }
	__asm { L_007aad11: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004033d0 }
	__asm { L_007aad1d: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_007aad2c: }
	__asm { pop edi }
	__asm { L_007aad2d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_0041bea0();
extern "C" void fn_0045a890();
extern "C" void fn_007aae50();
extern "C" void fn_007ab090();
extern "C" void fn_007cd560();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007aadb0
extern "C" __declspec(naked) void asm_007aadb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_007aae21 }
	__asm { add edi, 0x1c }
	__asm { je L_007aadf3 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041bea0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_007aadf3 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_007aadf3 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_007ab090 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007aadf3: }
	__asm { test edi, edi }
	__asm { je L_007aae21 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0045a890 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_007aae21 }
	__asm { add edi, -0x1c }
	__asm { je L_007aae21 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_007aae50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007aae21: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 8], 0xe538f8 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" char g_012e0eb4[];
extern "C" void fn_007a9e10();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007abd40
extern "C" __declspec(naked) void asm_007abd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_007abd5e }
	__asm { cmp dword ptr [esi + 0x13c], 0 }
	__asm { setne al }
	__asm { jmp L_007abd7c }
	__asm { L_007abd5e: }
	__asm { mov ecx, dword ptr [esi + 0xf4] }
	__asm { test ecx, ecx }
	__asm { je L_007abd72 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 8], eax }
	__asm { sete al }
	__asm { jmp L_007abd77 }
	__asm { L_007abd72: }
	__asm { mov eax, 1 }
	__asm { L_007abd77: }
	__asm { test al, al }
	__asm { sete al }
	__asm { L_007abd7c: }
	__asm { test al, al }
	__asm { je L_007abdc5 }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007abda1 }
	__asm { mov dword ptr [eax], 0xe52b20 }
	__asm { mov byte ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { jmp L_007abda3 }
	__asm { L_007abda1: }
	__asm { xor eax, eax }
	__asm { L_007abda3: }
	__asm { mov ecx, dword ptr [esi + 0x88] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { test ecx, ecx }
	__asm { je L_007abdb9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007abdb9: }
	__asm { mov ecx, esi }
	__asm { call fn_007a9e10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007abdc5: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe532c4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" char g_012e0eb4[];
extern "C" void fn_007a9e10();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007abe90
extern "C" __declspec(naked) void asm_007abe90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_007abeae }
	__asm { cmp dword ptr [esi + 0x13c], 0 }
	__asm { setne al }
	__asm { jmp L_007abecc }
	__asm { L_007abeae: }
	__asm { mov ecx, dword ptr [esi + 0xf4] }
	__asm { test ecx, ecx }
	__asm { je L_007abec2 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 8], eax }
	__asm { sete al }
	__asm { jmp L_007abec7 }
	__asm { L_007abec2: }
	__asm { mov eax, 1 }
	__asm { L_007abec7: }
	__asm { test al, al }
	__asm { sete al }
	__asm { L_007abecc: }
	__asm { test al, al }
	__asm { je L_007abf1c }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007abef8 }
	__asm { mov dword ptr [eax], 0xe52b2c }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov byte ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { jmp L_007abefa }
	__asm { L_007abef8: }
	__asm { xor eax, eax }
	__asm { L_007abefa: }
	__asm { mov ecx, dword ptr [esi + 0x88] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { test ecx, ecx }
	__asm { je L_007abf10 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007abf10: }
	__asm { mov ecx, esi }
	__asm { call fn_007a9e10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007abf1c: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe532c4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" char g_012e0eb4[];
extern "C" void fn_007a9e10();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007abff0
extern "C" __declspec(naked) void asm_007abff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012e0eb4], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_007ac00e }
	__asm { cmp dword ptr [esi + 0x13c], 0 }
	__asm { setne al }
	__asm { jmp L_007ac02c }
	__asm { L_007ac00e: }
	__asm { mov ecx, dword ptr [esi + 0xf4] }
	__asm { test ecx, ecx }
	__asm { je L_007ac022 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 8], eax }
	__asm { sete al }
	__asm { jmp L_007ac027 }
	__asm { L_007ac022: }
	__asm { mov eax, 1 }
	__asm { L_007ac027: }
	__asm { test al, al }
	__asm { sete al }
	__asm { L_007ac02c: }
	__asm { test al, al }
	__asm { je L_007ac07c }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007ac058 }
	__asm { mov dword ptr [eax], 0xe52c5c }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov byte ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { jmp L_007ac05a }
	__asm { L_007ac058: }
	__asm { xor eax, eax }
	__asm { L_007ac05a: }
	__asm { mov ecx, dword ptr [esi + 0x88] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { test ecx, ecx }
	__asm { je L_007ac070 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007ac070: }
	__asm { mov ecx, esi }
	__asm { call fn_007a9e10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007ac07c: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe532c4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007ae130();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ac500
extern "C" __declspec(naked) void asm_007ac500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f2e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007ae130 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe54d60 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007ac5e6 }
	__asm { push 0x12bdbf4 }
	__asm { mov ecx, 0x12bdbf4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007ac5e6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007ac5d1 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007ac5e6 }
	__asm { L_007ac5d1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007ac5e6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007ae180();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ac600
extern "C" __declspec(naked) void asm_007ac600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f2b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
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
	__asm { call fn_007ae180 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe54d60 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007ac6eb }
	__asm { push 0x12bdbf4 }
	__asm { mov ecx, 0x12bdbf4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007ac6eb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007ac6d6 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007ac6eb }
	__asm { L_007ac6d6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007ac6eb: }
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
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007ae1e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ac700
extern "C" __declspec(naked) void asm_007ac700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f2e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007ae1e0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe55304 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007ac7e6 }
	__asm { push 0x12bdbf4 }
	__asm { mov ecx, 0x12bdbf4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007ac7e6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007ac7d1 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007ac7e6 }
	__asm { L_007ac7d1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007ac7e6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007ae290();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ac970
extern "C" __declspec(naked) void asm_007ac970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f2b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
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
	__asm { call fn_007ae290 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe54d24 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007aca5b }
	__asm { push 0x12bdbf4 }
	__asm { mov ecx, 0x12bdbf4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007aca5b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007aca46 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007aca5b }
	__asm { L_007aca46: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007aca5b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x007aca70
extern "C" __declspec(naked) void asm_007aca70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c2f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe4dde0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe5603c }
	__asm { mov dword ptr [esi + 8], 0xe5604c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007acb1a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_007acb06 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007acb06: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007acb1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x007acb30
extern "C" __declspec(naked) void asm_007acb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c2f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe3a384 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe5600c }
	__asm { mov dword ptr [esi + 8], 0xe5601c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007acbda }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_007acbc6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007acbc6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007acbda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007ad5f0();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x007acbf0
extern "C" __declspec(naked) void asm_007acbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, esi }
	__asm { call fn_007ad5f0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007acc6b }
	__asm { test al, 1 }
	__asm { jne L_007acc64 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007acc64 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007acc64: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_007acc6b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007acc92 }
	__asm { test al, 1 }
	__asm { jne L_007acc92 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007acc92 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007acc92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
// FUNCTION: ROBLOXSTUDIO 0x007ad400
extern "C" __declspec(naked) void asm_007ad400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { je L_007ad48a }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { L_007ad412: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_007ad46a }
	__asm { test eax, eax }
	__asm { je L_007ad46a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_007ad46a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007ad455 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007ad46a }
	__asm { L_007ad455: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007ad46a: }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { jne L_007ad412 }
	__asm { pop esi }
	__asm { L_007ad48a: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x007ad5f0
extern "C" __declspec(naked) void asm_007ad5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00b25b30 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b25b30 }
	__asm { mov esi, 0xe561fc }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007ad67a }
	__asm { test cl, 1 }
	__asm { jne L_007ad673 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_007ad673 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007ad673: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_007ad67a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007ad6aa }
	__asm { test al, 1 }
	__asm { jne L_007ad6aa }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007ad6aa }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007ad6aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
extern "C" void fn_007aca70();
// FUNCTION: ROBLOXSTUDIO 0x007ad940
extern "C" __declspec(naked) void asm_007ad940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_007ad98b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_007ad98b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_007ad9b4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_007aca70 }
	__asm { mov dword ptr [esi], 0xe56054 }
	__asm { mov dword ptr [esi + 8], 0xe56064 }
	__asm { jmp L_007ad9b6 }
	__asm { L_007ad9b4: }
	__asm { xor esi, esi }
	__asm { L_007ad9b6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_007ad9da }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_007ad9da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_004cab00();
extern "C" void fn_007acb30();
// FUNCTION: ROBLOXSTUDIO 0x007ad9f0
extern "C" __declspec(naked) void asm_007ad9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_007ada3b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_007ada3b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_007ada64 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_007acb30 }
	__asm { mov dword ptr [esi], 0xe56024 }
	__asm { mov dword ptr [esi + 8], 0xe56034 }
	__asm { jmp L_007ada66 }
	__asm { L_007ada64: }
	__asm { xor esi, esi }
	__asm { L_007ada66: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004cab00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_007ada8a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_007ada8a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d2bd0();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007ae020
extern "C" __declspec(naked) void asm_007ae020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 2 }
	__asm { jb L_007ae0ed }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_007ae073 }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007ae073: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_007ae0d3 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d2bd0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov bl, byte ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_007ae0c1 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_007ae0c1: }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007ae0d3: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007ae0ed }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007ae0ed: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007ae107 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, byte ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007ae107: }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0131a54c[];
extern "C" char g_0131a550[];
extern "C" char g_0131a554[];
extern "C" char g_0131a558[];
extern "C" void fn_007aef60();
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_00825670();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007ae610
extern "C" __declspec(naked) void asm_007ae610()
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
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_007aef60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe552d4 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007ae671 }
	__asm { mov dword ptr [eax], esi }
	__asm { jmp L_007ae673 }
	__asm { L_007ae671: }
	__asm { xor eax, eax }
	__asm { L_007ae673: }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_0131a54c] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x4c], esi }
	__asm { test al, 1 }
	__asm { jne L_007ae6c8 }
	__asm { or eax, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], eax }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007ae6c8: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0x131a550 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007ae717 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007ae717: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_0131a264[];
extern "C" char g_0131a268[];
extern "C" char g_0131a26c[];
extern "C" char g_0131a270[];
extern "C" void fn_007aef60();
extern "C" void fn_007b2590();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007ae730
extern "C" __declspec(naked) void asm_007ae730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e0e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_007aef60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe551b4 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov bl, byte ptr [ebp + 0x1c] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007ae79b }
	__asm { mov byte ptr [eax], bl }
	__asm { jmp L_007ae79d }
	__asm { L_007ae79b: }
	__asm { xor eax, eax }
	__asm { L_007ae79d: }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x1c], esp }
	__asm { mov esi, esp }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007ae7c3 }
	__asm { mov byte ptr [eax], bl }
	__asm { L_007ae7c3: }
	__asm { mov eax, dword ptr [g_0131a264] }
	__asm { test al, 1 }
	__asm { jne L_007ae7ff }
	__asm { or eax, 1 }
	__asm { push 0xddc0d0 }
	__asm { mov dword ptr [g_0131a264], eax }
	__asm { mov dword ptr [g_0131a268], 0x12bdfcc }
	__asm { mov dword ptr [g_0131a270], 0x410d30 }
	__asm { mov dword ptr [g_0131a26c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007ae7ff: }
	__asm { mov dword ptr [esi + 4], 0x131a268 }
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
	__asm { call fn_007b2590 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007aef60();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x007ae850
extern "C" __declspec(naked) void asm_007ae850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a7ab }
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
	__asm { call fn_007aef60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe55194 }
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
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
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
	__asm { je L_007ae8fe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007ae8fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007aef60();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x007ae920
extern "C" __declspec(naked) void asm_007ae920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52aeb }
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
	__asm { call fn_007aef60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe55280 }
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
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5710 }
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
	__asm { je L_007ae9ce }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007ae9ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007af010();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x007ae9f0
extern "C" __declspec(naked) void asm_007ae9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a7ab }
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
	__asm { call fn_007af010 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe55358 }
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
	__asm { call fn_007d5710 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
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
	__asm { je L_007aea9e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007aea9e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10260[];
extern "C" void fn_004118e0();
extern "C" void fn_00793960();
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_008251b0();
extern "C" void fn_00825860();
// FUNCTION: ROBLOXSTUDIO 0x007aeb60
extern "C" __declspec(naked) void asm_007aeb60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe55444 }
	__asm { call fn_00793960 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_007aebfd }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_007aebfd: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_007aec20 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007aec20: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10260[];
extern "C" void fn_004118e0();
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_00825860();
// FUNCTION: ROBLOXSTUDIO 0x007aeda0
extern "C" __declspec(naked) void asm_007aeda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe55398 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_007aee42 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_007aee42: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_007aee65 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007aee65: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10260[];
extern "C" void fn_004118e0();
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_008251b0();
extern "C" void fn_00825860();
// FUNCTION: ROBLOXSTUDIO 0x007aee80
extern "C" __declspec(naked) void asm_007aee80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe55398 }
	__asm { call fn_007d5710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_007aef23 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_007aef23: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_007aef46 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007aef46: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_0092b8a0();
// FUNCTION: ROBLOXSTUDIO 0x007aef60
extern "C" __declspec(naked) void asm_007aef60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f448 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe55188 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_007aeff8 }
	__asm { push 0x12bdbf4 }
	__asm { mov ecx, 0x12bdbf4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007aeff8 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007aefe3 }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007aeff8 }
	__asm { L_007aefe3: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007aeff8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_0092b930();
// FUNCTION: ROBLOXSTUDIO 0x007af010
extern "C" __declspec(naked) void asm_007af010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xe5534c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_007af0a8 }
	__asm { push 0x12bdbf4 }
	__asm { mov ecx, 0x12bdbf4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007af0a8 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007af093 }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007af0a8 }
	__asm { L_007af093: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007af0a8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_007af230();
// FUNCTION: ROBLOXSTUDIO 0x007af0c0
extern "C" __declspec(naked) void asm_007af0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_007af13b }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_007af124 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_007af13b }
	__asm { L_007af124: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007af13b: }
	__asm { mov ecx, esi }
	__asm { call fn_007af230 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007af169 }
	__asm { test al, 1 }
	__asm { jne L_007af169 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007af169 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007af169: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

// FUNCTION: ROBLOXSTUDIO 0x007af180
extern "C" __declspec(naked) void asm_007af180()
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
	__asm { je L_007af1f3 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_007af1dc }
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
	__asm { jmp L_007af1f3 }
	__asm { L_007af1dc: }
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
	__asm { L_007af1f3: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_007af218 }
	__asm { test cl, 1 }
	__asm { jne L_007af218 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_007af218 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007af218: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007af180();
// FUNCTION: ROBLOXSTUDIO 0x007af230
extern "C" __declspec(naked) void asm_007af230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_007af2a8 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_007af291 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_007af2a8 }
	__asm { L_007af291: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007af2a8: }
	__asm { mov ecx, esi }
	__asm { call fn_007af180 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007af2d6 }
	__asm { test al, 1 }
	__asm { jne L_007af2d6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007af2d6 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007af2d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_00e54b6c[];
extern "C" char g_012de655[];
extern "C" char g_012e1fc0[];
extern "C" void fn_004038a0();
extern "C" void fn_00407e90();
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x007af570
extern "C" __declspec(naked) void asm_007af570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f4d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi], 0xe54b98 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { mov al, byte ptr [g_012de655] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_007af5dd }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe54bb8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_007af5dd: }
	__asm { cmp byte ptr [g_012e1fc0], 0 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { jne L_007af61e }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x12e1fbc }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0x7b5390 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_012e1fc0], 1 }
	__asm { L_007af61e: }
	__asm { mov dword ptr [esi], 0xe54d08 }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 0x1a], 1 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov byte ptr [ecx], 0 }
	__asm { xor edx, edx }
	__asm { cmp byte ptr [g_00e54b6c], dl }
	__asm { mov eax, 8 }
	__asm { cmove eax, edx }
	__asm { push eax }
	__asm { push 0xe54b6c }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1fc8[];
extern "C" void fn_00407e90();
extern "C" void fn_004115f0();
extern "C" void fn_0043f140();
// FUNCTION: ROBLOXSTUDIO 0x007afa40
extern "C" __declspec(naked) void asm_007afa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f6b1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_012e1fc8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jne L_007afa9b }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x12e1fc4 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0x7b53f0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_012e1fc8], 1 }
	__asm { L_007afa9b: }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [esi], 0xe54d10 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f130 }
	__asm { push 0x131b198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { call fn_0043f140 }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f130 }
	__asm { push 0x131b198 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { call fn_0043f140 }
	__asm { lea eax, [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f130 }
	__asm { push 0x131b198 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_004115f0 }
	__asm { call fn_0043f140 }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f130 }
	__asm { push 0x131b198 }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x20 }
	__asm { call fn_0043f140 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de656[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b8aae();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x007b0750
extern "C" __declspec(naked) void asm_007b0750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_007b07aa }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_007b07aa }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { test edx, edx }
	__asm { je L_007b07aa }
	__asm { cmp ecx, edx }
	__asm { je L_007b07aa }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007b0799 }
	__asm { push 0x41 }
	__asm { push 0xe54bd0 }
	__asm { push 0xe54c1c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b07aa }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007b0799: }
	__asm { movzx eax, al }
	__asm { push 0xe54c50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b07aa: }
	__asm { cmp esi, edi }
	__asm { jne L_007b07df }
	__asm { mov cl, byte ptr [g_012de656] }
	__asm { test cl, cl }
	__asm { je L_007b07d1 }
	__asm { movzx eax, byte ptr [esi + 0x14] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { movzx eax, cl }
	__asm { push 0xe54cd8 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_007b07d1: }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [esi + 0x14], al }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b07df: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x007b0970
extern "C" __declspec(naked) void asm_007b0970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f850 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_007b09c3 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_007b09c3: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_007b09ee }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { L_007b09ee: }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x48 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007b0a1c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b0a1c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_008f1f00();
// FUNCTION: ROBLOXSTUDIO 0x007b0f40
extern "C" __declspec(naked) void asm_007b0f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov edi, ebx }
	__asm { jne L_007b0f9f }
	__asm { L_007b0f61: }
	__asm { lea ebx, [esi + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_008f1f00 }
	__asm { test al, al }
	__asm { je L_007b0f78 }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { jmp L_007b0f93 }
	__asm { L_007b0f78: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { je L_007b0f8c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_008f1f00 }
	__asm { test al, al }
	__asm { cmovne edi, esi }
	__asm { L_007b0f8c: }
	__asm { mov ebx, esi }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { L_007b0f93: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { je L_007b0f61 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { L_007b0f9f: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { je L_007b0fac }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { jmp L_007b0fae }
	__asm { L_007b0fac: }
	__asm { mov esi, dword ptr [edi] }
	__asm { L_007b0fae: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_007b0fd3 }
	__asm { L_007b0fb4: }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { call fn_008f1f00 }
	__asm { test al, al }
	__asm { je L_007b0fc7 }
	__asm { mov edi, esi }
	__asm { mov esi, dword ptr [esi] }
	__asm { jmp L_007b0fca }
	__asm { L_007b0fc7: }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { L_007b0fca: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { je L_007b0fb4 }
	__asm { L_007b0fd3: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_007d5d30();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x007b2590
extern "C" __declspec(naked) void asm_007b2590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f250 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_007d5710 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5d30 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007b260d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b260d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007b2627 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b2627: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_0048e3f0();
extern "C" void fn_0079ae50();
extern "C" void fn_007d5550();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b2fd0
extern "C" __declspec(naked) void asm_007b2fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0079ae50 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov ebx, eax }
	__asm { test ecx, ecx }
	__asm { je L_007b3010 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_007b3012 }
	__asm { L_007b3010: }
	__asm { xor ecx, ecx }
	__asm { L_007b3012: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { push ebx }
	__asm { lea esi, [ebp - 0x24] }
	__asm { push esi }
	__asm { add ecx, eax }
	__asm { call edx }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { push esi }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { call fn_0048e3f0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_007b304f }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b304f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0078a6b0();
extern "C" void fn_007ae020();
extern "C" void fn_007b1090();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b3060
extern "C" __declspec(naked) void asm_007b3060()
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
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_007ae020 }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x1c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007b30b7 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_007b30b9 }
	__asm { L_007b30b7: }
	__asm { xor ecx, ecx }
	__asm { L_007b30b9: }
	__asm { lea edx, [ebp + 0xf] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_007b1090 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_007b30e4 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b30e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00402f60();
// FUNCTION: ROBLOXSTUDIO 0x007b3490
extern "C" __declspec(naked) void asm_007b3490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 0x3c], 0 }
	__asm { jne L_007b34a4 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b34a4: }
	__asm { mov eax, dword ptr [ecx + 0x3c] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { sub eax, ecx }
	__asm { push esi }
	__asm { sar eax, 3 }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test eax, eax }
	__asm { je L_007b3525 }
	__asm { mov ebx, ecx }
	__asm { L_007b34c5: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x48] }
	__asm { add ecx, 0x1c }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { jb L_007b34d8 }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_007b34d8: }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov esi, dword ptr [ecx + 0x10] }
	__asm { jb L_007b34e3 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_007b34e3: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_007b3519 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { cmp esi, edx }
	__asm { jb L_007b3519 }
	__asm { xor eax, eax }
	__asm { cmp esi, edx }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_007b3530 }
	__asm { L_007b3519: }
	__asm { inc edi }
	__asm { add ebx, 8 }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { cmp edi, dword ptr [ebp - 8] }
	__asm { jb L_007b34c5 }
	__asm { L_007b3525: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b3530: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax + edi*8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00490c50();
extern "C" void fn_006b9740();
extern "C" void fn_007ad560();
// FUNCTION: ROBLOXSTUDIO 0x007b3660
extern "C" __declspec(naked) void asm_007b3660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_007b36ca }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_007b36ca }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007b36b9 }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b36ca }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_007b36b9: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b36ca: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_007b36d6 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_007b36d8 }
	__asm { L_007b36d6: }
	__asm { xor esi, esi }
	__asm { L_007b36d8: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_007ad560 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [eax] }
	__asm { add ecx, esi }
	__asm { call fn_00490c50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_007a0870();
extern "C" void fn_009ec9b0();
// FUNCTION: ROBLOXSTUDIO 0x007b3700
extern "C" __declspec(naked) void asm_007b3700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_007b377f }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_007b377f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007b376e }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b377f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_007b376e: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b377f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_007b378b }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_007b378d }
	__asm { L_007b378b: }
	__asm { xor esi, esi }
	__asm { L_007b378d: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009ec9b0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007a0870 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_007b0b30();
// FUNCTION: ROBLOXSTUDIO 0x007b37d0
extern "C" __declspec(naked) void asm_007b37d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd69a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_007b384f }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_007b384f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007b383e }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b384f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_007b383e: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b384f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_007b385b }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_007b385d }
	__asm { L_007b385b: }
	__asm { xor edi, edi }
	__asm { L_007b385d: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b0b30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_0042e6e0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee70();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b3a00
extern "C" __declspec(naked) void asm_007b3a00()
{
	__asm { L_007b3a00: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_007b3ac4 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_007b3a54 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_007b3a54 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_007b3ac4 }
	__asm { L_007b3a54: }
	__asm { mov ecx, dword ptr [ebx + 0x38] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call L_007b3a00 }
	__asm { push 0x100d138 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043ee70 }
	__asm { mov ecx, dword ptr [ebx + 0x48] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add ecx, 0x1c }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0042e6e0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_007b3a9f }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b3a9f: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jb L_007b3aea }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_007b3aea }
	__asm { L_007b3ac4: }
	__asm { mov ecx, dword ptr [ebx + 0x48] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0x1c }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { L_007b3aea: }
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

extern "C" char g_012e0d70[];
extern "C" char g_012e0dd4[];
extern "C" char g_012e0dd8[];
extern "C" void fn_00792c90();
extern "C" void fn_00792cc0();
extern "C" void fn_007b5210();
// FUNCTION: ROBLOXSTUDIO 0x007b5080
extern "C" __declspec(naked) void asm_007b5080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [g_012e0d70] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00792c90 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_007b50b2 }
	__asm { test edi, edi }
	__asm { je L_007b50a5 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { jmp L_007b50a7 }
	__asm { L_007b50a5: }
	__asm { xor ecx, ecx }
	__asm { L_007b50a7: }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push ecx }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx] }
	__asm { L_007b50b2: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { cmp eax, dword ptr [g_012e0dd4] }
	__asm { jne L_007b50fb }
	__asm { push dword ptr [g_012e0dd8] }
	__asm { call fn_00792cc0 }
	__asm { test eax, eax }
	__asm { je L_007b50e7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { test esi, esi }
	__asm { je L_007b50e6 }
	__asm { L_007b50d7: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x70] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { jne L_007b50d7 }
	__asm { L_007b50e6: }
	__asm { pop esi }
	__asm { L_007b50e7: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007b5210 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_007b50fb: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ebx }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x70] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012e0d8c[];
extern "C" void fn_0044dae0();
extern "C" void fn_00792c90();
extern "C" void fn_00793050();
extern "C" void fn_00b77360();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b5290
extern "C" __declspec(naked) void asm_007b5290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3bd18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { push dword ptr [g_012e0d8c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00792c90 }
	__asm { test eax, eax }
	__asm { je L_007b5343 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 8] }
	__asm { call fn_00793050 }
	__asm { test al, al }
	__asm { je L_007b5343 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { cmovae eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { add ecx, 0x1c }
	__asm { call fn_00b77360 }
	__asm { test eax, eax }
	__asm { je L_007b5343 }
	__asm { push esi }
	__asm { lea esi, [eax + 4] }
	__asm { test esi, esi }
	__asm { je L_007b5342 }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_007b5342 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_007b5342 }
	__asm { lea eax, [ebx + 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0044dae0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [eax + 4] }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { L_007b5342: }
	__asm { pop esi }
	__asm { L_007b5343: }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { pop ebx }
	__asm { jb L_007b5355 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b5355: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b5910();
extern "C" void fn_007b5ea0();
extern "C" void fn_007b6760();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007b5ac0
extern "C" __declspec(naked) void asm_007b5ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fd20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { lea esi, [edi + 0x48] }
	__asm { mov bl, byte ptr [ecx + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push eax }
	__asm { add ecx, 0x18 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov byte ptr [ebp - 0x12], bl }
	__asm { mov byte ptr [ebp - 0x11], 1 }
	__asm { call fn_007b5910 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b5ea0 }
	__asm { test al, al }
	__asm { sete al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test al, al }
	__asm { je L_007b5b3c }
	__asm { test bl, bl }
	__asm { jne L_007b5b3c }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push esi }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { add ecx, 0x18 }
	__asm { mov byte ptr [ebp + 0xb], bl }
	__asm { call fn_007b5910 }
	__asm { L_007b5b3c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { cmp byte ptr [ebp - 0x12], 0 }
	__asm { jne L_007b5b5d }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_007b6760 }
	__asm { L_007b5b5d: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e18d8[];
extern "C" void fn_00402fd0();
extern "C" void fn_00421eb0();
extern "C" void fn_004278c0();
extern "C" void fn_007adf70();
extern "C" void fn_007b4f50();
extern "C" void fn_007b56e0();
extern "C" void fn_00a45fb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b5bb0
extern "C" __declspec(naked) void asm_007b5bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { lea ebx, [edi + 0x48] }
	__asm { add ecx, 0x1c }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007b5be6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_007b5be8 }
	__asm { L_007b5be6: }
	__asm { mov eax, esi }
	__asm { L_007b5be8: }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_007b5c98 }
	__asm { cmp dword ptr [esi + 0x10], 0x64 }
	__asm { jbe L_007b5c52 }
	__asm { push 0x64 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push ebx }
	__asm { push eax }
	__asm { add ecx, 0x1c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b56e0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_007b5c3e }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b5c3e: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { jmp L_007b5c5e }
	__asm { L_007b5c52: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push ebx }
	__asm { push esi }
	__asm { add ecx, 0x1c }
	__asm { call fn_007b56e0 }
	__asm { L_007b5c5e: }
	__asm { push 0x12e1de0 }
	__asm { mov ecx, edi }
	__asm { call fn_007b4f50 }
	__asm { cmp byte ptr [g_012e18d8], 0 }
	__asm { je L_007b5c98 }
	__asm { push edi }
	__asm { call fn_007adf70 }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_007b5c98 }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { push edi }
	__asm { push ecx }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { call fn_00a45fb0 }
	__asm { L_007b5c98: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
