// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00ae7bf0();
extern "C" void fn_00aeb4a0();
// FUNCTION: ROBLOXSTUDIO 0x00ae8610
extern "C" __declspec(naked) void asm_00ae8610()
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
	__asm { je L_00ae865b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00ae865b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00ae8684 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00ae7bf0 }
	__asm { mov dword ptr [esi], 0xebf21c }
	__asm { mov dword ptr [esi + 8], 0xebf22c }
	__asm { jmp L_00ae8686 }
	__asm { L_00ae8684: }
	__asm { xor esi, esi }
	__asm { L_00ae8686: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aeb4a0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00ae86aa }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00ae86aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
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
extern "C" void fn_007dd280();
extern "C" void fn_007e9300();
// FUNCTION: ROBLOXSTUDIO 0x00ae8760
extern "C" __declspec(naked) void asm_00ae8760()
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
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007e9300 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_007dd280 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_00410d50 }
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
	__asm { ret 0xc }
}

extern "C" void fn_00410d50();
extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x00ae8820
extern "C" __declspec(naked) void asm_00ae8820()
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
	__asm { call fn_007d5d30 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00410d50 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5390 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_004124c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x8c] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_0048e3f0 }
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
	__asm { ret 0xc }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f1e24[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00ae8f60
extern "C" __declspec(naked) void asm_00ae8f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51c86 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f1e24] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00ae8fda }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f1e24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebec64 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1cf8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7540 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00ae8fda: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f1cf8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xebef80 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00ae9052 }
	__asm { push 0x1275f14 }
	__asm { mov ecx, 0x1275f14 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00ae9052 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ae903d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae9052 }
	__asm { L_00ae903d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae9052: }
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
extern "C" void fn_00aea2e0();
// FUNCTION: ROBLOXSTUDIO 0x00ae9270
extern "C" __declspec(naked) void asm_00ae9270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51d58 }
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
	__asm { je L_00ae92fd }
	__asm { add esi, 5 }
	__asm { je L_00ae92c5 }
	__asm { add esi, -5 }
	__asm { jmp L_00ae92c7 }
	__asm { L_00ae92c5: }
	__asm { xor esi, esi }
	__asm { L_00ae92c7: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae92f7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae92f7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ae92fd }
	__asm { L_00ae92f7: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ae92fd: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00aea2e0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ae934c }
	__asm { add esi, 5 }
	__asm { je L_00ae9322 }
	__asm { add esi, -5 }
	__asm { jmp L_00ae9324 }
	__asm { L_00ae9322: }
	__asm { xor esi, esi }
	__asm { L_00ae9324: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae934c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae934c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ae934c: }
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
extern "C" void fn_00aea670();
// FUNCTION: ROBLOXSTUDIO 0x00ae9360
extern "C" __declspec(naked) void asm_00ae9360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51d88 }
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
	__asm { je L_00ae93ed }
	__asm { add esi, 5 }
	__asm { je L_00ae93b5 }
	__asm { add esi, -5 }
	__asm { jmp L_00ae93b7 }
	__asm { L_00ae93b5: }
	__asm { xor esi, esi }
	__asm { L_00ae93b7: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae93e7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae93e7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ae93ed }
	__asm { L_00ae93e7: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ae93ed: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00aea670 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ae943c }
	__asm { add esi, 5 }
	__asm { je L_00ae9412 }
	__asm { add esi, -5 }
	__asm { jmp L_00ae9414 }
	__asm { L_00ae9412: }
	__asm { xor esi, esi }
	__asm { L_00ae9414: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae943c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae943c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ae943c: }
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
extern "C" void fn_00aeaa00();
// FUNCTION: ROBLOXSTUDIO 0x00ae9450
extern "C" __declspec(naked) void asm_00ae9450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd51db8 }
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
	__asm { je L_00ae94dd }
	__asm { add esi, 5 }
	__asm { je L_00ae94a5 }
	__asm { add esi, -5 }
	__asm { jmp L_00ae94a7 }
	__asm { L_00ae94a5: }
	__asm { xor esi, esi }
	__asm { L_00ae94a7: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae94d7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae94d7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ae94dd }
	__asm { L_00ae94d7: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ae94dd: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00aeaa00 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ae952c }
	__asm { add esi, 5 }
	__asm { je L_00ae9502 }
	__asm { add esi, -5 }
	__asm { jmp L_00ae9504 }
	__asm { L_00ae9502: }
	__asm { xor esi, esi }
	__asm { L_00ae9504: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae952c }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae952c }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ae952c: }
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
extern "C" void fn_00412300();
extern "C" void fn_006b9740();
extern "C" void fn_007e0160();
extern "C" void fn_00ae9820();
// FUNCTION: ROBLOXSTUDIO 0x00aeade0
extern "C" __declspec(naked) void asm_00aeade0()
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
	__asm { je L_00aeae4a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_00aeae4a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aeae39 }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeae4a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00aeae39: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeae4a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00aeae56 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_00aeae58 }
	__asm { L_00aeae56: }
	__asm { xor ebx, ebx }
	__asm { L_00aeae58: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_007e0160 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_00412300 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { add ecx, ebx }
	__asm { call fn_00ae9820 }
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
extern "C" void fn_007e0160();
extern "C" void fn_00ae98e0();
// FUNCTION: ROBLOXSTUDIO 0x00aeae90
extern "C" __declspec(naked) void asm_00aeae90()
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
	__asm { je L_00aeaefa }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00aeaefa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aeaee9 }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeaefa }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00aeaee9: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeaefa: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00aeaf06 }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_00aeaf08 }
	__asm { L_00aeaf06: }
	__asm { xor ebx, ebx }
	__asm { L_00aeaf08: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x8c }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_007e0160 }
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
	__asm { call fn_00ae98e0 }
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
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_00ae99b0();
// FUNCTION: ROBLOXSTUDIO 0x00aeaf60
extern "C" __declspec(naked) void asm_00aeaf60()
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
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test bl, bl }
	__asm { je L_00aeafdf }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 3 }
	__asm { je L_00aeafdf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aeafce }
	__asm { push 0x169 }
	__asm { push 0xe52268 }
	__asm { push 0xe727fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeafdf }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00aeafce: }
	__asm { movzx eax, bl }
	__asm { push 0xe72810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeafdf: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00aeafeb }
	__asm { lea ebx, [eax - 0x1c] }
	__asm { jmp L_00aeafed }
	__asm { L_00aeafeb: }
	__asm { xor ebx, ebx }
	__asm { L_00aeafed: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x88 }
	__asm { push eax }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412300 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_00410bb0 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00ae99b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004033d0();
extern "C" void fn_0043f040();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00c2cf50();
extern "C" void fn_00c2fed0();
// FUNCTION: ROBLOXSTUDIO 0x00aebdd0
extern "C" __declspec(naked) void asm_00aebdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2cf50 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00aebe5c }
	__asm { push esi }
	__asm { call fn_00c2fed0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aebe5c }
	__asm { mov eax, dword ptr [eax + 0xcc] }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00aebe5c }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00aebe24 }
	__asm { mov byte ptr [esi + 0x65], 1 }
	__asm { lea ecx, [esi + 0x6c] }
	__asm { jmp L_00aebe57 }
	__asm { L_00aebe24: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { push 0xebf140 }
	__asm { push 2 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { lea ecx, [esi + 0x68] }
	__asm { L_00aebe57: }
	__asm { call fn_0043f040 }
	__asm { L_00aebe5c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004124c0();
extern "C" void fn_00426db0();
extern "C" void fn_00426f50();
extern "C" void fn_007d5390();
extern "C" void fn_007dd280();
extern "C" void fn_007e9300();
// FUNCTION: ROBLOXSTUDIO 0x00aebe70
extern "C" __declspec(naked) void asm_00aebe70()
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
	__asm { push 2 }
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
	__asm { call fn_007e9300 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x48] }
	__asm { call fn_007dd280 }
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
	__asm { ret 0xc }
}

extern "C" void fn_00aec8b0();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00aec4d0
extern "C" __declspec(naked) void asm_00aec4d0()
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
	__asm { call fn_00aec8b0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00aec54b }
	__asm { test al, 1 }
	__asm { jne L_00aec544 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00aec544 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aec544: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00aec54b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00aec572 }
	__asm { test al, 1 }
	__asm { jne L_00aec572 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00aec572 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aec572: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

// FUNCTION: ROBLOXSTUDIO 0x00aec620
extern "C" __declspec(naked) void asm_00aec620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52038 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { sub esp, 0x44 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebx, esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { test ecx, ecx }
	__asm { je L_00aec66d }
	__asm { lea eax, [ebx + 8] }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00aec66d: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { test edx, edx }
	__asm { je L_00aec6cc }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_00aec6b8 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_00aec6cc }
	__asm { L_00aec6b8: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aec6cc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x64 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040c260();
extern "C" void fn_009a55e0();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00aec810
extern "C" __declspec(naked) void asm_00aec810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25d88 }
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
	__asm { jne L_00aec866 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, esi }
	__asm { call fn_009a55e0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00aec868 }
	__asm { L_00aec866: }
	__asm { xor bl, bl }
	__asm { L_00aec868: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00aec88f }
	__asm { test al, 1 }
	__asm { jne L_00aec88f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00aec88f }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aec88f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00aec8b0
extern "C" __declspec(naked) void asm_00aec8b0()
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
	__asm { mov esi, 0xebf620 }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00aec93a }
	__asm { test cl, 1 }
	__asm { jne L_00aec933 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00aec933 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aec933: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00aec93a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00aec96a }
	__asm { test al, 1 }
	__asm { jne L_00aec96a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00aec96a }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aec96a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00aed4a0();
extern "C" void fn_00aed7d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aec980
extern "C" __declspec(naked) void asm_00aec980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5206b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00aeca0b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call fn_00aed4a0 }
	__asm { push 0x50 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00aec9f4 }
	__asm { mov ecx, dword ptr [ebp - 0x60] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00aed4a0 }
	__asm { jmp L_00aec9f6 }
	__asm { L_00aec9f4: }
	__asm { xor esi, esi }
	__asm { L_00aec9f6: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00aed7d0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00aeca0d }
	__asm { L_00aeca0b: }
	__asm { xor bl, bl }
	__asm { L_00aeca0d: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aed7d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_00aec980();
extern "C" void fn_00aed4a0();
extern "C" void fn_00aed7d0();
// FUNCTION: ROBLOXSTUDIO 0x00aeca30
extern "C" __declspec(naked) void asm_00aeca30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52090 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00aed4a0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_00aed4a0 }
	__asm { mov esi, 0xebf618 }
	__asm { mov ecx, esi }
	__asm { call fn_00aec980 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00aed7d0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aed7d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_007b0970();
// FUNCTION: ROBLOXSTUDIO 0x00aecca0
extern "C" __declspec(naked) void asm_00aecca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52108 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov ecx, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x54], ecx }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test eax, eax }
	__asm { je L_00aecced }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { push ecx }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov ecx, dword ptr [ebp - 0x54] }
	__asm { add esp, 8 }
	__asm { L_00aecced: }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { test ecx, ecx }
	__asm { je L_00aecd1c }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { add esp, 8 }
	__asm { L_00aecd1c: }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_007b0970 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00aecd3e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00aecd3e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00aecd69 }
	__asm { test al, 1 }
	__asm { jne L_00aecd62 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00aecd62 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aecd62: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_00aecd69: }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00aecd83 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x30] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00aecd83: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00aed000();
