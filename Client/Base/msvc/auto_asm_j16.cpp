// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df110
extern "C" __declspec(naked) void asm_007df110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df139 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df13e }
	__asm { L_007df139: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df13e: }
	__asm { cmp ecx, 0x11f1150 }
	__asm { je L_007df187 }
	__asm { test eax, eax }
	__asm { je L_007df14e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df153 }
	__asm { L_007df14e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df153: }
	__asm { push 0x11f1150 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df187 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df187: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df1a0
extern "C" __declspec(naked) void asm_007df1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df1c9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df1ce }
	__asm { L_007df1c9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df1ce: }
	__asm { cmp ecx, 0x11f117c }
	__asm { je L_007df217 }
	__asm { test eax, eax }
	__asm { je L_007df1de }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df1e3 }
	__asm { L_007df1de: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df1e3: }
	__asm { push 0x11f117c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df217 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df217: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df230
extern "C" __declspec(naked) void asm_007df230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df259 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df25e }
	__asm { L_007df259: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df25e: }
	__asm { cmp ecx, 0x11f09c8 }
	__asm { je L_007df2a7 }
	__asm { test eax, eax }
	__asm { je L_007df26e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df273 }
	__asm { L_007df26e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df273: }
	__asm { push 0x11f09c8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df2a7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df2a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df2c0
extern "C" __declspec(naked) void asm_007df2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df2e9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df2ee }
	__asm { L_007df2e9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df2ee: }
	__asm { cmp ecx, 0x11f0998 }
	__asm { je L_007df337 }
	__asm { test eax, eax }
	__asm { je L_007df2fe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df303 }
	__asm { L_007df2fe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df303: }
	__asm { push 0x11f0998 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df337 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df337: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df350
extern "C" __declspec(naked) void asm_007df350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df379 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df37e }
	__asm { L_007df379: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df37e: }
	__asm { cmp ecx, 0x11f1274 }
	__asm { je L_007df3c7 }
	__asm { test eax, eax }
	__asm { je L_007df38e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df393 }
	__asm { L_007df38e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df393: }
	__asm { push 0x11f1274 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df3c7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df3c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df3e0
extern "C" __declspec(naked) void asm_007df3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df409 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df40e }
	__asm { L_007df409: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df40e: }
	__asm { cmp ecx, 0x11f08e0 }
	__asm { je L_007df457 }
	__asm { test eax, eax }
	__asm { je L_007df41e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df423 }
	__asm { L_007df41e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df423: }
	__asm { push 0x11f08e0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df457 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df457: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df470
extern "C" __declspec(naked) void asm_007df470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df499 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df49e }
	__asm { L_007df499: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df49e: }
	__asm { cmp ecx, 0x11f08b8 }
	__asm { je L_007df4e7 }
	__asm { test eax, eax }
	__asm { je L_007df4ae }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df4b3 }
	__asm { L_007df4ae: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df4b3: }
	__asm { push 0x11f08b8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df4e7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df4e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df500
extern "C" __declspec(naked) void asm_007df500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df529 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df52e }
	__asm { L_007df529: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df52e: }
	__asm { cmp ecx, 0x11f0638 }
	__asm { je L_007df577 }
	__asm { test eax, eax }
	__asm { je L_007df53e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df543 }
	__asm { L_007df53e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df543: }
	__asm { push 0x11f0638 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df577 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df577: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df590
extern "C" __declspec(naked) void asm_007df590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df5b9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df5be }
	__asm { L_007df5b9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df5be: }
	__asm { cmp ecx, 0x11f0d08 }
	__asm { je L_007df607 }
	__asm { test eax, eax }
	__asm { je L_007df5ce }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df5d3 }
	__asm { L_007df5ce: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df5d3: }
	__asm { push 0x11f0d08 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df607 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df607: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df620
extern "C" __declspec(naked) void asm_007df620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df649 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df64e }
	__asm { L_007df649: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df64e: }
	__asm { cmp ecx, 0x11f0cd8 }
	__asm { je L_007df697 }
	__asm { test eax, eax }
	__asm { je L_007df65e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df663 }
	__asm { L_007df65e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df663: }
	__asm { push 0x11f0cd8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df697 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df697: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df6b0
extern "C" __declspec(naked) void asm_007df6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df6d9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df6de }
	__asm { L_007df6d9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df6de: }
	__asm { cmp ecx, 0x11f0bf4 }
	__asm { je L_007df727 }
	__asm { test eax, eax }
	__asm { je L_007df6ee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df6f3 }
	__asm { L_007df6ee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df6f3: }
	__asm { push 0x11f0bf4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df727 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df727: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df740
extern "C" __declspec(naked) void asm_007df740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df769 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df76e }
	__asm { L_007df769: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df76e: }
	__asm { cmp ecx, 0x11f132c }
	__asm { je L_007df7b7 }
	__asm { test eax, eax }
	__asm { je L_007df77e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df783 }
	__asm { L_007df77e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df783: }
	__asm { push 0x11f132c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df7b7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df7b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df7d0
extern "C" __declspec(naked) void asm_007df7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df7f9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df7fe }
	__asm { L_007df7f9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df7fe: }
	__asm { cmp ecx, 0x11f09f4 }
	__asm { je L_007df847 }
	__asm { test eax, eax }
	__asm { je L_007df80e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df813 }
	__asm { L_007df80e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df813: }
	__asm { push 0x11f09f4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df847 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df847: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df860
extern "C" __declspec(naked) void asm_007df860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df889 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df88e }
	__asm { L_007df889: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df88e: }
	__asm { cmp ecx, 0x11f0f78 }
	__asm { je L_007df8d7 }
	__asm { test eax, eax }
	__asm { je L_007df89e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df8a3 }
	__asm { L_007df89e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df8a3: }
	__asm { push 0x11f0f78 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df8d7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df8d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df908
extern "C" __declspec(naked) void asm_007df908()
{
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df919 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df91e }
	__asm { L_007df919: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df91e: }
	__asm { cmp ecx, 0x11f0904 }
	__asm { je L_007df967 }
	__asm { test eax, eax }
	__asm { je L_007df92e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df933 }
	__asm { L_007df92e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df933: }
	__asm { push 0x11f0904 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df967 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df967: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007df980
extern "C" __declspec(naked) void asm_007df980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007df9a9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df9ae }
	__asm { L_007df9a9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df9ae: }
	__asm { cmp ecx, 0x11f0a68 }
	__asm { je L_007df9f7 }
	__asm { test eax, eax }
	__asm { je L_007df9be }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007df9c3 }
	__asm { L_007df9be: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007df9c3: }
	__asm { push 0x11f0a68 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007df9f7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007df9f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dfa10
extern "C" __declspec(naked) void asm_007dfa10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dfa39 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfa3e }
	__asm { L_007dfa39: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfa3e: }
	__asm { cmp ecx, 0x11f13c4 }
	__asm { je L_007dfa87 }
	__asm { test eax, eax }
	__asm { je L_007dfa4e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfa53 }
	__asm { L_007dfa4e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfa53: }
	__asm { push 0x11f13c4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dfa87 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dfa87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dfaa0
extern "C" __declspec(naked) void asm_007dfaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dfac9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dface }
	__asm { L_007dfac9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dface: }
	__asm { cmp ecx, 0x11f0a8c }
	__asm { je L_007dfb17 }
	__asm { test eax, eax }
	__asm { je L_007dfade }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfae3 }
	__asm { L_007dfade: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfae3: }
	__asm { push 0x11f0a8c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dfb17 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dfb17: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dfb30
extern "C" __declspec(naked) void asm_007dfb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dfb59 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfb5e }
	__asm { L_007dfb59: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfb5e: }
	__asm { cmp ecx, 0x11f096c }
	__asm { je L_007dfba7 }
	__asm { test eax, eax }
	__asm { je L_007dfb6e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfb73 }
	__asm { L_007dfb6e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfb73: }
	__asm { push 0x11f096c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dfba7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dfba7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dfbc0
extern "C" __declspec(naked) void asm_007dfbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dfbe9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfbee }
	__asm { L_007dfbe9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfbee: }
	__asm { cmp ecx, 0x11f0a18 }
	__asm { je L_007dfc37 }
	__asm { test eax, eax }
	__asm { je L_007dfbfe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfc03 }
	__asm { L_007dfbfe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfc03: }
	__asm { push 0x11f0a18 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dfc37 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dfc37: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dfc50
extern "C" __declspec(naked) void asm_007dfc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dfc79 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfc7e }
	__asm { L_007dfc79: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfc7e: }
	__asm { cmp ecx, 0x11f0568 }
	__asm { je L_007dfcc7 }
	__asm { test eax, eax }
	__asm { je L_007dfc8e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfc93 }
	__asm { L_007dfc8e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfc93: }
	__asm { push 0x11f0568 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dfcc7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dfcc7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dfce0
extern "C" __declspec(naked) void asm_007dfce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dfd09 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfd0e }
	__asm { L_007dfd09: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfd0e: }
	__asm { cmp ecx, 0x11f0db4 }
	__asm { je L_007dfd57 }
	__asm { test eax, eax }
	__asm { je L_007dfd1e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfd23 }
	__asm { L_007dfd1e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfd23: }
	__asm { push 0x11f0db4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dfd57 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dfd57: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dfd70
extern "C" __declspec(naked) void asm_007dfd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dfd99 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfd9e }
	__asm { L_007dfd99: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfd9e: }
	__asm { cmp ecx, 0x11f13e0 }
	__asm { je L_007dfde7 }
	__asm { test eax, eax }
	__asm { je L_007dfdae }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfdb3 }
	__asm { L_007dfdae: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfdb3: }
	__asm { push 0x11f13e0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dfde7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dfde7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dfe00
extern "C" __declspec(naked) void asm_007dfe00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dfe29 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfe2e }
	__asm { L_007dfe29: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfe2e: }
	__asm { cmp ecx, 0x11f0e64 }
	__asm { je L_007dfe77 }
	__asm { test eax, eax }
	__asm { je L_007dfe3e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfe43 }
	__asm { L_007dfe3e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfe43: }
	__asm { push 0x11f0e64 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dfe77 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dfe77: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dfe90
extern "C" __declspec(naked) void asm_007dfe90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dfeb9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfebe }
	__asm { L_007dfeb9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfebe: }
	__asm { cmp ecx, 0x11f0d64 }
	__asm { je L_007dff07 }
	__asm { test eax, eax }
	__asm { je L_007dfece }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfed3 }
	__asm { L_007dfece: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfed3: }
	__asm { push 0x11f0d64 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dff07 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dff07: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dff20
extern "C" __declspec(naked) void asm_007dff20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dff49 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dff4e }
	__asm { L_007dff49: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dff4e: }
	__asm { cmp ecx, 0x11f0b24 }
	__asm { je L_007dff97 }
	__asm { test eax, eax }
	__asm { je L_007dff5e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dff63 }
	__asm { L_007dff5e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dff63: }
	__asm { push 0x11f0b24 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007dff97 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007dff97: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007dffb0
extern "C" __declspec(naked) void asm_007dffb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007dffd9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dffde }
	__asm { L_007dffd9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dffde: }
	__asm { cmp ecx, 0x11f05d8 }
	__asm { je L_007e0027 }
	__asm { test eax, eax }
	__asm { je L_007dffee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007dfff3 }
	__asm { L_007dffee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007dfff3: }
	__asm { push 0x11f05d8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0027 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0027: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0040
extern "C" __declspec(naked) void asm_007e0040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0069 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e006e }
	__asm { L_007e0069: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e006e: }
	__asm { cmp ecx, 0x11f0608 }
	__asm { je L_007e00b7 }
	__asm { test eax, eax }
	__asm { je L_007e007e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0083 }
	__asm { L_007e007e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0083: }
	__asm { push 0x11f0608 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e00b7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e00b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e00d0
extern "C" __declspec(naked) void asm_007e00d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e00f9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e00fe }
	__asm { L_007e00f9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e00fe: }
	__asm { cmp ecx, 0x11f0548 }
	__asm { je L_007e0147 }
	__asm { test eax, eax }
	__asm { je L_007e010e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0113 }
	__asm { L_007e010e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0113: }
	__asm { push 0x11f0548 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0147 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0147: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0160
extern "C" __declspec(naked) void asm_007e0160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0189 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e018e }
	__asm { L_007e0189: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e018e: }
	__asm { cmp ecx, 0x11f0e34 }
	__asm { je L_007e01d7 }
	__asm { test eax, eax }
	__asm { je L_007e019e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e01a3 }
	__asm { L_007e019e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e01a3: }
	__asm { push 0x11f0e34 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e01d7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e01d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e01f0
extern "C" __declspec(naked) void asm_007e01f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0219 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e021e }
	__asm { L_007e0219: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e021e: }
	__asm { cmp ecx, 0x11f0c44 }
	__asm { je L_007e0267 }
	__asm { test eax, eax }
	__asm { je L_007e022e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0233 }
	__asm { L_007e022e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0233: }
	__asm { push 0x11f0c44 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0267 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0267: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0280
extern "C" __declspec(naked) void asm_007e0280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e02a9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e02ae }
	__asm { L_007e02a9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e02ae: }
	__asm { cmp ecx, 0x11f0690 }
	__asm { je L_007e02f7 }
	__asm { test eax, eax }
	__asm { je L_007e02be }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e02c3 }
	__asm { L_007e02be: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e02c3: }
	__asm { push 0x11f0690 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e02f7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e02f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0310
extern "C" __declspec(naked) void asm_007e0310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0339 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e033e }
	__asm { L_007e0339: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e033e: }
	__asm { cmp ecx, 0x11f0ca0 }
	__asm { je L_007e0387 }
	__asm { test eax, eax }
	__asm { je L_007e034e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0353 }
	__asm { L_007e034e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0353: }
	__asm { push 0x11f0ca0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0387 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0387: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e03a0
extern "C" __declspec(naked) void asm_007e03a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e03c9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e03ce }
	__asm { L_007e03c9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e03ce: }
	__asm { cmp ecx, 0x11f1068 }
	__asm { je L_007e0417 }
	__asm { test eax, eax }
	__asm { je L_007e03de }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e03e3 }
	__asm { L_007e03de: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e03e3: }
	__asm { push 0x11f1068 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0417 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0417: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0430
extern "C" __declspec(naked) void asm_007e0430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0459 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e045e }
	__asm { L_007e0459: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e045e: }
	__asm { cmp ecx, 0x11f0664 }
	__asm { je L_007e04a7 }
	__asm { test eax, eax }
	__asm { je L_007e046e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0473 }
	__asm { L_007e046e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0473: }
	__asm { push 0x11f0664 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e04a7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e04a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e04c0
extern "C" __declspec(naked) void asm_007e04c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e04e9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e04ee }
	__asm { L_007e04e9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e04ee: }
	__asm { cmp ecx, 0x11f0e94 }
	__asm { je L_007e0537 }
	__asm { test eax, eax }
	__asm { je L_007e04fe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0503 }
	__asm { L_007e04fe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0503: }
	__asm { push 0x11f0e94 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0537 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0537: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0550
extern "C" __declspec(naked) void asm_007e0550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0579 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e057e }
	__asm { L_007e0579: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e057e: }
	__asm { cmp ecx, 0x11f0c1c }
	__asm { je L_007e05c7 }
	__asm { test eax, eax }
	__asm { je L_007e058e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0593 }
	__asm { L_007e058e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0593: }
	__asm { push 0x11f0c1c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e05c7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e05c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e05e0
extern "C" __declspec(naked) void asm_007e05e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0609 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e060e }
	__asm { L_007e0609: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e060e: }
	__asm { cmp ecx, 0x11f07a4 }
	__asm { je L_007e0657 }
	__asm { test eax, eax }
	__asm { je L_007e061e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0623 }
	__asm { L_007e061e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0623: }
	__asm { push 0x11f07a4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0657 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0657: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0670
extern "C" __declspec(naked) void asm_007e0670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0699 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e069e }
	__asm { L_007e0699: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e069e: }
	__asm { cmp ecx, 0x11f06c0 }
	__asm { je L_007e06e7 }
	__asm { test eax, eax }
	__asm { je L_007e06ae }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e06b3 }
	__asm { L_007e06ae: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e06b3: }
	__asm { push 0x11f06c0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e06e7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e06e7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0700
extern "C" __declspec(naked) void asm_007e0700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0729 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e072e }
	__asm { L_007e0729: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e072e: }
	__asm { cmp ecx, 0x11f0d94 }
	__asm { je L_007e0777 }
	__asm { test eax, eax }
	__asm { je L_007e073e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0743 }
	__asm { L_007e073e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0743: }
	__asm { push 0x11f0d94 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0777 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0777: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0790
extern "C" __declspec(naked) void asm_007e0790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e07b9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e07be }
	__asm { L_007e07b9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e07be: }
	__asm { cmp ecx, 0x11f0b00 }
	__asm { je L_007e0807 }
	__asm { test eax, eax }
	__asm { je L_007e07ce }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e07d3 }
	__asm { L_007e07ce: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e07d3: }
	__asm { push 0x11f0b00 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0807 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0807: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0820
extern "C" __declspec(naked) void asm_007e0820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0849 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e084e }
	__asm { L_007e0849: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e084e: }
	__asm { cmp ecx, 0x11f0c74 }
	__asm { je L_007e0897 }
	__asm { test eax, eax }
	__asm { je L_007e085e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0863 }
	__asm { L_007e085e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0863: }
	__asm { push 0x11f0c74 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0897 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0897: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e08b0
extern "C" __declspec(naked) void asm_007e08b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e08d9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e08de }
	__asm { L_007e08d9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e08de: }
	__asm { cmp ecx, 0x11f110c }
	__asm { je L_007e0927 }
	__asm { test eax, eax }
	__asm { je L_007e08ee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e08f3 }
	__asm { L_007e08ee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e08f3: }
	__asm { push 0x11f110c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0927 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0927: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0940
extern "C" __declspec(naked) void asm_007e0940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0969 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e096e }
	__asm { L_007e0969: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e096e: }
	__asm { cmp ecx, 0x11f112c }
	__asm { je L_007e09b7 }
	__asm { test eax, eax }
	__asm { je L_007e097e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0983 }
	__asm { L_007e097e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0983: }
	__asm { push 0x11f112c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e09b7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e09b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e09d0
extern "C" __declspec(naked) void asm_007e09d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e09f9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e09fe }
	__asm { L_007e09f9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e09fe: }
	__asm { cmp ecx, 0x11f0ab4 }
	__asm { je L_007e0a47 }
	__asm { test eax, eax }
	__asm { je L_007e0a0e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0a13 }
	__asm { L_007e0a0e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0a13: }
	__asm { push 0x11f0ab4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0a47 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0a47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0a60
extern "C" __declspec(naked) void asm_007e0a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0a89 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0a8e }
	__asm { L_007e0a89: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0a8e: }
	__asm { cmp ecx, 0x11f0de0 }
	__asm { je L_007e0ad7 }
	__asm { test eax, eax }
	__asm { je L_007e0a9e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0aa3 }
	__asm { L_007e0a9e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0aa3: }
	__asm { push 0x11f0de0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0ad7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0ad7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0af0
extern "C" __declspec(naked) void asm_007e0af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0b19 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0b1e }
	__asm { L_007e0b19: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0b1e: }
	__asm { cmp ecx, 0x11f0e00 }
	__asm { je L_007e0b67 }
	__asm { test eax, eax }
	__asm { je L_007e0b2e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0b33 }
	__asm { L_007e0b2e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0b33: }
	__asm { push 0x11f0e00 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0b67 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0b67: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0b80
extern "C" __declspec(naked) void asm_007e0b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0ba9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0bae }
	__asm { L_007e0ba9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0bae: }
	__asm { cmp ecx, 0x11f1390 }
	__asm { je L_007e0bf7 }
	__asm { test eax, eax }
	__asm { je L_007e0bbe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0bc3 }
	__asm { L_007e0bbe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0bc3: }
	__asm { push 0x11f1390 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0bf7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0bf7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0c10
extern "C" __declspec(naked) void asm_007e0c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0c39 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0c3e }
	__asm { L_007e0c39: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0c3e: }
	__asm { cmp ecx, 0x11f06f8 }
	__asm { je L_007e0c87 }
	__asm { test eax, eax }
	__asm { je L_007e0c4e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0c53 }
	__asm { L_007e0c4e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0c53: }
	__asm { push 0x11f06f8 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0c87 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0c87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0ca0
extern "C" __declspec(naked) void asm_007e0ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0cc9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0cce }
	__asm { L_007e0cc9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0cce: }
	__asm { cmp ecx, 0x11f0a40 }
	__asm { je L_007e0d17 }
	__asm { test eax, eax }
	__asm { je L_007e0cde }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0ce3 }
	__asm { L_007e0cde: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0ce3: }
	__asm { push 0x11f0a40 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0d17 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0d17: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0d30
extern "C" __declspec(naked) void asm_007e0d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0d59 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0d5e }
	__asm { L_007e0d59: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0d5e: }
	__asm { cmp ecx, 0x11f10d4 }
	__asm { je L_007e0da7 }
	__asm { test eax, eax }
	__asm { je L_007e0d6e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0d73 }
	__asm { L_007e0d6e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0d73: }
	__asm { push 0x11f10d4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0da7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0da7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0dc0
extern "C" __declspec(naked) void asm_007e0dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0de9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0dee }
	__asm { L_007e0de9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0dee: }
	__asm { cmp ecx, 0x11f082c }
	__asm { je L_007e0e37 }
	__asm { test eax, eax }
	__asm { je L_007e0dfe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0e03 }
	__asm { L_007e0dfe: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0e03: }
	__asm { push 0x11f082c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0e37 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0e37: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0e50
extern "C" __declspec(naked) void asm_007e0e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0e79 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0e7e }
	__asm { L_007e0e79: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0e7e: }
	__asm { cmp ecx, 0x11f0800 }
	__asm { je L_007e0ec7 }
	__asm { test eax, eax }
	__asm { je L_007e0e8e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0e93 }
	__asm { L_007e0e8e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0e93: }
	__asm { push 0x11f0800 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0ec7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0ec7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0ee0
extern "C" __declspec(naked) void asm_007e0ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0f09 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0f0e }
	__asm { L_007e0f09: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0f0e: }
	__asm { cmp ecx, 0x11f1004 }
	__asm { je L_007e0f57 }
	__asm { test eax, eax }
	__asm { je L_007e0f1e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0f23 }
	__asm { L_007e0f1e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0f23: }
	__asm { push 0x11f1004 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0f57 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0f57: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e0f70
extern "C" __declspec(naked) void asm_007e0f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e0f99 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0f9e }
	__asm { L_007e0f99: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0f9e: }
	__asm { cmp ecx, 0x11f12a0 }
	__asm { je L_007e0fe7 }
	__asm { test eax, eax }
	__asm { je L_007e0fae }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e0fb3 }
	__asm { L_007e0fae: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e0fb3: }
	__asm { push 0x11f12a0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e0fe7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e0fe7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e1000
extern "C" __declspec(naked) void asm_007e1000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e1029 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e102e }
	__asm { L_007e1029: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e102e: }
	__asm { cmp ecx, 0x11f0fd4 }
	__asm { je L_007e1077 }
	__asm { test eax, eax }
	__asm { je L_007e103e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e1043 }
	__asm { L_007e103e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e1043: }
	__asm { push 0x11f0fd4 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e1077 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e1077: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e1090
extern "C" __declspec(naked) void asm_007e1090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e10b9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e10be }
	__asm { L_007e10b9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e10be: }
	__asm { cmp ecx, 0x11f0d3c }
	__asm { je L_007e1107 }
	__asm { test eax, eax }
	__asm { je L_007e10ce }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e10d3 }
	__asm { L_007e10ce: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e10d3: }
	__asm { push 0x11f0d3c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e1107 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e1107: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e1120
extern "C" __declspec(naked) void asm_007e1120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e1149 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e114e }
	__asm { L_007e1149: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e114e: }
	__asm { cmp ecx, 0x11f059c }
	__asm { je L_007e1197 }
	__asm { test eax, eax }
	__asm { je L_007e115e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e1163 }
	__asm { L_007e115e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e1163: }
	__asm { push 0x11f059c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e1197 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e1197: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e11b0
extern "C" __declspec(naked) void asm_007e11b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e11d9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e11de }
	__asm { L_007e11d9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e11de: }
	__asm { cmp ecx, 0x11f1248 }
	__asm { je L_007e1227 }
	__asm { test eax, eax }
	__asm { je L_007e11ee }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e11f3 }
	__asm { L_007e11ee: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e11f3: }
	__asm { push 0x11f1248 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e1227 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e1227: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e1240
extern "C" __declspec(naked) void asm_007e1240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e1269 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e126e }
	__asm { L_007e1269: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e126e: }
	__asm { cmp ecx, 0x11f0860 }
	__asm { je L_007e12b7 }
	__asm { test eax, eax }
	__asm { je L_007e127e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e1283 }
	__asm { L_007e127e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e1283: }
	__asm { push 0x11f0860 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e12b7 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e12b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x007e12d0
extern "C" __declspec(naked) void asm_007e12d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007e12f9 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e12fe }
	__asm { L_007e12f9: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e12fe: }
	__asm { cmp ecx, 0x11f088c }
	__asm { je L_007e1347 }
	__asm { test eax, eax }
	__asm { je L_007e130e }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007e1313 }
	__asm { L_007e130e: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007e1313: }
	__asm { push 0x11f088c }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007e1347 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007e1347: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d8e60();
