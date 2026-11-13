// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00abd420();
// FUNCTION: ROBLOXSTUDIO 0x00ab8520
extern "C" __declspec(naked) void asm_00ab8520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4eb28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ab85ad }
	__asm { add esi, 5 }
	__asm { je L_00ab8575 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab8577 }
	__asm { L_00ab8575: }
	__asm { xor esi, esi }
	__asm { L_00ab8577: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab85a7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab85a7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ab85ad }
	__asm { L_00ab85a7: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ab85ad: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00abd420 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ab85fc }
	__asm { add esi, 5 }
	__asm { je L_00ab85d2 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab85d4 }
	__asm { L_00ab85d2: }
	__asm { xor esi, esi }
	__asm { L_00ab85d4: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab85fc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab85fc }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ab85fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00abd7b0();
// FUNCTION: ROBLOXSTUDIO 0x00ab8610
extern "C" __declspec(naked) void asm_00ab8610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4eb58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ab869d }
	__asm { add esi, 5 }
	__asm { je L_00ab8665 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab8667 }
	__asm { L_00ab8665: }
	__asm { xor esi, esi }
	__asm { L_00ab8667: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8697 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8697 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ab869d }
	__asm { L_00ab8697: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ab869d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00abd7b0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ab86ec }
	__asm { add esi, 5 }
	__asm { je L_00ab86c2 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab86c4 }
	__asm { L_00ab86c2: }
	__asm { xor esi, esi }
	__asm { L_00ab86c4: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab86ec }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab86ec }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ab86ec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00abdb40();
// FUNCTION: ROBLOXSTUDIO 0x00ab8700
extern "C" __declspec(naked) void asm_00ab8700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4eb88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ab878d }
	__asm { add esi, 5 }
	__asm { je L_00ab8755 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab8757 }
	__asm { L_00ab8755: }
	__asm { xor esi, esi }
	__asm { L_00ab8757: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8787 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8787 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ab878d }
	__asm { L_00ab8787: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ab878d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00abdb40 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ab87dc }
	__asm { add esi, 5 }
	__asm { je L_00ab87b2 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab87b4 }
	__asm { L_00ab87b2: }
	__asm { xor esi, esi }
	__asm { L_00ab87b4: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab87dc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab87dc }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ab87dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00abded0();
// FUNCTION: ROBLOXSTUDIO 0x00ab87f0
extern "C" __declspec(naked) void asm_00ab87f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ebb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ab887d }
	__asm { add esi, 5 }
	__asm { je L_00ab8845 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab8847 }
	__asm { L_00ab8845: }
	__asm { xor esi, esi }
	__asm { L_00ab8847: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8877 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8877 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ab887d }
	__asm { L_00ab8877: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ab887d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00abded0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ab88cc }
	__asm { add esi, 5 }
	__asm { je L_00ab88a2 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab88a4 }
	__asm { L_00ab88a2: }
	__asm { xor esi, esi }
	__asm { L_00ab88a4: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab88cc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab88cc }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ab88cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00abe260();
// FUNCTION: ROBLOXSTUDIO 0x00ab88e0
extern "C" __declspec(naked) void asm_00ab88e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ebe8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ab896d }
	__asm { add esi, 5 }
	__asm { je L_00ab8935 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab8937 }
	__asm { L_00ab8935: }
	__asm { xor esi, esi }
	__asm { L_00ab8937: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8967 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8967 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ab896d }
	__asm { L_00ab8967: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ab896d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00abe260 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ab89bc }
	__asm { add esi, 5 }
	__asm { je L_00ab8992 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab8994 }
	__asm { L_00ab8992: }
	__asm { xor esi, esi }
	__asm { L_00ab8994: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab89bc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab89bc }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ab89bc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00abe5f0();
// FUNCTION: ROBLOXSTUDIO 0x00ab89d0
extern "C" __declspec(naked) void asm_00ab89d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ec18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ab8a5d }
	__asm { add esi, 5 }
	__asm { je L_00ab8a25 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab8a27 }
	__asm { L_00ab8a25: }
	__asm { xor esi, esi }
	__asm { L_00ab8a27: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8a57 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8a57 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ab8a5d }
	__asm { L_00ab8a57: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ab8a5d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00abe5f0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ab8aac }
	__asm { add esi, 5 }
	__asm { je L_00ab8a82 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab8a84 }
	__asm { L_00ab8a82: }
	__asm { xor esi, esi }
	__asm { L_00ab8a84: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8aac }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8aac }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ab8aac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00abe980();
// FUNCTION: ROBLOXSTUDIO 0x00ab8ac0
extern "C" __declspec(naked) void asm_00ab8ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ec48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ab8b4d }
	__asm { add esi, 5 }
	__asm { je L_00ab8b15 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab8b17 }
	__asm { L_00ab8b15: }
	__asm { xor esi, esi }
	__asm { L_00ab8b17: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8b47 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8b47 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ab8b4d }
	__asm { L_00ab8b47: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ab8b4d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00abe980 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ab8b9c }
	__asm { add esi, 5 }
	__asm { je L_00ab8b72 }
	__asm { add esi, -5 }
	__asm { jmp L_00ab8b74 }
	__asm { L_00ab8b72: }
	__asm { xor esi, esi }
	__asm { L_00ab8b74: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8b9c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ab8b9c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ab8b9c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00abc7f0
extern "C" __declspec(naked) void asm_00abc7f0()
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
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5d30 }
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
	__asm { je L_00abc891 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abc891: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abc8a8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abc8a8: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00abc8c8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abc8c8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00abc8e0
extern "C" __declspec(naked) void asm_00abc8e0()
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
	__asm { call fn_007d5390 }
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
	__asm { je L_00abc981 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abc981: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abc998 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abc998: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00abc9b8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abc9b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5710();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00abc9d0
extern "C" __declspec(naked) void asm_00abc9d0()
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
	__asm { call fn_007d5710 }
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
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5d30 }
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
	__asm { je L_00abca71 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abca71: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00abca88 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abca88: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00abcaa8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abcaa8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00abcbf0
extern "C" __declspec(naked) void asm_00abcbf0()
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
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5710 }
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
	__asm { call fn_007d5550 }
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
	__asm { je L_00abcc6d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abcc6d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00abcc87 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abcc87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007e9140();
extern "C" void fn_00824ff0();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00abcca0
extern "C" __declspec(naked) void asm_00abcca0()
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
	__asm { call fn_00824ff0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5390 }
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
	__asm { call fn_007e9140 }
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
	__asm { je L_00abcd1d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abcd1d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00abcd37 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00abcd37: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_0057db00();
extern "C" void fn_00abcd50();
// FUNCTION: ROBLOXSTUDIO 0x00abeee0
extern "C" __declspec(naked) void asm_00abeee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { jne L_00abeef7 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00abeef7: }
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
	__asm { je L_00abef58 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00abef58 }
	__asm { L_00abef28: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 0x28] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_00abef58 }
	__asm { cmp esi, ebx }
	__asm { jne L_00abef50 }
	__asm { test ecx, ecx }
	__asm { je L_00abef47 }
	__asm { lea eax, [ecx - 0x28] }
	__asm { jmp L_00abef49 }
	__asm { L_00abef47: }
	__asm { xor eax, eax }
	__asm { L_00abef49: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { cmp edx, dword ptr [eax] }
	__asm { je L_00abef63 }
	__asm { L_00abef50: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_00abef28 }
	__asm { L_00abef58: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00abef63: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00abef6e }
	__asm { add eax, -0x28 }
	__asm { jmp L_00abef70 }
	__asm { L_00abef6e: }
	__asm { xor eax, eax }
	__asm { L_00abef70: }
	__asm { push dword ptr [eax + 0x28] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { call fn_00abcd50 }
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

extern "C" void fn_0079ae50();
extern "C" void fn_0083e550();
extern "C" void fn_0083f500();
// FUNCTION: ROBLOXSTUDIO 0x00abefa0
extern "C" __declspec(naked) void asm_00abefa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x38] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0083f500 }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0083e550 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ebx, eax }
	__asm { call fn_0079ae50 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x24 }
	__asm { mov esi, eax }
	__asm { test ecx, ecx }
	__asm { je L_00abeff7 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { add ecx, -0x1c }
	__asm { add ecx, dword ptr [edi + 0x2c] }
	__asm { push ebx }
	__asm { push esi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00abeff7: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { push ebx }
	__asm { xor ecx, ecx }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push esi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_0078a6b0();
extern "C" void fn_0079af60();
extern "C" void fn_0083e550();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00abf010
extern "C" __declspec(naked) void asm_00abf010()
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
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x38] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_0079af60 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x34] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_0083e550 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x28 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00abf07a }
	__asm { add ebx, -0x1c }
	__asm { jmp L_00abf07c }
	__asm { L_00abf07a: }
	__asm { xor ebx, ebx }
	__asm { L_00abf07c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { sub esp, 0x18 }
	__asm { mov esi, dword ptr [esi + 0x2c] }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebx + esi] }
	__asm { call edi }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00abf0c1 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00abf0c1: }
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
extern "C" void fn_009aa3e0();
extern "C" void fn_00ac6360();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00abfd20
extern "C" __declspec(naked) void asm_00abfd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4f3b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add ecx, esi }
	__asm { call fn_009aa3e0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_00abfdb7 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00abfdb7: }
	__asm { test esi, esi }
	__asm { je L_00abfdc0 }
	__asm { add esi, 0x1c }
	__asm { jmp L_00abfdc2 }
	__asm { L_00abfdc0: }
	__asm { xor esi, esi }
	__asm { L_00abfdc2: }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ac6360 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00abfe04 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00abfe04: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410bb0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_00ab9bd0();
// FUNCTION: ROBLOXSTUDIO 0x00ac00b0
extern "C" __declspec(naked) void asm_00ac00b0()
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
	__asm { je L_00ac012f }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_00ac012f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac011e }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac012f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00ac011e: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac012f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ac013b }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00ac013d }
	__asm { L_00ac013b: }
	__asm { xor edi, edi }
	__asm { L_00ac013d: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00ab9bd0 }
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
extern "C" void fn_00410bb0();
extern "C" void fn_00412300();
extern "C" void fn_006b9740();
extern "C" void fn_00ab9cf0();
// FUNCTION: ROBLOXSTUDIO 0x00ac01a0
extern "C" __declspec(naked) void asm_00ac01a0()
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
	__asm { je L_00ac020a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00ac020a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac01f9 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac020a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00ac01f9: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac020a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ac0216 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_00ac0218 }
	__asm { L_00ac0216: }
	__asm { xor ebx, ebx }
	__asm { L_00ac0218: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, ebx }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_00ab9cf0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410bb0();
