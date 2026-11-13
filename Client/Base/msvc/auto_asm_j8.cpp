// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10e4c[];
extern "C" void fn_0050ecf0();
extern "C" void fn_0057d250();
// FUNCTION: ROBLOXSTUDIO 0x0057c9c0
extern "C" __declspec(naked) void asm_0057c9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx + 0x14] }
	__asm { je L_0057c9da }
	__asm { mov ecx, edi }
	__asm { call fn_0050ecf0 }
	__asm { L_0057c9da: }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { L_0057c9df: }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { L_0057c9e2: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_0057c9f1 }
	__asm { mov ecx, edi }
	__asm { call fn_0050ecf0 }
	__asm { L_0057c9f1: }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0057ca12 }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { call dword ptr [g_00e10e4c] }
	__asm { cmp eax, ebx }
	__asm { jne L_0057c9df }
	__asm { push esi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0057d250 }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_0057c9e2 }
	__asm { L_0057ca12: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eba0[];
extern "C" void fn_00403540();
extern "C" void fn_004a4c90();
extern "C" void fn_004b9840();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0057cf80
extern "C" __declspec(naked) void asm_0057cf80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94f36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_0057cfcc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_0057cfcc: }
	__asm { mov esi, dword ptr [g_0131eba0] }
	__asm { test esi, esi }
	__asm { je L_0057d003 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov ecx, esi }
	__asm { call fn_004b9840 }
	__asm { L_0057d003: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_0057d015 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0057d015: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

// FUNCTION: ROBLOXSTUDIO 0x0057dc80
extern "C" __declspec(naked) void asm_0057dc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0057dca3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0x12d7dd8 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_0057dca5 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0057dca3: }
	__asm { xor esi, esi }
	__asm { L_0057dca5: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0057dcd5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0x12d7da4 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0057dcd5 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0057dccf }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0x12d7dd8 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0057dccf: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0057dcd5: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b0630();
// FUNCTION: ROBLOXSTUDIO 0x0057e060
extern "C" __declspec(naked) void asm_0057e060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94bf8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_0057e0ca }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_0057e0c5 }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { je L_0057e0ab }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_004b0630 }
	__asm { L_0057e0ab: }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { L_0057e0c5: }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { L_0057e0ca: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe18248 }
	__asm { je L_0057e0e0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0057e0e0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x0057e100
extern "C" __declspec(naked) void asm_0057e100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_0057e116 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0057e116: }
	__asm { cmp eax, 1 }
	__asm { jne L_0057e12d }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0057e12d: }
	__asm { cmp eax, 2 }
	__asm { jne L_0057e13d }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0057e13d: }
	__asm { cmp eax, 3 }
	__asm { jne L_0057e160 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12d7d80 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0057e160: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d7d80 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01320164[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0057e300
extern "C" __declspec(naked) void asm_0057e300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { test al, 1 }
	__asm { jne L_0057e342 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0057e342: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1320168 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044cb30();
extern "C" void fn_0044cc00();
extern "C" void fn_0044cc90();
extern "C" void fn_0053e020();
// FUNCTION: ROBLOXSTUDIO 0x0057e900
extern "C" __declspec(naked) void asm_0057e900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { lea esi, [ecx + 0x30] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { je L_0057e921 }
	__asm { mov ecx, esi }
	__asm { call fn_0044cb30 }
	__asm { L_0057e921: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0044cc00 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop esi }
	__asm { cmp eax, ecx }
	__asm { jne L_0057e950 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_0044cc90 }
	__asm { L_0057e950: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax - 4] }
	__asm { call fn_0053e020 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044cb30();
extern "C" void fn_0044cc00();
extern "C" void fn_0044cc90();
// FUNCTION: ROBLOXSTUDIO 0x0057e970
extern "C" __declspec(naked) void asm_0057e970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { lea esi, [ecx + 0x30] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { je L_0057e991 }
	__asm { mov ecx, esi }
	__asm { call fn_0044cb30 }
	__asm { L_0057e991: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0044cc00 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop esi }
	__asm { cmp eax, ecx }
	__asm { jne L_0057e9c0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_0044cc90 }
	__asm { L_0057e9c0: }
	__asm { mov eax, dword ptr [eax - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e108f8[];
extern "C" char g_00e11970[];
extern "C" char g_00e1197c[];
extern "C" char g_00e1290c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00582bf0
extern "C" __declspec(naked) void asm_00582bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_00582c3c }
	__asm { test esi, esi }
	__asm { jne L_00582c3c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00582c2b }
	__asm { push 0x3fd }
	__asm { push 0x1035130 }
	__asm { push 0x1035d3c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00582c3c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00582c2b: }
	__asm { movzx eax, al }
	__asm { push 0x1035c50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00582c3c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, -1 }
	__asm { jne L_00582c4d }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1197c] }
	__asm { inc eax }
	__asm { L_00582c4d: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11970] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1290c] }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { call dword ptr [g_00e108f8] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x00584490
extern "C" __declspec(naked) void asm_00584490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { mov esi, ecx }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_005844e8 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_005844d5 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_005844d5: }
	__asm { mov eax, 0x1035ff0 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_005844e8: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x005849e0
extern "C" __declspec(naked) void asm_005849e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx + 0x38] }
	__asm { mov esi, edx }
	__asm { mov eax, edx }
	__asm { test edi, edi }
	__asm { js L_00584a12 }
	__asm { L_005849f6: }
	__asm { mov eax, dword ptr [esi + edi*4 + 4] }
	__asm { cmp eax, edx }
	__asm { je L_00584a0f }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { L_00584a00: }
	__asm { cmp dword ptr [eax - 0x14], ecx }
	__asm { jge L_00584a0f }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + edi*4 + 4] }
	__asm { cmp eax, edx }
	__asm { jne L_00584a00 }
	__asm { L_00584a0f: }
	__asm { dec edi }
	__asm { jns L_005849f6 }
	__asm { L_00584a12: }
	__asm { cmp eax, edx }
	__asm { je L_00584a1d }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { cmp ecx, dword ptr [eax - 0x14] }
	__asm { jge L_00584a1f }
	__asm { L_00584a1d: }
	__asm { mov eax, edx }
	__asm { L_00584a1f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e131b8[];
// FUNCTION: ROBLOXSTUDIO 0x00584e60
extern "C" __declspec(naked) void asm_00584e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd95d69 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { test eax, eax }
	__asm { je L_00584ead }
	__asm { test al, 1 }
	__asm { jne L_00584ea6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x58] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00584ea6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00584ea6: }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { L_00584ead: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e131b8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00584ecc }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00584ecc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00584ee0