// FUNCTION: ROBLOXSTUDIO 0x00aecda0
extern "C" __declspec(naked) void asm_00aecda0()
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
	__asm { call fn_00aed000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xebf4e0 }
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
	__asm { je L_00aece4e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00aece4e: }
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
extern "C" void fn_007d5390();
extern "C" void fn_008250d0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00aed000();
// FUNCTION: ROBLOXSTUDIO 0x00aece70
extern "C" __declspec(naked) void asm_00aece70()
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
	__asm { call fn_00aed000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xebf4b8 }
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
	__asm { je L_00aecf1e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00aecf1e: }
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
extern "C" char g_012f2084[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00aed000
extern "C" __declspec(naked) void asm_00aed000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52156 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f2084] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00aed07a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f2084], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xebf278 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1f58 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00aed07a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f1f58 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xebf4ac }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00aed0f2 }
	__asm { push 0x1277c50 }
	__asm { mov ecx, 0x1277c50 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00aed0f2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aed0dd }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aed0f2 }
	__asm { L_00aed0dd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aed0f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00aed2a0();
// FUNCTION: ROBLOXSTUDIO 0x00aed4a0
extern "C" __declspec(naked) void asm_00aed4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52168 }
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
	__asm { call fn_00aed2a0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00aed532 }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { test cl, 1 }
	__asm { je L_00aed51e }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00aed51e: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aed532: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00aeeaf0
extern "C" __declspec(naked) void asm_00aeeaf0()
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
	__asm { push 0x11f072c }
	__asm { mov edi, ecx }
	__asm { push 0xebf628 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59808 }
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
	__asm { push 0xebf634 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x101d14c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf63c }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf644 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf64c }
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
// FUNCTION: ROBLOXSTUDIO 0x00aeec50
extern "C" __declspec(naked) void asm_00aeec50()
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
	__asm { push 0x11f0568 }
	__asm { mov edi, ecx }
	__asm { push 0xebf650 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59af0 }
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
	__asm { push 0xebf65c }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe67158 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x102b8e8 }
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

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00aeed90
extern "C" __declspec(naked) void asm_00aeed90()
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
	__asm { push 0x11f05d8 }
	__asm { mov edi, ecx }
	__asm { push 0xebf6d4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59b68 }
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
	__asm { push 0x10341ec }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe70998 }
	__asm { push 5 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5eecc }
	__asm { push 6 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x10131e0 }
	__asm { push 8 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe2d65c }
	__asm { push 0xa }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf6e0 }
	__asm { push 0x14 }
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
// FUNCTION: ROBLOXSTUDIO 0x00aeeef0
extern "C" __declspec(naked) void asm_00aeeef0()
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
	__asm { push 0x11f0608 }
	__asm { mov edi, ecx }
	__asm { push 0xebf6e4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59b80 }
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
	__asm { push 0x10341ec }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x10131dc }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe70998 }
	__asm { push 5 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5eecc }
	__asm { push 6 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x10131e0 }
	__asm { push 8 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe2d65c }
	__asm { push 0xa }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf6e0 }
	__asm { push 0x14 }
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
// FUNCTION: ROBLOXSTUDIO 0x00aef060
extern "C" __declspec(naked) void asm_00aef060()
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
	__asm { push 0x11f07a4 }
	__asm { mov edi, ecx }
	__asm { push 0xe623e4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59850 }
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
	__asm { push 0xebf704 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf710 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf71c }
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

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00aef1a0
extern "C" __declspec(naked) void asm_00aef1a0()
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
	__asm { push 0x11f0d3c }
	__asm { mov edi, ecx }
	__asm { push 0xebf6f4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59bc8 }
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
	__asm { push 0x101d2cc }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe7da38 }
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
// FUNCTION: ROBLOXSTUDIO 0x00aef480
extern "C" __declspec(naked) void asm_00aef480()
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
	__asm { push 0x11f0904 }
	__asm { mov edi, ecx }
	__asm { push 0xebf728 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59910 }
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
	__asm { push 0xebf734 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf73c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf748 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe7ce30 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf754 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xebf75c }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00aef650
extern "C" __declspec(naked) void asm_00aef650()
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
	__asm { push 0x11f0a68 }
	__asm { mov edi, ecx }
	__asm { push 0xebfad8 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe599d0 }
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
	__asm { push 0x10131d4 }
	__asm { push 0xd }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x101d100 }
	__asm { push 6 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x1003708 }
	__asm { push 7 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x1003710 }
	__asm { push 8 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x100369c }
	__asm { push 9 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x1003790 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x100374c }
	__asm { push 3 }
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