extern "C" void fn_00412300();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_00ab9dc0();
// FUNCTION: ROBLOXSTUDIO 0x00ac0310
extern "C" __declspec(naked) void asm_00ac0310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_00ac037a }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00ac037a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac0369 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac037a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00ac0369: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac037a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ac0386 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00ac0388 }
	__asm { L_00ac0386: }
	__asm { xor edi, edi }
	__asm { L_00ac0388: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { add eax, 0x48 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_00ab9dc0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410bb0();
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_00ab9ef0();
// FUNCTION: ROBLOXSTUDIO 0x00ac03e0
extern "C" __declspec(naked) void asm_00ac03e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3df48 }
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
	__asm { je L_00ac045f }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00ac045f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac044e }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac045f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00ac044e: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac045f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ac046b }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00ac046d }
	__asm { L_00ac046b: }
	__asm { xor edi, edi }
	__asm { L_00ac046d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 0x44 }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { push eax }
	__asm { call fn_004d1ca0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00ab9ef0 }
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
extern "C" void fn_00410bb0();
extern "C" void fn_00412300();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_007df080();
extern "C" void fn_00aba040();
// FUNCTION: ROBLOXSTUDIO 0x00ac0580
extern "C" __declspec(naked) void asm_00ac0580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_00ac05ea }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 4 }
	__asm { je L_00ac05ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac05d9 }
	__asm { push 0x18a }
	__asm { push 0xe52268 }
	__asm { push 0xe636c0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac05ea }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00ac05d9: }
	__asm { movzx eax, bl }
	__asm { push 0xe636d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac05ea: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ac05f6 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00ac05f8 }
	__asm { L_00ac05f6: }
	__asm { xor edi, edi }
	__asm { L_00ac05f8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0xd0 }
	__asm { push eax }
	__asm { call fn_007df080 }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { add eax, 0x48 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_00aba040 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410bb0();
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_00aba170();
// FUNCTION: ROBLOXSTUDIO 0x00ac0660
extern "C" __declspec(naked) void asm_00ac0660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd64a40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_00ac06e1 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 4 }
	__asm { je L_00ac06e1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac06d0 }
	__asm { push 0x18a }
	__asm { push 0xe52268 }
	__asm { push 0xe636c0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac06e1 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00ac06d0: }
	__asm { movzx eax, bl }
	__asm { push 0xe636d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac06e1: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ac06ed }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00ac06ef }
	__asm { L_00ac06ed: }
	__asm { xor edi, edi }
	__asm { L_00ac06ef: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0xd0 }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 0x88 }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { push eax }
	__asm { call fn_004d1ca0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004d1ca0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aba170 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410d50();
extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00ac62a0
extern "C" __declspec(naked) void asm_00ac62a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { call fn_00410d50 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ac6360
extern "C" __declspec(naked) void asm_00ac6360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0048e3f0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { call fn_004124c0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00426f50 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00ac6421 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ac6421: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00ab1800();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x00ac70a0
extern "C" __declspec(naked) void asm_00ac70a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00ac7145 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00ac70fb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac70e6 }
	__asm { push 0x261 }
	__asm { push 0xeba330 }
	__asm { push 0xe7e808 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac70fb }
	__asm { L_00ac70e6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeba9c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac70fb: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ac7145 }
	__asm { cmp byte ptr [esi + 0xcc], 0 }
	__asm { je L_00ac7145 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ac7134 }
	__asm { push 0x262 }
	__asm { push 0xeba330 }
	__asm { push 0xebaa50 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac7145 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ac7134: }
	__asm { movzx eax, al }
	__asm { push 0xebaa70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac7145: }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea ecx, [esi + 0x138] }
	__asm { push 0xaba450 }
	__asm { mov byte ptr [esi + 0xcc], 0 }
	__asm { call fn_00ab1800 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012ef494[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00810a90();
extern "C" void fn_00ac77f0();
extern "C" void fn_00ac7850();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ac7420
extern "C" __declspec(naked) void asm_00ac7420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fab6 }
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
	__asm { call fn_00ac77f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012ef494] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00ac74df }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef494], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebb1bc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a90 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef368 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00ac74df: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ef368 }
	__asm { call fn_00ac7850 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebb628 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ac755d }
	__asm { push 0x1270770 }
	__asm { mov ecx, 0x1270770 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ac755d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac7548 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac755d }
	__asm { L_00ac7548: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac755d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012e4d94[];
extern "C" char g_012ef5c4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00812d10();
extern "C" void fn_00ac7960();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ac7570
extern "C" __declspec(naked) void asm_00ac7570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fad6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00ac7960 }
	__asm { mov dword ptr [esi], 0xebb3dc }
	__asm { mov dword ptr [esi + 4], 0xebb478 }
	__asm { mov dword ptr [esi + 0x18], 0xebb480 }
	__asm { mov dword ptr [esi + 0x1c], 0xebb48c }
	__asm { mov dword ptr [esi + 0x64], 0xebb49c }
	__asm { mov dword ptr [esi + 0x68], 0xebb4a4 }
	__asm { mov dword ptr [esi + 0xdc], 0xebb4d8 }
	__asm { mov eax, dword ptr [g_012ef5c4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00ac7620 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef5c4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebb1c8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00812d10 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef498 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00ac7620: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ef498 }
	__asm { inc dword ptr [g_012e4d94] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4da0[];
extern "C" char g_012ef494[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a90();
extern "C" void fn_00b0d680();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ac7640
extern "C" __declspec(naked) void asm_00ac7640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4faf6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b0d680 }
	__asm { mov dword ptr [esi], 0xebb1d4 }
	__asm { mov dword ptr [esi + 4], 0xebb270 }
	__asm { mov dword ptr [esi + 0x18], 0xebb278 }
	__asm { mov dword ptr [esi + 0x1c], 0xebb284 }
	__asm { mov dword ptr [esi + 0x64], 0xebb294 }
	__asm { mov dword ptr [esi + 0x68], 0xebb29c }
	__asm { mov eax, dword ptr [g_012ef494] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00ac76e6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef494], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebb1bc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a90 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef368 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d20 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00ac76e6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ef368 }
	__asm { inc dword ptr [g_012e4da0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x00ac7710
extern "C" __declspec(naked) void asm_00ac7710()
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
	__asm { je L_00ac775b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00ac775b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00ac77ae }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xebb698 }
	__asm { mov dword ptr [esi + 8], 0xebb6a8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xebb6b0 }
	__asm { mov dword ptr [esi + 8], 0xebb6c0 }
	__asm { jmp L_00ac77b0 }
	__asm { L_00ac77ae: }
	__asm { xor esi, esi }
	__asm { L_00ac77b0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00ac77cd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00ac77cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_007d5b70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ac7850
extern "C" __declspec(naked) void asm_00ac7850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5b70 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xebb5ec }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00ac78e7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00ac78d6 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_00ac78d6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00ac78e7 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_00ac78e7: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00403110();
extern "C" void fn_00ac7640();
// FUNCTION: ROBLOXSTUDIO 0x00ac7960
extern "C" __declspec(naked) void asm_00ac7960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00ac7640 }
	__asm { mov dword ptr [esi + 0xdc], 0xe56300 }
	__asm { mov dword ptr [esi + 0xe0], 0 }
	__asm { mov dword ptr [esi], 0xebb2d4 }
	__asm { mov dword ptr [esi + 4], 0xebb370 }
	__asm { mov dword ptr [esi + 0x18], 0xebb378 }
	__asm { mov dword ptr [esi + 0x1c], 0xebb384 }
	__asm { mov dword ptr [esi + 0x64], 0xebb394 }
	__asm { mov dword ptr [esi + 0x68], 0xebb39c }
	__asm { mov dword ptr [esi + 0xdc], 0xebb3d0 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0xe4], 0 }
	__asm { mov dword ptr [esi + 0xe8], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0xec], 0 }
	__asm { mov dword ptr [esi + 0xf0], 0 }
	__asm { mov word ptr [esi + 0xf4], 0 }
	__asm { push 0xf12f28 }
	__asm { mov dword ptr [esi + 0xf8], 0 }
	__asm { mov dword ptr [esi + 0xfc], 0 }
	__asm { mov dword ptr [esi + 0x100], 0 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 0x104], 0 }
	__asm { mov dword ptr [ebp + 8], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00ac7a34 }
	__asm { sub eax, 4 }
	__asm { L_00ac7a34: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x108], eax }
	__asm { mov dword ptr [esi + 0x10c], 0 }
	__asm { mov dword ptr [esi + 0x110], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x114], 0 }
	__asm { mov dword ptr [esi + 0x118], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_008b1af0();
// FUNCTION: ROBLOXSTUDIO 0x00ac80e0
extern "C" __declspec(naked) void asm_00ac80e0()
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
	__asm { sar eax, 2 }
	__asm { cmp eax, edi }
	__asm { jae L_00ac814d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x3fffffff }
	__asm { sar esi, 2 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00ac8117 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00ac8117: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_00ac813b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_008b1af0 }
	__asm { L_00ac813b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_008b1af0 }
	__asm { L_00ac814d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ac8180
extern "C" __declspec(naked) void asm_00ac8180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd355a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { jne L_00ac81f0 }
	__asm { push 0x10 }
	__asm { mov word ptr [edi + 8], si }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00ac81c0 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ac81c0: }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov byte ptr [edi + 8], 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ac81f0: }
	__asm { cmp byte ptr [edi + 9], 0 }
	__asm { je L_00ac8227 }
	__asm { add esi, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00ac8223 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00ac8223: }
	__asm { mov byte ptr [edi + 9], 0 }
	__asm { L_00ac8227: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0057db00();
extern "C" void fn_00ac8240();
// FUNCTION: ROBLOXSTUDIO 0x00ac8350
extern "C" __declspec(naked) void asm_00ac8350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { jne L_00ac8367 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ac8367: }
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
	__asm { je L_00ac83c8 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_00ac83c8 }
	__asm { L_00ac8398: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_00ac83c8 }
	__asm { cmp esi, ebx }
	__asm { jne L_00ac83c0 }
	__asm { test ecx, ecx }
	__asm { je L_00ac83b7 }
	__asm { lea eax, [ecx - 8] }
	__asm { jmp L_00ac83b9 }
	__asm { L_00ac83b7: }
	__asm { xor eax, eax }
	__asm { L_00ac83b9: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { cmp edx, dword ptr [eax] }
	__asm { je L_00ac83d3 }
	__asm { L_00ac83c0: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_00ac8398 }
	__asm { L_00ac83c8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ac83d3: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00ac83de }
	__asm { add eax, -8 }
	__asm { jmp L_00ac83e0 }
	__asm { L_00ac83de: }
	__asm { xor eax, eax }
	__asm { L_00ac83e0: }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { call fn_00ac8240 }
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

extern "C" void fn_00ac80e0();
// FUNCTION: ROBLOXSTUDIO 0x00ac8630
extern "C" __declspec(naked) void asm_00ac8630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0xf8] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0xf8] }
	__asm { mov ecx, dword ptr [ecx + 0xfc] }
	__asm { mov eax, edx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp eax, ecx }
	__asm { je L_00ac865b }
	__asm { L_00ac8650: }
	__asm { cmp dword ptr [eax], edi }
	__asm { je L_00ac8698 }
	__asm { add eax, 4 }
	__asm { cmp eax, ecx }
	__asm { jne L_00ac8650 }
	__asm { L_00ac865b: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmp ecx, eax }
	__asm { jae L_00ac86a0 }
	__asm { cmp edx, ecx }
	__asm { ja L_00ac86a0 }
	__asm { mov edi, ecx }
	__asm { sub edi, edx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00ac867e }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { L_00ac867e: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00ac86b7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ac8698: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ac86a0: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00ac86ae }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { L_00ac86ae: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00ac86b7 }
	__asm { mov dword ptr [eax], edi }
	__asm { L_00ac86b7: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e77198[];
extern "C" char g_012e2e14[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ac86d0
extern "C" __declspec(naked) void asm_00ac86d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fb9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x38] }
	__asm { test esi, esi }
	__asm { je L_00ac8769 }
	__asm { L_00ac86f1: }
	__asm { mov eax, dword ptr [g_012e2e14] }
	__asm { test al, 1 }
	__asm { jne L_00ac874b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e2e14], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e77198] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e2ce8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde33f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00ac874b: }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push 0x12e2ce8 }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00ac8762 }
	__asm { mov eax, esi }
	__asm { test eax, eax }
	__asm { jne L_00ac877a }
	__asm { L_00ac8762: }
	__asm { mov esi, dword ptr [esi + 0x38] }
	__asm { test esi, esi }
	__asm { jne L_00ac86f1 }
	__asm { L_00ac8769: }
	__asm { xor al, al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ac877a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0041ee10();
extern "C" void fn_004226b0();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_007cd560();
extern "C" void fn_00ac7710();
extern "C" void fn_00ac7ea0();
extern "C" void fn_00ac8630();
extern "C" void fn_00b0e0a0();
// FUNCTION: ROBLOXSTUDIO 0x00ac87e0
extern "C" __declspec(naked) void asm_00ac87e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4fbb8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00b0e0a0 }
	__asm { test esi, esi }
	__asm { je L_00ac88c9 }
	__asm { lea ebx, [esi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00ac88c9 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0041ee10 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00ac88c9 }
	__asm { lea esi, [ebx - 0x1c] }
	__asm { test esi, esi }
	__asm { je L_00ac88c9 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x60] }
	__asm { mov dword ptr [ebp - 0x24], 0xac8980 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_00ac7710 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x104] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ac7ea0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ebx, [eax + 4] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00ac889e }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9e50 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9b80 }
	__asm { L_00ac889e: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00ac88b8 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00ac88b8: }
	__asm { cmp byte ptr [esi + 0x386], 0 }
	__asm { je L_00ac88c9 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ac8630 }
	__asm { L_00ac88c9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012efa84[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00813110();
extern "C" void fn_0088d5e0();
extern "C" void fn_00ac94a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ac8fb0
extern "C" __declspec(naked) void asm_00ac8fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fc76 }
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
	__asm { call fn_00ac94a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012efa84] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00ac906f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efa84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebb6f8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00813110 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7dc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00ac906f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ef958 }
	__asm { call fn_0088d5e0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebbc6c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ac90ed }
	__asm { push 0x1270f44 }
	__asm { mov ecx, 0x1270f44 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ac90ed }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac90d8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac90ed }
	__asm { L_00ac90d8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac90ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012e4da8[];
extern "C" char g_012ef824[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_00b0c440();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ac9100
extern "C" __declspec(naked) void asm_00ac9100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fc96 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b0c440 }
	__asm { mov dword ptr [esi], 0xebb724 }
	__asm { mov dword ptr [esi + 4], 0xebb7ac }
	__asm { mov dword ptr [esi + 0x18], 0xebb7b4 }
	__asm { mov dword ptr [esi + 0x1c], 0xebb7c0 }
	__asm { mov dword ptr [esi + 0x64], 0xebb7d0 }
	__asm { mov dword ptr [esi + 0x68], 0xebb7d8 }
	__asm { mov eax, dword ptr [g_012ef824] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00ac91a6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef824], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebb70c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef6f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7da0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00ac91a6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ef6f8 }
	__asm { inc dword ptr [g_012e4da8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4dac[];
extern "C" char g_012ef954[];
extern "C" void fn_007cbf10();
extern "C" void fn_00813110();
extern "C" void fn_00ac9100();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ac91d0
extern "C" __declspec(naked) void asm_00ac91d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fcb6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00ac9100 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi], 0xebb80c }
	__asm { mov dword ptr [esi + 4], 0xebb898 }
	__asm { mov dword ptr [esi + 0x18], 0xebb8a0 }
	__asm { mov dword ptr [esi + 0x1c], 0xebb8ac }
	__asm { mov dword ptr [esi + 0x64], 0xebb8bc }
	__asm { mov dword ptr [esi + 0x68], 0xebb8c4 }
	__asm { mov eax, dword ptr [g_012ef954] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00ac928a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef954], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebb6d8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00813110 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef828 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7db0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00ac928a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ef828 }
	__asm { inc dword ptr [g_012e4dac] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4db0[];
extern "C" char g_012efa84[];
extern "C" void fn_007cbf10();
extern "C" void fn_00813110();
extern "C" void fn_00ac9100();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ac92b0
extern "C" __declspec(naked) void asm_00ac92b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fcd6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00ac9100 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi], 0xebb9ec }
	__asm { mov dword ptr [esi + 4], 0xebba78 }
	__asm { mov dword ptr [esi + 0x18], 0xebba80 }
	__asm { mov dword ptr [esi + 0x1c], 0xebba8c }
	__asm { mov dword ptr [esi + 0x64], 0xebba9c }
	__asm { mov dword ptr [esi + 0x68], 0xebbaa4 }
	__asm { mov eax, dword ptr [g_012efa84] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00ac936a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efa84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebb6f8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00813110 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7dc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00ac936a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12ef958 }
	__asm { inc dword ptr [g_012e4db0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012efbb4[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_008841a0();
extern "C" void fn_00aca780();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00aca0f0
extern "C" __declspec(naked) void asm_00aca0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fd46 }
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
	__asm { call fn_00aca780 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012efbb4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00aca1af }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efbb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003770 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12efa88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00aca1af: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12efa88 }
	__asm { call fn_008841a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebbe2c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00aca22d }
	__asm { push 0x1271784 }
	__asm { mov ecx, 0x1271784 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00aca22d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aca218 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aca22d }
	__asm { L_00aca218: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aca22d: }
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
extern "C" char g_012efbb4[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_0087b310();
extern "C" void fn_00aca7e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00aca240
extern "C" __declspec(naked) void asm_00aca240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fd46 }
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
	__asm { call fn_00aca7e0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012efbb4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00aca2ff }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efbb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003770 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12efa88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00aca2ff: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12efa88 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebbe68 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00aca37d }
	__asm { push 0x1271784 }
	__asm { mov ecx, 0x1271784 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00aca37d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aca368 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aca37d }
	__asm { L_00aca368: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aca37d: }
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
extern "C" char g_012efbb4[];
extern "C" void fn_0040bb80();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_00aca840();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00aca390
extern "C" __declspec(naked) void asm_00aca390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fd76 }
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
	__asm { call fn_00aca840 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012efbb4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00aca44f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efbb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003770 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12efa88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00aca44f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12efa88 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebbea4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00aca4cd }
	__asm { push 0x1271784 }
	__asm { mov ecx, 0x1271784 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00aca4cd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aca4b8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aca4cd }
	__asm { L_00aca4b8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aca4cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012e4db4[];
extern "C" char g_012efbb4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_00b0c440();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00aca6b0
extern "C" __declspec(naked) void asm_00aca6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fdd6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b0c440 }
	__asm { mov dword ptr [esi], 0xebbcf4 }
	__asm { mov dword ptr [esi + 4], 0xebbd7c }
	__asm { mov dword ptr [esi + 0x18], 0xebbd84 }
	__asm { mov dword ptr [esi + 0x1c], 0xebbd90 }
	__asm { mov dword ptr [esi + 0x64], 0xebbda0 }
	__asm { mov dword ptr [esi + 0x68], 0xebbda8 }
	__asm { mov eax, dword ptr [g_012efbb4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00aca756 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efbb4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003770 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12efa88 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7f50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00aca756: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12efa88 }
	__asm { inc dword ptr [g_012e4db4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012efce4[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_008841a0();
extern "C" void fn_00acbb70();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00acb4e0
extern "C" __declspec(naked) void asm_00acb4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fe96 }
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
	__asm { call fn_00acbb70 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012efce4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00acb59f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efce4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003690 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12efbb8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7820 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00acb59f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12efbb8 }
	__asm { call fn_008841a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebc194 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00acb61d }
	__asm { push 0x1271cc0 }
	__asm { mov ecx, 0x1271cc0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00acb61d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00acb608 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00acb61d }
	__asm { L_00acb608: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00acb61d: }
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
extern "C" char g_012efce4[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_0087b310();
extern "C" void fn_00acbbd0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00acb630
extern "C" __declspec(naked) void asm_00acb630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fe96 }
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
	__asm { call fn_00acbbd0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012efce4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00acb6ef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efce4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003690 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12efbb8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7820 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00acb6ef: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12efbb8 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebc1d0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00acb76d }
	__asm { push 0x1271cc0 }
	__asm { mov ecx, 0x1271cc0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00acb76d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00acb758 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00acb76d }
	__asm { L_00acb758: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00acb76d: }
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
extern "C" char g_012efce4[];
extern "C" void fn_0040bb80();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_00acbc30();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00acb780
extern "C" __declspec(naked) void asm_00acb780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fec6 }
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
	__asm { call fn_00acbc30 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012efce4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00acb83f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efce4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003690 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12efbb8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7820 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00acb83f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12efbb8 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebc20c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00acb8bd }
	__asm { push 0x1271cc0 }
	__asm { mov ecx, 0x1271cc0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00acb8bd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00acb8a8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00acb8bd }
	__asm { L_00acb8a8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00acb8bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012e4db8[];
extern "C" char g_012efce4[];
extern "C" void fn_007cbf10();
extern "C" void fn_00810a10();
extern "C" void fn_00b0c440();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00acbaa0
extern "C" __declspec(naked) void asm_00acbaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ff26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b0c440 }
	__asm { mov dword ptr [esi], 0xebc05c }
	__asm { mov dword ptr [esi + 4], 0xebc0e4 }
	__asm { mov dword ptr [esi + 0x18], 0xebc0ec }
	__asm { mov dword ptr [esi + 0x1c], 0xebc0f8 }
	__asm { mov dword ptr [esi + 0x64], 0xebc108 }
	__asm { mov dword ptr [esi + 0x68], 0xebc110 }
	__asm { mov eax, dword ptr [g_012efce4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00acbb46 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012efce4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003690 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_00810a10 }
	__asm { push eax }
	__asm { mov ecx, 0x12efbb8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7820 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00acbb46: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12efbb8 }
	__asm { inc dword ptr [g_012e4db8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007d9640();
extern "C" void fn_007de8e0();
extern "C" void fn_00acfd20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00accf30
extern "C" __declspec(naked) void asm_00accf30()
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
	__asm { push 0xe0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00accf81 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00acfd20 }
	__asm { mov esi, eax }
	__asm { jmp L_00accf83 }
	__asm { L_00accf81: }
	__asm { xor esi, esi }
	__asm { L_00accf83: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9640 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00accfb4 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00accfb4 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00accfb4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00acd160();
// FUNCTION: ROBLOXSTUDIO 0x00accfd0
extern "C" __declspec(naked) void asm_00accfd0()
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
	__asm { call fn_00acd160 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xebc508 }
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
	__asm { je L_00acd07e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00acd07e: }
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
extern "C" char g_012eff44[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00acd160
extern "C" __declspec(naked) void asm_00acd160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50076 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012eff44] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00acd1da }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eff44], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebc398 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12efe18 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7570 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00acd1da: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12efe18 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xebc4fc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00acd252 }
	__asm { push 0x12721e8 }
	__asm { mov ecx, 0x12721e8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00acd252 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00acd23d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00acd252 }
	__asm { L_00acd23d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00acd252: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00acd7f0
extern "C" __declspec(naked) void asm_00acd7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xebc9dc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xebcadc }
	__asm { mov dword ptr [esi + 8], 0xebcaec }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00acd89a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00acd886 }
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
	__asm { L_00acd886: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00acd89a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00acd8b0
extern "C" __declspec(naked) void asm_00acd8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xebc9cc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xebcaac }
	__asm { mov dword ptr [esi + 8], 0xebcabc }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00acd95a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00acd946 }
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
	__asm { L_00acd946: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00acd95a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00acdd50
extern "C" __declspec(naked) void asm_00acdd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { fld dword ptr [edi] }
	__asm { mov edi, dword ptr [ebx] }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { fstp dword ptr [esp + 0x1c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add ecx, edi }
	__asm { call eax }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00acddf4 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00acddf4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
extern "C" void fn_00ad1340();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00acde10
extern "C" __declspec(naked) void asm_00acde10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50131 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00ad1340 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov word ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00acdea0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { mov dword ptr [ebx + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [ebx + 0x1c], 0 }
	__asm { L_00acdea0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
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

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_004cab00();
// FUNCTION: ROBLOXSTUDIO 0x00ace6e0
extern "C" __declspec(naked) void asm_00ace6e0()
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
	__asm { je L_00ace72b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00ace72b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00ace77e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3a38c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xebca1c }
	__asm { mov dword ptr [esi + 8], 0xebca2c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xebca34 }
	__asm { mov dword ptr [esi + 8], 0xebca44 }
	__asm { jmp L_00ace780 }
	__asm { L_00ace77e: }
	__asm { xor esi, esi }
	__asm { L_00ace780: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_004cab00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00ace79d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00ace79d: }
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
// FUNCTION: ROBLOXSTUDIO 0x00ace7c0
extern "C" __declspec(naked) void asm_00ace7c0()
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
	__asm { je L_00ace80b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00ace80b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00ace85e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xebc9ec }
	__asm { mov dword ptr [esi + 8], 0xebc9fc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xebca04 }
	__asm { mov dword ptr [esi + 8], 0xebca14 }
	__asm { jmp L_00ace860 }
	__asm { L_00ace85e: }
	__asm { xor esi, esi }
	__asm { L_00ace860: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00ace87d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00ace87d: }
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
extern "C" void fn_00ad3390();
// FUNCTION: ROBLOXSTUDIO 0x00ace8d0
extern "C" __declspec(naked) void asm_00ace8d0()
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
	__asm { je L_00ace91b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00ace91b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00ace96e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xebc9e4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xebca7c }
	__asm { mov dword ptr [esi + 8], 0xebca8c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xebca94 }
	__asm { mov dword ptr [esi + 8], 0xebcaa4 }
	__asm { jmp L_00ace970 }
	__asm { L_00ace96e: }
	__asm { xor esi, esi }
	__asm { L_00ace970: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ad3390 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00ace98d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00ace98d: }
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
extern "C" void fn_00ad3540();
// FUNCTION: ROBLOXSTUDIO 0x00ace9e0
extern "C" __declspec(naked) void asm_00ace9e0()
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
	__asm { je L_00acea2b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00acea2b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00acea7e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xebc9d4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xebca4c }
	__asm { mov dword ptr [esi + 8], 0xebca5c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xebca64 }
	__asm { mov dword ptr [esi + 8], 0xebca74 }
	__asm { jmp L_00acea80 }
	__asm { L_00acea7e: }
	__asm { xor esi, esi }
	__asm { L_00acea80: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ad3540 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00acea9d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00acea9d: }
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
extern "C" void fn_00acd7f0();
extern "C" void fn_00ad3390();
// FUNCTION: ROBLOXSTUDIO 0x00aceaf0
extern "C" __declspec(naked) void asm_00aceaf0()
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
	__asm { je L_00aceb3b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00aceb3b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00aceb64 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00acd7f0 }
	__asm { mov dword ptr [esi], 0xebcaf4 }
	__asm { mov dword ptr [esi + 8], 0xebcb04 }
	__asm { jmp L_00aceb66 }
	__asm { L_00aceb64: }
	__asm { xor esi, esi }
	__asm { L_00aceb66: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00ad3390 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00aceb8a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00aceb8a: }
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
extern "C" void fn_00acd8b0();
extern "C" void fn_00ad3540();
// FUNCTION: ROBLOXSTUDIO 0x00acebd0
extern "C" __declspec(naked) void asm_00acebd0()
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
	__asm { je L_00acec1b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00acec1b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00acec44 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00acd8b0 }
	__asm { mov dword ptr [esi], 0xebcac4 }
	__asm { mov dword ptr [esi + 8], 0xebcad4 }
	__asm { jmp L_00acec46 }
	__asm { L_00acec44: }
	__asm { xor esi, esi }
	__asm { L_00acec46: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00ad3540 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00acec6a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00acec6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004109a0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007c7180();
extern "C" void fn_007d5470();
extern "C" void fn_007d58d0();
// FUNCTION: ROBLOXSTUDIO 0x00acf140
extern "C" __declspec(naked) void asm_00acf140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d58d0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007c7180 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004109a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_004109a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { mov dword ptr [esi + 0xcc], eax }
	__asm { call fn_004109a0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00acfb00();
// FUNCTION: ROBLOXSTUDIO 0x00acf510
extern "C" __declspec(naked) void asm_00acf510()
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
	__asm { call fn_00acfb00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xebc764 }
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
	__asm { je L_00acf5be }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00acf5be: }
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
extern "C" char g_012f0664[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00acfb00
extern "C" __declspec(naked) void asm_00acfb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50256 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f0664] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00acfb7a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0664], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe97118 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f0538 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00acfb7a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f0538 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xebc758 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00acfbf2 }
	__asm { push 0x12724d8 }
	__asm { mov ecx, 0x12724d8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00acfbf2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00acfbdd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00acfbf2 }
	__asm { L_00acfbdd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00acfbf2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00ad2330();
// FUNCTION: ROBLOXSTUDIO 0x00ad0530
extern "C" __declspec(naked) void asm_00ad0530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd504a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ad05bd }
	__asm { add esi, 5 }
	__asm { je L_00ad0585 }
	__asm { add esi, -5 }
	__asm { jmp L_00ad0587 }
	__asm { L_00ad0585: }
	__asm { xor esi, esi }
	__asm { L_00ad0587: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad05b7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad05b7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ad05bd }
	__asm { L_00ad05b7: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ad05bd: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00ad2330 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ad060c }
	__asm { add esi, 5 }
	__asm { je L_00ad05e2 }
	__asm { add esi, -5 }
	__asm { jmp L_00ad05e4 }
	__asm { L_00ad05e2: }
	__asm { xor esi, esi }
	__asm { L_00ad05e4: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad060c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad060c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ad060c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00410540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ad0d10
extern "C" __declspec(naked) void asm_00ad0d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49ce0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00ad0d63 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0x24], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_00ad0d63: }
	__asm { fld dword ptr [ebp + 0x24] }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { fstp dword ptr [esp + 0x1c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00ad0db7 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ad0db7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00410540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ad0dd0
extern "C" __declspec(naked) void asm_00ad0dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49ce0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00ad0e23 }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0x2c], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x18], 0xe19198 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_00ad0e23: }
	__asm { fld dword ptr [ebp + 0x2c] }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { fstp dword ptr [esp + 0x24] }
	__asm { lea eax, [ebp + 8] }
	__asm { fld dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { fstp dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { fld dword ptr [ebp + 0x24] }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 0x1c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 0x2c }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00ad0e85 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ad0e85: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00ace3f0();
extern "C" void fn_00ad13c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ad1670
extern "C" __declspec(naked) void asm_00ad1670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50660 }
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
	__asm { je L_00ad16c4 }
	__asm { cmp edi, 0x5d1745d }
	__asm { ja L_00ad16be }
	__asm { mov eax, edi }
	__asm { imul eax, eax, 0x2c }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00ad16c4 }
	__asm { L_00ad16be: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ad16c4: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00ace3f0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2e8ba2e9 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00ad171d }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { call fn_00ad13c0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ad171d: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { imul edi, edi, 0x2c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { imul eax, eax, 0x2c }
	__asm { add edi, esi }
	__asm { mov dword ptr [ebx + 8], edi }
	__asm { mov dword ptr [ebx], esi }
	__asm { pop edi }
	__asm { add eax, esi }
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
extern "C" void fn_00ad1570();
// FUNCTION: ROBLOXSTUDIO 0x00ad1770
extern "C" __declspec(naked) void asm_00ad1770()
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
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00ad1808 }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 1 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x15555555 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00ad17bf }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00ad17bf: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x15555555 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00ad17f5 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ad1570 }
	__asm { L_00ad17f5: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ad1570 }
	__asm { L_00ad1808: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00ad1670();
// FUNCTION: ROBLOXSTUDIO 0x00ad1810
extern "C" __declspec(naked) void asm_00ad1810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x2e8ba2e9 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00ad18ab }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2e8ba2e9 }
	__asm { imul esi }
	__asm { sar edx, 3 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x5d1745d }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00ad1861 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00ad1861: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x2e8ba2e9 }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x5d1745d }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00ad1898 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ad1670 }
	__asm { L_00ad1898: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00ad1670 }
	__asm { L_00ad18ab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004107f0();
extern "C" void fn_006b9740();
extern "C" void fn_009a62b0();
extern "C" void fn_00ad1020();
// FUNCTION: ROBLOXSTUDIO 0x00ad2e80
extern "C" __declspec(naked) void asm_00ad2e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_00ad2eea }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_00ad2eea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ad2ed9 }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad2eea }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00ad2ed9: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad2eea: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ad2ef6 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00ad2ef8 }
	__asm { L_00ad2ef6: }
	__asm { xor edi, edi }
	__asm { L_00ad2ef8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_004107f0 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { sub esp, 0x1c }
	__asm { push esp }
	__asm { call fn_009a62b0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_00ad1020 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004107f0();
extern "C" void fn_006b9740();
extern "C" void fn_009a62b0();
extern "C" void fn_00ad1120();
// FUNCTION: ROBLOXSTUDIO 0x00ad2f30
extern "C" __declspec(naked) void asm_00ad2f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_00ad2f9a }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 4 }
	__asm { je L_00ad2f9a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ad2f89 }
	__asm { push 0x18a }
	__asm { push 0xe52268 }
	__asm { push 0xe636c0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad2f9a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00ad2f89: }
	__asm { movzx eax, bl }
	__asm { push 0xe636d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad2f9a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ad2fa6 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00ad2fa8 }
	__asm { L_00ad2fa6: }
	__asm { xor edi, edi }
	__asm { L_00ad2fa8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0xd0 }
	__asm { push eax }
	__asm { call fn_004107f0 }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_004107f0 }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_004107f0 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { sub esp, 0x1c }
	__asm { push esp }
	__asm { call fn_009a62b0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_00ad1120 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ad1770();
// FUNCTION: ROBLOXSTUDIO 0x00ad54c0
extern "C" __declspec(naked) void asm_00ad54c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_00ad552d }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_00ad552d }
	__asm { sub edi, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { sar edx, 1 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00ad54f7 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ad1770 }
	__asm { L_00ad54f7: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { test edx, edx }
	__asm { je L_00ad555f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ad552d: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00ad553b }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ad1770 }
	__asm { L_00ad553b: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00ad555f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_00ad555f: }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00ad58c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ad56d0
extern "C" __declspec(naked) void asm_00ad56d0()
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
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00ad56fa }
	__asm { lea edi, [ecx + 0x1c] }
	__asm { jmp L_00ad56fc }
	__asm { L_00ad56fa: }
	__asm { xor edi, edi }
	__asm { L_00ad56fc: }
	__asm { fld dword ptr [ebp + 0x2c] }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { fstp dword ptr [esp + 0x24] }
	__asm { lea eax, [ebp + 8] }
	__asm { fld dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { fstp dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { fld dword ptr [ebp + 0x24] }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 0x1c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push edi }
	__asm { mov ecx, 0x130c120 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00ad58c0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00ad5758 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ad5758: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_004109a0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007c7180();
extern "C" void fn_007d5470();
extern "C" void fn_007d58d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ad5800
extern "C" __declspec(naked) void asm_00ad5800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d58d0 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_007c7180 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_004109a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00426f50 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00ad58a4 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ad58a4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_004109a0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007c7180();
extern "C" void fn_007d5470();
extern "C" void fn_007d58d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ad58c0
extern "C" __declspec(naked) void asm_00ad58c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d58d0 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_007c7180 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_004109a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { call fn_004109a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5470 }
	__asm { mov dword ptr [esi + 0xcc], eax }
	__asm { lea eax, [ebp + 0x30] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { call fn_004109a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00426f50 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_00ad599e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ad599e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_012f09f4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cb250();
extern "C" void fn_007cbf10();
extern "C" void fn_007d55c0();
extern "C" void fn_008255d0();
extern "C" void fn_00b48940();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ad5d90
extern "C" __declspec(naked) void asm_00ad5d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50966 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f09f4] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { test al, 1 }
	__asm { jne L_00ad5e0b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f09f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebcb60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f08c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7610 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00ad5e0b: }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f08c8 }
	__asm { call fn_00b48940 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xebcb98 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { call fn_007d55c0 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d55c0 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_008255d0 }
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
extern "C" void fn_007d55c0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00ad61a0();
// FUNCTION: ROBLOXSTUDIO 0x00ad5e80
extern "C" __declspec(naked) void asm_00ad5e80()
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
	__asm { call fn_00ad61a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xebcbc0 }
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
	__asm { call fn_007d55c0 }
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
	__asm { je L_00ad5f2e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ad5f2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d55c0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00ad62b0();
// FUNCTION: ROBLOXSTUDIO 0x00ad5f50
extern "C" __declspec(naked) void asm_00ad5f50()
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
	__asm { call fn_00ad62b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xebcb84 }
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
	__asm { call fn_007d55c0 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d55c0 }
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
	__asm { je L_00ad5ffe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ad5ffe: }
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
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d55c0();
extern "C" void fn_008251b0();
extern "C" void fn_00ad60f0();
// FUNCTION: ROBLOXSTUDIO 0x00ad6020
extern "C" __declspec(naked) void asm_00ad6020()
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
	__asm { call fn_00ad60f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xebcbcc }
	__asm { call fn_007d55c0 }
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
	__asm { jae L_00ad60b2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00ad60b2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00ad60d5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ad60d5: }
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
extern "C" char g_012f0b24[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ad61a0
extern "C" __declspec(naked) void asm_00ad61a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd509a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f0b24] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00ad621a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f0b24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebcb48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f09f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7600 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00ad621a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f09f8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xebcbb4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00ad6292 }
	__asm { push 0x11f4ff0 }
	__asm { mov ecx, 0x11f4ff0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ad6292 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ad627d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad6292 }
	__asm { L_00ad627d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad6292: }
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
extern "C" char g_012f09f4[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ad62b0
extern "C" __declspec(naked) void asm_00ad62b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50966 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f09f4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00ad632a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f09f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebcb60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f08c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7610 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00ad632a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f08c8 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xebcb78 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00ad63a2 }
	__asm { push 0x11f4dc0 }
	__asm { mov ecx, 0x11f4dc0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ad63a2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ad638d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad63a2 }
	__asm { L_00ad638d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad63a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00513e00();
extern "C" void fn_006b9740();
extern "C" void fn_009e8720();
// FUNCTION: ROBLOXSTUDIO 0x00ad6ca0
extern "C" __declspec(naked) void asm_00ad6ca0()
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
	__asm { je L_00ad6d0a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_00ad6d0a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ad6cf9 }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad6d0a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00ad6cf9: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad6d0a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ad6d16 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_00ad6d18 }
	__asm { L_00ad6d16: }
	__asm { xor esi, esi }
	__asm { L_00ad6d18: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_00513e00 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, esi }
	__asm { call fn_009e8720 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10338[];
extern "C" void fn_00ad63c0();
extern "C" void fn_00ad64d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ad7050
extern "C" __declspec(naked) void asm_00ad7050()
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
	__asm { ja L_00ad7086 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ad64d0 }
	__asm { L_00ad7086: }
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
	__asm { jne L_00ad70c2 }
	__asm { push 0x48 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00ad70bc }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ad70bc: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + eax], ecx }
	__asm { L_00ad70c2: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edi + eax] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { pop edi }
	__asm { test ecx, ecx }
	__asm { je L_00ad70e2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ad63c0 }
	__asm { L_00ad70e2: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1058c[];
extern "C" void fn_004278c0();
extern "C" void fn_008f2170();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ad7200
extern "C" __declspec(naked) void asm_00ad7200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008f2170 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { add esp, 4 }
	__asm { xor edi, edi }
	__asm { xor esi, esi }
	__asm { add eax, -4 }
	__asm { je L_00ad729d }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e1058c] }
	__asm { L_00ad7255: }
	__asm { push 4 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { cmovae eax, dword ptr [ebp - 0x40] }
	__asm { push 4 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call ebx }
	__asm { xor edi, dword ptr [ebp - 0x10] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { jb L_00ad728f }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ad728f: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { add esi, 4 }
	__asm { add eax, -4 }
	__asm { cmp esi, eax }
	__asm { jb L_00ad7255 }
	__asm { pop ebx }
	__asm { L_00ad729d: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00ad72ae }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ad72ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_00a55dc0();
extern "C" void fn_00ad77f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ad76e0
extern "C" __declspec(naked) void asm_00ad76e0()
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
	__asm { jb L_00ad77ab }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00ad77f0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00ad7733 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ad7733: }
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
	__asm { je L_00ad7791 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00a55dc0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00ad7780 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00ad7780: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ad7791: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00ad77ab }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ad77ab: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00ad77c5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ad77c5: }
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

extern "C" void fn_00825140();
extern "C" void fn_00ad7b60();
extern "C" void fn_00ad8590();
// FUNCTION: ROBLOXSTUDIO 0x00ad7890
extern "C" __declspec(naked) void asm_00ad7890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50b19 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00ad7b60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xebcd44 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
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
	__asm { call fn_00ad8590 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d60a0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00ad7b60();
// FUNCTION: ROBLOXSTUDIO 0x00ad7970
extern "C" __declspec(naked) void asm_00ad7970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50b4b }
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
	__asm { call fn_00ad7b60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xebcd84 }
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
	__asm { call fn_007d60a0 }
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
	__asm { je L_00ad7a1e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ad7a1e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_012f68ec[];
extern "C" char g_012f68f0[];
extern "C" char g_012f68f4[];
extern "C" char g_012f68f8[];
extern "C" void fn_007cb250();
extern "C" void fn_007e88f0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00ad7b60();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ad7a40
extern "C" __declspec(naked) void asm_00ad7a40()
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
	__asm { call fn_00ad7b60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xebcdb0 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00ad7aa1 }
	__asm { mov dword ptr [eax], esi }
	__asm { jmp L_00ad7aa3 }
	__asm { L_00ad7aa1: }
	__asm { xor eax, eax }
	__asm { L_00ad7aa3: }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007e88f0 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_012f68f8] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x4c], esi }
	__asm { test al, 1 }
	__asm { jne L_00ad7af8 }
	__asm { or eax, 1 }
	__asm { push 0xde85c0 }
	__asm { mov dword ptr [g_012f68f8], eax }
	__asm { mov dword ptr [g_012f68ec], 0x11f0ae0 }
	__asm { mov dword ptr [g_012f68f4], 0x40d810 }
	__asm { mov dword ptr [g_012f68f0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00ad7af8: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0x12f68ec }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007e88f0 }
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
	__asm { je L_00ad7b47 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ad7b47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f1964[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ad7b60
extern "C" __declspec(naked) void asm_00ad7b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50b76 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f1964] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00ad7bda }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1964], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebcbec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1838 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7a40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00ad7bda: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f1838 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xebcd38 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00ad7c52 }
	__asm { push 0x1273ff0 }
	__asm { mov ecx, 0x1273ff0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ad7c52 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ad7c3d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad7c52 }
	__asm { L_00ad7c3d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad7c52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_007b5910();
extern "C" void fn_00891b30();
extern "C" void fn_00ad72c0();
// FUNCTION: ROBLOXSTUDIO 0x00ad7c70
extern "C" __declspec(naked) void asm_00ad7c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50bc5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xebcbec }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00ad72c0 }
	__asm { mov dword ptr [esi], 0xebcc9c }
	__asm { mov dword ptr [esi + 4], 0xebcd14 }
	__asm { mov dword ptr [esi + 0x18], 0xebcd1c }
	__asm { mov dword ptr [esi + 0x1c], 0xebcd28 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { lea eax, [esi + 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], 0 }
	__asm { mov byte ptr [ebp - 0xd], 1 }
	__asm { call fn_00891b30 }
	__asm { lea ecx, [eax + 0x18] }
	__asm { call fn_007b5910 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493600();
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ad81a0
extern "C" __declspec(naked) void asm_00ad81a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00ad81d3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00ad81d3: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop esi }
	__asm { je L_00ad81fd }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ad81fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xebcbfc }
	__asm { mov dword ptr [esi + 4], 0xebcc74 }
	__asm { mov dword ptr [esi + 0x18], 0xebcc7c }
	__asm { mov dword ptr [esi + 0x1c], 0xebcc88 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00ad8245 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ad8245: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009f40e0();
extern "C" void fn_009f4160();
extern "C" void fn_009f4380();
extern "C" void fn_00ad91c0();
// FUNCTION: ROBLOXSTUDIO 0x00ad83f0
extern "C" __declspec(naked) void asm_00ad83f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub eax, 0 }
	__asm { je L_00ad8472 }
	__asm { dec eax }
	__asm { je L_00ad845e }
	__asm { dec eax }
	__asm { je L_00ad844a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ad8481 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ad8434 }
	__asm { push 0x10e }
	__asm { push 0xebcf98 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad8481 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ad8434: }
	__asm { movzx eax, al }
	__asm { push 0xebd3f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ad844a: }
	__asm { call fn_009f4380 }
	__asm { push eax }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call fn_00ad91c0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ad845e: }
	__asm { call fn_009f4160 }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ad91c0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ad8472: }
	__asm { call fn_009f40e0 }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00ad91c0 }
	__asm { L_00ad8481: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5630();
extern "C" void fn_007d5710();
extern "C" void fn_007d5be0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00ad8590
extern "C" __declspec(naked) void asm_00ad8590()
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
	__asm { call fn_007d5710 }
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
	__asm { call fn_007d5be0 }
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
	__asm { call fn_007d5630 }
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
	__asm { je L_00ad8631 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ad8631: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ad8648 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ad8648: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00ad8668 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ad8668: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_00962a70();
// FUNCTION: ROBLOXSTUDIO 0x00ad89e0
extern "C" __declspec(naked) void asm_00ad89e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x30] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00962a70 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00ad8a2b }
	__asm { lea edi, [ecx - 0x1c] }
	__asm { jmp L_00ad8a2d }
	__asm { L_00ad8a2b: }
	__asm { xor edi, edi }
	__asm { L_00ad8a2d: }
	__asm { mov edx, dword ptr [ebx + 0x2c] }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], 0xe461dc }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { lea ecx, [edi + edx] }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00424480();