extern "C" __declspec(naked) void asm_00584ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00584f29 }
	__asm { cmp eax, 1 }
	__asm { je L_00584f29 }
	__asm { cmp eax, 2 }
	__asm { je L_00584f37 }
	__asm { cmp eax, 3 }
	__asm { jne L_00584f19 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12d8108 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00584f19: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12d8108 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00584f29: }
	__asm { test esi, esi }
	__asm { je L_00584f37 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00584f37: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00452600();
// FUNCTION: ROBLOXSTUDIO 0x005856c0
extern "C" __declspec(naked) void asm_005856c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00585716 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0xf1d6e8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_005856f5 }
	__asm { push 0x82 }
	__asm { push 0x10360c8 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_005856f5: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0058570c }
	__asm { dec eax }
	__asm { jne L_00585715 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0xd8] }
	__asm { L_0058570c: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00452600 }
	__asm { L_00585715: }
	__asm { pop esi }
	__asm { L_00585716: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00453ca0();
extern "C" void fn_00453d70();
// FUNCTION: ROBLOXSTUDIO 0x00585940
extern "C" __declspec(naked) void asm_00585940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_005859a2 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0xf1d6c8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00585975 }
	__asm { push 0x10d }
	__asm { push 0x10360c8 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00585975: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00585998 }
	__asm { dec eax }
	__asm { je L_0058598f }
	__asm { dec eax }
	__asm { jne L_005859a1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0xd8] }
	__asm { L_0058598f: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00453d70 }
	__asm { L_00585998: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00453ca0 }
	__asm { L_005859a1: }
	__asm { pop esi }
	__asm { L_005859a2: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f4c[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
// FUNCTION: ROBLOXSTUDIO 0x005871f0
extern "C" __declspec(naked) void asm_005871f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00587249 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, 0x12c09b8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00587225 }
	__asm { push 0x1b8 }
	__asm { push 0x1036300 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00587225: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_00587248 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { push ecx }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push eax }
	__asm { call dword ptr [esi + 0x58] }
	__asm { pop esi }
	__asm { L_00587248: }
	__asm { pop edi }
	__asm { L_00587249: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_004a3a50();
// FUNCTION: ROBLOXSTUDIO 0x00587340
extern "C" __declspec(naked) void asm_00587340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00587398 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c09d8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00587372 }
	__asm { push 0x30 }
	__asm { push 0x1036350 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00587372: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00587386 }
	__asm { dec eax }
	__asm { jne L_00587397 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_004a3a50 }
	__asm { L_00587386: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { L_00587397: }
	__asm { pop esi }
	__asm { L_00587398: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00515bf0();
extern "C" void fn_00515ce0();
extern "C" void fn_005164e0();
// FUNCTION: ROBLOXSTUDIO 0x00588700
extern "C" __declspec(naked) void asm_00588700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00588773 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c0a58 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00588732 }
	__asm { push 0x32 }
	__asm { push 0x1036598 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00588732: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0058875e }
	__asm { dec eax }
	__asm { je L_00588755 }
	__asm { dec eax }
	__asm { jne L_00588772 }
	__asm { mov ecx, esi }
	__asm { call fn_00515ce0 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { test ecx, ecx }
	__asm { je L_00588772 }
	__asm { mov byte ptr [ecx], al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00588755: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00515bf0 }
	__asm { L_0058875e: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00588772 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_005164e0 }
	__asm { L_00588772: }
	__asm { pop esi }
	__asm { L_00588773: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_005332b0();
// FUNCTION: ROBLOXSTUDIO 0x005891a0
extern "C" __declspec(naked) void asm_005891a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_005891f8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c0ad8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_005891d2 }
	__asm { push 0x30 }
	__asm { push 0x1036658 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_005891d2: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_005891e6 }
	__asm { dec eax }
	__asm { jne L_005891f7 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_005332b0 }
	__asm { L_005891e6: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { L_005891f7: }
	__asm { pop esi }
	__asm { L_005891f8: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_005355f0();
// FUNCTION: ROBLOXSTUDIO 0x00589450
extern "C" __declspec(naked) void asm_00589450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_005894a3 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c0af8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00589482 }
	__asm { push 0x31 }
	__asm { push 0x10366f8 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00589482: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00589496 }
	__asm { dec eax }
	__asm { jne L_005894a2 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_005355f0 }
	__asm { L_00589496: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0xb }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { L_005894a2: }
	__asm { pop esi }
	__asm { L_005894a3: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_0053e180();
extern "C" void fn_0053e200();
// FUNCTION: ROBLOXSTUDIO 0x005898c0
extern "C" __declspec(naked) void asm_005898c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00589930 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c0b18 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_005898f5 }
	__asm { push 0xb3 }
	__asm { push 0x1036740 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_005898f5: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_0058991c }
	__asm { dec eax }
	__asm { je L_00589913 }
	__asm { dec eax }
	__asm { jne L_0058992f }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0053e200 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00589913: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_0053e180 }
	__asm { L_0058991c: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x12c0b18 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_0058992f: }
	__asm { pop esi }
	__asm { L_00589930: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0058d480
extern "C" __declspec(naked) void asm_0058d480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_0058d4d1 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test eax, eax }
	__asm { je L_0058d4b8 }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { je L_0058d4b1 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058d4b1: }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_0058d4b8: }
	__asm { mov byte ptr [esi + 0x18], 1 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0058d4d1: }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { je L_0058d51b }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { test eax, eax }
	__asm { je L_0058d502 }
	__asm { cmp byte ptr [esi + 0x34], 0 }
	__asm { je L_0058d4fb }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058d4fb: }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { L_0058d502: }
	__asm { mov byte ptr [esi + 0x34], 1 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { L_0058d51b: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_005a66b0();
// FUNCTION: ROBLOXSTUDIO 0x0058e890
extern "C" __declspec(naked) void asm_0058e890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96761 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x30 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0058e8f2 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005a66b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058e8f2: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b55c0[];
extern "C" void fn_005a1cf0();
// FUNCTION: ROBLOXSTUDIO 0x0058ea10
extern "C" __declspec(naked) void asm_0058ea10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96761 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x10 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0058ea72 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_005a1cf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058ea72: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0058f820
extern "C" __declspec(naked) void asm_0058f820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd968d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1036974 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xee3708 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test eax, eax }
	__asm { je L_0058f881 }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { je L_0058f87a }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058f87a: }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_0058f881: }
	__asm { mov byte ptr [esi + 0x18], 1 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi], 0x10369b4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01318fcc[];