extern "C" void fn_0099d3b0();
// FUNCTION: ROBLOXSTUDIO 0x00af0bc0
extern "C" __declspec(naked) void asm_00af0bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call fn_0099d3b0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { test ecx, ecx }
	__asm { je L_00af0bf3 }
	__asm { call fn_0099d3b0 }
	__asm { cmp edi, eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { lea edx, [ebp - 4] }
	__asm { cmovae ecx, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov edi, dword ptr [ecx] }
	__asm { L_00af0bf3: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call fn_0099d3b0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { test ecx, ecx }
	__asm { je L_00af0c1f }
	__asm { call fn_0099d3b0 }
	__asm { cmp ebx, eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { cmovae ecx, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { L_00af0c1f: }
	__asm { cmp edi, ebx }
	__asm { jbe L_00af0c2f }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af0c2f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { sbb eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00626760();
extern "C" void fn_006b9740();
extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_0099c980();
// FUNCTION: ROBLOXSTUDIO 0x00af1170
extern "C" __declspec(naked) void asm_00af1170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00af11c9 }
	__asm { cmp dword ptr [esi + edi*4 + 0xc], 0 }
	__asm { jne L_00af11c9 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00af11b8 }
	__asm { push 0x5a }
	__asm { push 0xebfb0c }
	__asm { push 0xebfe4c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af11c9 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00af11b8: }
	__asm { movzx eax, al }
	__asm { push 0xebfe60 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af11c9: }
	__asm { mov ecx, dword ptr [esi + edi*4 + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00af11f0 }
	__asm { test edi, edi }
	__asm { jne L_00af11da }
	__asm { add esi, 0x34 }
	__asm { jmp L_00af11dd }
	__asm { L_00af11da: }
	__asm { add esi, 0x64 }
	__asm { L_00af11dd: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_0099c980 }
	__asm { mov ecx, eax }
	__asm { call fn_00626760 }
	__asm { jmp L_00af11f8 }
	__asm { L_00af11f0: }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { call fn_006da0e0 }
	__asm { L_00af11f8: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00af1280
extern "C" __declspec(naked) void asm_00af1280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x44] }
	__asm { mov edi, dword ptr [esi + eax*4 + 0x120] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [esi + 0x100] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x44] }
	__asm { mov eax, dword ptr [esi + eax*4 + 0x120] }
	__asm { cmp edi, 3 }
	__asm { jne L_00af12c5 }
	__asm { cmp eax, 4 }
	__asm { jne L_00af12ed }
	__asm { L_00af12c5: }
	__asm { cmp eax, 3 }
	__asm { jne L_00af12cf }
	__asm { cmp edi, 4 }
	__asm { jne L_00af12ed }
	__asm { L_00af12cf: }
	__asm { cmp edi, 5 }
	__asm { jne L_00af12de }
	__asm { cmp eax, 3 }
	__asm { je L_00af12de }
	__asm { cmp eax, 4 }
	__asm { jne L_00af12ed }
	__asm { L_00af12de: }
	__asm { cmp eax, 5 }
	__asm { jne L_00af12f3 }
	__asm { cmp edi, 3 }
	__asm { je L_00af12f3 }
	__asm { cmp edi, 4 }
	__asm { je L_00af12f3 }
	__asm { L_00af12ed: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af12f3: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00af0a00();
extern "C" void fn_00af0bc0();
// FUNCTION: ROBLOXSTUDIO 0x00af1300
extern "C" __declspec(naked) void asm_00af1300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea edi, [ecx - 0x1c] }
	__asm { test esi, esi }
	__asm { je L_00af1314 }
	__asm { add esi, -0x1c }
	__asm { jmp L_00af1316 }
	__asm { L_00af1314: }
	__asm { xor esi, esi }
	__asm { L_00af1316: }
	__asm { cmp edi, esi }
	__asm { jne L_00af1322 }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af1322: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov ebx, eax }
	__asm { call dword ptr [edx + 0x18] }
	__asm { mov ecx, eax }
	__asm { cmp ebx, ecx }
	__asm { je L_00af1347 }
	__asm { xor eax, eax }
	__asm { cmp ebx, ecx }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { setl al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af1347: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00af0bc0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jg L_00af1365 }
	__asm { js L_00af1370 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00af0a00 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jle L_00af136e }
	__asm { L_00af1365: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af136e: }
	__asm { jns L_00af1379 }
	__asm { L_00af1370: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af1379: }
	__asm { cmp edi, esi }
	__asm { pop ebx }
	__asm { sbb eax, eax }
	__asm { pop edi }
	__asm { neg eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc99c[];
extern "C" void fn_006b8aae();
extern "C" void fn_00914100();
extern "C" void fn_009987e0();
extern "C" void fn_009987f0();
extern "C" void fn_00bcfb30();
// FUNCTION: ROBLOXSTUDIO 0x00af15d0
extern "C" __declspec(naked) void asm_00af15d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc99c] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00af15fa }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push 0xebffb4 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00af15fa: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 3 }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp edi, dword ptr [eax] }
	__asm { je L_00af165f }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00af1614 }
	__asm { xor ebx, ebx }
	__asm { jmp L_00af1643 }
	__asm { L_00af1614: }
	__asm { mov ecx, esi }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { jne L_00af1624 }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { jmp L_00af162a }
	__asm { L_00af1624: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { L_00af162a: }
	__asm { mov ebx, dword ptr [ebx + 0xc] }
	__asm { test ebx, ebx }
	__asm { je L_00af1643 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af1643 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_009987e0 }
	__asm { L_00af1643: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00bcfb30 }
	__asm { test ebx, ebx }
	__asm { je L_00af165f }
	__asm { test edi, edi }
	__asm { je L_00af165f }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_009987f0 }
	__asm { L_00af165f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00af1670
extern "C" __declspec(naked) void asm_00af1670()
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
	__asm { push 0x11f0a8c }
	__asm { mov edi, ecx }
	__asm { push 0xec0278 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe599e8 }
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
	__asm { push 0xec028c }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xec0294 }
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
// FUNCTION: ROBLOXSTUDIO 0x00af17a0
extern "C" __declspec(naked) void asm_00af17a0()
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
	__asm { push 0x11f0ab4 }
	__asm { mov edi, ecx }
	__asm { push 0xec029c }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59a00 }
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
	__asm { push 0x10131d4 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe885b4 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xec02b0 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0x10036b8 }
	__asm { push 3 }
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

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00af1f60();
// FUNCTION: ROBLOXSTUDIO 0x00af1bf0
extern "C" __declspec(naked) void asm_00af1bf0()
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
	__asm { call fn_00af1f60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec0424 }
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
	__asm { je L_00af1c9e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00af1c9e: }
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
extern "C" char g_012f14a4[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af1f60
extern "C" __declspec(naked) void asm_00af1f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd523c6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012f14a4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00af1fda }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f14a4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec02c4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12f1378 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7e30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00af1fda: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12f1378 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xec0418 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00af2052 }
	__asm { push 0x1278244 }
	__asm { mov ecx, 0x1278244 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00af2052 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00af203d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af2052 }
	__asm { L_00af203d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af2052: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00ec02c4[];
extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00af1cc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00af2070
extern "C" __declspec(naked) void asm_00af2070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5243f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00af1cc0 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { mov dword ptr [esi], 0xec037c }
	__asm { mov dword ptr [esi + 4], 0xec03f4 }
	__asm { mov dword ptr [esi + 0x18], 0xec03fc }
	__asm { mov dword ptr [esi + 0x1c], 0xec0408 }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x94], 0xf }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov byte ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0xac], 0xf }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov byte ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0xc4], 0xf }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov byte ptr [esi + 0xb0], 0 }
	__asm { mov dword ptr [esi + 0xdc], 0xf }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov byte ptr [esi + 0xc8], 0 }
	__asm { mov dword ptr [esi + 0xf4], 0xf }
	__asm { mov dword ptr [esi + 0xf0], 0 }
	__asm { mov byte ptr [esi + 0xe0], 0 }
	__asm { mov dword ptr [esi + 0x10c], 0xf }
	__asm { mov dword ptr [esi + 0x108], 0 }
	__asm { mov byte ptr [esi + 0xf8], 0 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00ec02c4], cl }
	__asm { mov eax, 0xd }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xec02c4 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00af21c4 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af21c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00af21e0
extern "C" __declspec(naked) void asm_00af21e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10c], 0x10 }
	__asm { jb L_00af21fa }
	__asm { push dword ptr [esi + 0xf8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af21fa: }
	__asm { mov dword ptr [esi + 0x10c], 0xf }
	__asm { mov dword ptr [esi + 0x108], 0 }
	__asm { mov byte ptr [esi + 0xf8], 0 }
	__asm { cmp dword ptr [esi + 0xf4], 0x10 }
	__asm { jb L_00af222c }
	__asm { push dword ptr [esi + 0xe0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af222c: }
	__asm { mov dword ptr [esi + 0xf4], 0xf }
	__asm { mov dword ptr [esi + 0xf0], 0 }
	__asm { mov byte ptr [esi + 0xe0], 0 }
	__asm { cmp dword ptr [esi + 0xdc], 0x10 }
	__asm { jb L_00af225e }
	__asm { push dword ptr [esi + 0xc8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af225e: }
	__asm { mov dword ptr [esi + 0xdc], 0xf }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov byte ptr [esi + 0xc8], 0 }
	__asm { cmp dword ptr [esi + 0xc4], 0x10 }
	__asm { jb L_00af2290 }
	__asm { push dword ptr [esi + 0xb0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af2290: }
	__asm { mov dword ptr [esi + 0xc4], 0xf }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov byte ptr [esi + 0xb0], 0 }
	__asm { cmp dword ptr [esi + 0xac], 0x10 }
	__asm { jb L_00af22c2 }
	__asm { push dword ptr [esi + 0x98] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af22c2: }
	__asm { mov dword ptr [esi + 0xac], 0xf }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov byte ptr [esi + 0x98], 0 }
	__asm { cmp dword ptr [esi + 0x94], 0x10 }
	__asm { jb L_00af22f4 }
	__asm { push dword ptr [esi + 0x80] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af22f4: }
	__asm { mov dword ptr [esi + 0x94], 0xf }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov byte ptr [esi + 0x80], 0 }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { jb L_00af2320 }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af2320: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007b00e0 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e8adc[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00af2e80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af2bb0
extern "C" __declspec(naked) void asm_00af2bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd524c6 }
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
	__asm { call fn_00af2e80 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e8adc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00af2c6f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8adc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec05cc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e89b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00af2c6f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e89b0 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xec082c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00af2ced }
	__asm { push 0x12784b8 }
	__asm { mov ecx, 0x12784b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00af2ced }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00af2cd8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af2ced }
	__asm { L_00af2cd8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af2ced: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00af3370();
// FUNCTION: ROBLOXSTUDIO 0x00af2ee0
extern "C" __declspec(naked) void asm_00af2ee0()
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
	__asm { call fn_00af3370 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec0734 }
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
	__asm { je L_00af2f8e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00af2f8e: }
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
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00af3370();
// FUNCTION: ROBLOXSTUDIO 0x00af2fb0
extern "C" __declspec(naked) void asm_00af2fb0()
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
	__asm { call fn_00af3370 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec07ec }
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
	__asm { je L_00af305e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00af305e: }
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
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00af3480();
// FUNCTION: ROBLOXSTUDIO 0x00af3080
extern "C" __declspec(naked) void asm_00af3080()
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
	__asm { call fn_00af3480 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec0814 }
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
	__asm { call fn_007d5550 }
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
	__asm { je L_00af312e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00af312e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00af3210
extern "C" __declspec(naked) void asm_00af3210()
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
	__asm { push 0x11f0ca0 }
	__asm { mov edi, ecx }
	__asm { push 0xec0870 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59b38 }
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
	__asm { push 0xec0880 }
	__asm { push 0xff }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xec0888 }
	__asm { push 0xf0 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xec0890 }
	__asm { push 0x80 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xec0898 }
	__asm { push 0xa }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xec08a0 }
	__asm { push 0 }
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

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e8adc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af3370
extern "C" __declspec(naked) void asm_00af3370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52536 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e8adc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00af33ea }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8adc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec05cc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e89b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00af33ea: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e89b0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xec0728 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00af3462 }
	__asm { push 0x12784b8 }
	__asm { mov ecx, 0x12784b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00af3462 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00af344d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af3462 }
	__asm { L_00af344d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af3462: }
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
extern "C" char g_012e8adc[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af3480
extern "C" __declspec(naked) void asm_00af3480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52556 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e8adc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00af34fa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8adc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec05cc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e89b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7bc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00af34fa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e89b0 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xec0808 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00af3572 }
	__asm { push 0x12784b8 }
	__asm { mov ecx, 0x12784b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00af3572 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00af355d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af3572 }
	__asm { L_00af355d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af3572: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012e1924[];
extern "C" void fn_004038a0();
extern "C" void fn_00af3150();
// FUNCTION: ROBLOXSTUDIO 0x00af3590
extern "C" __declspec(naked) void asm_00af3590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5259d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call fn_00af3150 }
	__asm { lea esi, [edi + 0x1c] }
	__asm { mov byte ptr [edi + 0x64], 1 }
	__asm { lea ecx, [edi + 0x68] }
	__asm { mov dword ptr [edi], 0xec068c }
	__asm { mov dword ptr [edi + 4], 0xec0704 }
	__asm { mov dword ptr [edi + 0x18], 0xec070c }
	__asm { mov dword ptr [esi], 0xec0718 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [edi + 0x80] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [edi + 0x98] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [edi + 0xb0] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [g_012e1924] }
	__asm { lea edx, [ebp - 0xd] }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [eax + 0xc] }
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
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012ef234[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008fe500();
extern "C" void fn_00af80d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af4910
extern "C" __declspec(naked) void asm_00af4910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd526c6 }
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
	__asm { call fn_00af80d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012ef234] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00af49cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef234], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec0a20 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef108 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00af49cc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ef108 }
	__asm { call fn_008fe500 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xec0b70 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00af4a4a }
	__asm { push 0x1278ab4 }
	__asm { mov ecx, 0x1278ab4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00af4a4a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00af4a35 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af4a4a }
	__asm { L_00af4a35: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af4a4a: }
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
extern "C" char g_012ef234[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00af8120();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af4a60
extern "C" __declspec(naked) void asm_00af4a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd526f6 }
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
	__asm { call fn_00af8120 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012ef234] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00af4b1c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef234], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec0a20 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef108 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00af4b1c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ef108 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xec0bac }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00af4b9a }
	__asm { push 0x1278ab4 }
	__asm { mov ecx, 0x1278ab4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00af4b9a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00af4b85 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af4b9a }
	__asm { L_00af4b85: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af4b9a: }
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
extern "C" char g_012ef234[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00af8170();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af4bb0
extern "C" __declspec(naked) void asm_00af4bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52726 }
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
	__asm { call fn_00af8170 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012ef234] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00af4c6f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef234], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec0a20 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef108 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00af4c6f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12ef108 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xec0bac }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00af4ced }
	__asm { push 0x1278ab4 }
	__asm { mov ecx, 0x1278ab4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00af4ced }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00af4cd8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af4ced }
	__asm { L_00af4cd8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af4ced: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x00af4d00
extern "C" __declspec(naked) void asm_00af4d00()
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
	__asm { mov dword ptr [esi + 8], 0xec148c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xec14c4 }
	__asm { mov dword ptr [esi + 8], 0xec14d4 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00af4daa }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00af4d96 }
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
	__asm { L_00af4d96: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af4daa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00af67b0();
// FUNCTION: ROBLOXSTUDIO 0x00af4e80
extern "C" __declspec(naked) void asm_00af4e80()
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
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00af4efe }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00af4ee7 }
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
	__asm { jmp L_00af4efe }
	__asm { L_00af4ee7: }
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
	__asm { L_00af4efe: }
	__asm { mov ecx, esi }
	__asm { call fn_00af67b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00af4f2c }
	__asm { test al, 1 }
	__asm { jne L_00af4f2c }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af4f2c }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af4f2c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00af4e80();