extern "C" void fn_00a41a80();
extern "C" void fn_00ad8680();
extern "C" void fn_00ad95c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ad8fc0
extern "C" __declspec(naked) void asm_00ad8fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50ce0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a41a80 }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { jne L_00ad9025 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xebd1c4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00ad9025: }
	__asm { cmp eax, 3 }
	__asm { je L_00ad90a3 }
	__asm { cmp eax, 4 }
	__asm { je L_00ad90a3 }
	__asm { cmp eax, 1 }
	__asm { jne L_00ad903f }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ad95c0 }
	__asm { L_00ad903f: }
	__asm { cmp dword ptr [esi + 0x64], 2 }
	__asm { jne L_00ad9078 }
	__asm { call fn_00424480 }
	__asm { cmp dword ptr [eax + 0x70], 4 }
	__asm { jne L_00ad905c }
	__asm { call fn_00424480 }
	__asm { mov byte ptr [eax + 0x81], 0 }
	__asm { L_00ad905c: }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ad8680 }
	__asm { L_00ad9067: }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { L_00ad9078: }
	__asm { call fn_00424480 }
	__asm { cmp byte ptr [eax + 0x81], 0 }
	__asm { jne L_00ad9067 }
	__asm { call fn_00424480 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [eax + 0x81], 1 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { L_00ad90a3: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xebd1f4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00424480();
extern "C" void fn_006b9740();
extern "C" void fn_00b58020();
extern "C" void fn_00b588d0();
extern "C" void fn_00befcb0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ad90d0
extern "C" __declspec(naked) void asm_00ad90d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00424480 }
	__asm { mov byte ptr [eax + 0x81], 1 }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { cmp eax, 2 }
	__asm { jne L_00ad912b }
	__asm { push esi }
	__asm { lea esi, [edi + 0x84] }
	__asm { push esi }
	__asm { call fn_00b58020 }
	__asm { push esi }
	__asm { call fn_00b588d0 }
	__asm { mov esi, dword ptr [edi + 0x7c] }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { je L_00ad911a }
	__asm { mov ecx, esi }
	__asm { call fn_00befcb0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ad911a: }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x64], 3 }
	__asm { pop esi }
	__asm { jmp L_00ad9137 }
	__asm { L_00ad912b: }
	__asm { cmp eax, 1 }
	__asm { jne L_00ad918b }
	__asm { mov dword ptr [edi + 0x64], 4 }
	__asm { L_00ad9137: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00ad9186 }
	__asm { mov eax, dword ptr [edi + 0x6c] }
	__asm { sub eax, dword ptr [edi + 0x68] }
	__asm { test eax, 0xfffffff8 }
	__asm { je L_00ad9186 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ad9175 }
	__asm { push 0x98 }
	__asm { push 0xebcf98 }
	__asm { push 0xebd0c8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad9186 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ad9175: }
	__asm { movzx eax, cl }
	__asm { push 0xebd250 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad9186: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ad918b: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xebd220 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006dea00();
extern "C" void fn_006deac0();
extern "C" void fn_00700b70();
extern "C" void fn_00865d20();
extern "C" void fn_00933d80();
extern "C" void fn_009f3910();
extern "C" void fn_00b57e60();
extern "C" void fn_00b589f0();
// FUNCTION: ROBLOXSTUDIO 0x00ada140
extern "C" __declspec(naked) void asm_00ada140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50e10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { call fn_006deac0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_00700b70 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00933d80 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_009f3910 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test al, al }
	__asm { je L_00ada218 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00865d20 }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { push 1 }
	__asm { push dword ptr [eax + 0xb4] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add eax, 0x84 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00b57e60 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [edi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [edi + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [edi + 8] }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00b589f0 }
	__asm { fld dword ptr [eax] }
	__asm { add esp, 0x24 }
	__asm { fstp dword ptr [edi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [edi + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov al, 1 }
	__asm { fstp dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ada218: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10528[];
extern "C" char g_012fc98d[];
extern "C" void fn_006b8aba();
extern "C" void fn_00a41a80();
extern "C" void fn_00ad9cf0();
extern "C" void fn_00adaa90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00ada440
extern "C" __declspec(naked) void asm_00ada440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50ce0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov al, byte ptr [g_012fc98d] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00ada4d3 }
	__asm { fldz }
	__asm { sub esp, 0x10 }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { movzx eax, al }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xebd8b8 }
	__asm { push eax }
	__asm { call fn_006b8aba }
	__asm { mov al, byte ptr [g_012fc98d] }
	__asm { add esp, 0x18 }
	__asm { test al, al }
	__asm { je L_00ada4d3 }
	__asm { fldz }
	__asm { sub esp, 0x10 }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { movzx eax, al }
	__asm { fld dword ptr [ebp + 0x20] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0x1c] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { fstp dword ptr [esp] }
	__asm { push 0xebd8f0 }
	__asm { push eax }
	__asm { call fn_006b8aba }
	__asm { add esp, 0x18 }
	__asm { L_00ada4d3: }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00a41a80 }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { jne L_00ada513 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xebd928 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00ada513: }
	__asm { cmp eax, 3 }
	__asm { je L_00ada54f }
	__asm { cmp eax, 4 }
	__asm { je L_00ada54f }
	__asm { cmp eax, 1 }
	__asm { jne L_00ada52d }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00adaa90 }
	__asm { L_00ada52d: }
	__asm { cmp dword ptr [esi + 0x64], 2 }
	__asm { jne L_00ada53e }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ad9cf0 }
	__asm { L_00ada53e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { L_00ada54f: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xebd95c }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00adad00
extern "C" __declspec(naked) void asm_00adad00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xebe65c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xebe664 }
	__asm { mov dword ptr [esi + 8], 0xebe674 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00adadaa }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00adad96 }
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
	__asm { L_00adad96: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00adadaa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00adb780();
extern "C" void fn_00ade340();
extern "C" void fn_00adf220();
// FUNCTION: ROBLOXSTUDIO 0x00adae50
extern "C" __declspec(naked) void asm_00adae50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50e80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x60 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ade340 }
	__asm { mov ecx, esi }
	__asm { call fn_00adb780 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00adaeca }
	__asm { test al, 1 }
	__asm { jne L_00adaec3 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00adaec3 }
	__asm { lea ecx, [ebp + 0x50] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00adaec3: }
	__asm { mov dword ptr [ebp + 0x48], 0 }
	__asm { L_00adaeca: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf220 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x64 }
}