// FUNCTION: ROBLOXSTUDIO 0x0058fa90
extern "C" __declspec(naked) void asm_0058fa90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [ebx + 0x318], edi }
	__asm { jle L_0058faec }
	__asm { mov ecx, dword ptr [g_01318fcc] }
	__asm { push esi }
	__asm { lea esi, [ebx + 0x80] }
	__asm { nop }
	__asm { L_0058fab0: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_0058facc }
	__asm { test ecx, ecx }
	__asm { je L_0058facc }
	__asm { push eax }
	__asm { call ecx }
	__asm { mov ecx, dword ptr [g_01318fcc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0058facc: }
	__asm { inc edi }
	__asm { add esi, 0xc0 }
	__asm { cmp edi, dword ptr [ebx + 0x318] }
	__asm { jl L_0058fab0 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x318], 0 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0058faec: }
	__asm { mov dword ptr [ebx + 0x318], edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x00590bd0
extern "C" __declspec(naked) void asm_00590bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96a68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x103714c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { test ecx, ecx }
	__asm { je L_00590c2a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { call dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { test eax, eax }
	__asm { je L_00590c2a }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_00590c2a: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0x1036d34 }
	__asm { je L_00590c4d }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push esi }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_00590c4d: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x00590c70
extern "C" __declspec(naked) void asm_00590c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96a68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x103714c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { test ecx, ecx }
	__asm { je L_00590cca }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { call dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { test eax, eax }
	__asm { je L_00590cca }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_00590cca: }
	__asm { mov dword ptr [esi], 0x1036d34 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x00591760
extern "C" __declspec(naked) void asm_00591760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1036b94 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { test edx, edx }
	__asm { je L_005917ad }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_005917ad: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_005917cc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x38] }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_005917cc: }
	__asm { mov dword ptr [esi + 0x18], 0xffffffff }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi + 0x20], 0xffffffff }
	__asm { mov dword ptr [esi + 0x24], 0xffffffff }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x005960c0
extern "C" __declspec(naked) void asm_005960c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96c68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1036db8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_0059611a }
	__asm { cmp byte ptr [esi + 0x30], 0 }
	__asm { je L_00596113 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_00596113: }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { L_0059611a: }
	__asm { mov byte ptr [esi + 0x30], 1 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi], 0x1036df4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x005972a0
extern "C" __declspec(naked) void asm_005972a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { cmp dword ptr [edx + 4], 0 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0xc], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { jne L_005972cf }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_005972cf: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { fstp dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { xor ecx, ebp }
	__asm { pop esi }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0059b7e0
extern "C" __declspec(naked) void asm_0059b7e0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { test ebx, ebx }
	__asm { jle L_0059b802 }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov edi, edi }
	__asm { L_0059b7f0: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edi }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { add edi, 0x50 }
	__asm { dec ebx }
	__asm { jne L_0059b7f0 }
	__asm { pop edi }
	__asm { L_0059b802: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0059b826 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_0059b81f }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0059b81f: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0059b826: }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0059b990
extern "C" __declspec(naked) void asm_0059b990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96a68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1036eb4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [esi + 0x49], 0 }
	__asm { je L_0059b9ec }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { test eax, eax }
	__asm { je L_0059b9ec }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0059b9ec: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0x1036d34 }
	__asm { je L_0059ba0f }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push esi }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0059ba0f: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012bfc70[];
extern "C" char g_012bfc74[];
extern "C" char g_01318fc0[];
extern "C" char g_01318fc4[];
extern "C" void fn_005b2f50();
extern "C" void fn_005b3fc0();
// FUNCTION: ROBLOXSTUDIO 0x0059c030
extern "C" __declspec(naked) void asm_0059c030()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x49], 0 }
	__asm { je L_0059c059 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { test eax, eax }
	__asm { je L_0059c059 }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0059c059: }
	__asm { inc dword ptr [g_01318fc4] }
	__asm { push 0x10 }
	__asm { push 0xc0 }
	__asm { call dword ptr [g_012bfc74] }
	__asm { mov ecx, eax }
	__asm { add esp, 8 }
	__asm { test ecx, ecx }
	__asm { je L_0059c082 }
	__asm { call fn_005b3fc0 }
	__asm { mov dword ptr [ecx], 0x103732c }
	__asm { jmp L_0059c084 }
	__asm { L_0059c082: }
	__asm { xor ecx, ecx }
	__asm { L_0059c084: }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [esi + 0x48] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x30] }
	__asm { mov dword ptr [esi + 0x40], ecx }
	__asm { call fn_005b2f50 }
	__asm { mov byte ptr [esi + 0x49], 1 }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0059c220
extern "C" __declspec(naked) void asm_0059c220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebx + 0x40] }
	__asm { test ecx, ecx }
	__asm { je L_0059c262 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov edx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0x40] }
	__asm { mov esi, eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push edi }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [edx + 4] }
	__asm { push dword ptr [ebx + 0x40] }
	__asm { mov edx, dword ptr [edi] }
	__asm { push 0x48564251 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0059c262: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0059c270
extern "C" __declspec(naked) void asm_0059c270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebx + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_0059c2b2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov edx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0x44] }
	__asm { mov esi, eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push edi }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [edx + 8] }
	__asm { push dword ptr [ebx + 0x44] }
	__asm { mov edx, dword ptr [edi] }
	__asm { push 0x50414d54 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0059c2b2: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x005a0560
extern "C" __declspec(naked) void asm_005a0560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97020 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0x1037010 }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0x1037004 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { push dword ptr [esi + 0x44] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { push dword ptr [esi + 0x44] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0x1036ad4 }
	__asm { mov dword ptr [edi], 0x1036ff0 }
	__asm { je L_005a05db }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005a05db: }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x005a06c0