// FUNCTION: ROBLOXSTUDIO 0x00af4f40
extern "C" __declspec(naked) void asm_00af4f40()
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
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00af4fba }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00af4fa3 }
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
	__asm { jmp L_00af4fba }
	__asm { L_00af4fa3: }
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
	__asm { L_00af4fba: }
	__asm { mov ecx, esi }
	__asm { call fn_00af4e80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00af4fe8 }
	__asm { test al, 1 }
	__asm { jne L_00af4fe8 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af4fe8 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af4fe8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00af6880();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00af5000
extern "C" __declspec(naked) void asm_00af5000()
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
	__asm { call fn_00af6880 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00af507b }
	__asm { test al, 1 }
	__asm { jne L_00af5074 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af5074 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af5074: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00af507b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00af50a2 }
	__asm { test al, 1 }
	__asm { jne L_00af50a2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af50a2 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af50a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

// FUNCTION: ROBLOXSTUDIO 0x00af57e0
extern "C" __declspec(naked) void asm_00af57e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax] }
	__asm { sub esp, 8 }
	__asm { fld dword ptr [edx] }
	__asm { mov eax, esp }
	__asm { sub esp, 0x20 }
	__asm { fstp dword ptr [eax] }
	__asm { mov esi, ecx }
	__asm { fld dword ptr [edx + 4] }
	__asm { mov ecx, esp }
	__asm { fstp dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { test edx, edx }
	__asm { je L_00af5859 }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_00af5845 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x28 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00af5845: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af5859: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x28 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00afa6b0();
// FUNCTION: ROBLOXSTUDIO 0x00af5870
extern "C" __declspec(naked) void asm_00af5870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { sub esp, 0x20 }
	__asm { mov esi, ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { test edx, edx }
	__asm { je L_00af58e4 }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_00af58d0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_00af58e4 }
	__asm { L_00af58d0: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af58e4: }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { test edx, edx }
	__asm { je L_00af593e }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_00af592a }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_00af593e }
	__asm { L_00af592a: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af593e: }
	__asm { push dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00afa6b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00422570();
extern "C" void fn_00af64e0();
// FUNCTION: ROBLOXSTUDIO 0x00af6640
extern "C" __declspec(naked) void asm_00af6640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
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
	__asm { jne L_00af6696 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov ecx, esi }
	__asm { call fn_00af64e0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00af6698 }
	__asm { L_00af6696: }
	__asm { xor bl, bl }
	__asm { L_00af6698: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00af66bf }
	__asm { test al, 1 }
	__asm { jne L_00af66bf }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af66bf }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af66bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00af6640();
// FUNCTION: ROBLOXSTUDIO 0x00af66e0
extern "C" __declspec(naked) void asm_00af66e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00af6763 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00af674c }
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
	__asm { jmp L_00af6763 }
	__asm { L_00af674c: }
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
	__asm { L_00af6763: }
	__asm { mov ecx, esi }
	__asm { call fn_00af6640 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00af6794 }
	__asm { test cl, 1 }
	__asm { jne L_00af6794 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00af6794 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af6794: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00af66e0();
// FUNCTION: ROBLOXSTUDIO 0x00af67b0
extern "C" __declspec(naked) void asm_00af67b0()
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
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { sub esp, 0x28 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00af682d }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00af6816 }
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
	__asm { jmp L_00af682d }
	__asm { L_00af6816: }
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
	__asm { L_00af682d: }
	__asm { mov esi, 0xec152c }
	__asm { mov ecx, esi }
	__asm { call fn_00af66e0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmove esi, ecx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00af6869 }
	__asm { test al, 1 }
	__asm { jne L_00af6869 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af6869 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af6869: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00af6880
extern "C" __declspec(naked) void asm_00af6880()
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
	__asm { mov esi, 0xec1544 }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00af690a }
	__asm { test cl, 1 }
	__asm { jne L_00af6903 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00af6903 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af6903: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00af690a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00af693a }
	__asm { test al, 1 }
	__asm { jne L_00af693a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af693a }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af693a: }
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
extern "C" void fn_008d9f20();
extern "C" void fn_00af96c0();
// FUNCTION: ROBLOXSTUDIO 0x00af7260
extern "C" __declspec(naked) void asm_00af7260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52944 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x70 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00af72ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00af72ab: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00af7305 }
	__asm { mov dword ptr [esi + 8], 0xe729cc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], 0xec1494 }
	__asm { mov dword ptr [esi + 8], 0xec14a4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { lea eax, [edx + 8] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00af96c0 }
	__asm { mov dword ptr [esi], 0xec14ac }
	__asm { mov dword ptr [esi + 8], 0xec14bc }
	__asm { jmp L_00af7307 }
	__asm { L_00af7305: }
	__asm { xor esi, esi }
	__asm { L_00af7307: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008d9f20 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00af732b }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00af732b: }
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
extern "C" void fn_00af4d00();
extern "C" void fn_00afdb00();
// FUNCTION: ROBLOXSTUDIO 0x00af7340
extern "C" __declspec(naked) void asm_00af7340()
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
	__asm { je L_00af738b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00af738b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00af73b4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00af4d00 }
	__asm { mov dword ptr [esi], 0xec14dc }
	__asm { mov dword ptr [esi + 8], 0xec14ec }
	__asm { jmp L_00af73b6 }
	__asm { L_00af73b4: }
	__asm { xor esi, esi }
	__asm { L_00af73b6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00afdb00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00af73da }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00af73da: }
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
extern "C" void fn_00825140();
extern "C" void fn_00af7830();
extern "C" void fn_00af8330();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00af7eb0
extern "C" __declspec(naked) void asm_00af7eb0()
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
	__asm { jb L_00af7f7b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00af8330 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00af7f03 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af7f03: }
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
	__asm { je L_00af7f61 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00af7830 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00af7f50 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00af7f50: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af7f61: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00af7f7b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00af7f7b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af7f95 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af7f95: }
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

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_00af7960();
extern "C" void fn_00af8290();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00af7fc0
extern "C" __declspec(naked) void asm_00af7fc0()
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
	__asm { jb L_00af808b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00af8290 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00af8013 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af8013: }
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
	__asm { je L_00af8071 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00af7960 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00af8060 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00af8060: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af8071: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00af808b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00af808b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af80a5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00af80a5: }
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