extern "C" void fn_00adae50();
extern "C" void fn_00ade340();
extern "C" void fn_00adf220();
// FUNCTION: ROBLOXSTUDIO 0x00adaef0
extern "C" __declspec(naked) void asm_00adaef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50e80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x60 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_00ade340 }
	__asm { mov ecx, esi }
	__asm { call fn_00adae50 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00adaf66 }
	__asm { test al, 1 }
	__asm { jne L_00adaf5f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00adaf5f }
	__asm { lea ecx, [ebp + 0x50] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00adaf5f: }
	__asm { mov dword ptr [ebp + 0x48], 0 }
	__asm { L_00adaf66: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf220 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x64 }
}

extern "C" void fn_00ade340();
extern "C" void fn_00adf220();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00adb400
extern "C" __declspec(naked) void asm_00adb400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50eab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00adb44b }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00ade340 }
	__asm { jmp L_00adb44d }
	__asm { L_00adb44b: }
	__asm { xor esi, esi }
	__asm { L_00adb44d: }
	__asm { mov eax, dword ptr [ebp + 0x68] }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x68], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00adb487 }
	__asm { test al, 1 }
	__asm { jne L_00adb480 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00adb480 }
	__asm { lea ecx, [ebp + 0x50] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00adb480: }
	__asm { mov dword ptr [ebp + 0x48], 0 }
	__asm { L_00adb487: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf220 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x68 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00a5a980();
extern "C" void fn_00adf160();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00adb4b0
extern "C" __declspec(naked) void asm_00adb4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50edb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00adb53b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_00a5a980 }
	__asm { push 0x58 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00adb524 }
	__asm { mov ecx, dword ptr [ebp - 0x68] }
	__asm { lea eax, [ebp - 0x60] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00a5a980 }
	__asm { jmp L_00adb526 }
	__asm { L_00adb524: }
	__asm { xor esi, esi }
	__asm { L_00adb526: }
	__asm { mov eax, dword ptr [ebp + 0x60] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adf160 }
	__asm { mov bl, 1 }
	__asm { jmp L_00adb53d }
	__asm { L_00adb53b: }
	__asm { xor bl, bl }
	__asm { L_00adb53d: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x60 }
}