extern "C" __declspec(naked) void asm_005a06c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97048 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1037004 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { push dword ptr [esi + 0x44] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { push dword ptr [esi + 0x44] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0x1036ad4 }
	__asm { je L_005a0722 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005a0722: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005a2330
extern "C" __declspec(naked) void asm_005a2330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x24 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { je L_005a239c }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [eax], 0x1036ff0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, ebx }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 0x1c], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0x20], ebx }
	__asm { pop ebx }
	__asm { mov dword ptr [eax + 0x14], esi }
	__asm { mov dword ptr [eax], 0x10370b0 }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], edx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { mov byte ptr [eax + 0x18], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_005a239c: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10508[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x005a23b0
extern "C" __declspec(naked) void asm_005a23b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x10370b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_005a23fc }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { test edx, edx }
	__asm { je L_005a23fc }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_005a23fc: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { je L_005a2412 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005a2412: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x005a6420
extern "C" __declspec(naked) void asm_005a6420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x10370d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [esi + 8], 0 }
	__asm { je L_005a646c }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { test edx, edx }
	__asm { je L_005a646c }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_005a646c: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { je L_005a6482 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005a6482: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005ce620();
// FUNCTION: ROBLOXSTUDIO 0x005a68b0
extern "C" __declspec(naked) void asm_005a68b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, 4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test ebx, ebx }
	__asm { jle L_005a68fd }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { mov edi, edi }
	__asm { L_005a68d0: }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov edi, dword ptr [eax + esi + 8] }
	__asm { test edi, edi }
	__asm { je L_005a68ef }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x38] }
	__asm { L_005a68ef: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { add esi, 0xc }
	__asm { dec ebx }
	__asm { jne L_005a68d0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_005a68fd: }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { call fn_005ce620 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x005a88b0
extern "C" __declspec(naked) void asm_005a88b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x103710c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [esi + 8], 0 }
	__asm { je L_005a88fc }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { test edx, edx }
	__asm { je L_005a88fc }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_005a88fc: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { je L_005a8912 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005a8912: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x005aa360
extern "C" __declspec(naked) void asm_005aa360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1037120 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [esi + 8], 0 }
	__asm { je L_005aa3ac }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { test edx, edx }
	__asm { je L_005aa3ac }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_005aa3ac: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { je L_005aa3c2 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005aa3c2: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
extern "C" void fn_005aa880();
// FUNCTION: ROBLOXSTUDIO 0x005aa8c0
extern "C" __declspec(naked) void asm_005aa8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97483 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1037134 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_005aa880 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test eax, eax }
	__asm { je L_005aa923 }
	__asm { cmp byte ptr [esi + 0x18], 0 }
	__asm { je L_005aa91c }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005aa91c: }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_005aa923: }
	__asm { mov byte ptr [esi + 0x18], 1 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi], 0x1036ff0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10800[];
// FUNCTION: ROBLOXSTUDIO 0x005bd880
extern "C" __declspec(naked) void asm_005bd880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10800] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test esi, esi }
	__asm { js L_005bd8a1 }
	__asm { cmp esi, dword ptr [eax + 4] }
	__asm { jl L_005bd8b8 }
	__asm { L_005bd8a1: }
	__asm { push 0x579 }
	__asm { push 0x1037450 }
	__asm { push 0x1037d60 }
	__asm { call ebx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 0xc }
	__asm { L_005bd8b8: }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + esi*4], edi }
	__asm { je L_005bd8d3 }
	__asm { push 0x936 }
	__asm { push 0x1037450 }
	__asm { push 0x10379cc }
	__asm { call ebx }
	__asm { add esp, 0xc }
	__asm { L_005bd8d3: }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov edi, dword ptr [edi + 0x24] }
	__asm { test esi, esi }
	__asm { js L_005bd8e2 }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jl L_005bd8f6 }
	__asm { L_005bd8e2: }
	__asm { push 0x579 }
	__asm { push 0x1037450 }
	__asm { push 0x1037d60 }
	__asm { call ebx }
	__asm { add esp, 0xc }
	__asm { L_005bd8f6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi*4], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10800[];
extern "C" void fn_005c1e30();
// FUNCTION: ROBLOXSTUDIO 0x005c18d0
extern "C" __declspec(naked) void asm_005c18d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jle L_005c18f6 }
	__asm { push 0x5ea }
	__asm { push 0x1037450 }
	__asm { push 0x1037cf0 }
	__asm { call dword ptr [g_00e10800] }
	__asm { add esp, 0xc }
	__asm { L_005c18f6: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { jne L_005c1913 }
	__asm { test eax, eax }
	__asm { je L_005c1906 }
	__asm { add eax, eax }
	__asm { jmp L_005c190b }
	__asm { L_005c1906: }
	__asm { mov eax, 0x10 }
	__asm { L_005c190b: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_005c1e30 }
	__asm { L_005c1913: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + edx*4], eax }
	__asm { inc dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { lea eax, [eax + ecx*4] }
	__asm { add eax, -4 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005cf150
extern "C" __declspec(naked) void asm_005cf150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp dword ptr [esi + 0xc], ecx }
	__asm { ja L_005cf182 }
	__asm { jb L_005cf16e }
	__asm { cmp edx, eax }
	__asm { jae L_005cf177 }
	__asm { L_005cf16e: }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005cf177: }
	__asm { cmp dword ptr [esi + 0xc], ecx }
	__asm { jb L_005cf18d }
	__asm { ja L_005cf182 }
	__asm { cmp edx, eax }
	__asm { jbe L_005cf18d }
	__asm { L_005cf182: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005cf18d: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp esi, edx }
	__asm { ja L_005cf182 }
	__asm { jb L_005cf16e }
	__asm { cmp ecx, eax }
	__asm { jb L_005cf16e }
	__asm { cmp esi, edx }
	__asm { jb L_005cf1ab }
	__asm { ja L_005cf182 }
	__asm { cmp ecx, eax }
	__asm { ja L_005cf182 }
	__asm { L_005cf1ab: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005d5550();
// FUNCTION: ROBLOXSTUDIO 0x005cfc00
extern "C" __declspec(naked) void asm_005cfc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { call fn_005d5550 }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { mov edi, eax }
	__asm { call fn_005d5550 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 8], edx }
	__asm { mov dword ptr [edx + 8], edi }
	__asm { mov ecx, dword ptr [ebx + 0x64] }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { mov ecx, dword ptr [ebx + 0x64] }
	__asm { mov dword ptr [edx + 0x14], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0xc], ecx }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edx + 0x10], 0 }
	__asm { inc dword ptr [ebx + 0x74] }
	__asm { mov eax, dword ptr [ebx + 0x74] }
	__asm { cmp eax, dword ptr [ebx + 0x78] }
	__asm { jle L_005cfc56 }
	__asm { mov dword ptr [ebx + 0x78], eax }
	__asm { L_005cfc56: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012b55c0[];
extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
extern "C" void fn_005d5420();
// FUNCTION: ROBLOXSTUDIO 0x005d5370
extern "C" __declspec(naked) void asm_005d5370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd97ab1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { test eax, eax }
	__asm { je L_005d53c4 }
	__asm { cmp byte ptr [esi + 0x60], 0 }
	__asm { je L_005d53bd }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_005d53bd: }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { L_005d53c4: }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov byte ptr [esi + 0x60], 1 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005d5420 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_005d5420 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005d5420 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005db4a0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005db2f0