extern "C" void fn_007b0970();
extern "C" void fn_007d5b00();
extern "C" void fn_00af55a0();
// FUNCTION: ROBLOXSTUDIO 0x00af81d0
extern "C" __declspec(naked) void asm_00af81d0()
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
	__asm { call fn_007d5b00 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_00af55a0 }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { test ecx, ecx }
	__asm { je L_00af8236 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { add esp, 8 }
	__asm { L_00af8236: }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_007b0970 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00af8258 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00af8258: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00af827f }
	__asm { test al, 1 }
	__asm { jne L_00af827f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00af827f }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af827f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00825140();
extern "C" void fn_00af9030();
extern "C" void fn_00afbf00();
// FUNCTION: ROBLOXSTUDIO 0x00af83d0
extern "C" __declspec(naked) void asm_00af83d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52a4c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00af9030 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec0d90 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00afbf00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00825140();
extern "C" void fn_00af9030();
extern "C" void fn_00afc030();
// FUNCTION: ROBLOXSTUDIO 0x00af84d0
extern "C" __declspec(naked) void asm_00af84d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52abf }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00af9030 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec0cf8 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00afc030 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00af9030();
// FUNCTION: ROBLOXSTUDIO 0x00af85f0
extern "C" __declspec(naked) void asm_00af85f0()
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
	__asm { call fn_00af9030 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec0c88 }
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
	__asm { je L_00af869e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00af869e: }
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
extern "C" void fn_007d5710();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00af9030();
// FUNCTION: ROBLOXSTUDIO 0x00af86c0
extern "C" __declspec(naked) void asm_00af86c0()
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
	__asm { call fn_00af9030 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec0d70 }
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
	__asm { je L_00af876e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00af876e: }
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
extern "C" void fn_00af9030();
extern "C" void fn_00afc1a0();
// FUNCTION: ROBLOXSTUDIO 0x00af8790
extern "C" __declspec(naked) void asm_00af8790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52b4c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00af9030 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec0d18 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00afc1a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007e9530();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00af9030();
// FUNCTION: ROBLOXSTUDIO 0x00af8890
extern "C" __declspec(naked) void asm_00af8890()
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
	__asm { call fn_00af9030 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec0ca8 }
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
	__asm { call fn_007e9530 }
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
	__asm { je L_00af893e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00af893e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00af8960
extern "C" __declspec(naked) void asm_00af8960()
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
	__asm { push 0x11f0ee8 }
	__asm { mov edi, ecx }
	__asm { push 0xec0f30 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59ce8 }
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
	__asm { push 0xec0f44 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xec0f58 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xec0f70 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xec0f7c }
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
// FUNCTION: ROBLOXSTUDIO 0x00af8ab0
extern "C" __declspec(naked) void asm_00af8ab0()
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
	__asm { push 0x11f0ebc }
	__asm { mov edi, ecx }
	__asm { push 0xec0f04 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59cd0 }
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
	__asm { push 0x100e4fc }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x102f8fc }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6d040 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xec0f10 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xec0f18 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xec0f24 }
	__asm { push 5 }
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

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_008251b0();
extern "C" void fn_00af8f80();
// FUNCTION: ROBLOXSTUDIO 0x00af8d60
extern "C" __declspec(naked) void asm_00af8d60()
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
	__asm { call fn_00af8f80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xec0eac }
	__asm { call fn_007d5550 }
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
	__asm { jae L_00af8df2 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00af8df2: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_00af8e15 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00af8e15: }
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
extern "C" char g_012ef234[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af9030
extern "C" __declspec(naked) void asm_00af9030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52b76 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012ef234] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00af90aa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef234], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec0a20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef108 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00af90aa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12ef108 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xec0c7c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00af9122 }
	__asm { push 0x1278ab4 }
	__asm { mov ecx, 0x1278ab4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00af9122 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00af910d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af9122 }
	__asm { L_00af910d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af9122: }
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
extern "C" char g_012ef234[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00af9140
extern "C" __declspec(naked) void asm_00af9140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52b96 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012ef234] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00af91ba }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012ef234], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec0a20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12ef108 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7900 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00af91ba: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12ef108 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xec0dd8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00af9232 }
	__asm { push 0x1278ab4 }
	__asm { mov ecx, 0x1278ab4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00af9232 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00af921d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af9232 }
	__asm { L_00af921d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af9232: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00af9250
extern "C" __declspec(naked) void asm_00af9250()
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
	__asm { je L_00af92c3 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_00af92ac }
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
	__asm { jmp L_00af92c3 }
	__asm { L_00af92ac: }
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
	__asm { L_00af92c3: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00af92e8 }
	__asm { test cl, 1 }
	__asm { jne L_00af92e8 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00af92e8 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af92e8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

// FUNCTION: ROBLOXSTUDIO 0x00af9600
extern "C" __declspec(naked) void asm_00af9600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2f6e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00af967a }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { test cl, 1 }
	__asm { je L_00af9663 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { jmp L_00af967a }
	__asm { L_00af9663: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { L_00af967a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00af969f }
	__asm { test cl, 1 }
	__asm { jne L_00af969f }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00af969f }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af969f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00af96c0
extern "C" __declspec(naked) void asm_00af96c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3fa28 }
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
	__asm { call fn_00b25b30 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00af9752 }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { test cl, 1 }
	__asm { je L_00af973e }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00af973e: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x30] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00af9752: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00af9be0
extern "C" __declspec(naked) void asm_00af9be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52cf4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ecx, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { test ecx, ecx }
	__asm { je L_00af9c15 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00af9c15: }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00af9c51 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00af9c37 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af9c37: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af9c51: }
	__asm { mov esi, dword ptr [edi + 0x34] }
	__asm { test esi, esi }
	__asm { je L_00af9c82 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00af9c68 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af9c68: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af9c82: }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00af9cb3 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00af9c99 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af9c99: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00af9cb3: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10608[];