extern "C" void fn_00a5a980();
extern "C" void fn_00adb4b0();
extern "C" void fn_00adf160();
// FUNCTION: ROBLOXSTUDIO 0x00adb560
extern "C" __declspec(naked) void asm_00adb560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50f00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00a5a980 }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x58 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_00a5a980 }
	__asm { mov esi, 0xebe6a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00adb4b0 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adf160 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00adb400();
extern "C" void fn_00ade340();
extern "C" void fn_00adf220();
// FUNCTION: ROBLOXSTUDIO 0x00adb610
extern "C" __declspec(naked) void asm_00adb610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50f20 }
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
	__asm { jne L_00adb66f }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x68] }
	__asm { sub esp, 0x60 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00ade340 }
	__asm { mov ecx, esi }
	__asm { call fn_00adb400 }
	__asm { mov bl, 1 }
	__asm { jmp L_00adb671 }
	__asm { L_00adb66f: }
	__asm { xor bl, bl }
	__asm { L_00adb671: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x68], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00adb6a5 }
	__asm { test al, 1 }
	__asm { jne L_00adb69e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00adb69e }
	__asm { lea ecx, [ebp + 0x50] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00adb69e: }
	__asm { mov dword ptr [ebp + 0x48], 0 }
	__asm { L_00adb6a5: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf220 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x68 }
}