extern "C" __declspec(naked) void asm_005db2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0df90 }
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
	__asm { je L_005db348 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe183d0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005db34a }
	__asm { L_005db348: }
	__asm { xor eax, eax }
	__asm { L_005db34a: }
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
	__asm { call fn_005db4a0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b7370();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005db4a0
extern "C" __declspec(naked) void asm_005db4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0dfa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_005db509 }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b7370 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_005db4ed }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005db4ed: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov word ptr [esi], ax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005db509: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005db250();
extern "C" void fn_006b7740();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005db5c0
extern "C" __declspec(naked) void asm_005db5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53888 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x2c }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_005db619 }
	__asm { mov dword ptr [eax + 0x14], 7 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax], cx }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { mov dword ptr [eax + 0x1c], 0xffff }
	__asm { mov dword ptr [eax + 0x20], ecx }
	__asm { mov dword ptr [eax + 0x24], 0xffff }
	__asm { mov dword ptr [eax + 0x28], ecx }
	__asm { jmp L_005db61b }
	__asm { L_005db619: }
	__asm { xor eax, eax }
	__asm { L_005db61b: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_005db250 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { call fn_006b7740 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e136b4[];
extern "C" void fn_005dc4a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005db9b0
extern "C" __declspec(naked) void asm_005db9b0()
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
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea edx, [ebp - 0x24] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x30] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005dc4a0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_005dba08 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005dba08: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test eax, eax }
	__asm { je L_005dba2a }
	__asm { push eax }
	__asm { call dword ptr [g_00e136b4] }
	__asm { add esp, 4 }
	__asm { L_005dba2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e136b4[];
extern "C" void fn_009846a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005dba40
extern "C" __declspec(naked) void asm_005dba40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0dfe8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe181e4 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005dba7d }
	__asm { push eax }
	__asm { call dword ptr [g_00e136b4] }
	__asm { add esp, 4 }
	__asm { L_005dba7d: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009846a0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005dbaa1 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005dbaa1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005dbac0
extern "C" __declspec(naked) void asm_005dbac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { test esi, esi }
	__asm { jne L_005dbaea }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005dbaea: }
	__asm { cmp esi, 0x30c30c3 }
	__asm { jbe L_005dbafd }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_005dbafd: }
	__asm { imul esi, esi, 0x54 }
	__asm { push esi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_005dbb1f }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005dbb1f: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" char g_00e136b0[];
extern "C" void fn_005dbeb0();
// FUNCTION: ROBLOXSTUDIO 0x005dbf10
extern "C" __declspec(naked) void asm_005dbf10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_005dbf52 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_005dbf31: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_005dbeb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 8] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_005dbf31 }
	__asm { pop edi }
	__asm { L_005dbf52: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e13688[];
extern "C" char g_00e136b0[];
extern "C" char g_00e136b8[];
// FUNCTION: ROBLOXSTUDIO 0x005dc0e0
extern "C" __declspec(naked) void asm_005dc0e0()
{
	__asm { L_005dc0e0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_005dc13f }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e13688] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_005dc105: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e136b8] }
	__asm { sub eax, 9 }
	__asm { je L_005dc121 }
	__asm { dec eax }
	__asm { jne L_005dc126 }
	__asm { push edi }
	__asm { push esi }
	__asm { call L_005dc0e0 }
	__asm { add esp, 8 }
	__asm { jmp L_005dc126 }
	__asm { L_005dc121: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call ebx }
	__asm { L_005dc126: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 8] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_005dc105 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_005dc13f: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e136b0[];
extern "C" void fn_005dc1c0();
// FUNCTION: ROBLOXSTUDIO 0x005dc220
extern "C" __declspec(naked) void asm_005dc220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_005dc262 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_005dc241: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_005dc1c0 }
	__asm { add esp, 8 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 8] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_005dc241 }
	__asm { pop edi }
	__asm { L_005dc262: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e136b0[];
extern "C" void fn_005dc270();
// FUNCTION: ROBLOXSTUDIO 0x005dc2d0
extern "C" __declspec(naked) void asm_005dc2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_005dc312 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_005dc2f1: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_005dc270 }
	__asm { add esp, 8 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 8] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_005dc2f1 }
	__asm { pop edi }
	__asm { L_005dc312: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005db520();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005dca50
extern "C" __declspec(naked) void asm_005dca50()
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
	__asm { push 0x30 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005dca9b }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_005db520 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005dca9b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004115f0();
extern "C" void fn_00984650();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005dcab0
extern "C" __declspec(naked) void asm_005dcab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e0de }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x30 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_005dcb22 }
	__asm { mov ecx, esi }
	__asm { call fn_00984650 }
	__asm { mov dword ptr [esi], 0xe181e4 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], esi }
	__asm { push 0x5dce60 }
	__asm { push 0x12d9744 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005dcb22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b7370();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005dcba0
extern "C" __declspec(naked) void asm_005dcba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e0f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test esi, esi }
	__asm { je L_005dcc09 }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b7370 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_005dcbed }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005dcbed: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov word ptr [esi], ax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005dcc09: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e136b0[];
extern "C" void fn_005dcc20();
// FUNCTION: ROBLOXSTUDIO 0x005dcc70
extern "C" __declspec(naked) void asm_005dcc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_005dccb2 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_005dcc91: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_005dcc20 }
	__asm { add esp, 8 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 8] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_005dcc91 }
	__asm { pop edi }
	__asm { L_005dccb2: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005dd3c1();
extern "C" void fn_008be480();
// FUNCTION: ROBLOXSTUDIO 0x005dd200
extern "C" __declspec(naked) void asm_005dd200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e1c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x70 }
	__asm { push 0x100dc20 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_008be480 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x54], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je fn_005dd3c1 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" char g_00e105d8[];