extern "C" char g_0130d0d9[];
extern "C" void fn_006b98f0();
extern "C" void fn_00af62b0();
extern "C" void fn_00afd2a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00afb490
extern "C" __declspec(naked) void asm_00afb490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [ebp + 0x18], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00afb4da }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0xec136c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00afb4da: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { movsx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10608] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc8] }
	__asm { call fn_00afd2a0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [esi + 0xc8] }
	__asm { jne L_00afb52f }
	__asm { movzx eax, byte ptr [g_0130d0d9] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc8] }
	__asm { call fn_00af62b0 }
	__asm { L_00afb52f: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { pop esi }
	__asm { jb L_00afb541 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00afb541: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_008bff30();
// FUNCTION: ROBLOXSTUDIO 0x00afb8d0
extern "C" __declspec(naked) void asm_00afb8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd530b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_008bff30 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 0x24], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079ae50();
extern "C" void fn_0079af60();
extern "C" void fn_0083e550();
extern "C" void fn_00a73e40();
// FUNCTION: ROBLOXSTUDIO 0x00afcdc0
extern "C" __declspec(naked) void asm_00afcdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a73e40 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x38] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ebx, eax }
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
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_0079ae50 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x30 }
	__asm { mov esi, eax }
	__asm { test ecx, ecx }
	__asm { je L_00afce15 }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00afce17 }
	__asm { L_00afce15: }
	__asm { xor ecx, ecx }
	__asm { L_00afce17: }
	__asm { add ecx, dword ptr [edi + 0x2c] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { call edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_009c6de0();
// FUNCTION: ROBLOXSTUDIO 0x00afd2f0
extern "C" __declspec(naked) void asm_00afd2f0()
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
	__asm { je L_00afd35a }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { je L_00afd35a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00afd349 }
	__asm { push 0x12d }
	__asm { push 0xe52268 }
	__asm { push 0xe5413c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00afd35a }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00afd349: }
	__asm { movzx eax, bl }
	__asm { push 0xe54150 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00afd35a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00afd366 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_00afd368 }
	__asm { L_00afd366: }
	__asm { xor esi, esi }
	__asm { L_00afd368: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sub esp, 0x18 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, esi }
	__asm { call fn_009c6de0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_009aa000();
// FUNCTION: ROBLOXSTUDIO 0x00afd390
extern "C" __declspec(naked) void asm_00afd390()
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
	__asm { je L_00afd40f }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_00afd40f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00afd3fe }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00afd40f }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00afd3fe: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00afd40f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00afd41b }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00afd41d }
	__asm { L_00afd41b: }
	__asm { xor edi, edi }
	__asm { L_00afd41d: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { call fn_004d1ca0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esp }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009aa000 }
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
extern "C" void fn_004d1ca0();
extern "C" void fn_006b9740();
extern "C" void fn_00af6450();
extern "C" void fn_00afa800();
// FUNCTION: ROBLOXSTUDIO 0x00afd470
extern "C" __declspec(naked) void asm_00afd470()
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
	__asm { je L_00afd4ef }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_00afd4ef }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00afd4de }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00afd4ef }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00afd4de: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00afd4ef: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00afd4fb }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00afd4fd }
	__asm { L_00afd4fb: }
	__asm { xor edi, edi }
	__asm { L_00afd4fd: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { add ecx, 0x44 }
	__asm { push eax }
	__asm { call fn_004d1ca0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00af6450 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [eax] }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00afa800 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_006e07d0();
extern "C" void fn_007cd560();
extern "C" void fn_00836db0();
extern "C" void fn_00af7710();
// FUNCTION: ROBLOXSTUDIO 0x00afd790
extern "C" __declspec(naked) void asm_00afd790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_00afd806 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00afd7ad }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00afd7af }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00afd7af }
	__asm { L_00afd7ad: }
	__asm { mov eax, ecx }
	__asm { L_00afd7af: }
	__asm { test eax, eax }
	__asm { je L_00afd806 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00afd806 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00afd806 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00afd806 }
	__asm { call fn_00836db0 }
	__asm { test eax, eax }
	__asm { je L_00afd806 }
	__asm { mov ecx, eax }
	__asm { call fn_00af7710 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { je L_00afd806 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x90] }
	__asm { pop edi }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x94] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00afd806: }
	__asm { call fn_006e07d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { pop edi }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00afa4a0();
extern "C" void fn_00afea20();
extern "C" void fn_00cdcc90();
// FUNCTION: ROBLOXSTUDIO 0x00afea70
extern "C" __declspec(naked) void asm_00afea70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add edx, 8 }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp eax, 1 }
	__asm { je L_00afeaa3 }
	__asm { add eax, -2 }
	__asm { cmp eax, 2 }
	__asm { ja L_00afeafa }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push edx }
	__asm { add ecx, 0xb8 }
	__asm { call fn_00afa4a0 }
	__asm { mov ecx, eax }
	__asm { call fn_00afea20 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00afeaa3: }
	__asm { push esi }
	__asm { push edi }
	__asm { push edx }
	__asm { add ecx, 0xb8 }
	__asm { call fn_00afa4a0 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { je L_00afeae8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edi, dword ptr [ecx] }
	__asm { L_00afeac1: }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, esi }
	__asm { push edi }
	__asm { call fn_00cdcc90 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, 0x15555554 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00afeaec }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00afeae8: }
	__asm { mov edi, dword ptr [esi] }
	__asm { jmp L_00afeac1 }
	__asm { L_00afeaec: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { L_00afeafa: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10608[];
extern "C" void fn_006b98f0();
extern "C" void fn_00afd2a0();
extern "C" void fn_00bff040();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00afed10
extern "C" __declspec(naked) void asm_00afed10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [ebp + 0x18], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00afed5a }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0xec13a8 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00afed5a: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { movsx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10608] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc8] }
	__asm { call fn_00afd2a0 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { cmp eax, dword ptr [esi + 0xc8] }
	__asm { je L_00afeda3 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc8] }
	__asm { call fn_00bff040 }
	__asm { L_00afeda3: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { pop esi }
	__asm { jb L_00afedb5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00afedb5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00402f60();
extern "C" void fn_00403540();
extern "C" void fn_009c6de0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00afef10
extern "C" __declspec(naked) void asm_00afef10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp dword ptr [eax + 0x94], 0x10 }
	__asm { mov edi, dword ptr [eax + 0x90] }
	__asm { lea esi, [eax + 0x80] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_00afef53 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_00afef55 }
	__asm { L_00afef53: }
	__asm { mov edx, esi }
	__asm { L_00afef55: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmovae ecx, dword ptr [ebp + 8] }
	__asm { mov eax, edi }
	__asm { cmp ebx, edi }
	__asm { cmovb eax, ebx }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00afef86 }
	__asm { cmp ebx, edi }
	__asm { jb L_00afef86 }
	__asm { cmp ebx, edi }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_00afefc7 }
	__asm { L_00afef86: }
	__asm { lea eax, [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_00afef99 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00afef99: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { lea ecx, [ecx + 0xac] }
	__asm { call fn_009c6de0 }
	__asm { L_00afefc7: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00afefd8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00afefd8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00aff0a0
extern "C" __declspec(naked) void asm_00aff0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xb4] }
	__asm { test ecx, ecx }
	__asm { jne L_00aff0b3 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00aff0b3: }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp eax, ecx }
	__asm { jg L_00aff11a }
	__asm { jl L_00aff160 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00aff10a }
	__asm { cmp eax, ecx }
	__asm { je L_00aff10a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aff0f5 }
	__asm { push 0xb0 }
	__asm { push 0xec0f88 }
	__asm { push 0xec0fcc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aff10a }
	__asm { L_00aff0f5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xec1000 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aff10a: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp eax, 1 }
	__asm { je L_00aff160 }
	__asm { add eax, -2 }
	__asm { cmp eax, 2 }
	__asm { ja L_00aff121 }
	__asm { L_00aff11a: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00aff121: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00aff160 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aff14b }
	__asm { push 0xba }
	__asm { push 0xec0f88 }
	__asm { push 0x10062b8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aff160 }
	__asm { L_00aff14b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xec1088 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aff160: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00afa4a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00aff170
extern "C" __declspec(naked) void asm_00aff170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00aff1c2 }
	__asm { cmp dword ptr [esi + 0xb4], 0 }
	__asm { je L_00aff1c2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aff1b1 }
	__asm { push 0x155 }
	__asm { push 0xec0f88 }
	__asm { push 0xec1260 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aff1c2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aff1b1: }
	__asm { movzx eax, al }
	__asm { push 0xec1278 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aff1c2: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xb8] }
	__asm { call fn_00afa4a0 }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { je L_00aff239 }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xb8] }
	__asm { call fn_00afa4a0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [esi + 0xb8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00afa4a0 }
	__asm { mov ebx, eax }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ecx] }
	__asm { cmp edi, ecx }
	__asm { je L_00aff225 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { L_00aff225: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop ebx }
	__asm { mov dword ptr [esi + 0xb4], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00aff239: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0095c240();
extern "C" void fn_00affc30();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00aff250
extern "C" __declspec(naked) void asm_00aff250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39240 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x50 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c240 }
	__asm { mov ecx, esi }
	__asm { call fn_00affc30 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00aff2ca }
	__asm { test al, 1 }
	__asm { jne L_00aff2c3 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00aff2c3 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aff2c3: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00aff2ca: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_0095c240();
extern "C" void fn_00aff250();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00aff2f0
extern "C" __declspec(naked) void asm_00aff2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39240 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x50 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c240 }
	__asm { mov ecx, esi }
	__asm { call fn_00aff250 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00aff366 }
	__asm { test al, 1 }
	__asm { jne L_00aff35f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00aff35f }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aff35f: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00aff366: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_00b00140();
extern "C" void fn_00b02800();
extern "C" void fn_00b03090();
// FUNCTION: ROBLOXSTUDIO 0x00aff570
extern "C" __declspec(naked) void asm_00aff570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53370 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x80 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b02800 }
	__asm { mov ecx, esi }
	__asm { call fn_00b00140 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x68] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00aff5f3 }
	__asm { test al, 1 }
	__asm { jne L_00aff5ec }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00aff5ec }
	__asm { lea ecx, [ebp + 0x70] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aff5ec: }
	__asm { mov dword ptr [ebp + 0x68], 0 }
	__asm { L_00aff5f3: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b03090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x84 }
}

extern "C" void fn_00aff570();
extern "C" void fn_00b02800();
extern "C" void fn_00b03090();
// FUNCTION: ROBLOXSTUDIO 0x00aff620
extern "C" __declspec(naked) void asm_00aff620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53370 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x80 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b02800 }
	__asm { mov ecx, esi }
	__asm { call fn_00aff570 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x68] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00aff6a0 }
	__asm { test al, 1 }
	__asm { jne L_00aff699 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00aff699 }
	__asm { lea ecx, [ebp + 0x70] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aff699: }
	__asm { mov dword ptr [ebp + 0x68], 0 }
	__asm { L_00aff6a0: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b03090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x84 }
}

extern "C" void fn_00b031f0();
// FUNCTION: ROBLOXSTUDIO 0x00aff6d0
extern "C" __declspec(naked) void asm_00aff6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { sub esp, 0x20 }
	__asm { mov esi, ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { test edx, edx }
	__asm { je L_00aff744 }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_00aff730 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_00aff744 }
	__asm { L_00aff730: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aff744: }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { test edx, edx }
	__asm { je L_00aff79e }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_00aff78a }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_00aff79e }
	__asm { L_00aff78a: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aff79e: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b031f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0095c240();
extern "C" void fn_00be5350();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aff950
extern "C" __declspec(naked) void asm_00aff950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd533cb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00aff99b }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_0095c240 }
	__asm { jmp L_00aff99d }
	__asm { L_00aff99b: }
	__asm { xor esi, esi }
	__asm { L_00aff99d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x58], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00aff9d7 }
	__asm { test al, 1 }
	__asm { jne L_00aff9d0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00aff9d0 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00aff9d0: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00aff9d7: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_00b02800();
extern "C" void fn_00b03090();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00affa00
extern "C" __declspec(naked) void asm_00affa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd533fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00affa54 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00b02800 }
	__asm { jmp L_00affa56 }
	__asm { L_00affa54: }
	__asm { xor esi, esi }
	__asm { L_00affa56: }
	__asm { mov eax, dword ptr [ebp + 0x88] }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x88], eax }
	__asm { mov eax, dword ptr [ebp + 0x68] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00affa96 }
	__asm { test al, 1 }
	__asm { jne L_00affa8f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00affa8f }
	__asm { lea ecx, [ebp + 0x70] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00affa8f: }
	__asm { mov dword ptr [ebp + 0x68], 0 }
	__asm { L_00affa96: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b03090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x88 }
}

extern "C" void fn_0040c260();
extern "C" void fn_0095c240();
extern "C" void fn_00aff950();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00affac0
extern "C" __declspec(naked) void asm_00affac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53420 }
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
	__asm { jne L_00affb1f }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x58] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0095c240 }
	__asm { mov ecx, esi }
	__asm { call fn_00aff950 }
	__asm { mov bl, 1 }
	__asm { jmp L_00affb21 }
	__asm { L_00affb1f: }
	__asm { xor bl, bl }
	__asm { L_00affb21: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x58], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00affb55 }
	__asm { test al, 1 }
	__asm { jne L_00affb4e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00affb4e }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00affb4e: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00affb55: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_0095c240();