extern "C" void fn_00adb610();
extern "C" void fn_00ade340();
extern "C" void fn_00adf220();
// FUNCTION: ROBLOXSTUDIO 0x00adb6d0
extern "C" __declspec(naked) void asm_00adb6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50f20 }
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
	__asm { push dword ptr [ebp + 0x68] }
	__asm { sub esp, 0x60 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00ade340 }
	__asm { mov ecx, esi }
	__asm { call fn_00adb610 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x68], eax }
	__asm { mov ecx, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00adb753 }
	__asm { test cl, 1 }
	__asm { jne L_00adb74c }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00adb74c }
	__asm { lea ecx, [ebp + 0x50] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00adb74c: }
	__asm { mov dword ptr [ebp + 0x48], 0 }
	__asm { L_00adb753: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf220 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x64 }
}

extern "C" void fn_00adb6d0();
extern "C" void fn_00ade340();
extern "C" void fn_00adf220();
// FUNCTION: ROBLOXSTUDIO 0x00adb780
extern "C" __declspec(naked) void asm_00adb780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50e80 }
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
	__asm { sub esp, 0x60 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_00ade340 }
	__asm { mov esi, 0xebe698 }
	__asm { mov ecx, esi }
	__asm { call fn_00adb6d0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00adb807 }
	__asm { test al, 1 }
	__asm { jne L_00adb800 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00adb800 }
	__asm { lea ecx, [ebp + 0x50] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00adb800: }
	__asm { mov dword ptr [ebp + 0x48], 0 }
	__asm { L_00adb807: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf220 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x60 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00ade7c0();
extern "C" void fn_00adf340();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00adb830
extern "C" __declspec(naked) void asm_00adb830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50f4b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x64 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00adb8bb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { call fn_00ade7c0 }
	__asm { push 0x60 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00adb8a4 }
	__asm { mov ecx, dword ptr [ebp - 0x70] }
	__asm { lea eax, [ebp - 0x68] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00ade7c0 }
	__asm { jmp L_00adb8a6 }
	__asm { L_00adb8a4: }
	__asm { xor esi, esi }
	__asm { L_00adb8a6: }
	__asm { mov eax, dword ptr [ebp + 0x68] }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adf340 }
	__asm { mov bl, 1 }
	__asm { jmp L_00adb8bd }
	__asm { L_00adb8bb: }
	__asm { xor bl, bl }
	__asm { L_00adb8bd: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf340 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x68 }
}