extern "C" char g_011d6030[];
extern "C" void fn_004038a0();
extern "C" void fn_0042d740();
extern "C" void fn_005dd200();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005dd3e0
extern "C" __declspec(naked) void asm_005dd3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { cmp dword ptr [g_011d6030], 0 }
	__asm { je L_005dd463 }
	__asm { push 0xe1831c }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x11d6020 }
	__asm { push eax }
	__asm { call fn_0042d740 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_005dd40d }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_005dd40d: }
	__asm { push eax }
	__asm { call dword ptr [g_00e105d8] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { jb L_005dd428 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005dd428: }
	__asm { push 0xe18324 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x11d6020 }
	__asm { push eax }
	__asm { call fn_0042d740 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_005dd446 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_005dd446: }
	__asm { push eax }
	__asm { call dword ptr [g_00e105d8] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { jb L_005dd468 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_005dd468 }
	__asm { L_005dd463: }
	__asm { call fn_005dd200 }
	__asm { L_005dd468: }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, 0x11d6020 }
	__asm { call fn_004038a0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b4880();
// FUNCTION: ROBLOXSTUDIO 0x005ddd80
extern "C" __declspec(naked) void asm_005ddd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e259 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edx, edx }
	__asm { je L_005dddf4 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { push edi }
	__asm { cmp ecx, 8 }
	__asm { jb L_005dddd9 }
	__asm { mov edi, dword ptr [eax] }
	__asm { jmp L_005ddddb }
	__asm { L_005dddd9: }
	__asm { mov edi, eax }
	__asm { L_005ddddb: }
	__asm { cmp ecx, 8 }
	__asm { jb L_005ddde2 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_005ddde2: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edi + edx*2] }
	__asm { push esi }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_006b4880 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { L_005dddf4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005dd6b0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x005dde40
extern "C" __declspec(naked) void asm_005dde40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x11d6054 }
	__asm { push 0x11d6038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { push 0 }
	__asm { push 0x11d6054 }
	__asm { push 0x11d6038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x28 }
	__asm { test esi, esi }
	__asm { je L_005dde8f }
	__asm { test eax, eax }
	__asm { je L_005dde8f }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_005dd6b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005dde8f: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e136b0[];
extern "C" char g_00e136b8[];
extern "C" void fn_005ddea0();
// FUNCTION: ROBLOXSTUDIO 0x005de720
extern "C" __declspec(naked) void asm_005de720()
{
	__asm { L_005de720: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_005de786 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { L_005de742: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e136b8] }
	__asm { sub eax, 9 }
	__asm { je L_005de75f }
	__asm { dec eax }
	__asm { jne L_005de76d }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call L_005de720 }
	__asm { jmp L_005de76a }
	__asm { L_005de75f: }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005ddea0 }
	__asm { L_005de76a: }
	__asm { add esp, 0x10 }
	__asm { L_005de76d: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e136b0] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 8] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jne L_005de742 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_005de786: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005dda70();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x005de790
extern "C" __declspec(naked) void asm_005de790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x11d6054 }
	__asm { push 0x11d6038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { push 0 }
	__asm { push 0x11d6054 }
	__asm { push 0x11d6038 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x28 }
	__asm { test esi, esi }
	__asm { je L_005de7df }
	__asm { test eax, eax }
	__asm { je L_005de7df }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_005dda70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005de7df: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005df460
extern "C" __declspec(naked) void asm_005df460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test dl, dl }
	__asm { je L_005df4b0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [edi + 0xc] }
	__asm { je L_005df4b0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005df49f }
	__asm { push 0xc3 }
	__asm { push 0xe185a0 }
	__asm { push 0xe18700 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005df4b0 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_005df49f: }
	__asm { movzx eax, dl }
	__asm { push 0xe18720 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005df4b0: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { shr eax, 4 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push edx }
	__asm { call dword ptr [ecx + 0x178] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { shr eax, 4 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { call dword ptr [edx + 0x1b4] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005e0510();
// FUNCTION: ROBLOXSTUDIO 0x005df5a0
extern "C" __declspec(naked) void asm_005df5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov eax, edx }
	__asm { mov edi, ecx }
	__asm { and eax, 1 }
	__asm { mov ecx, 1 }
	__asm { cmovne esi, ecx }
	__asm { test dl, 2 }
	__asm { je L_005df5c1 }
	__asm { or esi, 2 }
	__asm { L_005df5c1: }
	__asm { test dl, 4 }
	__asm { je L_005df5c9 }
	__asm { or esi, 4 }
	__asm { L_005df5c9: }
	__asm { test eax, eax }
	__asm { je L_005df5dc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_005e0510 }
	__asm { add esp, 4 }
	__asm { mov edx, eax }
	__asm { jmp L_005df5de }
	__asm { L_005df5dc: }
	__asm { xor edx, edx }
	__asm { L_005df5de: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push edx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0xac] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_005e0510();
// FUNCTION: ROBLOXSTUDIO 0x005e03e0
extern "C" __declspec(naked) void asm_005e03e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { jne L_005e042e }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [esi] }
	__asm { call fn_005e0510 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x3c }
	__asm { push esi }
	__asm { call dword ptr [edi + 0xe4] }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push 3 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x10c] }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push 3 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 6 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x10c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_005e042e: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00513a40();
// FUNCTION: ROBLOXSTUDIO 0x005e0680
extern "C" __declspec(naked) void asm_005e0680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_005e06bf }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_005e06a8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_005e06a8: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_005e06bf }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_005e06c4 }
	__asm { L_005e06bf: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_005e06c4: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jne L_005e06d4 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e06d4: }
	__asm { add eax, 0x28 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0060f500();
// FUNCTION: ROBLOXSTUDIO 0x005e07b0
extern "C" __declspec(naked) void asm_005e07b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e30a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe191a4 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_005e07f0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { L_005e07f0: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f500 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e31d0();
extern "C" void fn_005e58e0();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e1800
extern "C" __declspec(naked) void asm_005e1800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e4ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [esi + 0x1d], 0 }
	__asm { jne L_005e184a }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0xe19998 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e184a: }
	__asm { push 0x44 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e186f }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { push esi }
	__asm { call fn_005e58e0 }
	__asm { jmp L_005e1871 }
	__asm { L_005e186f: }
	__asm { xor eax, eax }
	__asm { L_005e1871: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005e31d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005e2730();
extern "C" void fn_005e5ae0();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e18a0
extern "C" __declspec(naked) void asm_005e18a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e4c3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [esi + 0x1d], 0 }
	__asm { jne L_005e18ea }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0xe19998 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e18ea: }
	__asm { push 0x3c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e190f }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { push esi }
	__asm { call fn_005e5ae0 }
	__asm { jmp L_005e1911 }
	__asm { L_005e190f: }
	__asm { xor eax, eax }
	__asm { L_005e1911: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005e2730 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005e2c80();
extern "C" void fn_005e5cb0();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e1940
extern "C" __declspec(naked) void asm_005e1940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e4d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [esi + 0x1d], 0 }
	__asm { jne L_005e198a }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0xe19998 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e198a: }
	__asm { push 0x38 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e19b2 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005e5cb0 }
	__asm { jmp L_005e19b4 }
	__asm { L_005e19b2: }
	__asm { xor eax, eax }
	__asm { L_005e19b4: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005e2c80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_005e2db0();
extern "C" void fn_005e67d0();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e19e0
extern "C" __declspec(naked) void asm_005e19e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e4ed }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [esi + 0x1e], 0 }
	__asm { jne L_005e1a2a }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0xe199ac }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e1a2a: }
	__asm { push 0x38 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e1a4c }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_005e67d0 }
	__asm { jmp L_005e1a4e }
	__asm { L_005e1a4c: }
	__asm { xor eax, eax }
	__asm { L_005e1a4e: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005e2db0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005e2f70();
extern "C" void fn_005e4ee0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e1a80
extern "C" __declspec(naked) void asm_005e1a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e502 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x38 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e1ad0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005e4ee0 }
	__asm { jmp L_005e1ad2 }
	__asm { L_005e1ad0: }
	__asm { xor eax, eax }
	__asm { L_005e1ad2: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005e2f70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_005e2ac0();
extern "C" void fn_005e5170();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e1b00
extern "C" __declspec(naked) void asm_005e1b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e517 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x38 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e1b50 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005e5170 }
	__asm { jmp L_005e1b52 }
	__asm { L_005e1b50: }
	__asm { xor eax, eax }
	__asm { L_005e1b52: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005e2ac0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_005e30a0();
extern "C" void fn_005e4bf0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e1b80
extern "C" __declspec(naked) void asm_005e1b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e52c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x38 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e1bca }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { push esi }
	__asm { call fn_005e4bf0 }
	__asm { jmp L_005e1bcc }
	__asm { L_005e1bca: }
	__asm { xor eax, eax }
	__asm { L_005e1bcc: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005e30a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005e38d0();
extern "C" void fn_005e9300();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e1bf0
extern "C" __declspec(naked) void asm_005e1bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e54c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x60 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e1c4c }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005e9300 }
	__asm { jmp L_005e1c4e }
	__asm { L_005e1c4c: }
	__asm { xor eax, eax }
	__asm { L_005e1c4e: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ecx], 0 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_005e38d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_005e3bd0();