extern "C" void fn_007de8e0();
extern "C" void fn_007e9a70();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e2b60
extern "C" __declspec(naked) void asm_007e2b60()
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
	__asm { push 0x74 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e2bab }
	__asm { mov ecx, eax }
	__asm { call fn_007e9a70 }
	__asm { mov esi, eax }
	__asm { jmp L_007e2bad }
	__asm { L_007e2bab: }
	__asm { xor esi, esi }
	__asm { L_007e2bad: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d8e60 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e2bde }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e2bde }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e2bde: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d8ef0();
extern "C" void fn_007de8e0();
extern "C" void fn_007e9b80();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e2bf0
extern "C" __declspec(naked) void asm_007e2bf0()
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
	__asm { push 0x88 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e2c3e }
	__asm { mov ecx, eax }
	__asm { call fn_007e9b80 }
	__asm { mov esi, eax }
	__asm { jmp L_007e2c40 }
	__asm { L_007e2c3e: }
	__asm { xor esi, esi }
	__asm { L_007e2c40: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d8ef0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e2c71 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e2c71 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e2c71: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d8f80();
extern "C" void fn_007de8e0();
extern "C" void fn_007e9ca0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e2c90
extern "C" __declspec(naked) void asm_007e2c90()
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
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e2cdb }
	__asm { mov ecx, eax }
	__asm { call fn_007e9ca0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e2cdd }
	__asm { L_007e2cdb: }
	__asm { xor esi, esi }
	__asm { L_007e2cdd: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d8f80 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e2d0e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e2d0e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e2d0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9010();
extern "C" void fn_007de8e0();
extern "C" void fn_007e9da0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e2d20
extern "C" __declspec(naked) void asm_007e2d20()
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
	__asm { push 0x78 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e2d6b }
	__asm { mov ecx, eax }
	__asm { call fn_007e9da0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e2d6d }
	__asm { L_007e2d6b: }
	__asm { xor esi, esi }
	__asm { L_007e2d6d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9010 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e2d9e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e2d9e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e2d9e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d90a0();
extern "C" void fn_007de8e0();
extern "C" void fn_007e9ea0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e2db0
extern "C" __declspec(naked) void asm_007e2db0()
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
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e2dfe }
	__asm { mov ecx, eax }
	__asm { call fn_007e9ea0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e2e00 }
	__asm { L_007e2dfe: }
	__asm { xor esi, esi }
	__asm { L_007e2e00: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d90a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e2e31 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e2e31 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e2e31: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9130();
extern "C" void fn_007de8e0();
extern "C" void fn_007e9fd0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e2e50
extern "C" __declspec(naked) void asm_007e2e50()
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
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e2e9b }
	__asm { mov ecx, eax }
	__asm { call fn_007e9fd0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e2e9d }
	__asm { L_007e2e9b: }
	__asm { xor esi, esi }
	__asm { L_007e2e9d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9130 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e2ece }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e2ece }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e2ece: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d91c0();