extern "C" void fn_00affac0();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00affb80
extern "C" __declspec(naked) void asm_00affb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53420 }
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
	__asm { push dword ptr [ebp + 0x58] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0095c240 }
	__asm { mov ecx, esi }
	__asm { call fn_00affac0 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x58], eax }
	__asm { mov ecx, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00affc03 }
	__asm { test cl, 1 }
	__asm { jne L_00affbfc }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00affbfc }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00affbfc: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00affc03: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_0095c240();
extern "C" void fn_00affb80();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00affc30
extern "C" __declspec(naked) void asm_00affc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39240 }
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
	__asm { sub esp, 0x50 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { call fn_0095c240 }
	__asm { mov esi, 0xec1f9c }
	__asm { mov ecx, esi }
	__asm { call fn_00affb80 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00affcb7 }
	__asm { test al, 1 }
	__asm { jne L_00affcb0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00affcb0 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00affcb0: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00affcb7: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_0040c260();
extern "C" void fn_009bccc0();
extern "C" void fn_00af96c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00affce0
extern "C" __declspec(naked) void asm_00affce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5344b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00affd77 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call fn_00af96c0 }
	__asm { push 0x50 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00affd60 }
	__asm { mov ecx, dword ptr [ebp - 0x60] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x5c] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00af96c0 }
	__asm { jmp L_00affd62 }
	__asm { L_00affd60: }
	__asm { xor esi, esi }
	__asm { L_00affd62: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00affd79 }
	__asm { L_00affd77: }
	__asm { xor bl, bl }
	__asm { L_00affd79: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_009bccc0();
extern "C" void fn_00af96c0();
extern "C" void fn_00affce0();
// FUNCTION: ROBLOXSTUDIO 0x00affda0
extern "C" __declspec(naked) void asm_00affda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00af96c0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_00af96c0 }
	__asm { mov esi, 0xec1fb4 }
	__asm { mov ecx, esi }
	__asm { call fn_00affce0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_009bccc0();
extern "C" void fn_00af96c0();
extern "C" void fn_00affce0();
// FUNCTION: ROBLOXSTUDIO 0x00affe50
extern "C" __declspec(naked) void asm_00affe50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00af96c0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_00af96c0 }
	__asm { mov esi, 0xec1fac }
	__asm { mov ecx, esi }
	__asm { call fn_00affce0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_009bccc0();
extern "C" void fn_00af96c0();
extern "C" void fn_00affce0();
// FUNCTION: ROBLOXSTUDIO 0x00afff00
extern "C" __declspec(naked) void asm_00afff00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00af96c0 }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_00af96c0 }
	__asm { mov esi, 0xec1fa4 }
	__asm { mov ecx, esi }
	__asm { call fn_00affce0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_009bccc0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_009bccc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00affa00();
extern "C" void fn_00b02800();
extern "C" void fn_00b03090();
// FUNCTION: ROBLOXSTUDIO 0x00afffb0
extern "C" __declspec(naked) void asm_00afffb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53473 }
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
	__asm { jne L_00b0001b }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x88] }
	__asm { sub esp, 0x80 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00b02800 }
	__asm { mov ecx, esi }
	__asm { call fn_00affa00 }
	__asm { mov bl, 1 }
	__asm { jmp L_00b0001d }
	__asm { L_00b0001b: }
	__asm { xor bl, bl }
	__asm { L_00b0001d: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x88], eax }
	__asm { mov eax, dword ptr [ebp + 0x68] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b00054 }
	__asm { test al, 1 }
	__asm { jne L_00b0004d }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b0004d }
	__asm { lea ecx, [ebp + 0x70] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b0004d: }
	__asm { mov dword ptr [ebp + 0x68], 0 }
	__asm { L_00b00054: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b03090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x88 }
}

extern "C" void fn_00afffb0();
extern "C" void fn_00b02800();
extern "C" void fn_00b03090();
// FUNCTION: ROBLOXSTUDIO 0x00b00080
extern "C" __declspec(naked) void asm_00b00080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53473 }
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
	__asm { push dword ptr [ebp + 0x88] }
	__asm { sub esp, 0x80 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00b02800 }
	__asm { mov ecx, esi }
	__asm { call fn_00afffb0 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x88], eax }
	__asm { mov ecx, dword ptr [ebp + 0x68] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b00112 }
	__asm { test cl, 1 }
	__asm { jne L_00b0010b }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00b0010b }
	__asm { lea ecx, [ebp + 0x70] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b0010b: }
	__asm { mov dword ptr [ebp + 0x68], 0 }
	__asm { L_00b00112: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b03090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x84 }
}

extern "C" void fn_00b00080();
extern "C" void fn_00b02800();
extern "C" void fn_00b03090();
// FUNCTION: ROBLOXSTUDIO 0x00b00140
extern "C" __declspec(naked) void asm_00b00140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53370 }
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
	__asm { sub esp, 0x80 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b02800 }
	__asm { mov esi, 0xec1f94 }
	__asm { mov ecx, esi }
	__asm { call fn_00b00080 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x68] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b001d1 }
	__asm { test al, 1 }
	__asm { jne L_00b001ca }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b001ca }
	__asm { lea ecx, [ebp + 0x70] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b001ca: }
	__asm { mov dword ptr [ebp + 0x68], 0 }
	__asm { L_00b001d1: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b03090 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x80 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00825140();
extern "C" void fn_00b00860();
extern "C" void fn_00b00ef0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b00ad0
extern "C" __declspec(naked) void asm_00b00ad0()
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
	__asm { jb L_00b00b9b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00b00ef0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00b00b23 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b00b23: }
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
	__asm { je L_00b00b81 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00b00860 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00b00b70 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00b00b70: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b00b81: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b00b9b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b00b9b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b00bb5 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b00bb5: }
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

extern "C" char g_0131a264[];
extern "C" char g_0131a268[];
extern "C" char g_0131a26c[];
extern "C" char g_0131a270[];
extern "C" void fn_007b0970();
extern "C" void fn_007d5d30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b00de0
extern "C" __declspec(naked) void asm_00b00de0()
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
	__asm { call fn_007d5d30 }
	__asm { mov cl, byte ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 0x4c], cl }
	__asm { mov ecx, dword ptr [g_0131a264] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test cl, 1 }
	__asm { jne L_00b00e5a }
	__asm { or ecx, 1 }
	__asm { push 0xddc0d0 }
	__asm { mov dword ptr [g_0131a264], ecx }
	__asm { mov dword ptr [g_0131a268], 0x12bdfcc }
	__asm { mov dword ptr [g_0131a270], 0x410d30 }
	__asm { mov dword ptr [g_0131a26c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { add esp, 4 }
	__asm { L_00b00e5a: }
	__asm { mov dword ptr [ebp - 0x50], 0x131a268 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { test ecx, ecx }
	__asm { je L_00b00e8d }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { add esp, 8 }
	__asm { L_00b00e8d: }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_007b0970 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b00eaf }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b00eaf: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b00ed6 }
	__asm { test al, 1 }
	__asm { jne L_00b00ed6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b00ed6 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b00ed6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00b01a10();
// FUNCTION: ROBLOXSTUDIO 0x00b00f90
extern "C" __declspec(naked) void asm_00b00f90()
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
	__asm { call fn_00b01a10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec17c4 }
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
	__asm { je L_00b0103e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b0103e: }
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
extern "C" void fn_007d5390();
extern "C" void fn_00824ff0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00b01b20();
// FUNCTION: ROBLOXSTUDIO 0x00b01060
extern "C" __declspec(naked) void asm_00b01060()
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
	__asm { call fn_00b01b20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec189c }
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
	__asm { call fn_00824ff0 }
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
	__asm { je L_00b0110e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b0110e: }
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
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00b01b20();
extern "C" void fn_00b26b10();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b01130
extern "C" __declspec(naked) void asm_00b01130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4e706 }
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
	__asm { call fn_00b01b20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec18bc }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { push 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov ebx, dword ptr [ebp + 0x1c] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b0119b }
	__asm { mov dword ptr [eax], ebx }
	__asm { jmp L_00b0119d }
	__asm { L_00b0119b: }
	__asm { xor eax, eax }
	__asm { L_00b0119d: }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b011c3 }
	__asm { mov dword ptr [eax], ebx }
	__asm { L_00b011c3: }
	__asm { mov eax, dword ptr [g_0131a54c] }
	__asm { test al, 1 }
	__asm { jne L_00b011ff }
	__asm { or eax, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], eax }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b011ff: }
	__asm { mov dword ptr [esi + 4], 0x131a550 }
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
	__asm { call fn_00b26b10 }
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

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00b01b20();
// FUNCTION: ROBLOXSTUDIO 0x00b01250
extern "C" __declspec(naked) void asm_00b01250()
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
	__asm { call fn_00b01b20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec18dc }
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
	__asm { je L_00b012fe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b012fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00403540();
extern "C" void fn_0043d7c0();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00b01b20();
extern "C" void fn_00b04690();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b01320
extern "C" __declspec(naked) void asm_00b01320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5364c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00b01b20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec1908 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { push 0x18 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x38], esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test esi, esi }
	__asm { je L_00b013b5 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { jmp L_00b013b7 }
	__asm { L_00b013b5: }
	__asm { xor esi, esi }
	__asm { L_00b013b7: }
	__asm { mov dword ptr [edi + 0x38], esi }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp + 0x38], esp }
	__asm { mov esi, esp }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0043d7c0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00b04690 }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { jb L_00b0142f }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b0142f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_00825140();