extern "C" void fn_005e49f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e1c90
extern "C" __declspec(naked) void asm_005e1c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e561 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x48 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e1ce3 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005e3bd0 }
	__asm { jmp L_005e1ce5 }
	__asm { L_005e1ce3: }
	__asm { xor eax, eax }
	__asm { L_005e1ce5: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005e49f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_005e2990();
extern "C" void fn_005e53e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e1d10
extern "C" __declspec(naked) void asm_005e1d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e576 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x48 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e1d63 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005e53e0 }
	__asm { jmp L_005e1d65 }
	__asm { L_005e1d63: }
	__asm { xor eax, eax }
	__asm { L_005e1d65: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005e2990 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_005e2860();
extern "C" void fn_005e40f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e1d90
extern "C" __declspec(naked) void asm_005e1d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e58b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x48 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e1ddd }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005e40f0 }
	__asm { jmp L_005e1ddf }
	__asm { L_005e1ddd: }
	__asm { xor eax, eax }
	__asm { L_005e1ddf: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005e2860 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_005e3940();
extern "C" void fn_005eb770();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x005e2130
extern "C" __declspec(naked) void asm_005e2130()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { test ecx, ecx }
	__asm { je L_005e2147 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e2147: }
	__asm { mov ecx, esi }
	__asm { call fn_005eb770 }
	__asm { cmp dword ptr [esi + 0x70], 0 }
	__asm { lea ecx, [esi + 0x70] }
	__asm { pop esi }
	__asm { je L_005e215f }
	__asm { push 0 }
	__asm { call fn_005e3940 }
	__asm { L_005e215f: }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x38 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf6804 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 8], 0x16 }
	__asm { mov dword ptr [esi + 0xc], 1 }
	__asm { mov dword ptr [esi + 0x18], 1 }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { mov dword ptr [esi + 0x20], 1 }
	__asm { mov dword ptr [esi + 0x24], 1 }
	__asm { mov dword ptr [esi + 0x28], 0x4b }
	__asm { mov dword ptr [esi + 0x34], 0x80000000 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e27d0
extern "C" __declspec(naked) void asm_005e27d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e5b0 }
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
	__asm { je L_005e2828 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe19be0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005e282a }
	__asm { L_005e2828: }
	__asm { xor eax, eax }
	__asm { L_005e282a: }
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
	__asm { je L_005e284e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e284e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e2900
extern "C" __declspec(naked) void asm_005e2900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e5c0 }
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
	__asm { je L_005e2958 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe19cb8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005e295a }
	__asm { L_005e2958: }
	__asm { xor eax, eax }
	__asm { L_005e295a: }
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
	__asm { je L_005e297e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e297e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e2a30
extern "C" __declspec(naked) void asm_005e2a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e5d0 }
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
	__asm { je L_005e2a88 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe19ca0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005e2a8a }
	__asm { L_005e2a88: }
	__asm { xor eax, eax }
	__asm { L_005e2a8a: }
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
	__asm { je L_005e2aae }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e2aae: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e2b60
extern "C" __declspec(naked) void asm_005e2b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e5e0 }
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
	__asm { je L_005e2bb8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe19c40 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005e2bba }
	__asm { L_005e2bb8: }
	__asm { xor eax, eax }
	__asm { L_005e2bba: }
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
	__asm { je L_005e2bde }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e2bde: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e2bf0
extern "C" __declspec(naked) void asm_005e2bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e5f0 }
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
	__asm { je L_005e2c48 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe19c88 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005e2c4a }
	__asm { L_005e2c48: }
	__asm { xor eax, eax }
	__asm { L_005e2c4a: }
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
	__asm { je L_005e2c6e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e2c6e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e2d20
extern "C" __declspec(naked) void asm_005e2d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e600 }
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
	__asm { je L_005e2d78 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe19bf8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005e2d7a }
	__asm { L_005e2d78: }
	__asm { xor eax, eax }
	__asm { L_005e2d7a: }
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
	__asm { je L_005e2d9e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e2d9e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e2e50
extern "C" __declspec(naked) void asm_005e2e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e610 }
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
	__asm { je L_005e2ea8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe19c10 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005e2eaa }
	__asm { L_005e2ea8: }
	__asm { xor eax, eax }
	__asm { L_005e2eaa: }
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
	__asm { je L_005e2ece }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e2ece: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e2ee0
extern "C" __declspec(naked) void asm_005e2ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e620 }
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
	__asm { je L_005e2f38 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe19c70 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005e2f3a }
	__asm { L_005e2f38: }
	__asm { xor eax, eax }
	__asm { L_005e2f3a: }
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
	__asm { je L_005e2f5e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e2f5e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e3010
extern "C" __declspec(naked) void asm_005e3010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e630 }
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
	__asm { je L_005e3068 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe19c28 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005e306a }
	__asm { L_005e3068: }
	__asm { xor eax, eax }
	__asm { L_005e306a: }
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
	__asm { je L_005e308e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e308e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e3140
extern "C" __declspec(naked) void asm_005e3140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e640 }
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
	__asm { je L_005e3198 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe19c58 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005e319a }
	__asm { L_005e3198: }
	__asm { xor eax, eax }
	__asm { L_005e319a: }
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
	__asm { je L_005e31be }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e31be: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e3270