extern "C" void fn_007de8e0();
extern "C" void fn_007ea0d0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e2ee0
extern "C" __declspec(naked) void asm_007e2ee0()
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
	__asm { push 0x74 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e2f2b }
	__asm { mov ecx, eax }
	__asm { call fn_007ea0d0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e2f2d }
	__asm { L_007e2f2b: }
	__asm { xor esi, esi }
	__asm { L_007e2f2d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d91c0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e2f5e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e2f5e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e2f5e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9250();
extern "C" void fn_007de8e0();
extern "C" void fn_007ea1f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e2f70
extern "C" __declspec(naked) void asm_007e2f70()
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
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e2fbe }
	__asm { mov ecx, eax }
	__asm { call fn_007ea1f0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e2fc0 }
	__asm { L_007e2fbe: }
	__asm { xor esi, esi }
	__asm { L_007e2fc0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9250 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e2ff1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e2ff1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e2ff1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d92e0();
extern "C" void fn_007de8e0();
extern "C" void fn_007ea320();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3010
extern "C" __declspec(naked) void asm_007e3010()
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
	__asm { je L_007e305e }
	__asm { mov ecx, eax }
	__asm { call fn_007ea320 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3060 }
	__asm { L_007e305e: }
	__asm { xor esi, esi }
	__asm { L_007e3060: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d92e0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3091 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3091 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3091: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9370();
extern "C" void fn_007de8e0();
extern "C" void fn_007ea460();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e30b0
extern "C" __declspec(naked) void asm_007e30b0()
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
	__asm { push 0x74 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e30fb }
	__asm { mov ecx, eax }
	__asm { call fn_007ea460 }
	__asm { mov esi, eax }
	__asm { jmp L_007e30fd }
	__asm { L_007e30fb: }
	__asm { xor esi, esi }
	__asm { L_007e30fd: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9370 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e312e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e312e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e312e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9400();
extern "C" void fn_007de8e0();
extern "C" void fn_007ea570();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3140
extern "C" __declspec(naked) void asm_007e3140()
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
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e318b }
	__asm { mov ecx, eax }
	__asm { call fn_007ea570 }
	__asm { mov esi, eax }
	__asm { jmp L_007e318d }
	__asm { L_007e318b: }
	__asm { xor esi, esi }
	__asm { L_007e318d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9400 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e31be }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e31be }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e31be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9490();
extern "C" void fn_007de8e0();
extern "C" void fn_00ae9070();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e31d0
extern "C" __declspec(naked) void asm_007e31d0()
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
	__asm { push 0x88 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e321e }
	__asm { mov ecx, eax }
	__asm { call fn_00ae9070 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3220 }
	__asm { L_007e321e: }
	__asm { xor esi, esi }
	__asm { L_007e3220: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9490 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3251 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3251 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3251: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9520();
extern "C" void fn_007de8e0();
extern "C" void fn_00ad9880();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3270
extern "C" __declspec(naked) void asm_007e3270()
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
	__asm { push 0xb0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e32be }
	__asm { mov ecx, eax }
	__asm { call fn_00ad9880 }
	__asm { mov esi, eax }
	__asm { jmp L_007e32c0 }
	__asm { L_007e32be: }
	__asm { xor esi, esi }
	__asm { L_007e32c0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9520 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e32f1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e32f1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e32f1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d95b0();
extern "C" void fn_007de8e0();
extern "C" void fn_00acd270();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3310
extern "C" __declspec(naked) void asm_007e3310()
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
	__asm { push 0x78 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e335b }
	__asm { mov ecx, eax }
	__asm { call fn_00acd270 }
	__asm { mov esi, eax }
	__asm { jmp L_007e335d }
	__asm { L_007e335b: }
	__asm { xor esi, esi }
	__asm { L_007e335d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d95b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e338e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e338e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e338e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9640();
extern "C" void fn_007de8e0();
extern "C" void fn_00ad00f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e33a0
extern "C" __declspec(naked) void asm_007e33a0()
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
	__asm { je L_007e33ee }
	__asm { mov ecx, eax }
	__asm { call fn_00ad00f0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e33f0 }
	__asm { L_007e33ee: }
	__asm { xor esi, esi }
	__asm { L_007e33f0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9640 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3421 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3421 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3421: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d96d0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a9ecd0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3440
extern "C" __declspec(naked) void asm_007e3440()
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
	__asm { je L_007e348e }
	__asm { mov ecx, eax }
	__asm { call fn_00a9ecd0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3490 }
	__asm { L_007e348e: }
	__asm { xor esi, esi }
	__asm { L_007e3490: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d96d0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e34c1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e34c1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e34c1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9760();
extern "C" void fn_007de8e0();
extern "C" void fn_00a585e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e34e0
extern "C" __declspec(naked) void asm_007e34e0()
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
	__asm { push 0xa0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e352e }
	__asm { mov ecx, eax }
	__asm { call fn_00a585e0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3530 }
	__asm { L_007e352e: }
	__asm { xor esi, esi }
	__asm { L_007e3530: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9760 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3561 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3561 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3561: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d97f0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a5abd0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3580
extern "C" __declspec(naked) void asm_007e3580()
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
	__asm { push 0x140 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e35ce }
	__asm { mov ecx, eax }
	__asm { call fn_00a5abd0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e35d0 }
	__asm { L_007e35ce: }
	__asm { xor esi, esi }
	__asm { L_007e35d0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d97f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3601 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3601 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3601: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9880();
extern "C" void fn_007de8e0();
extern "C" void fn_00a56f70();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3620
extern "C" __declspec(naked) void asm_007e3620()
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
	__asm { push 0x148 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e366e }
	__asm { mov ecx, eax }
	__asm { call fn_00a56f70 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3670 }
	__asm { L_007e366e: }
	__asm { xor esi, esi }
	__asm { L_007e3670: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9880 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e36a1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e36a1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e36a1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9910();
extern "C" void fn_007de8e0();
extern "C" void fn_007ea700();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e36c0
extern "C" __declspec(naked) void asm_007e36c0()
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
	__asm { push 0x68 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e370b }
	__asm { mov ecx, eax }
	__asm { call fn_007ea700 }
	__asm { mov esi, eax }
	__asm { jmp L_007e370d }
	__asm { L_007e370b: }
	__asm { xor esi, esi }
	__asm { L_007e370d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9910 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e373e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e373e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e373e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d99a0();
extern "C" void fn_007de8e0();
extern "C" void fn_007ea7c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3750
extern "C" __declspec(naked) void asm_007e3750()
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
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e379e }
	__asm { mov ecx, eax }
	__asm { call fn_007ea7c0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e37a0 }
	__asm { L_007e379e: }
	__asm { xor esi, esi }
	__asm { L_007e37a0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d99a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e37d1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e37d1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e37d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9a30();
extern "C" void fn_007de8e0();
extern "C" void fn_00a946a0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e37f0
extern "C" __declspec(naked) void asm_007e37f0()
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
	__asm { push 0x15c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e383e }
	__asm { mov ecx, eax }
	__asm { call fn_00a946a0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3840 }
	__asm { L_007e383e: }
	__asm { xor esi, esi }
	__asm { L_007e3840: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9a30 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3871 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3871 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3871: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9ac0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a94750();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3890
extern "C" __declspec(naked) void asm_007e3890()
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
	__asm { push 0x140 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e38de }
	__asm { mov ecx, eax }
	__asm { call fn_00a94750 }
	__asm { mov esi, eax }
	__asm { jmp L_007e38e0 }
	__asm { L_007e38de: }
	__asm { xor esi, esi }
	__asm { L_007e38e0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9ac0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3911 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3911 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3911: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9b50();
extern "C" void fn_007de8e0();
extern "C" void fn_00a947f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3930
extern "C" __declspec(naked) void asm_007e3930()
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
	__asm { push 0x178 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e397e }
	__asm { mov ecx, eax }
	__asm { call fn_00a947f0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3980 }
	__asm { L_007e397e: }
	__asm { xor esi, esi }
	__asm { L_007e3980: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9b50 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e39b1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e39b1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e39b1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9be0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a94a50();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e39d0
extern "C" __declspec(naked) void asm_007e39d0()
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
	__asm { push 0x178 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e3a1e }
	__asm { mov ecx, eax }
	__asm { call fn_00a94a50 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3a20 }
	__asm { L_007e3a1e: }
	__asm { xor esi, esi }
	__asm { L_007e3a20: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9be0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3a51 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3a51 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3a51: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9c70();
extern "C" void fn_007de8e0();
extern "C" void fn_00a94bc0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3a70
extern "C" __declspec(naked) void asm_007e3a70()
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
	__asm { push 0x14c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e3abe }
	__asm { mov ecx, eax }
	__asm { call fn_00a94bc0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3ac0 }
	__asm { L_007e3abe: }
	__asm { xor esi, esi }
	__asm { L_007e3ac0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9c70 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3af1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3af1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3af1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9d00();
extern "C" void fn_007de8e0();
extern "C" void fn_00a94c80();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3b10
extern "C" __declspec(naked) void asm_007e3b10()
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
	__asm { push 0x15c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e3b5e }
	__asm { mov ecx, eax }
	__asm { call fn_00a94c80 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3b60 }
	__asm { L_007e3b5e: }
	__asm { xor esi, esi }
	__asm { L_007e3b60: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9d00 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3b91 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3b91 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3b91: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9d90();
extern "C" void fn_007de8e0();
extern "C" void fn_00a5e990();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3bb0
extern "C" __declspec(naked) void asm_007e3bb0()
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
	__asm { push 0x70 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e3bfb }
	__asm { mov ecx, eax }
	__asm { call fn_00a5e990 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3bfd }
	__asm { L_007e3bfb: }
	__asm { xor esi, esi }
	__asm { L_007e3bfd: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9d90 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3c2e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3c2e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3c2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9e20();
extern "C" void fn_007de8e0();
extern "C" void fn_00a60970();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3c40
extern "C" __declspec(naked) void asm_007e3c40()
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
	__asm { push 0xa4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e3c8e }
	__asm { mov ecx, eax }
	__asm { call fn_00a60970 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3c90 }
	__asm { L_007e3c8e: }
	__asm { xor esi, esi }
	__asm { L_007e3c90: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9e20 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3cc1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3cc1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3cc1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9eb0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a62040();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3ce0
extern "C" __declspec(naked) void asm_007e3ce0()
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
	__asm { push 0x78 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e3d2b }
	__asm { mov ecx, eax }
	__asm { call fn_00a62040 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3d2d }
	__asm { L_007e3d2b: }
	__asm { xor esi, esi }
	__asm { L_007e3d2d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9eb0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3d5e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3d5e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3d5e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d9fd0();
extern "C" void fn_007de8e0();
extern "C" void fn_007fa990();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3f60
extern "C" __declspec(naked) void asm_007e3f60()
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
	__asm { push 0x78 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e3fab }
	__asm { mov ecx, eax }
	__asm { call fn_007fa990 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3fad }
	__asm { L_007e3fab: }
	__asm { xor esi, esi }
	__asm { L_007e3fad: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9fd0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3fde }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3fde }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3fde: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da060();
extern "C" void fn_007de8e0();
extern "C" void fn_007faaa0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3ff0
extern "C" __declspec(naked) void asm_007e3ff0()
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
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e403e }
	__asm { mov ecx, eax }
	__asm { call fn_007faaa0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4040 }
	__asm { L_007e403e: }
	__asm { xor esi, esi }
	__asm { L_007e4040: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da060 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4071 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4071 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4071: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da0f0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a7f6c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4090
extern "C" __declspec(naked) void asm_007e4090()
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
	__asm { push 0xe4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e40de }
	__asm { mov ecx, eax }
	__asm { call fn_00a7f6c0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e40e0 }
	__asm { L_007e40de: }
	__asm { xor esi, esi }
	__asm { L_007e40e0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da0f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4111 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4111 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4111: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da180();
extern "C" void fn_007de8e0();
extern "C" void fn_00a6f970();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4130
extern "C" __declspec(naked) void asm_007e4130()
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
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e417e }
	__asm { mov ecx, eax }
	__asm { call fn_00a6f970 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4180 }
	__asm { L_007e417e: }
	__asm { xor esi, esi }
	__asm { L_007e4180: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da180 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e41b1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e41b1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e41b1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da210();
extern "C" void fn_007de8e0();
extern "C" void fn_00a6e750();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e41d0
extern "C" __declspec(naked) void asm_007e41d0()
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
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e421e }
	__asm { mov ecx, eax }
	__asm { call fn_00a6e750 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4220 }
	__asm { L_007e421e: }
	__asm { xor esi, esi }
	__asm { L_007e4220: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da210 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4251 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4251 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4251: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da2a0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a8ec80();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4270
extern "C" __declspec(naked) void asm_007e4270()
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
	__asm { push 0x25c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e42be }
	__asm { mov ecx, eax }
	__asm { call fn_00a8ec80 }
	__asm { mov esi, eax }
	__asm { jmp L_007e42c0 }
	__asm { L_007e42be: }
	__asm { xor esi, esi }
	__asm { L_007e42c0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da2a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e42f1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e42f1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e42f1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da3c0();
extern "C" void fn_007de8e0();
extern "C" void fn_00acbcf0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e43b0
extern "C" __declspec(naked) void asm_007e43b0()
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
	__asm { push 0xd0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e43fe }
	__asm { mov ecx, eax }
	__asm { call fn_00acbcf0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4400 }
	__asm { L_007e43fe: }
	__asm { xor esi, esi }
	__asm { L_007e4400: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da3c0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4431 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4431 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4431: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da450();
extern "C" void fn_007de8e0();
extern "C" void fn_00a75900();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4450
extern "C" __declspec(naked) void asm_007e4450()
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
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e449e }
	__asm { mov ecx, eax }
	__asm { call fn_00a75900 }
	__asm { mov esi, eax }
	__asm { jmp L_007e44a0 }
	__asm { L_007e449e: }
	__asm { xor esi, esi }
	__asm { L_007e44a0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da450 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e44d1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e44d1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e44d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da4e0();
extern "C" void fn_007de8e0();
extern "C" void fn_00aed6e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e44f0
extern "C" __declspec(naked) void asm_007e44f0()
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
	__asm { push 0x68 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e453b }
	__asm { mov ecx, eax }
	__asm { call fn_00aed6e0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e453d }
	__asm { L_007e453b: }
	__asm { xor esi, esi }
	__asm { L_007e453d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da4e0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e456e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e456e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e456e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da570();
extern "C" void fn_007de8e0();
extern "C" void fn_00ac7910();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4580
extern "C" __declspec(naked) void asm_007e4580()
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
	__asm { push 0x11c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e45ce }
	__asm { mov ecx, eax }
	__asm { call fn_00ac7910 }
	__asm { mov esi, eax }
	__asm { jmp L_007e45d0 }
	__asm { L_007e45ce: }
	__asm { xor esi, esi }
	__asm { L_007e45d0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da570 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4601 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4601 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4601: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da600();
extern "C" void fn_007de8e0();
extern "C" void fn_00a9a7f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4620
extern "C" __declspec(naked) void asm_007e4620()
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
	__asm { push 0x174 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e466e }
	__asm { mov ecx, eax }
	__asm { call fn_00a9a7f0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4670 }
	__asm { L_007e466e: }
	__asm { xor esi, esi }
	__asm { L_007e4670: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da600 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e46a1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e46a1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e46a1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da720();
extern "C" void fn_007de8e0();
extern "C" void fn_00a8cfa0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e47b0
extern "C" __declspec(naked) void asm_007e47b0()
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
	__asm { push 0x8c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e47fe }
	__asm { mov ecx, eax }
	__asm { call fn_00a8cfa0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4800 }
	__asm { L_007e47fe: }
	__asm { xor esi, esi }
	__asm { L_007e4800: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da720 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4831 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4831 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4831: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da7b0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a68220();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4850
extern "C" __declspec(naked) void asm_007e4850()
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
	__asm { push 0xb8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e489e }
	__asm { mov ecx, eax }
	__asm { call fn_00a68220 }
	__asm { mov esi, eax }
	__asm { jmp L_007e48a0 }
	__asm { L_007e489e: }
	__asm { xor esi, esi }
	__asm { L_007e48a0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da7b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e48d1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e48d1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e48d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da840();
extern "C" void fn_007de8e0();
extern "C" void fn_00ad7c70();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e48f0
extern "C" __declspec(naked) void asm_007e48f0()
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
	__asm { push 0xa4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e493e }
	__asm { mov ecx, eax }
	__asm { call fn_00ad7c70 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4940 }
	__asm { L_007e493e: }
	__asm { xor esi, esi }
	__asm { L_007e4940: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da840 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4971 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4971 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4971: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da8d0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a919b0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4990
extern "C" __declspec(naked) void asm_007e4990()
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
	__asm { push 0x90 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e49de }
	__asm { mov ecx, eax }
	__asm { call fn_00a919b0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e49e0 }
	__asm { L_007e49de: }
	__asm { xor esi, esi }
	__asm { L_007e49e0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da8d0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4a11 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4a11 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4a11: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da960();
extern "C" void fn_007de8e0();
extern "C" void fn_00ab7bf0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4a30
extern "C" __declspec(naked) void asm_007e4a30()
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
	__asm { push 0x158 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e4a7e }
	__asm { mov ecx, eax }
	__asm { call fn_00ab7bf0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4a80 }
	__asm { L_007e4a7e: }
	__asm { xor esi, esi }
	__asm { L_007e4a80: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da960 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4ab1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4ab1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4ab1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da9f0();
extern "C" void fn_007de8e0();
extern "C" void fn_00aa1ed0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4ad0
extern "C" __declspec(naked) void asm_007e4ad0()
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
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e4b1e }
	__asm { mov ecx, eax }
	__asm { call fn_00aa1ed0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4b20 }
	__asm { L_007e4b1e: }
	__asm { xor esi, esi }
	__asm { L_007e4b20: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da9f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4b51 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4b51 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4b51: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007daa80();
extern "C" void fn_007de8e0();
extern "C" void fn_00a8d050();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4b70
extern "C" __declspec(naked) void asm_007e4b70()
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
	__asm { push 0x8c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e4bbe }
	__asm { mov ecx, eax }
	__asm { call fn_00a8d050 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4bc0 }
	__asm { L_007e4bbe: }
	__asm { xor esi, esi }
	__asm { L_007e4bc0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007daa80 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4bf1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4bf1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4bf1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007dab10();
extern "C" void fn_007de8e0();
extern "C" void fn_00a85d50();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4c10
extern "C" __declspec(naked) void asm_007e4c10()
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
	__asm { push 0xc0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e4c5e }
	__asm { mov ecx, eax }
	__asm { call fn_00a85d50 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4c60 }
	__asm { L_007e4c5e: }
	__asm { xor esi, esi }
	__asm { L_007e4c60: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007dab10 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4c91 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4c91 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4c91: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007daba0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a70680();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4cb0
extern "C" __declspec(naked) void asm_007e4cb0()
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
	__asm { push 0x70 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e4cfb }
	__asm { mov ecx, eax }
	__asm { call fn_00a70680 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4cfd }
	__asm { L_007e4cfb: }
	__asm { xor esi, esi }
	__asm { L_007e4cfd: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007daba0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4d2e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4d2e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4d2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007dac30();
extern "C" void fn_007de8e0();
extern "C" void fn_00adeaa0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4d40
extern "C" __declspec(naked) void asm_007e4d40()
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
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e4d8e }
	__asm { mov ecx, eax }
	__asm { call fn_00adeaa0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4d90 }
	__asm { L_007e4d8e: }
	__asm { xor esi, esi }
	__asm { L_007e4d90: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007dac30 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4dc1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4dc1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4dc1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007dacc0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a94d30();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4de0
extern "C" __declspec(naked) void asm_007e4de0()
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
	__asm { push 0x190 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e4e2e }
	__asm { mov ecx, eax }
	__asm { call fn_00a94d30 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4e30 }
	__asm { L_007e4e2e: }
	__asm { xor esi, esi }
	__asm { L_007e4e30: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007dacc0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4e61 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4e61 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4e61: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007dad50();
extern "C" void fn_007de8e0();
extern "C" void fn_00ac7a70();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4e80
extern "C" __declspec(naked) void asm_007e4e80()
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
	__asm { push 0x11c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e4ece }
	__asm { mov ecx, eax }
	__asm { call fn_00ac7a70 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4ed0 }
	__asm { L_007e4ece: }
	__asm { xor esi, esi }
	__asm { L_007e4ed0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007dad50 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4f01 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4f01 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4f01: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007dade0();
extern "C" void fn_007de8e0();
extern "C" void fn_00ae3bc0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4f20
extern "C" __declspec(naked) void asm_007e4f20()
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
	__asm { push 0x410 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e4f6e }
	__asm { mov ecx, eax }
	__asm { call fn_00ae3bc0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4f70 }
	__asm { L_007e4f6e: }
	__asm { xor esi, esi }
	__asm { L_007e4f70: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007dade0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4fa1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4fa1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4fa1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007dae70();
extern "C" void fn_007de8e0();
extern "C" void fn_00aa2df0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4fc0
extern "C" __declspec(naked) void asm_007e4fc0()
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
	__asm { push 0x94 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e500e }
	__asm { mov ecx, eax }
	__asm { call fn_00aa2df0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e5010 }
	__asm { L_007e500e: }
	__asm { xor esi, esi }
	__asm { L_007e5010: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007dae70 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e5041 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e5041 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e5041: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007daf00();
extern "C" void fn_007de8e0();
extern "C" void fn_00ac9500();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e5060
extern "C" __declspec(naked) void asm_007e5060()
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
	__asm { push 0x9c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e50ae }
	__asm { mov ecx, eax }
	__asm { call fn_00ac9500 }
	__asm { mov esi, eax }
	__asm { jmp L_007e50b0 }
	__asm { L_007e50ae: }
	__asm { xor esi, esi }
	__asm { L_007e50b0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007daf00 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e50e1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e50e1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e50e1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007daf90();
extern "C" void fn_007de8e0();
extern "C" void fn_00ac9550();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e5100
extern "C" __declspec(naked) void asm_007e5100()
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
	__asm { push 0xa0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e514e }
	__asm { mov ecx, eax }
	__asm { call fn_00ac9550 }
	__asm { mov esi, eax }
	__asm { jmp L_007e5150 }
	__asm { L_007e514e: }
	__asm { xor esi, esi }
	__asm { L_007e5150: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007daf90 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e5181 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e5181 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e5181: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db020();
extern "C" void fn_007de8e0();
extern "C" void fn_00aaa8b0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e51a0
extern "C" __declspec(naked) void asm_007e51a0()
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
	__asm { push 0xa4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e51ee }
	__asm { mov ecx, eax }
	__asm { call fn_00aaa8b0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e51f0 }
	__asm { L_007e51ee: }
	__asm { xor esi, esi }
	__asm { L_007e51f0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db020 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e5221 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e5221 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e5221: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db1d0();
extern "C" void fn_007de8e0();
extern "C" void fn_00aad4f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e5380
extern "C" __declspec(naked) void asm_007e5380()
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
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e53ce }
	__asm { mov ecx, eax }
	__asm { call fn_00aad4f0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e53d0 }
	__asm { L_007e53ce: }
	__asm { xor esi, esi }
	__asm { L_007e53d0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db1d0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e5401 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e5401 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e5401: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db260();
extern "C" void fn_007de8e0();
extern "C" void fn_00aadc60();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e5420
extern "C" __declspec(naked) void asm_007e5420()
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
	__asm { push 0x70 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e546b }
	__asm { mov ecx, eax }
	__asm { call fn_00aadc60 }
	__asm { mov esi, eax }
	__asm { jmp L_007e546d }
	__asm { L_007e546b: }
	__asm { xor esi, esi }
	__asm { L_007e546d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db260 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e549e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e549e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e549e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db2f0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a82c10();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e54b0
extern "C" __declspec(naked) void asm_007e54b0()
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
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e54fe }
	__asm { mov ecx, eax }
	__asm { call fn_00a82c10 }
	__asm { mov esi, eax }
	__asm { jmp L_007e5500 }
	__asm { L_007e54fe: }
	__asm { xor esi, esi }
	__asm { L_007e5500: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db2f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e5531 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e5531 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e5531: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db380();
extern "C" void fn_007de8e0();
extern "C" void fn_00a75ce0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e5550
extern "C" __declspec(naked) void asm_007e5550()
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
	__asm { push 0x1b8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e559e }
	__asm { mov ecx, eax }
	__asm { call fn_00a75ce0 }
	__asm { mov esi, eax }
	__asm { jmp L_007e55a0 }
	__asm { L_007e559e: }
	__asm { xor esi, esi }
	__asm { L_007e55a0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db380 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e55d1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e55d1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e55d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db410();
extern "C" void fn_007de8e0();
extern "C" void fn_00aca900();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e55f0
extern "C" __declspec(naked) void asm_007e55f0()
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
	__asm { push 0xcc }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e563e }
	__asm { mov ecx, eax }
	__asm { call fn_00aca900 }
	__asm { mov esi, eax }
	__asm { jmp L_007e5640 }
	__asm { L_007e563e: }
	__asm { xor esi, esi }
	__asm { L_007e5640: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db410 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e5671 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e5671 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e5671: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db4a0();
extern "C" void fn_007de8e0();
extern "C" void fn_00aaec20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e5690
extern "C" __declspec(naked) void asm_007e5690()
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
	__asm { push 0x78 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e56db }
	__asm { mov ecx, eax }
	__asm { call fn_00aaec20 }
	__asm { mov esi, eax }
	__asm { jmp L_007e56dd }
	__asm { L_007e56db: }
	__asm { xor esi, esi }
	__asm { L_007e56dd: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db4a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e570e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e570e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e570e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db530();
extern "C" void fn_007de8e0();
extern "C" void fn_00aaf440();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e5720
extern "C" __declspec(naked) void asm_007e5720()
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
	__asm { push 0x68 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e576b }
	__asm { mov ecx, eax }
	__asm { call fn_00aaf440 }
	__asm { mov esi, eax }
	__asm { jmp L_007e576d }
	__asm { L_007e576b: }
	__asm { xor esi, esi }
	__asm { L_007e576d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db530 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e579e }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e579e }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e579e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db5c0();
extern "C" void fn_007de8e0();
extern "C" void fn_00a8d100();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e57b0
extern "C" __declspec(naked) void asm_007e57b0()
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
	__asm { push 0x9c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e57fe }
	__asm { mov ecx, eax }
	__asm { call fn_00a8d100 }
	__asm { mov esi, eax }
	__asm { jmp L_007e5800 }
	__asm { L_007e57fe: }
	__asm { xor esi, esi }
	__asm { L_007e5800: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db5c0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e5831 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e5831 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e5831: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db650();
extern "C" void fn_007de8e0();
extern "C" void fn_00a63f80();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e5850
extern "C" __declspec(naked) void asm_007e5850()
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
	__asm { push 0x130 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e589e }
	__asm { mov ecx, eax }
	__asm { call fn_00a63f80 }
	__asm { mov esi, eax }
	__asm { jmp L_007e58a0 }
	__asm { L_007e589e: }
	__asm { xor esi, esi }
	__asm { L_007e58a0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db650 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e58d1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e58d1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e58d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebec60[];
extern "C" char g_012f6684[];
extern "C" char g_012f6688[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e5990
extern "C" __declspec(naked) void asm_007e5990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2251e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebec60], 0 }
	__asm { jne L_007e59c4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e59c4: }
	__asm { push 0x7e1360 }
	__asm { push 0x12f6434 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6688] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e5a0e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6688], eax }
	__asm { push 0xebec60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6684], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5a0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6684] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eab2b4[];
extern "C" char g_012f64a4[];
extern "C" char g_012f64a8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e5a30
extern "C" __declspec(naked) void asm_007e5a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd21fde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eab2b4], 0 }
	__asm { jne L_007e5a64 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5a64: }
	__asm { push 0x7e13b0 }
	__asm { push 0x12f6254 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e5aae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64a8], eax }
	__asm { push 0xeab2b4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5aae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebd518[];
extern "C" char g_012f666c[];
extern "C" char g_012f6670[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e5ad0
extern "C" __declspec(naked) void asm_007e5ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2253e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebd518], 0 }
	__asm { jne L_007e5b04 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5b04: }
	__asm { push 0x7e1400 }
	__asm { push 0x12f641c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6670] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e5b4e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6670], eax }
	__asm { push 0xebd518 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f666c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5b4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f666c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebc3ac[];
extern "C" char g_012f6644[];
extern "C" char g_012f6648[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e5b70
extern "C" __declspec(naked) void asm_007e5b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2255e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebc3ac], 0 }
	__asm { jne L_007e5ba4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5ba4: }
	__asm { push 0x7e1450 }
	__asm { push 0x12f63f4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6648] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e5bee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6648], eax }
	__asm { push 0xebc3ac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6644], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5bee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6644] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebc558[];
extern "C" char g_012f664c[];
extern "C" char g_012f6650[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e5c10
extern "C" __declspec(naked) void asm_007e5c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2200e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebc558], 0 }
	__asm { jne L_007e5c44 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5c44: }
	__asm { push 0x7e14a0 }
	__asm { push 0x12f63fc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6650] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e5c8e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6650], eax }
	__asm { push 0xebc558 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f664c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5c8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f664c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb5c68[];
extern "C" char g_012f65ac[];
extern "C" char g_012f65b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e5cb0
extern "C" __declspec(naked) void asm_007e5cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2257e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb5c68], 0 }
	__asm { jne L_007e5ce4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5ce4: }
	__asm { push 0x7e14f0 }
	__asm { push 0x12f635c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f65b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e5d2e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f65b0], eax }
	__asm { push 0xeb5c68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f65ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5d2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f65ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eab730[];
extern "C" char g_012f64ac[];
extern "C" char g_012f64b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e5d50
extern "C" __declspec(naked) void asm_007e5d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2259e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eab730], 0 }
	__asm { jne L_007e5d84 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5d84: }
	__asm { push 0x7e1540 }
	__asm { push 0x12f625c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e5dce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64b0], eax }
	__asm { push 0xeab730 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5dce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eab990[];
extern "C" char g_012f64b4[];
extern "C" char g_012f64b8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e5df0
extern "C" __declspec(naked) void asm_007e5df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2202e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eab990], 0 }
	__asm { jne L_007e5e24 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5e24: }
	__asm { push 0x7e1590 }
	__asm { push 0x12f6264 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e5e6e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64b8], eax }
	__asm { push 0xeab990 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64b4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5e6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64b4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e20[];
extern "C" char g_012f66ac[];
extern "C" char g_012f66b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e5e90
extern "C" __declspec(naked) void asm_007e5e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2204e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e94e20], 0 }
	__asm { jne L_007e5ec4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5ec4: }
	__asm { push 0x7e15e0 }
	__asm { push 0x12f645c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f66b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e5f0e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f66b0], eax }
	__asm { push 0xe94e20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f66ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5f0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f66ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebcb5c[];
extern "C" char g_012f665c[];
extern "C" char g_012f6660[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e5f30
extern "C" __declspec(naked) void asm_007e5f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2206e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebcb5c], 0 }
	__asm { jne L_007e5f64 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5f64: }
	__asm { push 0x7e1630 }
	__asm { push 0x12f640c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6660] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e5fae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6660], eax }
	__asm { push 0xebcb5c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f665c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e5fae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f665c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ebcb58[];
extern "C" char g_012f6654[];
extern "C" char g_012f6658[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e5fd0
extern "C" __declspec(naked) void asm_007e5fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd225be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ebcb58], 0 }
	__asm { jne L_007e6004 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6004: }
	__asm { push 0x7e1680 }
	__asm { push 0x12f6404 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6658] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e604e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6658], eax }
	__asm { push 0xebcb58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6654], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e604e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6654] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb3510[];
extern "C" char g_012f6594[];
extern "C" char g_012f6598[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6070
extern "C" __declspec(naked) void asm_007e6070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd225de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb3510], 0 }
	__asm { jne L_007e60a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e60a4: }
	__asm { push 0x7e16d0 }
	__asm { push 0x12f6344 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6598] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e60ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6598], eax }
	__asm { push 0xeb3510 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6594], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e60ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6594] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb3514[];
extern "C" char g_012f6574[];
extern "C" char g_012f6578[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6110
extern "C" __declspec(naked) void asm_007e6110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd225fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb3514], 0 }
	__asm { jne L_007e6144 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6144: }
	__asm { push 0x7e1720 }
	__asm { push 0x12f6324 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6578] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e618e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6578], eax }
	__asm { push 0xeb3514 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6574], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e618e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6574] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb3524[];
extern "C" char g_012f656c[];
extern "C" char g_012f6570[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e61b0
extern "C" __declspec(naked) void asm_007e61b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2261e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb3524], 0 }
	__asm { jne L_007e61e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e61e4: }
	__asm { push 0x7e1770 }
	__asm { push 0x12f631c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6570] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e622e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6570], eax }
	__asm { push 0xeb3524 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f656c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e622e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f656c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb3528[];
extern "C" char g_012f6584[];
extern "C" char g_012f6588[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6250
extern "C" __declspec(naked) void asm_007e6250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2208e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb3528], 0 }
	__asm { jne L_007e6284 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6284: }
	__asm { push 0x7e17c0 }
	__asm { push 0x12f6334 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6588] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e62ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6588], eax }
	__asm { push 0xeb3528 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f6584], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e62ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f6584] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb3520[];
extern "C" char g_012f657c[];
extern "C" char g_012f6580[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e62f0
extern "C" __declspec(naked) void asm_007e62f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2263e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb3520], 0 }
	__asm { jne L_007e6324 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6324: }
	__asm { push 0x7e1810 }
	__asm { push 0x12f632c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6580] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e636e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6580], eax }
	__asm { push 0xeb3520 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f657c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e636e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f657c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb350c[];
extern "C" char g_012f658c[];
extern "C" char g_012f6590[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6390
extern "C" __declspec(naked) void asm_007e6390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd220ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eb350c], 0 }
	__asm { jne L_007e63c4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e63c4: }
	__asm { push 0x7e1860 }
	__asm { push 0x12f633c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f6590] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e640e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f6590], eax }
	__asm { push 0xeb350c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f658c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e640e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f658c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e08[];
extern "C" char g_012f66a4[];
extern "C" char g_012f66a8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6430
extern "C" __declspec(naked) void asm_007e6430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2265e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e94e08], 0 }
	__asm { jne L_007e6464 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6464: }
	__asm { push 0x7e18b0 }
	__asm { push 0x12f6454 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f66a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e64ae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f66a8], eax }
	__asm { push 0xe94e08 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f66a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e64ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f66a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e1c[];
extern "C" char g_012f66d4[];
extern "C" char g_012f66d8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e64d0
extern "C" __declspec(naked) void asm_007e64d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd220ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e94e1c], 0 }
	__asm { jne L_007e6504 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6504: }
	__asm { push 0x7e1900 }
	__asm { push 0x12f6484 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f66d8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e654e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f66d8], eax }
	__asm { push 0xe94e1c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f66d4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e654e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f66d4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94e14[];
extern "C" char g_012f66c4[];
extern "C" char g_012f66c8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6570
extern "C" __declspec(naked) void asm_007e6570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2267e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e94e14], 0 }
	__asm { jne L_007e65a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e65a4: }
	__asm { push 0x7e1950 }
	__asm { push 0x12f6474 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f66c8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e65ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f66c8], eax }
	__asm { push 0xe94e14 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f66c4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e65ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f66c4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eabe4c[];
extern "C" char g_012f64bc[];
extern "C" char g_012f64c0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e6610
extern "C" __declspec(naked) void asm_007e6610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd220ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eabe4c], 0 }
	__asm { jne L_007e6644 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e6644: }
	__asm { push 0x7e19a0 }
	__asm { push 0x12f626c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e668e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64c0], eax }
	__asm { push 0xeabe4c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64bc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e668e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64bc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eac124[];
extern "C" char g_012f64c4[];
extern "C" char g_012f64c8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007e66b0
extern "C" __declspec(naked) void asm_007e66b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2210e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00eac124], 0 }
	__asm { jne L_007e66e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e66e4: }
	__asm { push 0x7e19f0 }
	__asm { push 0x12f6274 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f64c8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007e672e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f64c8], eax }
	__asm { push 0xeac124 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f64c4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007e672e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_012f64c4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