extern "C" void fn_00b01b20();
extern "C" void fn_00b048b0();
// FUNCTION: ROBLOXSTUDIO 0x00b015a0
extern "C" __declspec(naked) void asm_00b015a0()
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
	__asm { call fn_00b01b20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xec183c }
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
	__asm { call fn_00b048b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x00b018c0
extern "C" __declspec(naked) void asm_00b018c0()
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
	__asm { push 0x11f1300 }
	__asm { mov edi, ecx }
	__asm { push 0xec19ac }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59f10 }
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
	__asm { push 0xec19b8 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xec19bc }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xec19c4 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xec19d0 }
	__asm { push 3 }
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

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e8d3c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b01a10
extern "C" __declspec(naked) void asm_00b01a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53786 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e8d3c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00b01a8a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8d3c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec1558 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8c10 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b01a8a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e8c10 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xec17b8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00b01b02 }
	__asm { push 0x127a8e0 }
	__asm { mov ecx, 0x127a8e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00b01b02 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b01aed }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b01b02 }
	__asm { L_00b01aed: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b01b02: }
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
extern "C" char g_012e8d3c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b01b20
extern "C" __declspec(naked) void asm_00b01b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd537a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e8d3c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00b01b9a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e8d3c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xec1558 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e8c10 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde75c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00b01b9a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e8c10 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xec1830 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00b01c12 }
	__asm { push 0x127a8e0 }
	__asm { mov ecx, 0x127a8e0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00b01c12 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b01bfd }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b01c12 }
	__asm { L_00b01bfd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b01c12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b02130
extern "C" __declspec(naked) void asm_00b02130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53870 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b021b2 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b021b2: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jb L_00b021c9 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b021c9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00403540();
extern "C" void fn_00b02130();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b023f0
extern "C" __declspec(naked) void asm_00b023f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd538e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b02130 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00b02481 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b02481: }
	__asm { cmp dword ptr [ebp + 0x40], 0x10 }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { jb L_00b024a4 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b024a4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_00403540();
extern "C" void fn_00b023f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b024c0
extern "C" __declspec(naked) void asm_00b024c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b023f0 }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_00b02557 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b02557: }
	__asm { cmp dword ptr [ebp + 0x40], 0x10 }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { jb L_00b0257a }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b0257a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00b02590
extern "C" __declspec(naked) void asm_00b02590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53940 }
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
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b0266f }
	__asm { mov dword ptr [esi + 0x38], ecx }
	__asm { test cl, 1 }
	__asm { je L_00b0265b }
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
	__asm { L_00b0265b: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x40] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x40] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b0266f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b02590();
// FUNCTION: ROBLOXSTUDIO 0x00b02800
extern "C" __declspec(naked) void asm_00b02800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53a88 }
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
	__asm { call fn_00b02590 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov ecx, dword ptr [edi + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b02892 }
	__asm { mov dword ptr [esi + 0x58], ecx }
	__asm { test cl, 1 }
	__asm { je L_00b0287e }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { mov eax, dword ptr [edi + 0x6c] }
	__asm { mov dword ptr [esi + 0x6c], eax }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { mov eax, dword ptr [edi + 0x74] }
	__asm { mov dword ptr [esi + 0x74], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b0287e: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x60] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x60] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b02892: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00ec1558[];
extern "C" void fn_004038a0();
extern "C" void fn_006c58f0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00b01800();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b02ab0
extern "C" __declspec(naked) void asm_00b02ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53a1a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b01800 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { mov dword ptr [esi], 0xec160c }
	__asm { mov dword ptr [esi + 4], 0xec1684 }
	__asm { mov dword ptr [esi + 0x18], 0xec168c }
	__asm { mov dword ptr [esi + 0x1c], 0xec1698 }
	__asm { lea eax, [esi + 0x78] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x68], 0x127a874 }
	__asm { mov dword ptr [esi + 0x6c], 0x127a878 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { call fn_006c58f0 }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x80], 0x127a87c }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { call fn_006c58f0 }
	__asm { add esp, 8 }
	__asm { lea ecx, [esi + 0x98] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [esi + 0xb0] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [esi + 0xc8] }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00ec1558], cl }
	__asm { mov eax, 0xc }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xec1558 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00b02c1d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b02c1d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b03090
extern "C" __declspec(naked) void asm_00b03090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53aa8 }
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
	__asm { je L_00b030dd }
	__asm { test al, 1 }
	__asm { jne L_00b030d6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b030d6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b030d6: }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_00b030dd: }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_00b030ee }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b030ee: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_00b03111 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b03111: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00b04690
extern "C" __declspec(naked) void asm_00b04690()
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
	__asm { call fn_007d5390 }
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
	__asm { call fn_007d5550 }
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
	__asm { je L_00b04731 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b04731: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b04748 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b04748: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b04768 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b04768: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00b048b0
extern "C" __declspec(naked) void asm_00b048b0()
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
	__asm { call fn_007d5d30 }
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
	__asm { je L_00b0492d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b0492d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b04947 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b04947: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
extern "C" void fn_007e8880();
extern "C" void fn_00825060();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00b04960
extern "C" __declspec(naked) void asm_00b04960()
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
	__asm { call fn_007d5d30 }
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
	__asm { call fn_007e8880 }
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
	__asm { call fn_00825060 }
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
	__asm { je L_00b04a01 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b04a01: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b04a18 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b04a18: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b04a38 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b04a38: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_0040c5b0();
extern "C" void fn_007cb440();
extern "C" void fn_007d58d0();
extern "C" void fn_00826b00();
extern "C" void fn_008a9630();
extern "C" void fn_00b08a70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b08960
extern "C" __declspec(naked) void asm_00b08960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd54168 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_00b0899e }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00b08a51 }
	__asm { L_00b0899e: }
	__asm { push esi }
	__asm { lea esi, [edi + 4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040c5b0 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008a9630 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { pop esi }
	__asm { jb L_00b08a0e }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b08a0e: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00b08a38 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b08a38: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_007d58d0 }
	__asm { mov dword ptr [edi], eax }
	__asm { L_00b08a51: }
	__asm { mov ecx, edi }
	__asm { call fn_00b08a70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_007930d0();
extern "C" void fn_00793430();
extern "C" void fn_007cb440();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b08cd0
extern "C" __declspec(naked) void asm_00b08cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd541c8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_00b08d95 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], al }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_007930d0 }
	__asm { test al, al }
	__asm { je L_00b08d84 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x30], 0xf }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 0x44], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea edx, [ebp - 0x44] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { jb L_00b08d84 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b08d84: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00b08d95 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b08d95: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_0040c5b0();
extern "C" void fn_007cb440();
extern "C" void fn_007d58d0();
extern "C" void fn_00826b00();
extern "C" void fn_009a24e0();
extern "C" void fn_00b08ff0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b08ee0
extern "C" __declspec(naked) void asm_00b08ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd541f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_00b08f1e }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00b08fd1 }
	__asm { L_00b08f1e: }
	__asm { push esi }
	__asm { lea esi, [edi + 4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040c5b0 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_009a24e0 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { pop esi }
	__asm { jb L_00b08f8e }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b08f8e: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00b08fb8 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b08fb8: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_007d58d0 }
	__asm { mov dword ptr [edi], eax }
	__asm { L_00b08fd1: }
	__asm { mov ecx, edi }
	__asm { call fn_00b08ff0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00b09210
extern "C" __declspec(naked) void asm_00b09210()
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
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x124ebbc }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b092b9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00b092b9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b092a4 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b092b9 }
	__asm { L_00b092a4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b092b9: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e58f4[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007b9910();
extern "C" void fn_007cbf10();
extern "C" void fn_00b0a180();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b094b0
extern "C" __declspec(naked) void asm_00b094b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54276 }
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
	__asm { call fn_00b0a180 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e58f4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00b0956c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e58f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x101a1bc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e57c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00b0956c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e57c8 }
	__asm { call fn_007b9910 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xec2594 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b095ea }
	__asm { push 0x127c114 }
	__asm { mov ecx, 0x127c114 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00b095ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b095d5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b095ea }
	__asm { L_00b095d5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b095ea: }
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
extern "C" char g_012e58f4[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_009c6ab0();
extern "C" void fn_00b0a1d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b09600
extern "C" __declspec(naked) void asm_00b09600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54276 }
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
	__asm { call fn_00b0a1d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e58f4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00b096bc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e58f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x101a1bc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e57c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00b096bc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e57c8 }
	__asm { call fn_009c6ab0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xec25d4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b0973a }
	__asm { push 0x127c114 }
	__asm { mov ecx, 0x127c114 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00b0973a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b09725 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b0973a }
	__asm { L_00b09725: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b0973a: }
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
extern "C" char g_012e58f4[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008841a0();
extern "C" void fn_00b0a220();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b09750
extern "C" __declspec(naked) void asm_00b09750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd542a6 }
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
	__asm { call fn_00b0a220 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e58f4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00b0980f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e58f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x101a1bc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e57c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00b0980f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e57c8 }
	__asm { call fn_008841a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xec2774 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b0988d }
	__asm { push 0x127c114 }
	__asm { mov ecx, 0x127c114 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00b0988d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b09878 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b0988d }
	__asm { L_00b09878: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b0988d: }
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
extern "C" char g_012e58f4[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00b0a2d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b09ab0
extern "C" __declspec(naked) void asm_00b09ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54326 }
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
	__asm { call fn_00b0a2d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e58f4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00b09b6c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e58f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x101a1bc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e57c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7b00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00b09b6c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e57c8 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xec2720 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b09bea }
	__asm { push 0x127c114 }
	__asm { mov ecx, 0x127c114 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00b09bea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b09bd5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b09bea }
	__asm { L_00b09bd5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b09bea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}