extern "C" __declspec(naked) void asm_005e3270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e650 }
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
	__asm { je L_005e32c8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe19bc8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_005e32ca }
	__asm { L_005e32c8: }
	__asm { xor eax, eax }
	__asm { L_005e32ca: }
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
	__asm { je L_005e32ee }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e32ee: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x005e3940
extern "C" __declspec(naked) void asm_005e3940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0e688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { sub esp, 0xc }
	__asm { test edx, edx }
	__asm { jne L_005e398c }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_005e398c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 8] }
	__asm { and edx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0060f500();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e39e0
extern "C" __declspec(naked) void asm_005e39e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e6a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe191a4 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_005e3a20 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { L_005e3a20: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f500 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005e3a3d }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e3a3d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005ebb10();
// FUNCTION: ROBLOXSTUDIO 0x005e4fa0
extern "C" __declspec(naked) void asm_005e4fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e816 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe1a9d0 }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_005e4fd9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e4fd9: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005ebb10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012d97c4[];
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x005e5000
extern "C" __declspec(naked) void asm_005e5000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [ebx + 0x30] }
	__asm { mov esi, dword ptr [ebx + 0x34] }
	__asm { lea eax, [eax + edx*2] }
	__asm { mov edi, dword ptr [esi] }
	__asm { push dword ptr [eax*4 + 0xe1a99c] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call dword ptr [edi + 0x2c] }
	__asm { test eax, eax }
	__asm { js L_005e5037 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005e5037: }
	__asm { mov cl, byte ptr [g_012d97c4] }
	__asm { test cl, cl }
	__asm { je L_005e505d }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { imul eax, dword ptr [ebx + 0x28] }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe1ab70 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_005e505d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005ebb10();
// FUNCTION: ROBLOXSTUDIO 0x005e5210
extern "C" __declspec(naked) void asm_005e5210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e83a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe1a9ec }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_005e5249 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e5249: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005ebb10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012d97c4[];
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x005e5270
extern "C" __declspec(naked) void asm_005e5270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [ebx + 0x30] }
	__asm { mov esi, dword ptr [ebx + 0x34] }
	__asm { lea eax, [eax + edx*2] }
	__asm { mov edi, dword ptr [esi] }
	__asm { push dword ptr [eax*4 + 0xe1a99c] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call dword ptr [edi + 0x2c] }
	__asm { test eax, eax }
	__asm { js L_005e52a7 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005e52a7: }
	__asm { mov cl, byte ptr [g_012d97c4] }
	__asm { test cl, cl }
	__asm { je L_005e52cd }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { imul eax, dword ptr [ebx + 0x28] }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe1ac64 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_005e52cd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e5560
extern "C" __declspec(naked) void asm_005e5560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push 0 }
	__asm { lea esi, [ebp - 4] }
	__asm { push esi }
	__asm { push dword ptr [eax*8 + 0xe1a98c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { push dword ptr [eax*8 + 0xe1a990] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { imul eax, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call dword ptr [edx + 0x68] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { js L_005e55a4 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e55a4: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xe1aa14 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e55d0
extern "C" __declspec(naked) void asm_005e55d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [edx*8 + 0xe1a98c] }
	__asm { xor eax, eax }
	__asm { cmp ecx, 2 }
	__asm { setne al }
	__asm { imul ecx, dword ptr [ebp + 0x10] }
	__asm { add eax, 0x65 }
	__asm { push eax }
	__asm { push dword ptr [edx*8 + 0xe1a990] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push ecx }
	__asm { push esi }
	__asm { call dword ptr [edi + 0x6c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { js L_005e5620 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e5620: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xe1aa38 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_005df3d0();
extern "C" void fn_005ebbb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e5720
extern "C" __declspec(naked) void asm_005e5720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e868 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe1aa08 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { call fn_005df3d0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005ebbb0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005e5774 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e5774: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005ebb10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e5790
extern "C" __declspec(naked) void asm_005e5790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f168 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe1a9ec }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_005e57c9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e57c9: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005ebb10 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005e57e6 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e57e6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005ebb10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e5800
extern "C" __declspec(naked) void asm_005e5800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f168 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe1a9d0 }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_005e5839 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e5839: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005ebb10 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005e5856 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e5856: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005df3c0();
extern "C" void fn_005eba70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e5870
extern "C" __declspec(naked) void asm_005e5870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e888 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe1a9c0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { call fn_005df3c0 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { call dword ptr [ecx + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005eba70 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005e58cd }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e58cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005e8b70();
extern "C" void fn_0060f690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e5980
extern "C" __declspec(naked) void asm_005e5980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e8d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe1ad78 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_005e59e9 }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { lea ecx, [edi + 0x38] }
	__asm { push eax }
	__asm { call fn_005e8b70 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { L_005e59e9: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f690 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e8b70();
extern "C" void fn_0060f6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e5b70
extern "C" __declspec(naked) void asm_005e5b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e91c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe1ad8c }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { test eax, eax }
	__asm { je L_005e5bd9 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { lea ecx, [edi + 0x30] }
	__asm { push eax }
	__asm { call fn_005e8b70 }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { L_005e5bd9: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f6c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e80a0();
extern "C" void fn_005e9120();
// FUNCTION: ROBLOXSTUDIO 0x005e6eb0
extern "C" __declspec(naked) void asm_005e6eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, esi }
	__asm { je L_005e6ef7 }
	__asm { L_005e6ec6: }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { je L_005e6ee6 }
	__asm { add eax, 0x24 }
	__asm { cmp eax, esi }
	__asm { jne L_005e6ec6 }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_005e9120 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e6ee6: }
	__asm { cmp eax, esi }
	__asm { je L_005e6ef7 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_005e80a0 }
	__asm { add esp, 0xc }
	__asm { L_005e6ef7: }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_005e9120 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x005e76f0
extern "C" __declspec(naked) void asm_005e76f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea edi, [ebx + 4] }
	__asm { mov dword ptr [ebx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_005e7730 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_005e773a }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_005e773a }
	__asm { L_005e7730: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_005e773a: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x005e8050
extern "C" __declspec(naked) void asm_005e8050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, ebx }
	__asm { je L_005e8096 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { L_005e8063: }
	__asm { cmp edi, esi }
	__asm { je L_005e8073 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_005e8073: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], ecx }
	__asm { add esi, 0x24 }
	__asm { add edi, 0x24 }
	__asm { cmp esi, ebx }
	__asm { jne L_005e8063 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e8096: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}