extern "C" void fn_00adb830();
extern "C" void fn_00ade7c0();
extern "C" void fn_00adf340();
// FUNCTION: ROBLOXSTUDIO 0x00adb8e0
extern "C" __declspec(naked) void asm_00adb8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50f70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x64 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00ade7c0 }
	__asm { mov eax, dword ptr [ebp - 0x70] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x60 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { call fn_00ade7c0 }
	__asm { mov esi, 0xebe690 }
	__asm { mov ecx, esi }
	__asm { call fn_00adb830 }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adf340 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adf340 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x60 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00adad00();
extern "C" void fn_00ae16a0();
// FUNCTION: ROBLOXSTUDIO 0x00adc150
extern "C" __declspec(naked) void asm_00adc150()
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
	__asm { je L_00adc19b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00adc19b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00adc1c4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00adad00 }
	__asm { mov dword ptr [esi], 0xebe67c }
	__asm { mov dword ptr [esi + 8], 0xebe68c }
	__asm { jmp L_00adc1c6 }
	__asm { L_00adc1c4: }
	__asm { xor esi, esi }
	__asm { L_00adc1c6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00ae16a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00adc1ea }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00adc1ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
// FUNCTION: ROBLOXSTUDIO 0x00adc200
extern "C" __declspec(naked) void asm_00adc200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { mov dword ptr [esi + 0xcc], eax }
	__asm { call fn_004124c0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_0131a54c[];
extern "C" char g_0131a550[];
extern "C" char g_0131a554[];
extern "C" char g_0131a558[];
extern "C" void fn_007b0970();
extern "C" void fn_007d5390();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00adc2e0
extern "C" __declspec(naked) void asm_00adc2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd510b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { mov ecx, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x4c], ecx }
	__asm { mov ecx, dword ptr [g_0131a54c] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test cl, 1 }
	__asm { jne L_00adc35a }
	__asm { or ecx, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], ecx }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { add esp, 4 }
	__asm { L_00adc35a: }
	__asm { mov dword ptr [ebp - 0x50], 0x131a550 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { test ecx, ecx }
	__asm { je L_00adc38d }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { add esp, 8 }
	__asm { L_00adc38d: }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_007b0970 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00adc3af }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00adc3af: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00adc3d6 }
	__asm { test al, 1 }
	__asm { jne L_00adc3d6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00adc3d6 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00adc3d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00825140();
extern "C" void fn_00adca40();
extern "C" void fn_00ae0190();
// FUNCTION: ROBLOXSTUDIO 0x00adc4f0
extern "C" __declspec(naked) void asm_00adc4f0()
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
	__asm { call fn_00adca40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xebdf6c }
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
	__asm { call fn_00ae0190 }
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
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00adca40();
// FUNCTION: ROBLOXSTUDIO 0x00adc5a0
extern "C" __declspec(naked) void asm_00adc5a0()
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
	__asm { call fn_00adca40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xebdf1c }
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
	__asm { call fn_007d5390 }
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
	__asm { je L_00adc64e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00adc64e: }
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
extern "C" char g_012f1bc4[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00adca40
extern "C" __declspec(naked) void asm_00adca40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51116 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f1bc4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00adcaba }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1bc4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebdd08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1a98 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7c70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00adcaba: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f1a98 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xebdf10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00adcb32 }
	__asm { push 0x12745e0 }
	__asm { mov ecx, 0x12745e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00adcb32 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00adcb1d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00adcb32 }
	__asm { L_00adcb1d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00adcb32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00addc60();
// FUNCTION: ROBLOXSTUDIO 0x00ade340
extern "C" __declspec(naked) void asm_00ade340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51418 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00addc60 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00ade3d2 }
	__asm { mov dword ptr [esi + 0x38], ecx }
	__asm { test cl, 1 }
	__asm { je L_00ade3be }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0x4c] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ade3be: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x40] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x40] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00ade3d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00ade0a0();
// FUNCTION: ROBLOXSTUDIO 0x00ade7c0
extern "C" __declspec(naked) void asm_00ade7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00ade0a0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00ade852 }
	__asm { mov dword ptr [esi + 0x38], ecx }
	__asm { test cl, 1 }
	__asm { je L_00ade83e }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0x4c] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ade83e: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x40] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x40] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00ade852: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00ae0320();
// FUNCTION: ROBLOXSTUDIO 0x00adecf0
extern "C" __declspec(naked) void asm_00adecf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51448 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00aded7d }
	__asm { add esi, 5 }
	__asm { je L_00aded45 }
	__asm { add esi, -5 }
	__asm { jmp L_00aded47 }
	__asm { L_00aded45: }
	__asm { xor esi, esi }
	__asm { L_00aded47: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aded77 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aded77 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aded7d }
	__asm { L_00aded77: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aded7d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00ae0320 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00adedcc }
	__asm { add esi, 5 }
	__asm { je L_00adeda2 }
	__asm { add esi, -5 }
	__asm { jmp L_00adeda4 }
	__asm { L_00adeda2: }
	__asm { xor esi, esi }
	__asm { L_00adeda4: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00adedcc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00adedcc }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00adedcc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00adefa0();
// FUNCTION: ROBLOXSTUDIO 0x00adf340
extern "C" __declspec(naked) void asm_00adf340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51510 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00adf38d }
	__asm { test al, 1 }
	__asm { jne L_00adf386 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00adf386 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00adf386: }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_00adf38d: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00adf3bb }
	__asm { test al, 1 }
	__asm { jne L_00adf3b4 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00adf3b4 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00adf3b4: }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00adf3bb: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adefa0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d55c0();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00ae0190
extern "C" __declspec(naked) void asm_00ae0190()
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
	__asm { call fn_007d55c0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5390 }
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
	__asm { je L_00ae020d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ae020d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00ae0227 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00ae0227: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412300();
extern "C" void fn_006b9740();
extern "C" void fn_00adf3e0();
// FUNCTION: ROBLOXSTUDIO 0x00ae0b90
extern "C" __declspec(naked) void asm_00ae0b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_00ae0bfa }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 4 }
	__asm { je L_00ae0bfa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ae0be9 }
	__asm { push 0x18a }
	__asm { push 0xe52268 }
	__asm { push 0xe636c0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae0bfa }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00ae0be9: }
	__asm { movzx eax, bl }
	__asm { push 0xe636d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae0bfa: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00ae0c09 }
	__asm { add eax, -0x1c }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00ae0c10 }
	__asm { L_00ae0c09: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_00ae0c10: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0xd0 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0x10 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_00adf3e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
// FUNCTION: ROBLOXSTUDIO 0x00ae2cd0
extern "C" __declspec(naked) void asm_00ae2cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00426db0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi + 0xcc], eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xd0] }
	__asm { call fn_004124c0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00426f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f1cf4[];
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008841a0();
extern "C" void fn_00ae3900();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ae2f70
extern "C" __declspec(naked) void asm_00ae2f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd519f6 }
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
	__asm { call fn_00ae3900 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f1cf4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00ae302f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1cf4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebe6b0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1bc8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00ae302f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f1bc8 }
	__asm { call fn_008841a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebea9c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ae30ad }
	__asm { push 0x12755e0 }
	__asm { mov ecx, 0x12755e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ae30ad }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ae3098 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae30ad }
	__asm { L_00ae3098: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae30ad: }
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
extern "C" char g_012f1cf4[];
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008690c0();
extern "C" void fn_00ae3960();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ae30c0
extern "C" __declspec(naked) void asm_00ae30c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd519f6 }
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
	__asm { call fn_00ae3960 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f1cf4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00ae317f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1cf4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebe6b0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1bc8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00ae317f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f1bc8 }
	__asm { call fn_008690c0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebe9b0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ae31fd }
	__asm { push 0x12755e0 }
	__asm { mov ecx, 0x12755e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ae31fd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ae31e8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae31fd }
	__asm { L_00ae31e8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae31fd: }
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
extern "C" char g_012f1cf4[];
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b310();
extern "C" void fn_00ae39c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ae3210
extern "C" __declspec(naked) void asm_00ae3210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51a26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
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
	__asm { call fn_00ae39c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f1cf4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00ae32cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1cf4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebe6b0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1bc8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00ae32cc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f1bc8 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebe9ec }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ae334a }
	__asm { push 0x12755e0 }
	__asm { mov ecx, 0x12755e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ae334a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ae3335 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae334a }
	__asm { L_00ae3335: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae334a: }
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
extern "C" char g_012f1cf4[];
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b310();
extern "C" void fn_00ae3a10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ae3360
extern "C" __declspec(naked) void asm_00ae3360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd519f6 }
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
	__asm { call fn_00ae3a10 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f1cf4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00ae341f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1cf4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebe6b0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1bc8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00ae341f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f1bc8 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebe9ec }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ae349d }
	__asm { push 0x12755e0 }
	__asm { mov ecx, 0x12755e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ae349d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ae3488 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae349d }
	__asm { L_00ae3488: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae349d: }
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
extern "C" char g_012f1cf4[];
extern "C" void fn_0040bac0();
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00ae3a70();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ae34b0
extern "C" __declspec(naked) void asm_00ae34b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51a56 }
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
	__asm { call fn_00ae3a70 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f1cf4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00ae356f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1cf4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebe6b0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1bc8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00ae356f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f1bc8 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebea4c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ae35ed }
	__asm { push 0x12755e0 }
	__asm { mov ecx, 0x12755e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ae35ed }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ae35d8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae35ed }
	__asm { L_00ae35d8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae35ed: }
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
extern "C" char g_012f1cf4[];
extern "C" void fn_0040ba00();
extern "C" void fn_0041cd30();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00ae3ad0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ae3600
extern "C" __declspec(naked) void asm_00ae3600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51a56 }
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
	__asm { call fn_00ae3ad0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012f1cf4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00ae36bf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1cf4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebe6b0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1bc8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00ae36bf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12f1bc8 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xebe954 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ae373d }
	__asm { push 0x12755e0 }
	__asm { mov ecx, 0x12755e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ae373d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ae3728 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae373d }
	__asm { L_00ae3728: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae373d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012e4cb4[];
extern "C" char g_012f1cf4[];
extern "C" void fn_0041cd30();
extern "C" void fn_007cbf10();
extern "C" void fn_00869c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ae3750
extern "C" __declspec(naked) void asm_00ae3750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51a76 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00869c20 }
	__asm { mov dword ptr [esi], 0xebe6cc }
	__asm { mov dword ptr [esi + 4], 0xebe784 }
	__asm { mov dword ptr [esi + 0x18], 0xebe78c }
	__asm { mov dword ptr [esi + 0x1c], 0xebe798 }
	__asm { mov dword ptr [esi + 0x64], 0xebe7a8 }
	__asm { mov dword ptr [esi + 0x68], 0xebe7b0 }
	__asm { mov eax, dword ptr [g_012f1cf4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_00ae37f9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1cf4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebe6b0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041cd30 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1bc8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d60 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00ae37f9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x12f1bc8 }
	__asm { inc dword ptr [g_012e4cb4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0097b6e0();
// FUNCTION: ROBLOXSTUDIO 0x00ae3820
extern "C" __declspec(naked) void asm_00ae3820()
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
	__asm { je L_00ae386b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00ae386b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00ae38be }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe882e0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xebebac }
	__asm { mov dword ptr [esi + 8], 0xebebbc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xebebc4 }
	__asm { mov dword ptr [esi + 8], 0xebebd4 }
	__asm { jmp L_00ae38c0 }
	__asm { L_00ae38be: }
	__asm { xor esi, esi }
	__asm { L_00ae38c0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0097b6e0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00ae38dd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00ae38dd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ae3b30
extern "C" __declspec(naked) void asm_00ae3b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { imul edx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, ecx }
	__asm { jne L_00ae3b88 }
	__asm { test ecx, ecx }
	__asm { je L_00ae3bb6 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { add dword ptr [esi + 0xc], 0xc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { jne L_00ae3b7d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00ae3b7d: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ae3b88: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00ae3ba2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { L_00ae3ba2: }
	__asm { add dword ptr [esi + 0xc], 0xc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { jne L_00ae3bb3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00ae3bb3: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { L_00ae3bb6: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004226b0();
extern "C" void fn_004c92a0();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_006c54a0();
extern "C" void fn_006c5500();
extern "C" void fn_00ae3820();
extern "C" void fn_00b659c0();
// FUNCTION: ROBLOXSTUDIO 0x00ae54a0
extern "C" __declspec(naked) void asm_00ae54a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd47a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00ae54d2 }
	__asm { lea ecx, [edi + 0x408] }
	__asm { call fn_006b9e50 }
	__asm { L_00ae54d2: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x290] }
	__asm { call fn_00b659c0 }
	__asm { test ebx, ebx }
	__asm { je L_00ae55b0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea esi, [edi + 0x3f8] }
	__asm { call fn_006c54a0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea esi, [edi + 0x3f0] }
	__asm { call fn_006c54a0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x20 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_00ae55b0 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x358] }
	__asm { mov dword ptr [ebp - 0x24], 0xae50c0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { call fn_00ae3820 }
	__asm { mov esi, eax }
	__asm { add edi, 0x408 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00ae5596 }
	__asm { mov ecx, edi }
	__asm { call fn_006b9e50 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006b9b80 }
	__asm { L_00ae5596: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00ae55b0 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00ae55b0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ae7a70
extern "C" __declspec(naked) void asm_00ae7a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xebf184 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xebf234 }
	__asm { mov dword ptr [esi + 8], 0xebf244 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00ae7b1a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00ae7b06 }
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
	__asm { L_00ae7b06: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00ae7b1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ae7b30
extern "C" __declspec(naked) void asm_00ae7b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xebf19c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xebf1d4 }
	__asm { mov dword ptr [esi + 8], 0xebf1e4 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00ae7bda }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00ae7bc6 }
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
	__asm { L_00ae7bc6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00ae7bda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ae7bf0
extern "C" __declspec(naked) void asm_00ae7bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xebf18c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xebf204 }
	__asm { mov dword ptr [esi + 8], 0xebf214 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00ae7c9a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00ae7c86 }
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
	__asm { L_00ae7c86: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00ae7c9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00aeb4a0();
// FUNCTION: ROBLOXSTUDIO 0x00ae8340
extern "C" __declspec(naked) void asm_00ae8340()
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
	__asm { je L_00ae838b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00ae838b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00ae83de }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xebf194 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xebf1a4 }
	__asm { mov dword ptr [esi + 8], 0xebf1b4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xebf1bc }
	__asm { mov dword ptr [esi + 8], 0xebf1cc }
	__asm { jmp L_00ae83e0 }
	__asm { L_00ae83de: }
	__asm { xor esi, esi }
	__asm { L_00ae83e0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00aeb4a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00ae83fd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00ae83fd: }
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
extern "C" void fn_00ae7a70();
extern "C" void fn_00aeb140();
// FUNCTION: ROBLOXSTUDIO 0x00ae8450
extern "C" __declspec(naked) void asm_00ae8450()
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
	__asm { je L_00ae849b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00ae849b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00ae84c4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00ae7a70 }
	__asm { mov dword ptr [esi], 0xebf24c }
	__asm { mov dword ptr [esi + 8], 0xebf25c }
	__asm { jmp L_00ae84c6 }
	__asm { L_00ae84c4: }
	__asm { xor esi, esi }
	__asm { L_00ae84c6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aeb140 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00ae84ea }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00ae84ea: }
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
extern "C" void fn_00ae7b30();
extern "C" void fn_00aeb2f0();
// FUNCTION: ROBLOXSTUDIO 0x00ae8530
extern "C" __declspec(naked) void asm_00ae8530()
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
	__asm { je L_00ae857b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00ae857b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00ae85a4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00ae7b30 }
	__asm { mov dword ptr [esi], 0xebf1ec }
	__asm { mov dword ptr [esi + 8], 0xebf1fc }
	__asm { jmp L_00ae85a6 }
	__asm { L_00ae85a4: }
	__asm { xor esi, esi }
	__asm { L_00ae85a6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aeb2f0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00ae85ca }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00ae85ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
